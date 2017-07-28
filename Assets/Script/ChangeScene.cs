using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class ChangeScene : MonoBehaviour {

	public static ChangeScene instance;

	public GameObject endScene;

	public Image sceneTransitionImage;

	public string nextScene;

	public int startMusic;
	public int loopingMusic;
	public bool noMusic = false;

	bool isExecuted = false;

	public GameObject finalScorePanel;

	void Awake(){
		if (!instance)
			instance = this;
	}

	void Start(){
		StartCoroutine (SceneTransition(false));
	}
	
	// Update is called once per frame
	void Update () {

		if (SearchListController.searchListController != null) {
			int found = 0;
			for(int i = 0; i < SearchListController.searchListController.searchItemControllers.Length; i++){
				if(SearchListController.searchListController.searchItemControllers[i].gameObject.activeSelf == false){
					found++;
				}
			}

			if(found == SearchListController.searchListController.searchItemControllers.Length && SearchListController.searchListController.searchItemControllers.Length > 0){
				Menu.instance.isGameOn = false;
				if (endScene != null) {
					//GetComponent<SoundInterface> ().PlaySound (0);

					if(!isExecuted){
						isExecuted = true;

						if(finalScorePanel != null) {

							//finalScorePanel.SetActive (true);
							finalScorePanel.transform.GetChild (6).GetComponent<Text> ().text = Scoring.instance.totalScore.ToString ();
							finalScorePanel.transform.GetChild (7).GetComponent<Text> ().text = Scoring.instance.CheckCoin ().ToString ();

							if(EnergySystem.instance != null){
								EnergySystem.instance.AddCoin (Scoring.instance.CheckCoin ());
								

							}

						} //else
							
							endScene.GetComponent<EndSceneScript> ().Activate ();
					}

				} else {
					//GotoScene (nextScene);
					if(!isExecuted){
						isExecuted = true;
						GotoScene (true);
					}

				}

			}

//			if(SearchListController.searchListController.itemNotFound.Count <= 0 && SearchListController.searchListController.searchItemControllers.Length > 0){
//					Menu.instance.isGameOn = false;
//					if (endScene != null) {
//						endScene.GetComponent<EndSceneScript> ().Activate ();
//					} else {
//						GotoScene ();
//					}
//			
//			}

		}



	}


	float alpha = 1f;
	Color color;

	IEnumerator SceneTransition(bool fade, bool next = false){
		bool b = true;
		while (b) {
			if (fade) {
				alpha += 0.05f;
				if (alpha > 1) {
					alpha = 1;
					b = false;
				}

			} else {
				alpha -= 0.05f;
				if (alpha < 0) {
					alpha = 0;
					b = false;
				}

			}

			color =  sceneTransitionImage.color;
			color.a = alpha;
			sceneTransitionImage.color = color;
			yield return null;
		}

		if (next) {
			if (returnToMain)
				Sound.instance.StopLoopingMusic ();


//			StartCoroutine(LoadAsync(nextScene));

//			Debug.Log (nextScene);
			SceneManager.LoadScene (nextScene);

		} else {

			if (!noMusic) {
				if (startMusic != loopingMusic) {
					Sound.instance.PlayStartMusic (startMusic, loopingMusic);
				} else {
					Sound.instance.PlayMusic (loopingMusic);
				}
			}


		}

	}

	//public void GotoScene (string nextScene) {
	public void GotoScene (bool stopBgm = true) {
		//SceneManager.LoadScene (nextScene);
		//StartCoroutine(LoadAsync(nextScene));
		//this.nextScene = nextScene;
		Sound.instance.PlaySound(2);
		if(stopBgm)
			Sound.instance.StopLoopingMusic ();
		
		StartCoroutine (SceneTransition(true, true));
	}

	public void GotoSelectedScene (string nextScene) {
		//SceneManager.LoadScene (nextScene);
		//StartCoroutine(LoadAsync(nextScene));
		this.nextScene = nextScene;
		Sound.instance.PlaySound(2);

		Sound.instance.StopLoopingMusic ();

		StartCoroutine (SceneTransition(true, true));
	}

	public GameObject confirmationDialog;

	public void BacktoMainMenu () {
		confirmationDialog.SetActive (true);
		confirmationDialog.transform.GetChild(0).GetComponent<Text>().text = "Back to Main Menu?";
		confirmationDialog.transform.GetChild (1).gameObject.SetActive (true);
		confirmationDialog.transform.GetChild (2).gameObject.SetActive (false);

		if(confirmationDialog.transform.childCount > 4)
			confirmationDialog.transform.GetChild (4).gameObject.SetActive (false);

//		confirmationDialog.transform.GetChild(1).GetComponent<Button>().onClick.AddListener ( delegate {Return();}) ;
//		confirmationDialog.transform.GetChild(1).GetComponent<Button>().onClick.AddListener ( delegate {confirmationDialog.SetActive(false);}) ;
//		confirmationDialog.transform.GetChild(2).GetComponent<Button>().onClick.AddListener ( delegate {confirmationDialog.SetActive(false);}) ;
	}

	bool returnToMain = false;

	public void Return () {
		if (Scoring.instance != null)
			Scoring.instance.isCarryScore = false;

		returnToMain = true;
		Sound.instance.StopLoopingMusic ();
		nextScene = "Story 2";
		StartCoroutine (SceneTransition(true, true));
	}

	IEnumerator LoadAsync(string nextScene){
		//yield return new WaitForSeconds(2);
//		AsyncOperation async = Application.LoadLevelAsync(nextScene);
		AsyncOperation async = SceneManager.LoadSceneAsync(nextScene);
		yield return async;
//		while (!async.isDone)
//		{
//			//loadingBar.value = async.progress;
//			yield return null;
//		}	
//
//		async.allowSceneActivation = true;
	}

	public void EnterNextScene (int cost) {
		if (EnergySystem.instance.energy >= cost) {
			GotoSelectedScene (nextScene);
			EnergySystem.instance.LoseEnergy (cost);
		} else {
			ShopCanvas.instance.transform.GetChild (1).gameObject.SetActive(true);
		}
	}

	public void SetNextScene ( string n) {
		nextScene = n;
	}



	public void Test(){
		ShopCanvas.instance.transform.GetChild (1).gameObject.SetActive(true);
	}
//	public void EnterSelectedScene (int cost, string next) {
//		if (EnergySystem.instance.energy >= cost) {
//			GotoSelectedScene (next);
//			EnergySystem.instance.LoseEnergy (cost);
//		} else {
//			print ("kurang");
//		}
//	}

	public void ShowEnergyPaid(int r){
		ShopCanvas.instance.transform.GetChild (4).GetChild (1).GetComponent<TimerPopup> ().plus = false;
		ShopCanvas.instance.transform.GetChild (4).GetChild (1).GetComponent<TimerPopup> ().extra = r;
		ShopCanvas.instance.transform.GetChild (4).GetChild (1).GetComponent<TimerPopup> ().FlashPopup();
	}

}
