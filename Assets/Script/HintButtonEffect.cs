using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HintButtonEffect : MonoBehaviour {

	public GameObject hintedObject;
	public Button hintButton;
	//int count = 0;

	void Start () {
		transform.position = hintButton.transform.position;
		ParticleSystem p = GetComponent<ParticleSystem> ();
		var e = p.emission;
		e.enabled = false;
	}
	// Use this for initialization
	public void Move () {
//		if(Menu.instance.isGameOn && !BezierMovement.instance.isMoving) {
		if(Menu.instance.isGameOn) {
			hintButton.enabled = false;
			transform.position = hintButton.transform.position;
//			gameObject.SetActive (true);
//
//			ParticleSystem p = GetComponent<ParticleSystem> ();
//			var e = p.emission;
//			e.enabled = true;


			//count = 0;
			//GetComponent<BezierMovement>().StartMove(GetHintedObject());



			if (SearchListController.searchListController.itemNotFound.Count > 0) {
				int n = 0;
				if(SearchListController.searchListController.itemNotFound.Count > 8){
					n = Random.Range (0, 7);
				} else if(SearchListController.searchListController.itemNotFound.Count > 1){
					n = Random.Range (0, SearchListController.searchListController.itemNotFound.Count);
				}
				Transform t = SearchListController.searchListController.itemNotFound [n].transform.GetChild (1);
				gameObject.SetActive (true);
				ParticleSystem p = GetComponent<ParticleSystem> ();
				var e = p.emission;
				e.enabled = true;




				///GetComponent<BezierMovement>().StartMove(t.gameObject);
			
			
			
				GetComponent<HintMovement>().StartMove(t.gameObject);
			
			
			}
		}
	}

	// Update is called once per frame
	void Update () {
	}

//	GameObject GetHintedObject () {
//		if(count > SearchListController.searchListController.searchItemControllers.Length){
//			return null;
//		}
//
//		count++;
//
//		int n = Random.Range (0, SearchListController.searchListController.searchItemControllers.Length);
//		Transform t = SearchListController.searchListController.searchItemControllers [n].transform.GetChild (1);
//		if (t.gameObject.activeSelf) {
//			hintedObject = t.gameObject;
//			return hintedObject;
//		} else
//			return GetHintedObject ();
//
//	}

}
