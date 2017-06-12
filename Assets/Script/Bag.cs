using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bag : MonoBehaviour {

	public static Bag instance;
	Animator anim;
	// Use this for initialization

	void Awake(){
		if (!instance) {
			instance = this;
		}

	}
	void Start () {
		anim = GetComponent<Animator> ();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void OpenBag(){
		anim.SetBool ("open", true);
	}


	public void CloseBag(){
		anim.SetBool ("open", false);
	}
}
