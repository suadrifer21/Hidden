using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RadialSlider : MonoBehaviour {

	public Image circularSilder;            //Drag the circular image i.e Slider in our case
	float time;                      //In how much time the progress bar will fill/empty

	void Start() {
		circularSilder = GetComponent<Image> ();
	}
	void Update () {
//		print (circularSilder.fillAmount);
//		circularSilder.fillAmount += Time.deltaTime / time;         
	}

	public void StartCooldown(float t){
		time = t;
		circularSilder.fillAmount += Time.deltaTime / time;   

	}
}
