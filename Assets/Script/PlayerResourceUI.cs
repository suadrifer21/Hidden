using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class PlayerResourceUI : MonoBehaviour {

	public Text energyNow;
	public Text nextEnergy;
	public Text coin;
	//public EnergySystem energySystem;

	// Use this for initialization
	void Start () {
//		StartCoroutine(RefreshTime());
	}

//	IEnumerator RefreshTime()
//	{
//		energyNow.text =  EnergySystem.instance.energy.ToString();
//		nextEnergy.text = EnergySystem.instance.GetNextTime();
//		coin.text = EnergySystem.instance.coin.ToString();
//
//		yield return new WaitForSeconds(10f);
//		StartCoroutine(RefreshTime());
//	}

	void Update(){
		energyNow.text =  EnergySystem.instance.energy.ToString();
		nextEnergy.text = EnergySystem.instance.GetNextTime();
		coin.text = EnergySystem.instance.coin.ToString();
	}

	public void OpenShop(int i = 1){
		ShopCanvas.instance.transform.GetChild (0).gameObject.SetActive(true);

		if (i > 1) {
//			ShopCanvas.instance.transform.GetChild (0).GetChild (1).gameObject.SetActive (false);
//			ShopCanvas.instance.transform.GetChild (0).GetChild (2).gameObject.SetActive (true);
			ShopCanvas.instance.transform.GetChild (0).GetChild (4).GetComponent<Button>().onClick.Invoke();

		} else {
//			ShopCanvas.instance.transform.GetChild (0).GetChild (1).gameObject.SetActive (true);
//			ShopCanvas.instance.transform.GetChild (0).GetChild (2).gameObject.SetActive (false);
			ShopCanvas.instance.transform.GetChild (0).GetChild (3).GetComponent<Button>().onClick.Invoke();
		}

	}

//	public void EnterScene(int cost){
//		if (EnergySystem.instance.energy >= cost) {
//			ChangeScene.instance.GotoSelectedScene ("Sangsit Outdoor Time");
//			EnergySystem.instance.LoseEnergy (cost);
//		} else {
//			print ("kurang");
//			GameObject.Find ("Open Shop Panel").SetActive(true);
//		}
//	}
}
