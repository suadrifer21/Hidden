using UnityEngine;
using System.Collections;

public class LightScale : MonoBehaviour {
	float curScale = 1f;
	public float maxScale = 1.05f;
	public float minScale = 1f;
	bool upScale;
	public float scaleInc = 0.001f;
	Vector3 scale = new Vector3(1, 1, 1);
	// Use this for initialization
	void Start () {
		curScale = Random.Range (1f, maxScale);
	}
	
	// Update is called once per frame
	void Update () {
		if (upScale) {
			curScale += scaleInc;
			if (curScale > maxScale) {
				curScale = maxScale;
				upScale = false;
			}

		} else {
			curScale -= scaleInc;
			if (curScale < minScale) {
				curScale = minScale;
				upScale = true;
			}

		}

		scale.Set(curScale, curScale, 0);
		transform.localScale = scale;
	}
}
