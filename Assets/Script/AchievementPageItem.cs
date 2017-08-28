using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AchievementPageItem : MonoBehaviour {

	public string achiName;
	public int isActive;

	// Use this for initialization
	void Start () {
		//SetLock ();
	}

	public void SetLock () {

		//Achievement 1 = found  0 = not found
		isActive = PlayerPrefs.GetInt (achiName, 0);
		if (isActive == 1) {
			transform.GetChild (0).GetChild(1).gameObject.SetActive(false);
			//transform.GetChild (0).gameObject.SetActive (false);
			//transform.GetChild (1).gameObject.SetActive (true);
		} else {
			transform.GetChild (0).GetChild(1).gameObject.SetActive(true);
			//transform.GetChild (1).gameObject.SetActive (false);
			//transform.GetChild (0).gameObject.SetActive (true);
		}

//		print (achiName+" "+ isActive);

		//found
		//transform.GetChild (0).GetChild(1).gameObject.SetActive(false);

		//PlayerPrefs.DeleteAll();
	}

	// Update is called once per frame
	void Update () {
		
	}

	public Text achiTitleText;
	public Text achiDescText;
	public GameObject achievementPanel;
	public Image achiIcon;

	public void ShowDetails(){
		for(int i = 0; i < Story.instance.achiContentList.Count; i++){
			string s = Story.instance.achiContentList [i].title;
			if ( achiName.Equals (s)) {
				achiTitleText.text = s;
				achiIcon.sprite = transform.GetChild(0).GetChild (0).GetComponent<Image> ().sprite;

				for(int j = 0; j < Story.instance.achiContentList [i].text.Length; j++){
					if (j == 0) {
						achiDescText.text = Story.instance.achiContentList [i].text [0];
					} else {
						achiDescText.text = achiDescText.text+"\n"+Story.instance.achiContentList [i].text [j];
					}
				}
				achievementPanel.SetActive (true);

				//Sound.instance.PlaySound (0);

				break;
			}
		}
	}




}
