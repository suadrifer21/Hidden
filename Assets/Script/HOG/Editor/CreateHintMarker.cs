using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

public class CreateHintMarker {

	[MenuItem("Assets/Create Hint Marker")]
	static void CreateMarker(){
		foreach(GameObject g in GameObject.FindGameObjectsWithTag("Hint")){
			Object.DestroyImmediate (g);
		}

//		foreach (ItemController ic in GameObject.FindObjectsOfType<ItemController> ()) {
//			if (ic.layerType == HogScene.LayerType.Item) {
//				GameObject g = new GameObject ();
//				g.transform.SetParent (ic.transform);
//				g.tag = "Hint";
//				g.name = "Hint";
//				g.transform.position = ic.transform.GetChild (1).transform.position;
//
//			}
//		}

		foreach (ItemController ic in GameObject.FindObjectsOfType<ItemController> ()) {
			if (ic.layerType == HogScene.LayerType.Item) {
				Sprite s = Resources.Load<Sprite> ("Hand");

				GameObject g = new GameObject ();
				g.transform.SetParent (ic.transform);
				g.tag = "Hint";
				g.name = "Hint";

				float x = ic.worldSpaceRect.xMax;
				//float y = ic.worldSpaceRect.yMax;
				float y = ic.worldSpaceRect.yMin;

				g.transform.localPosition = new Vector3 (x, y, 0);
				Debug.Log (g.transform.position);
				g.AddComponent<SpriteRenderer> ();
				g.GetComponent<SpriteRenderer> ().sprite = s;
				//g.transform.localScale = new Vector3 (0.2f , 0.2f , 0);


			}
		}
	}


}
