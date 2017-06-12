using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ItemScript : MonoBehaviour {

	public bool fadeOut = false;
	//float time = 0;
	//bool up = true;
	Color color;
	float a = 1;

	void Start () {
		if(GetComponent<Renderer>() != null) {

			GetComponent<Renderer>().sortingOrder = 2;
		}
	}
	// Use this for initialization
	public void Move () {
		//BezierMovement.instance.StartMove (gameObject);
		GetComponent<BezierMovement>().StartMove();
	}
	
	// Update is called once per frame
	void Update () {
		if (fadeOut) {
			a -= 0.05f;
			if (a < 0) {
				fadeOut = false;

//				BezierMovement.instance.bezierTime = 0;
//				BezierMovement.instance.isMoving = false;

				GetComponent<BezierMovement>().bezierTime = 0;
				GetComponent<BezierMovement> ().isMoving = false;

				if (GetComponent<Renderer> () != null) {
					transform.parent.gameObject.SetActive (false);

					Bag.instance.CloseBag ();

					if (Menu.instance.isTutorialOn)
						Tutorial.instance.ActivateTutorial ();
				}


				if (tag == "Icon") {
					for(int i = 0; i < transform.childCount; i++){
						transform.GetChild (i).gameObject.SetActive (false);
					}

				}

			}	

			if(GetComponent<Renderer>() != null) {
				color = GetComponent<Renderer>().material.color ;
				color.a = a;
				GetComponent<Renderer>().material.color  = color;
			} else if(GetComponent<Image>() != null){
				color = GetComponent<Image>().color ;
				color.a = a;
				GetComponent<Image>().color  = color;

				if(transform.GetChild(0).GetComponent<Image>() != null){
					Color childColor = transform.GetChild(0).GetComponent<Image>().color ;
					childColor.a = a;
					transform.GetChild(0).GetComponent<Image> ().color = childColor;
				}


			}
		}
	}
		
}
