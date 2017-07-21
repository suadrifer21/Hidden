using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PurchaseConfirmation : MonoBehaviour {

	public Text t;
	int iapButtonNum;
	public Transform iapButtonGroup;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void SetText (string s) {
		t.text = s;
	}

	public void SetIapButtonNum (int i) {
		iapButtonNum = i;
	}

	public void SetIapButtonGroup () {
		for(int i = 0; i < iapButtonGroup.childCount; i++){
			iapButtonGroup.GetChild (i).gameObject.SetActive (false);
		}

		iapButtonGroup.GetChild (iapButtonNum).gameObject.SetActive (true);
	}
}
