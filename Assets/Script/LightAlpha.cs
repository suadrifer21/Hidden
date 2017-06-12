using UnityEngine;
using System.Collections;

public class LightAlpha : MonoBehaviour {

	public float alpha = 1f;
	bool upAlpha;
	public float alphaInc = 0.01f;
	public float min;
	public float max = 1f;
	//public float startAlpha = 1f;
	Color color;


	// Use this for initialization
	void Awake () {
//		Color color = GetComponent<Renderer>().material.color ;
//		alpha = startAlpha;
//		color.a = alpha;
//		GetComponent<Renderer>().material.color  = color;
	}
	
	// Update is called once per frame
	void Update () {
		if (upAlpha) {
			alpha += alphaInc;
			if (alpha > max) {
				alpha = max;
				upAlpha = false;
			}

		} else {
			alpha -= alphaInc;
			if (alpha < min) {
				alpha = min;
				upAlpha = true;
			}

		}
		color = GetComponent<Renderer>().material.color ;
		color.a = alpha;
		GetComponent<Renderer>().material.color  = color;


	
	}
}
