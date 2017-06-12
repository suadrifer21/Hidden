using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HintMovement : MonoBehaviour {
	//public static HintMovement instance;

	bool isMoving;
	public GameObject endObject;
	public float speed = 5f;
	Vector3 startPoint;


//	void Awake (){
//		if(!instance){
//			instance = this;
//		}	
//	}

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		if (isMoving && Menu.instance.isGameOn) {
			transform.position = Vector2.MoveTowards (transform.position, endObject.transform.position,  speed * Time.deltaTime);
			if (Vector2.Distance (transform.position, endObject.transform.position) < 0.01f) {
				ParticleSystem p = GetComponent<ParticleSystem> ();
				var e = p.emission;
				e.enabled = false;
				HintParticleManager.instance.ActivatePointer (endObject.transform);
				transform.position = startPoint;
				isMoving = false;
			}
		}
	}

	public void StartMove(GameObject e){
		endObject = e;
		startPoint = transform.position;
		isMoving = true;
	}
}
