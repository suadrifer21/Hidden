using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Back : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetKeyUp("escape")){
			//ChangeScene.instance.Return();
			ChangeScene.instance.GotoSelectedScene("Main Menu 3");
		}
	}
}
