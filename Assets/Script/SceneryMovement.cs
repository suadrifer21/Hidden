using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneryMovement : MonoBehaviour {

	public List<Vector3> movementPoint = new List<Vector3> ();
	int nextPoint = 0;
	public float movSpeed;
	public bool moveOnlyOnce = false;

	public GameObject title;

	void Awake () {
		//float x = transform.position.x;
		//float y = transform.position.y;
		for (int i = 0; i < movementPoint.Count; i++) {
			movementPoint [i] = new Vector3 (movementPoint[i].x, movementPoint[i].y, transform.position.z);
		}
		movementPoint.Add (transform.position);

//		print (transform.position+" "+ movementPoint[nextPoint]);
	}

	void Update () {
		if (moveOnlyOnce) {
			transform.position = Vector3.MoveTowards (transform.position, movementPoint[nextPoint], movSpeed * Time.deltaTime);

			if (transform.position == movementPoint [nextPoint] && GetComponent<RectTransform> () != null) {
				title.GetComponent<TitleAlpha> ().Activate ();
				this.enabled = false;
			}

		} else {
			transform.position = Vector3.MoveTowards (transform.position, movementPoint[nextPoint], movSpeed * Time.deltaTime);
			if (Vector3.Distance(transform.position, movementPoint[nextPoint]) < 0.01f) {
				nextPoint++;
				if (nextPoint >= movementPoint.Count)  nextPoint = 0;


			}
		}

	}
}
