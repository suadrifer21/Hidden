using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BezierMovement : MonoBehaviour {

//	public static BezierMovement instance;
//
//	Vector3 startPoint;
//	public float controlX;
//	public float controlY;
//	public Vector3 endPoint;
//	float curveX;
//	float curveY;
//	public float bezierTime = 0;
//	public Transform movingObject;
//	public GameObject endObject;
//	public bool isMoving = false;
//	public GameObject bag;
//	public float speed;
//	Vector3 newPos = new Vector3 (0, 0, 0);
//	//public GameObject uiImage;
//
//	public float y;
//
//	void Awake () {
//		if (!instance)
//			instance = this;	
//	}
//
//	// Use this for initialization
//	void Start () {
//		//endPoint = Camera.main.WorldToViewportPoint(bag.GetComponent<RectTransform>().position);
//		//endPoint = bag.transform.position;
//		//endPoint = endObject.position;
//	}
//	
//	// Update is called once per frame
//	void Update () {
//		if (isMoving){
//			
//			bezierTime = bezierTime + Time.deltaTime * speed;
//			//print (bezierTime);
//
//			if (bezierTime >= 1) {
//				
//
//				if(movingObject.transform.parent){
//					//movingObject.transform.parent.gameObject.SetActive(false);
//					movingObject.GetComponent<ItemScript>().fadeOut = true;
//				} else {
//					//movingObject.gameObject.SetActive (false);
//					if (movingObject.GetComponent<ParticleSystem> ()) {
//						ParticleSystem p = movingObject.GetComponent<ParticleSystem> ();
//						var e = p.emission;
//						e.enabled = false;
//					}
//				}
//
//				//bezierTime = 0;
//				ItemScript i = endObject.transform.parent.GetChild(0).gameObject.GetComponent<ItemScript> ();
//				if(i != null) {
//					//i.Move ();
//					HintParticleManager.instance.ActivateHint(i.transform.parent.gameObject);
//					bezierTime = 0;
//				}
//
//				//isMoving = false;
//
//			}	
//
//			curveX = (((1-bezierTime)*(1-bezierTime)) * startPoint.x) + (2 * bezierTime * (1 - bezierTime) * controlX) + ((bezierTime * bezierTime) * endPoint.x);
//			curveY = (((1-bezierTime)*(1-bezierTime)) * startPoint.y) + (2 * bezierTime * (1 - bezierTime) * controlY) + ((bezierTime * bezierTime) * endPoint.y);
//			newPos.Set (curveX, curveY, endPoint.z);
//			movingObject.position = newPos;
//
//		}
//
//	}
//
//	//public void StartMove (Transform t, Transform f = null) {
//	public void StartMove (GameObject t, GameObject f = null) {
//		if (f == null) {
//			endObject = bag;
//			endPoint = bag.transform.position;
//		} else {
//			endObject = f;
//			endPoint = f.transform.position;
//		}
//
//		startPoint = t.transform.position;
//		movingObject = t.transform;
//		float x = (endPoint.x - startPoint.x) / 2;
//		if (startPoint.x <= endPoint.x) {
//			controlX = x + startPoint.x;
//		} else {
//			controlX = startPoint.x - x;
//		}
//		float dis = (Camera.main.orthographicSize - startPoint.y); 
//		y = (-3.96f * dis) + 20; 
//		//print (y);
//		controlY = startPoint.y - ((endPoint.y - startPoint.y) / y);
//
//
//		//uiImage.GetComponent<RectTransform>().position = Camera.main.WorldToScreenPoint(startPoint);
//		//uiImage.transform.position = startPoint;
//		//uiImage.SetActive (true);
//		//t.gameObject.SetActive (false);
//		//movingObject = uiImage.transform;
//
//		isMoving = true;
//
//	}
//
//}






	Vector3 startPoint;
	public float controlX = 20;
	public float controlY = 20;
	public Vector3 endPoint;
	float curveX;
	float curveY;
	public float bezierTime = 0;
	public GameObject endObject;
	public bool isMoving = false;
	public GameObject bag;
	public float speed = 0.8f;
	Vector3 newPos = new Vector3 (0, 0, 0);
	//public GameObject uiImage;

	public float y = 11.8f;

	// Use this for initialization
	void Start () {
		
	}

	// Update is called once per frame
	void Update () {
		if (isMoving && (Menu.instance.isGameOn || Menu.instance.isTutorialOn)){

			bezierTime = bezierTime + Time.deltaTime * speed;

			if (bezierTime >= 1) {


				//if (transform.parent) {
				if(tag != "Particle"){
					//movingObject.transform.parent.gameObject.SetActive(false);
					GetComponent<ItemScript> ().fadeOut = true;
					Sound.instance.PlaySound (1);
				} else {
					//movingObject.gameObject.SetActive (false);
					if (GetComponent<ParticleSystem> ()) {
						ParticleSystem p = GetComponent<ParticleSystem> ();
						var e = p.emission;
						e.enabled = false;

						//HintParticleManager.instance.ActivateHint (endObject.transform.parent.gameObject);

						HintParticleManager.instance.ActivatePointer (endObject.transform);





						bezierTime = 0;
						transform.position = startPoint;
						isMoving = false;
					}
				}

				//bezierTime = 0;

//				ItemScript i = endObject.transform.parent.GetChild(0).gameObject.GetComponent<ItemScript> ();
//				if(i != null) {
//					//i.Move ();
//					HintParticleManager.instance.ActivateHint(i.transform.parent.gameObject);
//					bezierTime = 0;
//					isMoving = false;
//				}

				//isMoving = false;

			} else {

				curveX = (((1 - bezierTime) * (1 - bezierTime)) * startPoint.x) + (2 * bezierTime * (1 - bezierTime) * controlX) + ((bezierTime * bezierTime) * endPoint.x);
				curveY = (((1 - bezierTime) * (1 - bezierTime)) * startPoint.y) + (2 * bezierTime * (1 - bezierTime) * controlY) + ((bezierTime * bezierTime) * endPoint.y);
				newPos.Set (curveX, curveY, endPoint.z);
				transform.position = newPos;
			}

		}

	}

	public void StartMove (GameObject f = null) {
		if (f == null) {

			if (bag == null)
				return;

			endObject = bag;
			endPoint = bag.transform.position;
		} else {
			endObject = f;
			endPoint = f.transform.position;
		}


		startPoint = transform.position;
		float x = (endPoint.x - startPoint.x) / 2;
		if (startPoint.x <= endPoint.x) {
			controlX = x + startPoint.x;
		} else {
			controlX = startPoint.x - x;
		}
		float dis = (Camera.main.orthographicSize - startPoint.y); 
		y = (-3.96f * dis) + 20; 

		//print (y);
		controlY = startPoint.y - ((endPoint.y - startPoint.y) / y);


		//uiImage.GetComponent<RectTransform>().position = Camera.main.WorldToScreenPoint(startPoint);
		//uiImage.transform.position = startPoint;
		//uiImage.SetActive (true);
		//t.gameObject.SetActive (false);
		//movingObject = uiImage.transform;

		isMoving = true;

	}

}