using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneryRotation : MonoBehaviour {

	//Quaternion maxRotation;
	//Quaternion minRotation;
	public float rotation;
	public float max;
	public float min;
	//public float speed;
	bool rotateUp = true;
	bool minusAngle = false;

	void Start () {
		//maxRotation = Quaternion.Euler(0, 0, max);
		//minRotation = Quaternion.Euler(0, 0, min);
	} 

	void Update () {
		//transform.rotation = Quaternion.Lerp (fromRotation, toRotation, Time.deltaTime * speed);
		if (rotateUp) {
			transform.Rotate (new Vector3 (0, 0, rotation) * Time.deltaTime);
			if (transform.rotation.eulerAngles.z < min) {
				minusAngle = false;
			}
			if (transform.rotation.eulerAngles.z > max && !minusAngle) {
				rotateUp = false;
			}
		} else {
			transform.Rotate (new Vector3 (0, 0, -rotation) * Time.deltaTime);
			if (transform.rotation.eulerAngles.z > max) {
				minusAngle = true;
			}
			if (transform.rotation.eulerAngles.z < min && minusAngle) {
				rotateUp = true;
			}
		}

	}
}
