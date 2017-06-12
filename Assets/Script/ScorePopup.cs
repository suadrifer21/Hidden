using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScorePopup : MonoBehaviour {

	float alpha = 1;
	Color color;
	public bool show = false;

	public float addedScore;
	//float time;
	// Use this for initialization
	void Start () {
		color = GetComponent<Text> ().color;
	}
	
	// Update is called once per frame
	void Update () {
		if (show) {
			if (alpha > 0) {
				transform.Translate (Vector3.up * 0.008f);
				alpha -= 0.02f;
				color.a = alpha;
				GetComponent<Text> ().color = color;

			} else {
				gameObject.SetActive (false);
				alpha = 1;
				show = false;
				Scoring.instance.AddScore (addedScore);
			}
		}
		
	}
}
