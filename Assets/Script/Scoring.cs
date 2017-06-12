using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Scoring : MonoBehaviour {

	public static Scoring instance;

	public Text scoreText;
	public int totalScore ;// = 0;

	public int streak = 0;
	public int wrongStreak = 0;

	void Awake () {
		if (!instance)
			instance = this;	
	}

	public List<ScoringRule> scoreRange = new List<ScoringRule> ();
	public float time;
	float score = 100;
	float bonus = 0;
	public Transform scorePopupGroup;
	public bool isCarryScore = true;

	public List<CoinGiven> coinRange = new List<CoinGiven> ();

	//public Transform timePopupGroup;

	// Use this for initialization
	void Start () {
		totalScore = SaveDataManager.instance.currentLevelScore;


		time = 0;
	}
	
	// Update is called once per frame
	void Update () {
		if(Menu.instance.isGameOn){
			time += Time.deltaTime;
			scoreText.text = totalScore.ToString ();
		}
	}

	public void CheckScore (Transform t) {
		for(int i = 0; i < scoreRange.Count; i++) {
			if (scoreRange[i].min < time && time < scoreRange[i].max) {
				bonus = 1 * scoreRange [i].multiplier;
				//bonus = time * scoreRange [i].multiplier;
				//print (time+" "+bonus);
//
//				if (Timer.instance != null && time < 5)
//					Timer.instance.curTime += (5 - time); 


				break;	
			}
		}

		score += bonus;
//		scorePopup.gameObject.SetActive(true);
//		scorePopup.transform.position = t.GetChild(0).transform.position;
//		scorePopup.GetComponent<Text> ().text = score.ToString();
//		scorePopup.GetComponent<ScorePopup> ().show = true;



		for(int i = 0; i < scorePopupGroup.childCount; i++){
			if(!scorePopupGroup.GetChild(i).GetComponent<ScorePopup>().show){
				ScorePopup s = scorePopupGroup.GetChild(i).GetComponent<ScorePopup>();
				s.gameObject.SetActive (true);
				s.transform.position = t.GetChild (0).transform.position;
				s.GetComponent<Text> ().text = score.ToString ();
				s.show = true;
				s.addedScore = score;
				time = 0;
				score = 100;


				AddStreakBonus ();

				break;
			}
		}


		if (Timer.instance != null) {
			//Timer.instance.ShowAddedTime ();
			Timer.instance.AddTime();
		}

		///tambahan timer disini
//		if(timePopupGroup != null) {
//			for(int i = 0; i < timePopupGroup.childCount; i++){
//				if(!timePopupGroup.GetChild(i).GetComponent<TimerPopup>().show){
//					TimerPopup tp = timePopupGroup.GetChild(i).GetComponent<TimerPopup>();
//					tp.gameObject.SetActive (true);
//					tp.transform.position = t.GetChild (0).transform.position;
//					tp.GetComponent<Text> ().text = tp.addedTime.ToString ();
//					tp.show = true;
//					//tp.addedTim = score;
//					//time = 0;
//					//score = 100;
//					break;
//				}
//			}
//
//		}


	}

	public void AddScore(float addedScore){
		if(!Menu.instance.isTutorialOn)
			totalScore += (int) addedScore;
		//time = 0;
		//score = 10;
	}


	void OnDestroy() {
		if (isCarryScore) {
			SaveDataManager.instance.currentLevelScore = totalScore;
		} else {
			SaveDataManager.instance.currentLevelScore = 0;
		}
	}


	public GameObject streakText;

	public void AddStreakBonus(){
//		print (streak);
		if(streakText != null){
			int streakBonus = 0;
			if (streak > 0) {
				streakBonus = streak * 100;
				//streakText.text = "+ "+streakBonus.ToString ();
				streakText.GetComponent<TimerPopup> ().extra = (float)streakBonus;
				streakText.GetComponent<TimerPopup> ().plus = true;
				streakText.SetActive (true);
				streakText.GetComponent<TimerPopup> ().show = true;

				totalScore += streakBonus;


			} else if (wrongStreak > 0){
				streakText.GetComponent<TimerPopup> ().extra = 500f;
				streakText.GetComponent<TimerPopup> ().plus = false;
				streakText.SetActive (true);
				streakText.GetComponent<TimerPopup> ().show = true;

				totalScore -= 500;
				if(totalScore < 0){
					totalScore = 0;
				}
			}


		}

	}


	int getCoin;

	public int CheckCoin(){

		for(int i = 0; i < coinRange.Count; i++) {
			if (coinRange[i].min <  totalScore && totalScore < coinRange[i].max) {
				getCoin = coinRange [i].amount;
				return getCoin;
			}
		}

		return 0;
//		if (totalScore >= 5000)
//			getCoin = 200;
//		else if (totalScore >= 3000)
//			getCoin = 100;
//		else
//			getCoin = 50;
//
//		return getCoin;
	}
}

[System.Serializable]
public class ScoringRule {
	public float min;
	public float max;
	public float multiplier;
}

[System.Serializable]
public class CoinGiven {
	public int min;
	public int max;
	public int amount;
}