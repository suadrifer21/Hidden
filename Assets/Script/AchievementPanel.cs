using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AchievementPanel : MonoBehaviour {
	bool zoom = false;
	float endAlpha = 0;
	public float alphaRate;
	//float alpha;
	public Transform iconParent;
	public GameObject achiUi;
	public string title;
	public Image icon;
	GameObject iconRef;


	public GameObject screenButton;

	void Start () {
		//curAlpha = GetComponent<CanvasGroup> ().alpha;
	}

	// Update is called once per frame
	void Update () {
		if (zoom) {
			gameObject.GetComponent<CanvasGroup> ().alpha -= alphaRate;
			if(gameObject.GetComponent<CanvasGroup> ().alpha <= endAlpha) {
				gameObject.SetActive (false);
				Menu.instance.isGameOn = true;
				zoom = false;
				//print (iconParent.transform.childCount);
				//
			
			}
		}

//		if(gameObject.activeSelf){
//			if ((Input.GetMouseButtonDown (0) == true)) {
//				FadeOut ();
//			}
//		}
	}

	public void Activate() {
		Menu.instance.isGameOn = false;
		gameObject.GetComponent<CanvasGroup> ().alpha = 1;
		zoom = false;

		gameObject.SetActive (true);

		screenButton.SetActive (true);

		for(int i= 0; i < iconParent.childCount; i++){
			if(title.Equals(iconParent.GetChild(i).name)){
				iconRef = iconParent.GetChild (i).gameObject;
				iconRef.gameObject.SetActive(true);
				icon.sprite = iconRef.transform.GetChild(0).GetChild(0).GetComponent<Image> ().sprite;
				iconRef.transform.position = icon.transform.position;
				break;
			}
		}

	}

	public void FadeOut() {
		iconRef.GetComponent<BezierMovement> ().StartMove (achiUi);
		zoom = true;
		screenButton.SetActive (false);
//		iconParent.transform.GetChild (0).gameObject.SetActive (true);
//		iconParent.transform.GetChild (0).GetComponent<ItemScript> ().MoveTo (achiUi);
	}

//	public GameObject achiText;
//	public GameObject descPanel;
//	//public GameObject achiImage;
//	public GameObject achiMenu;
//
//	bool zoom = false;
//	float endScale;
//	public float zoomRate;
//	float curScale;
//	bool zIn;
//	Color color;
//
//	// Use this for initialization
//	void Start () {
//		TextIn ();
//	}
//	
//	// Update is called once per frame
//	void Update () {
//		if (zoom) {
//			achiText.GetComponent<RectTransform> ().localScale = new Vector3 (curScale, curScale, 0);
//			color.a = curScale;
//			achiText.GetComponent<Text> ().color = color;
//			if (zIn) {
//				curScale += zoomRate;
//				if(curScale > endScale) {
//					zoom = false;
//					descPanel.SetActive (true);
//				}
//			} else {
//				curScale -= zoomRate;
//				if(curScale < endScale) {
//					zoom = false;
//
//					descPanel.SetActive (false);
//				}
//			}
//		}
//	}
//
//	public void TextIn () {
//		//startScale = 0f;
//		endScale = 1f;
//		curScale = 0f;
//		color = achiText.GetComponent<Text> ().color;
//		zIn = true;
//		zoom = true;
//	}
//
//	public void TextOut () {
//		//startScale = 0f;
//		endScale = 0f;
//		curScale = 1f;
//		color = achiText.GetComponent<Text> ().color;
//		zIn = false;
//		zoom = true;
//		//MoveImage ();
//	}
//
//	void MoveImage () {
//		//BezierMovement.instance.StartMove (achiImage, achiMenu);
//	}
}
