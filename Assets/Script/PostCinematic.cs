using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PostCinematic : MonoBehaviour {

	public float delay = 0;
	// Use this for initialization
	void Start () {
		Invoke ("Activate", delay);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void Activate(){
		for (int i = 0; i < transform.childCount; i++) {
			transform.GetChild(i).gameObject.SetActive (true);
		}
	}
}
