using UnityEditor;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Text;
using System.Xml; 
using System.Xml.Serialization; 

//------------------------------------------------------------------------------
// class definition
//------------------------------------------------------------------------------
public class HogImporter : Editor
{
	//--------------------------------------------------------------------------
	// static public methods
	//--------------------------------------------------------------------------
	[MenuItem("Assets/Create/Import HOG Scene...")]
	static public void ImportHogSceneMenuItem()
	{
		string inputFile = EditorUtility.OpenFilePanel("Choose Hidden-Object Game File to Import", Application.dataPath, "xml");
		if((inputFile != null) && (inputFile != "") && (inputFile.StartsWith(Application.dataPath)))
		{
			ImportHogScene(inputFile);
		}
	}

	//--------------------------------------------------------------------------
	// private methods
	//--------------------------------------------------------------------------
	static private void ImportHogScene(string assetPath)
	{
		// before we do anything else, try to deserialize the input file and be sure it's actually the right kind of file
		HogScene hogScene = (HogScene)DeserializeXml(assetPath, typeof(HogScene));
		if(hogScene == null)
		{
			Debug.Log("The file " + assetPath + " wasn't able to generate a HOG scene.");
			return;
		}
		
		// next, we're going to be creating scenes, allow the user to save if they want
		// see if user wants to save current scene, bail if they don't
		if(EditorApplication.SaveCurrentSceneIfUserWantsTo() == false)
		{
			return;
		}
		
		// cache some useful variables
		string baseFilename = Path.GetFileNameWithoutExtension(assetPath);
		string baseDirectory = "Assets/" + Path.GetDirectoryName(assetPath.Remove(0, Application.dataPath.Length + 1)) + "/";
		
		// if the scene already exists, delete it
		string scenePath = baseDirectory + baseFilename + " Scene.unity";
		if(File.Exists(scenePath) == true)
		{
			File.Delete(scenePath);
			AssetDatabase.Refresh();
		}
		// now create a new scene
		EditorApplication.NewScene();

		Debug.Log (hogScene.layers.Length);

		// load up all the textures used and put them into a list
		List<Texture2D> textureList = new List<Texture2D>();
		for(int layerIndex = 0; layerIndex < hogScene.layers.Length; layerIndex++)
		{
			Debug.Log (hogScene.layers[layerIndex].images.Length);

			for(int imageIndex = 0; imageIndex < hogScene.layers[layerIndex].images.Length; imageIndex++)
			{
				// we need to fixup all images that were exported from PS
				string texturePathName = baseDirectory + hogScene.layers[layerIndex].images[imageIndex].name;
				Texture2D inputTexture = (Texture2D)AssetDatabase.LoadAssetAtPath(texturePathName, typeof(Texture2D));
				// modify the importer settings
				TextureImporter textureImporter = AssetImporter.GetAtPath(texturePathName) as TextureImporter;


				if (textureImporter) {
					Debug.Log (layerIndex+" "+texturePathName);
				} else
					Debug.Log (layerIndex+" "+texturePathName);


				textureImporter.mipmapEnabled = false;
				textureImporter.isReadable = true;
				textureImporter.npotScale = TextureImporterNPOTScale.None;
				textureImporter.wrapMode = TextureWrapMode.Clamp;
				textureImporter.filterMode = FilterMode.Bilinear;
				// joachim mentioned internally Unity calls the next line before importing
				AssetDatabase.WriteImportSettingsIfDirty (texturePathName);
				AssetDatabase.ImportAsset(texturePathName);
				
				// does it go into our atlas array?
				if((hogScene.layers[layerIndex].images[imageIndex].type == HogScene.ImageType.Whole)
					|| (hogScene.layers[layerIndex].images[imageIndex].type == HogScene.ImageType.Obscured)
					|| (hogScene.layers[layerIndex].images[imageIndex].type == HogScene.ImageType.Shadow))
				{
					textureList.Add(inputTexture);
				}
			}
		}
		
		// create material
		string materialPath = baseDirectory + baseFilename + " Material.mat";
		// remove previous one if it exists
		if(File.Exists(materialPath) == true)
		{
			File.Delete(materialPath);
			AssetDatabase.Refresh();
		}
		// make a material and link it to atlas, save that too
		Material material = new Material(Shader.Find("Transparent/Diffuse"));
		AssetDatabase.CreateAsset(material, materialPath);
		AssetDatabase.Refresh();
		// load it back
		material = (Material)AssetDatabase.LoadAssetAtPath(materialPath, typeof(Material));

		// make a new atlas texture
//		Texture2D atlas = new Texture2D(2048, 2048);
		Texture2D atlas = new Texture2D(4096, 4096);
		// to make an atlas we need an array instead of a list
		Texture2D[] textureArray = textureList.ToArray();
		// pack it with all the textures we have
//		Rect[] atlasRects = atlas.PackTextures(textureArray, 1, 2048);
		Rect[] atlasRects = atlas.PackTextures(textureArray, 1, 4096);
		// save it to disk
		byte[] atlasPng = atlas.EncodeToPNG();
		string atlasPath = baseDirectory + baseFilename + " Atlas.png";
		if(File.Exists(atlasPath) == true)
		{
			File.Delete(atlasPath);
			AssetDatabase.Refresh();
		}
		File.WriteAllBytes(atlasPath, atlasPng);
		AssetDatabase.Refresh();
		TextureImporter atlasTextureImporter = AssetImporter.GetAtPath(atlasPath) as TextureImporter;
		atlasTextureImporter.mipmapEnabled = false;
//		atlasTextureImporter.maxTextureSize = 2048;
		atlasTextureImporter.maxTextureSize = 4096;
		atlasTextureImporter.wrapMode = TextureWrapMode.Clamp;


		atlasTextureImporter.filterMode = FilterMode.Bilinear;
		// joachim mentioned internally Unity calls the next line before importing
		AssetDatabase.WriteImportSettingsIfDirty(atlasPath);
		// re-import it back into Unity
		AssetDatabase.ImportAsset(atlasPath);
		// grab a reference to it
		atlas = (Texture2D)AssetDatabase.LoadAssetAtPath(atlasPath, typeof(Texture2D));
		// be sure atlas is linked
		material.mainTexture = atlas;
		
		// create meshes for each image
		Vector3 position = Vector3.zero;
		int textureIndex = 0;
		int totalItemCount = 0;
		for(int layerIndex = 0; layerIndex < hogScene.layers.Length; layerIndex++)
		{
			// keep track of item count
			if(hogScene.layers[layerIndex].type == HogScene.LayerType.Custom)
			{
				continue;
			}
			totalItemCount++;
			// create a root game object for the images
			GameObject layerGo= new GameObject(hogScene.layers[layerIndex].name);
			position = Vector3.zero;
			position.z = -layerIndex;
			layerGo.transform.position = position;
			ItemController itemController = (ItemController)layerGo.AddComponent<ItemController>();
			itemController.AddLayer(hogScene.layers[layerIndex].type);
			HogScene.ImageType hitTestImageType = (HogScene.ImageType)((int)HogScene.ImageType.Whole + 1);
			
			for(int imageIndex = 0; imageIndex < hogScene.layers[layerIndex].images.Length; imageIndex++)
			{
				// check hit tests first before image index possibly changes
				if(hogScene.layers[layerIndex].images[imageIndex].type < hitTestImageType)
				{
					Rect hitTestRect = new Rect();
					Texture2D hitTestTexture = null;
					if(hogScene.layers[layerIndex].images[imageIndex].type == HogScene.ImageType.Hotspot)
					{
						string hitTestTexturePathName = baseDirectory + hogScene.layers[layerIndex].images[imageIndex].name;
						hitTestTexture = (Texture2D)AssetDatabase.LoadAssetAtPath(hitTestTexturePathName, typeof(Texture2D));
					}
					else
					{
						hitTestTexture = textureArray[textureIndex];
					}

					//edited

					hitTestRect.x = (hogScene.layers[layerIndex].images[imageIndex].x - (hitTestTexture.width/2)) / 100;
					hitTestRect.y = (hogScene.layers[layerIndex].images[imageIndex].y - (hitTestTexture.height/2)) / 100;

					hitTestRect.width = (float) hitTestTexture.width / 100;
					hitTestRect.height = (float) hitTestTexture.height / 100;


					HitTestPixelData hitTest = ExtractHitTestData (hitTestTexture);


					itemController.AddHitTestData(hitTest.hitTestData, hitTestTexture.width, hitTestRect, hitTest.pixels);

				}
				
				// add visible images to the item controller
				// this must match the test used to determine atlas textures otherwise the index will be wrong
				if((hogScene.layers[layerIndex].images[imageIndex].type == HogScene.ImageType.Whole)
					|| (hogScene.layers[layerIndex].images[imageIndex].type == HogScene.ImageType.Obscured)
					|| (hogScene.layers[layerIndex].images[imageIndex].type == HogScene.ImageType.Shadow))
				{
					// setup the game object
					GameObject imageGo = new GameObject(Path.GetFileNameWithoutExtension(hogScene.layers[layerIndex].images[imageIndex].name));
					ConfigureGo(imageGo, textureArray[textureIndex], material, atlasRects[textureIndex], baseDirectory + textureArray[textureIndex].name + " Mesh.asset");
					position.x = hogScene.layers[layerIndex].images[imageIndex].x / 100f;
					position.y = hogScene.layers[layerIndex].images[imageIndex].y / 100f;
					imageGo.transform.parent = layerGo.transform;
					imageGo.transform.position = position;
					itemController.AddImage(hogScene.layers[layerIndex].images[imageIndex].type, imageGo);
					textureIndex++;
				}
			}
		}

		// setup our game camera
		Camera.main.gameObject.AddComponent<HOGController>();
		SearchListController searchListController = (SearchListController)Camera.main.gameObject.AddComponent<SearchListController>();
		searchListController.SetTotalItemCount(totalItemCount);
		position = Vector3.zero;
		position.z = -hogScene.layers.Length;
		Camera.main.transform.position = position;
		Camera.main.orthographic = true;
//		Camera.main.orthographicSize = 3;//(768.0f/2.0f);
		Camera.main.orthographicSize = 3;
		Camera.main.nearClipPlane = 0;
		Camera.main.farClipPlane = hogScene.layers.Length + 2;
		RenderSettings.ambientLight = Color.white;

		atlas = null;
		atlasRects = null;
		textureList.Clear();
		textureList = null;
		textureArray = null;

		// one final save and refresh
		AssetDatabase.Refresh();
		EditorApplication.SaveScene(scenePath);
	}
	
	static private object DeserializeXml(string filePath, System.Type type)
	{
		object instance = null;
		StreamReader xmlFile = File.OpenText(filePath);
		if(xmlFile != null)
		{
			string xml = xmlFile.ReadToEnd(); 
			if((xml != null) && (xml.ToString() != ""))
			{ 
				XmlSerializer xs = new XmlSerializer(type); 
				UTF8Encoding encoding = new UTF8Encoding(); 
				byte[] byteArray = encoding.GetBytes(xml); 
				MemoryStream memoryStream = new MemoryStream(byteArray); 
				XmlTextWriter xmlTextWriter = new XmlTextWriter(memoryStream, Encoding.UTF8);
				if(xmlTextWriter != null)
				{
					instance = xs.Deserialize(memoryStream);
				}
			}
		}
		xmlFile.Close();
		return instance;
	}

	static private void ConfigureGo(GameObject go, Texture2D texture, Material material, Rect uvRect, string meshPath)
	{
		// create meshFilter if new
		MeshFilter meshFilter = (MeshFilter)go.GetComponent(typeof(MeshFilter));
		if(meshFilter == null)
		{
			meshFilter = (MeshFilter)go.AddComponent(typeof(MeshFilter));
		}

		// create mesh if new
		Mesh mesh = meshFilter.sharedMesh;
		if(mesh == null)
		{
			mesh = new Mesh();
		}
		mesh.Clear();
		
		// setup rendering
		MeshRenderer meshRenderer = (MeshRenderer)go.GetComponent(typeof(MeshRenderer));
		if(meshRenderer == null)
		{
			meshRenderer = (MeshRenderer)go.AddComponent(typeof(MeshRenderer));
		}
		meshRenderer.GetComponent<Renderer>().material = material;

		// create the mesh geometry
		// Unity winding order is counter-clockwise when viewed from behind and facing forward (away)
		// Unity winding order is clockwise when viewed from behind and facing behind
		// 1---2
		// |  /|
		// | / |
		// 0---3
		Vector3[] newVertices;
		int[] newTriangles;
		Vector2[] uvs;
		
		float hExtent = texture.width * 0.5f / 100f;
		float vExtent = texture.height * 0.5f / 100f;
		
		newVertices = new Vector3[4];
		newVertices[0] = new Vector3(-hExtent, -vExtent, 0);
		newVertices[1] = new Vector3(-hExtent, vExtent, 0);
		newVertices[2] = new Vector3(hExtent, vExtent, 0);
		newVertices[3] = new Vector3(hExtent, -vExtent, 0);
		
		newTriangles = new int[] { 0, 1, 2, 0, 2, 3 };
		uvs = new Vector2[4];
		uvs[0] = new Vector2(uvRect.x , uvRect.y);
		uvs[1] = new Vector2(uvRect.x , uvRect.y + uvRect.height);
		uvs[2] = new Vector2(uvRect.x + uvRect.width, uvRect.y + uvRect.height);
		uvs[3] = new Vector2(uvRect.x + uvRect.width, uvRect.y);

		Color[] vertColors = new Color[4];
		vertColors[0] = Color.white;
		vertColors[1] = Color.white;
		vertColors[2] = Color.white;
		vertColors[3] = Color.white;
		
		// update the mesh
		mesh.vertices = newVertices; 
		mesh.colors = vertColors;
		mesh.uv = uvs; 
		mesh.triangles = newTriangles;
		// generate some some normals for the mesh
		mesh.normals = new Vector3[4];
		mesh.RecalculateNormals();
		
		if(File.Exists(meshPath) == true)
		{
			File.Delete(meshPath);
			AssetDatabase.Refresh();
		}
		AssetDatabase.CreateAsset(mesh, meshPath);
		AssetDatabase.Refresh();
		meshFilter.sharedMesh = mesh;

		// add collider
		go.AddComponent(typeof(MeshCollider));
	}
	
	static private HitTestPixelData ExtractHitTestData(Texture2D texture)
	{
		HitTestPixelData hitTest = new HitTestPixelData ();
		hitTest.hitTestData = new bool[texture.height * texture.width];
		Color32[] pixels = texture.GetPixels32(0);

		//int x = 0;
		//int y = 0;

		for(int i = 0; i < hitTest.hitTestData.Length; i++)
		{
			hitTest.hitTestData[i] = (pixels[i].a > 10);
			//ADD CODE HERE
//			if(hitTest.hitTestData[i]) {
//				hitTest.pixels.Add (new Vector2 (x, y));
//			}
//			if(++x >= texture.width){
//				x = 0;
//				y++;
//			}

		}

//
//		float m = 0;
//		m = 0.985f * hitTest.pixels.Count;
//		int max = (int) m;
////		for (int i = 0; i < 5; i++) {
////			int r = UnityEngine.Random.Range (0, 9);
////			Debug.Log (r);
////		}
//		for (int i = 0; i < max; i++) {
//			int r = UnityEngine.Random.Range (0, hitTest.pixels.Count);
//			hitTest.pixels.RemoveAt (r);
//		}


		//return hitTestData;
		return hitTest;
	}

}


[Serializable]
public class HitTestPixelData {
	public bool[] hitTestData;
	public List<Vector2> pixels = new List<Vector2>();

}