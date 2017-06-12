using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pointer : MonoBehaviour {

	//public float movSpeed;
	public bool up = true;
	float time = 0;

	void Start () {
	}

	void Update () {
		time += Time.deltaTime;
		if(time > 0.2f){
			up = !up;
			time = 0;
		}
		if (up) {
			transform.Translate (Vector3.up * 0.01f);		
		}
		else {
			transform.Translate (-Vector3.up * 0.01f);
		}
	}

}
