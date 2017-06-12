using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TitleAlpha : MonoBehaviour {
	bool zoom = false;
	float alpha = 0f;
	public float alphaInc = 0.01f;
	public float min;
	public float max = 1f;
	Color color;

	//public GameObject nextButton;
	public GameObject continueText;

	public GameObject clickToNext;

//	public GameObject clicker;

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		if (zoom) {
			alpha += alphaInc;
			if (alpha > max) {
				alpha = max;
				zoom = false;
				//nextButton.SetActive (true);
				continueText.SetActive(true);
				clickToNext.SetActive (true);
//				clicker.SetActive (true);
//				print("a");
//				if ((Input.GetMouseButtonDown (0)) == true) {
//					print("b");
//					//Camera.main.GetComponent<ChangeScene> ().GotoScene ("Sangsit Village Scene");
//					ChangeScene.instance.GotoScene (true);
//
//				}
			}

		}
//		color = GetComponent<Image>().color ;
//		color.a = alpha;
//		GetComponent<Image>().color = color;
		GetComponent<CanvasGroup>().alpha = alpha;
	}

	public void Activate(){
		StartCoroutine (Wait());	
	}

	IEnumerator Wait(){
		yield return new WaitForSeconds (1);
		zoom = true;
	}
}
