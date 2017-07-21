using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SocialPlatforms;
using GooglePlayGames;

public class EndSceneScript : MonoBehaviour {
	float curScale = 1f;
	public float maxScale = 1.05f;
	public float minScale = 1f;
	bool upScale;
	public float scaleInc = 0.001f;
	Vector3 scale = new Vector3(1, 1, 1);
	//public GameObject nextSceneButton;
	public GameObject continueText;
	public GameObject clicktoNext;
	//public string nextScene;
	bool hasPlaySound = false;
	public string sceneUnlockedName;
	public bool hideAni = false;
	// Use this for initialization


	public float cameraStartingSize = 3f;

	public GameObject popupCanvas;
	#if UNITY_ANDROID
	public string androidBoardId;
	#endif
	#if UNITY_IOS
	public string iosBoardId;
	#endif


	void Start () {
		curScale = minScale;
	}

	// Update is called once per frame
	void Update () {
		if (upScale) {
			curScale += scaleInc;


			if (popupCanvas != null && !popupCanvas.activeSelf) {
				popupCanvas.SetActive (true);
			}


			if (curScale > maxScale) {
				if(!hasPlaySound){
					Sound.instance.PlaySound (0);
					hasPlaySound = true;





				}
				curScale = maxScale;
				upScale = false;
				//nextSceneButton.SetActive (true);

				continueText.SetActive (true);
				clicktoNext.SetActive (true);
//				if ((Input.GetMouseButtonDown (0) == true)) {
//					//ChangeScene.instance.GotoScene (nextScene);
//					ChangeScene.instance.GotoScene (true);
//				}



			}
			scale.Set(curScale, curScale, 0);
			transform.localScale = scale;

		}


	}

	public bool storyEnd;
	public string storyEndName;

	public void Activate() {
		PlayerPrefs.SetInt (sceneUnlockedName, 1);

		if (storyEnd) {
			int x = PlayerPrefs.GetInt (storyEndName, 0);
			if (x == 0)
				PlayerPrefs.SetInt (storyEndName, 1);
		}






		//if (Social.localUser.authenticated) {
		#if UNITY_ANDROID
		if (Social.localUser.authenticated || PlayGamesPlatform.Instance.localUser.authenticated) {



			Social.ReportScore(Scoring.instance.totalScore, androidBoardId, (bool success) => {
				// handle success or failure
			});




			SocialPlatformManager.instance.SaveGame();
		}
		#endif
		#if UNITY_IOS
		if (Social.localUser.authenticated) {

			try{

				Social.ReportScore(Scoring.instance.totalScore, iosBoardId, success => {
					// handle success or failure
				});
			}catch(System.Exception e){
				
			}





			//SocialPlatformManager.instance.SaveGame();
		}
		#endif

		//}
		if (hideAni) {
			//ChangeScene.instance.GotoScene (true);
			ChangeScene.instance.finalScorePanel.SetActive(true);
		} else {

			if (Camera.main.orthographicSize < cameraStartingSize) {
				float z = Camera.main.transform.position.z;

				Camera.main.orthographicSize = cameraStartingSize;
				Camera.main.transform.position = new Vector3 (0, 0, z);
			
			}


			gameObject.SetActive(true);
			upScale = true;
		}



		//Sound.instance.PlaySound (0);
	}
}
