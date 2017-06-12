using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraControl : MonoBehaviour {
	// zoom = false;
	//bool pan = false;
	public float zoomSpeed = 0.0075f;

	Touch touchZero;
	Touch touchOne;
	Vector2 touchZeroPrevPos;
	Vector2 touchOnePrevPos;
	float prevTouchDeltaMag;
	float touchDeltaMag;
	float deltaMagnitudeDiff;

	public float panSpeed = 0.01f;

	Vector2 touchDeltaPosition;


	float mapWidth = 10.24f;
	float mapHeight = 6;
	private float minX, maxX;
	private float minY, maxY;
	Vector3 pos;


	public static CameraControl instance;

	public bool isCameraMoving = false;
	public bool isZoomPan = false;

	[SerializeField]
	float maxClamp;

	void Awake(){
		if (!instance) {
			instance = this;
		}
	}

	// Use this for initialization
	void Start () {
		maxClamp = Camera.main.orthographicSize;
	}

	private Vector3 mouseOrigin;	// Position of cursor when mouse dragging starts
	private bool isPanning;		// Is the camera being panned?

//	void Update2(){
//		float height = Camera.main.orthographicSize * 2.0f;
//		float width  = height * Screen.width / Screen.height;
//		maxX = (mapWidth - width) / 2.0f;
//		minX = -maxX;
//		maxY = (mapHeight - height) / 2;
//		minY = -maxY;
//
//		if(Input.GetMouseButtonDown(0))
//		{
//			// Get mouse origin
//			mouseOrigin = Input.mousePosition;
//			isPanning = true;
//		}
//
//
//		if (!Input.GetMouseButton(0)) isPanning=false;
//		if (isPanning)
//		{
//			Vector3 pos = Camera.main.ScreenToViewportPoint(Input.mousePosition - mouseOrigin);
//
//			Vector3 move = new Vector3(pos.x * panSpeed, pos.y * panSpeed, 0);
//			transform.Translate(move, Space.Self);
//			Vector3 p = new Vector3 (Mathf.Clamp (transform.position.x, minX, maxX), Mathf.Clamp (transform.position.y, minY, maxY), transform.position.z);
//			transform.position = p;
//		}
//
//
//
//
//
//
//		//print (minX+" "+maxX);
//	}
//

	//public Text t;

	// Update is called once per frame
	void Update () {

		//t.text = isCameraMoving.ToString() + "  " + isZoomPan.ToString();
		if(Menu.instance != null){
			if(Menu.instance.isGameOn){
				isZoomPan = false;

				if (Input.touchCount == 2) {
					isCameraMoving = true;

					touchZero = Input.GetTouch (0);
					touchOne = Input.GetTouch (1);

					touchZeroPrevPos = touchZero.position - touchZero.deltaPosition;
					touchOnePrevPos = touchOne.position - touchOne.deltaPosition;

					// Find the magnitude of the vector (the distance) between the touches in each frame.
					prevTouchDeltaMag = (touchZeroPrevPos - touchOnePrevPos).magnitude;
					touchDeltaMag = (touchZero.position - touchOne.position).magnitude;

					// Find the difference in the distances between each frame.
					float deltaMagnitudeDiff = prevTouchDeltaMag - touchDeltaMag;
					Camera.main.orthographicSize += deltaMagnitudeDiff * zoomSpeed;

					Camera.main.orthographicSize = Mathf.Clamp (Camera.main.orthographicSize, 1, maxClamp);

					AdjustPos ();

				} else if (Input.touchCount > 0 && Input.GetTouch (0).phase == TouchPhase.Moved){ 
					//&& Camera.main.orthographicSize < maxClamp) {
					isCameraMoving = true;
					// Get movement of the finger since last frame
					Vector2 touchDeltaPosition = Input.GetTouch (0).deltaPosition;

					// Move object across XY plane
					transform.Translate (-touchDeltaPosition.x * panSpeed, -touchDeltaPosition.y * panSpeed, 0);

					AdjustPos ();

				} 
//				else if (Input.GetTouch (0).phase == TouchPhase.Stationary) {
//					isCameraMoving = true;
//				} 
				else {
					isCameraMoving = false;
				}
			}
		}



//		CalcMinMax ();
//		pos = transform.position;
//		pos.x = Mathf.Clamp (pos.x, minX, maxX);
//		pos.y = Mathf.Clamp (pos.y, minY, maxY);
//		transform.position = pos;



	}

	void AdjustPos () {
		isZoomPan = true;

		float height = Camera.main.orthographicSize * 2.0f;
		float width  = height * Screen.width / Screen.height;
		maxX = (mapWidth - width) / 2.0f;
		minX = -maxX;
		maxY = (mapHeight - height) / 2;
		minY = -maxY;
		pos = transform.position;
		pos.x = Mathf.Clamp (pos.x, minX, maxX);
		pos.y = Mathf.Clamp (pos.y, minY, maxY);
		transform.position = pos;
	}

//	void CalcMinMax() {
//		float height = Camera.main.orthographicSize * 2.0f;
//		float width  = height * Screen.width / Screen.height;
//		maxX = (mapWidth - width) / 2.0f;
//		minX = -maxX;
//		maxY = (mapHeight - height) / 2;
//		minY = -maxY;
//	}
}
