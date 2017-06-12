using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Timer : MonoBehaviour {
	public static Timer instance;
	//float startTime = 60;
	public Text timePanel;
	public float curTime = 60;

	public GameObject gameOverPanel;

	public Transform addedText;



	public float addedTime = 3;


	void Awake () {
		if (!instance)
			instance = this;
	}
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (Menu.instance.isGameOn) {
			if (curTime > 0) {
				curTime -= Time.deltaTime;
				timePanel.text = curTime.ToString ("F0");
			}
		}

		if (curTime <= 0) {
			Menu.instance.isGameOn = false;
			gameOverPanel.SetActive (true);
			gameOverPanel.transform.GetChild (4).GetComponent<Text> ().text = Scoring.instance.totalScore.ToString ();
		}
	}

//	public void AddTime (float addedTime) {
	public void AddTime () {
		curTime += addedTime;
		ShowAddedTime ();
	}

	public void ShowAddedTime () {
		addedText.gameObject.SetActive (true);
		addedText.GetComponent<TimerPopup> ().extra = addedTime;
		addedText.GetComponent<TimerPopup> ().plus = true;
		addedText.GetComponent<TimerPopup> ().show = true;
	}

	public void ShowSubstractedTime () {
		addedText.gameObject.SetActive (true);
		addedText.GetComponent<TimerPopup> ().extra = 1;
		addedText.GetComponent<TimerPopup> ().plus = false;
		addedText.GetComponent<TimerPopup> ().show = true;
	}

	public void SubstractTime () {
		curTime -= 1;
		ShowSubstractedTime ();

	}
}
