using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LayerSorting : MonoBehaviour {

	// Use this for initialization
	void Start () {
		GetComponent<Image>().GetComponent<Renderer>().sortingOrder = 2;
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
