using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Purchasing;

public class ShopCanvas : MonoBehaviour {
	public static ShopCanvas instance;

	void Awake(){
		if (!instance)
			instance = this;

		DontDestroyOnLoad (gameObject);
	}

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void Fulfill (Product product){
//		print ("zzzz");
		if (product != null) {
			switch (product.definition.id){
			case "coin.400":
//				print ("ss");
				EnergySystem.instance.AddCoin (400);
				break;
			case "coin.2200":
				EnergySystem.instance.AddCoin (2200);
				break;
			case "coin.5000":
				EnergySystem.instance.AddCoin (5000);
				break;
			Default:
				Debug.Log (
					string.Format ("Unrecognized productId \"{0}\"",product.definition.id)
				);
				break;
			}
		}
	}


	public void Wow(){
		print("ss");
	}
}
