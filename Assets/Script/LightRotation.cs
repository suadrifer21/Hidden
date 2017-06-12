using UnityEngine;
using System.Collections;

public class LightRotation : MonoBehaviour {

	//Quaternion maxRotation;
	//Quaternion minRotation;
	public float rotation;
	public float max;
	public float min;
	//public float speed;
	bool rotateUp = true;
	bool minusAngle = false;

	void Start () {
		//maxRotation = Quaternion.Euler(0, max, 0);
		//minRotation = Quaternion.Euler(0, min, 0);
	} 

	void Update () {
		//transform.rotation = Quaternion.Lerp (fromRotation, toRotation, Time.deltaTime * speed);
		if (rotateUp) {
			transform.Rotate (new Vector3 (0, rotation, 0) * Time.deltaTime);
			if (transform.rotation.eulerAngles.y < min) {
				minusAngle = false;
			}
			if (transform.rotation.eulerAngles.y > max && !minusAngle) {
				rotateUp = false;
			}
		} else {
			transform.Rotate (new Vector3 (0, -rotation, 0) * Time.deltaTime);
			if (transform.rotation.eulerAngles.y > max) {
				minusAngle = true;
			}
			if (transform.rotation.eulerAngles.y < min && minusAngle) {
				rotateUp = true;
			}
		}

	}
}
