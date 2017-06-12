using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TimerPopup : MonoBehaviour {

	float alpha = 1;
	Color color;
	public bool show = false;

//	public float addedTime = 5f ;

	public bool plus = true;

	public float extra;

	//float time;
	// Use this for initialization
	void Start () {
		color = GetComponent<Text> ().color;
	}

	// Update is called once per frame
	void Update () {
		if (show) {
			if (alpha > 0) {
				//transform.Translate (Vector3.up * 0.012f);
				alpha -= 0.02f;
				color.a = alpha;
				GetComponent<Text> ().color = color;

				if(plus)
//					GetComponent<Text> ().text = "+  "+addedTime.ToString ();
					GetComponent<Text> ().text = "+  "+extra.ToString ();
				else
					GetComponent<Text> ().text = "-  "+extra.ToString ();

			} else {
				gameObject.SetActive (false);
				alpha = 1;
				show = false;
//				if(plus)
//					Timer.instance.AddTime (addedTime);
				//else
					
				//add time
			}
		}

	}
}
