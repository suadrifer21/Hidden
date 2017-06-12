using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class BundleManager : MonoBehaviour {
	public string versionURL;
	public string assetListURL;

//	public string assetListURLOSX;
//	public string assetListURLAndroid;
//	public string assetListURLiOS;

	string assetBundleURL;
	public int version = 5;
	AssetBundle bundle;

	public LevelData levelData;


	void Start(){
//		#if UNITY_EDITOR
//		assetListURL = assetListURLOSX;
//		#endif
//
//		#if UNITY_ANDROID
//		assetListURL = assetListURLAndroid;
//		#endif
//
//		#if UNITY_IOS
//		assetListURL = assetListURLiOS;
//		#endif

		//StartCoroutine (DownloadList());
		StartCoroutine(GetVersion());
	}

	IEnumerator GetVersion(){
		WWW w = new WWW (versionURL);
		yield return w;
		if (w.error == null) {
			string s = w.text;
			version = int.Parse (s);
			StartCoroutine (DownloadList());
		}
	}

	IEnumerator DownloadList () {

		if (Caching.IsVersionCached (assetListURL, version))
			print ("cached");
		else
			print ("downloading first");

		// Wait for the Caching system to be ready
		while (!Caching.ready)
			yield return null;

		// Load the AssetBundle file from Cache if it exists with the same version or download and store it in the cache
		using(WWW www = WWW.LoadFromCacheOrDownload(assetListURL, version)){
			yield return www;
			if (www.error != null)
				throw new Exception ("WWW download had an error: " + www.error);
			bundle = www.assetBundle;
			/*
			if (assetName == "")
				Instantiate(bundle.mainAsset);
			else
				Instantiate(bundle.LoadAsset(assetName));
			
			// Unload the AssetBundles compressed contents to conserve memory
			bundle.Unload(false);
			*/
			if (Caching.ready) 
				print ("DL complete");



		} // memory is freed from the web stream (www.Dispose() gets called implicitly)

		var asset = bundle.LoadAsset<TextAsset> ("Level");
		levelData = JsonUtility.FromJson<LevelData>(asset.text);

	}

	public GameObject askToDownload;
	public Slider downloadProgress;

	public void CheckScene(int i){
		assetBundleURL = levelData.level [i].path;
		version = levelData.level [i].version;
		if (Caching.IsVersionCached (levelData.level [i].path, version)) {
			print ("dah di donlot");; 
			//DownloadScene ();
			//SceneManager.LoadScene ("SansgitVil");
			StartCoroutine (DownloadAndCache());
		}
		else {
			askToDownload.SetActive (true);

		}
			
	}

	public void DownloadScene(){
		askToDownload.SetActive (false);
		downloadProgress.transform.parent.gameObject.SetActive (true);
		StartCoroutine (DownloadAndCache());
	}

	IEnumerator DownloadAndCache () {


		WWW download = WWW.LoadFromCacheOrDownload(assetBundleURL, version );
		while( !download.isDone ) {
			downloadProgress.value = download.progress;
			yield return null;
		}
	
		if (Caching.ready) {
			print ("DL complete");
			AssetBundle bundle = download.assetBundle;
			//bundle.LoadAllAssets ();
			//Application.LoadLevel ("SansgitVil");
			//downloadProgress.value = 1;

			string[] scenePath = bundle.GetAllScenePaths ();
			SceneManager.LoadScene (scenePath[0]);
		}



	}

//	IEnumerator DownloadAndCache () {
//
//		// Wait for the Caching system to be ready
//		while (!Caching.ready)
//			yield return null;
//
//		// Load the AssetBundle file from Cache if it exists with the same version or download and store it in the cache
//		using(WWW www = WWW.LoadFromCacheOrDownload(assetBundleURL, version)){
//			
//			yield return www;
//
//			if (www.error != null)
//				throw new Exception ("WWW download had an error: " + www.error);
//			AssetBundle bundle = www.assetBundle;
//			/*
//			if (assetName == "")
//				Instantiate(bundle.mainAsset);
//			else
//				Instantiate(bundle.LoadAsset(assetName));
//			
//			// Unload the AssetBundles compressed contents to conserve memory
//			bundle.Unload(false);
//			*/
//
//
//			if (Caching.ready) 
//				print ("DL complete");
//		} // memory is freed from the web stream (www.Dispose() gets called implicitly)
//
//		bundle.LoadAllAssets();
//		Application.LoadLevel ("SansgitVil");
//	}

}

[System.Serializable]
public class LevelData{
	public List<Level> level;
}

[System.Serializable]
public class Level {
	public string name;
	public string thumbnail;
	public string path;
	public int version;
}
