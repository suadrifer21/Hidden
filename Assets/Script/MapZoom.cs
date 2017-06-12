using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapZoom : MonoBehaviour {
	float curScale = 0f;
	public float maxScale = 1f;
	public float minScale = 0;
	bool zoom = true;
	public float scaleInc = 0.02f;
	Vector3 scale = new Vector3(1, 1, 1);
	// Use this for initialization
	void Start () {
		//curScale = new Vector3 (0, 0 ,0);
	}

	// Update is called once per frame
	void Update () {
		if (zoom) {
			curScale += scaleInc;
			if (curScale > maxScale) {
				curScale = maxScale;
				zoom = false;
				Sound.instance.PlayMusic (0);
			}
		}


		scale.Set(curScale, curScale, 0);
		transform.localScale = scale;
	}
}
