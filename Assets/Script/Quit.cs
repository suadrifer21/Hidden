using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Quit : MonoBehaviour {

	//public bool canQuit = true;
	public GameObject confirmationDialog;
	public GameObject blocker;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		//if (canQuit) {
			if (Input.GetKeyUp("escape")){
				confirmationDialog.SetActive (true);
				blocker.SetActive (true);
			}
		//}
	}

	public void QuitApp(){
		Application.Quit();
	}
}
