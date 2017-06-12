using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HintParticleManager : MonoBehaviour {

	public static HintParticleManager instance;

	public GameObject hintedObject;
	//public Slider hintSlider;
	//public Text hintInactiveText;
	public Button hintButton;

	public GameObject getMoreHintButton;

//	public float time = 10;
//	float curTime;
//
//	bool hintActive = false;

	public bool sparkleActive = false;

	Color color = new Color();

	public GameObject pointer;
	public bool isPointing = false;

	public int hintRemaining = 3;
	public Text hintRemainingText;

	public GameObject confirmationDialog;

	void Awake () {
		if (!instance)
			instance = this;	
	}

	// Use this for initialization
	void Start () {
//		curTime = time;
		color.a = 0;
		color.r = 1;
		color.g = 1;
		color.b = 1;


		hintRemaining = SaveDataManager.instance.currentLevelHint;


		if (hintRemaining < 1) {
			hintButton.gameObject.SetActive (false);
			getMoreHintButton.gameObject.SetActive(true);
			getMoreHintButton.transform.GetChild (0).GetComponent<Text> ().text = "GET MORE HINT";
			getMoreHintButton.GetComponent<Button> ().enabled = true;

			getMoreHintButton.GetComponent<Button> ().onClick.AddListener ( delegate {confirmationDialog.SetActive(true);}) ;
			getMoreHintButton.GetComponent<Button> ().onClick.AddListener ( delegate {SetConfirmationDialog();}) ;
		}
	}
	
	// Update is called once per frame
	void Update () {
//		if (!hintActive && Menu.instance.isGameOn) {
//			curTime -= Time.deltaTime;
//			hintSlider.value = (time - curTime) / time;
//			if (curTime <= 0) {
//				hintInactiveText.gameObject.SetActive (false);
//				hintButton.gameObject.SetActive (true);
//				hintButton.GetComponent<Button> ().enabled = true;
//				hintActive = true;
//			}
//		}
//
		hintRemainingText.text = hintRemaining.ToString();

		if (Ads.instance.IsReady()) {
			getMoreHintButton.transform.GetChild (0).GetComponent<Text> ().text = "GET MORE HINT";
			getMoreHintButton.GetComponent<Button> ().enabled = true;
		} else {
			getMoreHintButton.transform.GetChild (0).GetComponent<Text> ().text = "";
			getMoreHintButton.GetComponent<Button> ().enabled = false;
		}
		
	}




	public void ResetHint(){
		if(hintRemaining > 0){
			hintButton.enabled = true;
		}else {
			//aktifkan iap
			hintButton.gameObject.SetActive(false);
			getMoreHintButton.gameObject.SetActive(true);
			getMoreHintButton.GetComponent<Button> ().onClick.AddListener ( delegate {confirmationDialog.SetActive(true);}) ;
			getMoreHintButton.GetComponent<Button> ().onClick.AddListener ( delegate {SetConfirmationDialog();}) ;


		}
	}

	public void HintAdded(){
		getMoreHintButton.gameObject.SetActive(false);
		hintButton.gameObject.SetActive(true);
		hintButton.enabled = true;
		hintRemaining = 1;
//		print (hintRemaining);
//		hintRemaining++;
	}

	public void ActivatePointer(Transform target){

		if(!Menu.instance.isTutorialOn)
			hintRemaining--;

		hintedObject = target.parent.gameObject;
//		print (target.parent.gameObject);
		for(int i = 0; i < target.parent.childCount; i++){
			if (target.parent.GetChild (i).tag == "Hint") {
				pointer.transform.position = target.parent.GetChild (i).transform.position;
			}
		}

//		if (target.position.y > 2.3f) {
//			pointer.GetComponent<SpriteRenderer> ().flipY = true;
//		} else {
//			pointer.GetComponent<SpriteRenderer> ().flipY = false;
//		}

		pointer.SetActive (true);
		isPointing = true;
	}

	void SetConfirmationDialog(){
		Menu.instance.isGameOn = false;
		confirmationDialog.transform.GetChild(0).GetComponent<Text>().text = "Watch Advertisement?";
		confirmationDialog.transform.GetChild (1).gameObject.SetActive (false);
		confirmationDialog.transform.GetChild (2).gameObject.SetActive (true);

		if(confirmationDialog.transform.childCount > 4)
			confirmationDialog.transform.GetChild (4).gameObject.SetActive (false);
//		confirmationDialog.transform.GetChild(1).GetComponent<Button>().onClick.AddListener ( delegate {Ads.instance.ShowRewardedAd();}) ;
//		confirmationDialog.transform.GetChild(1).GetComponent<Button>().onClick.AddListener ( delegate {confirmationDialog.SetActive(false);}) ;
//		confirmationDialog.transform.GetChild(2).GetComponent<Button>().onClick.AddListener ( delegate {confirmationDialog.SetActive(false);}) ;
//		confirmationDialog.transform.GetChild(2).GetComponent<Button>().onClick.AddListener ( delegate {Menu.instance.isGameOn = true;}) ;
	}

	void OnDestroy() {
		if (Scoring.instance.isCarryScore) {
			SaveDataManager.instance.currentLevelHint= hintRemaining;
		} else {
			SaveDataManager.instance.currentLevelHint = 3;
		}
	}

}
