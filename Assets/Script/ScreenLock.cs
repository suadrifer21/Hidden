using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScreenLock : MonoBehaviour {

	public List<GameObject> activeSceneByDefault = new List<GameObject>();

	public List<GameObject> sceneList = new List<GameObject>();
	// Use this for initialization
	void Start () {
		for (int i = 0; i < sceneList.Count; i++) {
			PlayerPrefs.SetInt (activeSceneByDefault [i].name, 1);
		}

		foreach(GameObject g in GameObject.FindGameObjectsWithTag("scene")){
			sceneList.Add (g);
		}

		for(int i = 0; i < sceneList.Count; i++){
			int b = PlayerPrefs.GetInt (sceneList [i].name, 0);
			if (b == 1) {
				sceneList [i].transform.GetChild (0).gameObject.SetActive (false);
			} else {
				sceneList [i].transform.GetChild (0).gameObject.SetActive (true);
			}
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
