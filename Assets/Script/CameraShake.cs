using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraShake : MonoBehaviour {
	float curTime = 0;
	public float shakeTime;
	public float delay;
	bool shake = false;
	bool up = true;
	float time = 0;
	Vector3 shakeForce = new Vector3( 1, 1, 0);

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		curTime += Time.deltaTime;

		if(!shake){
			if (curTime > delay) {
				shake = true;
				curTime = 0;
			}

		} else {
			if (curTime < shakeTime) {
				time += Time.deltaTime;
				if(time > 0.1f){
					up = !up;
					time = 0;
				}
				if (up) {
					transform.Translate (shakeForce * 0.01f);		
				}
				else {
					transform.Translate (-shakeForce * 0.01f);
				}
			} else {
				shake = false;
				curTime = 0;
			}
		}
	}
}
