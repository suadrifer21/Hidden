using UnityEngine;
using System.Collections;
using System;
using System.Collections.Generic;
using GooglePlayGames;


public class EnergySystem : MonoBehaviour {

	public static EnergySystem instance;

	//public int startEnergy;

	public int energy; //energy now //amount of energy now
    public int maxEnergy; //maximum energy //максимум энергии
	[SerializeField]
	bool isTimeSelected; //var for tracking availability of time  //changing to track the availability of time
	public int minutesForRestore; //min for restore // the number of minutes through which the energy is restored
	public DateTime nextTime; //datetime of next restore //the next restore date
    WaitForSeconds CheckTicks = new WaitForSeconds(0.5f); //inspection intervals //переодичность проверки времени

	public DateTime timeLast;

	public int coin;


	int energyBought;
	int coinPaid;

    // Use this for initialization
    void Awake () {
//		PlayerPrefs.DeleteAll ();

		if (!instance) {
			instance = this;
			DontDestroyOnLoad (gameObject);
		} 
		else
			Destroy (gameObject);
		
		energy = PlayerPrefs.GetInt("Energy",maxEnergy); //get energy from prefs,if first start - get default(max) //get the energy from the prefs if the first start is taken by default (maximum energy)
//        StartCoroutine(Check()); //delete this line if u do not wont check time periodically  //Если мы не хотим проверять время переодически то эту строку надо убрать


		coin = PlayerPrefs.GetInt("Coin", 0);


//		nextE = nextTime;
    }


	public void LoseEnergy(int cost) //функция потери энергии
    {
		

		if(energy >= maxEnergy){
			timeLast = DateTime.Now;
		}

        energy -= cost; //минусуем
        PlayerPrefs.SetInt("Energy", energy); //сохраняем
		//int m = minutesForRestore * cost;

		int e = energy;

		print (timeLast);

		if (energy < maxEnergy) {
			//		print (timeLast);
			for (int i = 1; i <= cost; i++) {


				timeLast = timeLast.AddMinutes (minutesForRestore);
				string temp = timeLast.ToString ();
				//print(temp);
				PlayerPrefs.SetString("EnergyTime" + GetFirstEmptyPref().ToString(), temp); //save this datetime to first empty playerprefs // save this string to the playerprefix of the first empty slot

				e++;

				if (e >= maxEnergy)
					break;
			}
		}



		Save ();


//		print ("pakai");
//		for (int i = 1; i < maxEnergy; i++) {
//			print(PlayerPrefs.GetString("EnergyTime" + i, "empty"));
//		}
//
//		string date_tmp = DateTime.Now.AddMinutes(minutesForRestore * cost).ToString(); //convert datetime.now + minutesForRestore to string // write the date + minutes to restore in the string
//		int a = GetFirstEmptyPref();
//		print (a);
//		PlayerPrefs.SetString("EnergyTime" + a.ToString(), date_tmp); //save this datetime to first empty playerprefs // save this string to the playerprefix of the first empty slot

    }
		

	int GetFirstEmptyPref() //get the first empty string
	{
		if(energy <= maxEnergy){
			for (int i = 1; i <= maxEnergy; i ++)
			{
				if (PlayerPrefs.GetString("EnergyTime" + i, "empty") == "empty")
				{
					return i;
				}
			}
		}
		return 0;
	}


	public void BuyAllEnergy() //Function for buying all energy
    {
        energy = maxEnergy;
        PlayerPrefs.SetInt("Energy", energy); //восстанавливаем энергию и сохраняем

		for(int i=1; i <= maxEnergy; i++) // clear all playerprefs // clear all possible surviving deitaims
        {
            PlayerPrefs.SetString("EnergyTime" + i, "empty");
        }
		isTimeSelected = false; //return the flag

		Save ();
    }
   
	bool CheckEnergy() //time checking function
    {
//		print (maxEnergy);
//		for (int i = 0; i <= maxEnergy+1; i++) {
//			a[i] = PlayerPrefs.GetString("EnergyTime" + (i), "empty");
//			print(a[i]);
//		}

//		print (PlayerPrefs.GetString("EnergyTime" + 1, "empty"));
		if (!isTimeSelected) //check that the time has not been selected yet
        {
			if (PlayerPrefs.GetString("EnergyTime" + 1, "empty") != "empty") //check that the time has not been selected yet
            {
				if (DateTime.TryParse(PlayerPrefs.GetString("EnergyTime" + 1, "empty"), out nextTime)) //we try to spar from this line DateTime
                {
					isTimeSelected = true; //if successful - then set the flag that the time is selected (in order not to jerk the prefs in the future until the time comes)
                    return true;
                }              
            }           
            return false;            
        }
        return true;
    }

   	void AddEnergy() //функция добавления энергии
    {
        energy++; //добавляем
        PlayerPrefs.SetInt("Energy", energy); //сохраняем
		PlayerPrefs.SetString("EnergyTime" + 1, "empty"); // since the first slot always has the closest time - we clear it

		for (int i = 1; i <= maxEnergy; i++) //To move to the first slot, the next nearest time, do a simple swap
        {
            string swap = PlayerPrefs.GetString("EnergyTime" + (i + 1), "empty");
            PlayerPrefs.SetString("EnergyTime" + i, swap);
        }
		isTimeSelected = false; //return the flag that time is not selected

		Save ();
    }


    public string GetNextTime()
    {
//		print (isTimeSelected);
        if (isTimeSelected)
        {
            TimeSpan next = nextTime - DateTime.Now;
			int m = next.Minutes;
			while (m >= minutesForRestore) {
				m -= minutesForRestore;
			}
				
			string nextFormatted = string.Format("{0:D2} : {1:D2} ", m, next.Seconds);
//			string nextFormatted = string.Format("{0:D2} : {1:D2} ", next.Minutes, next.Seconds);
			//print (nextFormatted);
			return nextFormatted;
        }
        return "FULL";
        
    }


//	DateTime nextE;

    IEnumerator Check() //простой пример проверки энергии раз в CheckTicks
    {
		
		if (CheckEnergy())//check that we have time in the prefs and it is assigned in nextTime
        {





//			print ("s");
//			TimeSpan next = nextTime - DateTime.Now;
//
//			print (next);
//			DateTime n;
//			int m = next.Minutes;
//			if (m > 0) {
//				int i = 0;
//				while (m >= minutesForRestore) {
//					m -= minutesForRestore;
//					i++;
//				}
//				n = nextTime.AddMinutes (-i * minutesForRestore);
//				print (n+"  "+nextTime);
//				nextE = n;
//			} else {
//				n = nextE;
//			}
//
//
//
//			print (DateTime.Now.CompareTo(n) );
//			if (DateTime.Now.CompareTo(n) > 0) //compare the current time with the time in nextTime
//			{
//				print ("s");
//				AddEnergy();                
//			}
//
			if (DateTime.Now.CompareTo(nextTime) > 0) //compare the current time with the time in nextTime
            {
				AddEnergy();                
			}
        }
        yield return CheckTicks;
        StartCoroutine(Check());
    }

	public void BuyEnergy(int buyAmount) //функция добавления энергии
	{

		int dif = maxEnergy - energy;
		int temp = dif - buyAmount;


		energy += buyAmount; //добавляем
		PlayerPrefs.SetInt("Energy", energy); //сохраняем

		print (energy);

		//PlayerPrefs.SetString("EnergyTime" + 1, "empty"); // since the first slot always has the closest time - we clear it

		if (energy >= maxEnergy) {
			for(int i=1; i <= maxEnergy; i++) // clear all playerprefs // clear all possible surviving deitaims
			{
				PlayerPrefs.SetString("EnergyTime" + i, "empty");
			}

		} else {
			//		for (int i = 1; i < maxEnergy; i++) {
			//			print(PlayerPrefs.GetString("EnergyTime" + i, "empty"));
			//		}
			//
			for (int i = temp + 1; i <= maxEnergy; i++) //To move to the first slot, the next nearest time, do a simple swap
			{
				//			string swap = PlayerPrefs.GetString("EnergyTime" + (i + 1), "empty");
				PlayerPrefs.SetString("EnergyTime" + i, "empty");
			}


//			print ("beli");
//					for (int i = 1; i < maxEnergy; i++) {
//						print(PlayerPrefs.GetString("EnergyTime" + i, "empty"));
//					}


			string d = PlayerPrefs.GetString ("EnergyTime" + temp, "empty");
			d = d.Replace('_', ':');
			d = d.Replace('-', '/');
			DateTime date = Convert.ToDateTime(d);
			timeLast = date;
			
		}

		isTimeSelected = false; //return the flag that time is not selected

		Save ();
	}


	public void SetTimeLast(){
		string x;
		int y = GetFirstEmptyPref ();





		if (y > 1) {
			x = PlayerPrefs.GetString ("EnergyTime" + (y - 1), "empty");
		} else if (y == 1) {
			x = PlayerPrefs.GetString ("EnergyTime" + y, "empty");
		} else
			return;
		if (x != "empty") {
			x = x.Replace ('_', ':');
			x = x.Replace ('-', '/');
			DateTime date = Convert.ToDateTime (x);
			timeLast = date;


			print ("timelast set : "+timeLast);
		} else {
//			print ("x empty");
			Reset ();	
			timeLast = DateTime.Now;
		}

	}

//	public void UseEnergy(int cost){
//		for(int i = 0; i < cost; i++){
//			LoseEnergy ();
//		}
//	}


	public void AddCoin(int added){

		coin += added;
		PlayerPrefs.SetInt("Coin",coin);
		Save ();
	}

	public void AddCoinBought(int added){
//		print ("s");

		ShopCanvas.instance.transform.GetChild (5).gameObject.SetActive (true);


		ShopCanvas.instance.transform.GetChild (4).GetChild (0).GetComponent<TimerPopup> ().plus = true;
		ShopCanvas.instance.transform.GetChild (4).GetChild (0).GetComponent<TimerPopup> ().extra = added;

		ShopCanvas.instance.transform.GetChild (4).GetChild (0).GetComponent<TimerPopup> ().ShowPopup();

		try{
			Camera.main.GetComponent<SoundInterface> ().PlaySound (3);
		} catch (Exception e){

		}

		coin += added;
		PlayerPrefs.SetInt("Coin",coin);
		Save ();
	}

	public void LoseCoin(int minus){
		coin -= minus;
		PlayerPrefs.SetInt("Coin",coin);
		Save ();
	}




	public void ShopEnergy(int cost){
		if (coin >= cost) {

			LoseCoin (cost);
			BuyEnergy (energyBought);


		} else
			ShopCanvas.instance.transform.GetChild (2).gameObject.SetActive (true);
	}



	public void ShopEnergy(){
		if (coin >= coinPaid) {

			ShopCanvas.instance.transform.GetChild (4).GetChild (0).GetComponent<TimerPopup> ().plus = false;
			ShopCanvas.instance.transform.GetChild (4).GetChild (0).GetComponent<TimerPopup> ().extra = coinPaid;

			ShopCanvas.instance.transform.GetChild (4).GetChild (1).GetComponent<TimerPopup> ().plus = true;
			ShopCanvas.instance.transform.GetChild (4).GetChild (1).GetComponent<TimerPopup> ().extra = energyBought;

			ShopCanvas.instance.transform.GetChild (4).GetChild (0).GetComponent<TimerPopup> ().ShowPopup();
			ShopCanvas.instance.transform.GetChild (4).GetChild (1).GetComponent<TimerPopup> ().ShowPopup();

			try{
				Camera.main.GetComponent<SoundInterface> ().PlaySound (3);
			} catch (Exception e){
				
			}


			LoseCoin (coinPaid);
			BuyEnergy (energyBought);
		} else
			ShopCanvas.instance.transform.GetChild (2).gameObject.SetActive (true);
	}


	public void SetEnergyBought (int e) {
		energyBought = e;
	}

	public void SetCoinPaid (int c) {
		coinPaid = c;
	}



	void Save(){
		#if UNITY_ANDROID
		if (PlayGamesPlatform.Instance.localUser.authenticated || Social.localUser.authenticated) {
			SocialPlatformManager.instance.SaveGame ();
		} 
		#endif
	}
//
//
	public List<string> a = new List<string>();

	void Start(){
		for (int i = 0; i <= maxEnergy+1; i++) {
			string j = PlayerPrefs.GetString ("EnergyTime" + (i), "empty");
		
//			print (j );
			a.Add (j);
		}


		SetTimeLast ();

		StartCoroutine(Check());
	}

	void Update(){
		for (int i = 0; i <= maxEnergy+1; i++) {
			a[i] = PlayerPrefs.GetString("EnergyTime" + (i), "empty");
		}
			
	}

	void Reset(){
		for (int i = 0; i <= maxEnergy+1; i++) {
			PlayerPrefs.SetString("EnergyTime" + (i), "empty");
		}
		energy = maxEnergy;
	}

	public void BonusEnergy(int amount){
		ShopCanvas.instance.transform.GetChild (4).GetChild (1).GetComponent<TimerPopup> ().plus = true;
		ShopCanvas.instance.transform.GetChild (4).GetChild (1).GetComponent<TimerPopup> ().extra = amount;
		ShopCanvas.instance.transform.GetChild (4).GetChild (1).GetComponent<TimerPopup> ().ShowPopup();

		BuyEnergy (amount);
	}

}

