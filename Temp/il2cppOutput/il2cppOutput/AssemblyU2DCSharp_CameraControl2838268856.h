#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CameraControl
struct CameraControl_t2838268856;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Touch407273883.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraControl
struct  CameraControl_t2838268856  : public MonoBehaviour_t1158329972
{
public:
	// System.Single CameraControl::zoomSpeed
	float ___zoomSpeed_2;
	// UnityEngine.Touch CameraControl::touchZero
	Touch_t407273883  ___touchZero_3;
	// UnityEngine.Touch CameraControl::touchOne
	Touch_t407273883  ___touchOne_4;
	// UnityEngine.Vector2 CameraControl::touchZeroPrevPos
	Vector2_t2243707579  ___touchZeroPrevPos_5;
	// UnityEngine.Vector2 CameraControl::touchOnePrevPos
	Vector2_t2243707579  ___touchOnePrevPos_6;
	// System.Single CameraControl::prevTouchDeltaMag
	float ___prevTouchDeltaMag_7;
	// System.Single CameraControl::touchDeltaMag
	float ___touchDeltaMag_8;
	// System.Single CameraControl::deltaMagnitudeDiff
	float ___deltaMagnitudeDiff_9;
	// System.Single CameraControl::panSpeed
	float ___panSpeed_10;
	// UnityEngine.Vector2 CameraControl::touchDeltaPosition
	Vector2_t2243707579  ___touchDeltaPosition_11;
	// System.Single CameraControl::mapWidth
	float ___mapWidth_12;
	// System.Single CameraControl::mapHeight
	float ___mapHeight_13;
	// System.Single CameraControl::minX
	float ___minX_14;
	// System.Single CameraControl::maxX
	float ___maxX_15;
	// System.Single CameraControl::minY
	float ___minY_16;
	// System.Single CameraControl::maxY
	float ___maxY_17;
	// UnityEngine.Vector3 CameraControl::pos
	Vector3_t2243707580  ___pos_18;
	// System.Boolean CameraControl::isCameraMoving
	bool ___isCameraMoving_20;
	// System.Boolean CameraControl::isZoomPan
	bool ___isZoomPan_21;
	// System.Single CameraControl::maxClamp
	float ___maxClamp_22;
	// UnityEngine.Vector3 CameraControl::mouseOrigin
	Vector3_t2243707580  ___mouseOrigin_23;
	// System.Boolean CameraControl::isPanning
	bool ___isPanning_24;

public:
	inline static int32_t get_offset_of_zoomSpeed_2() { return static_cast<int32_t>(offsetof(CameraControl_t2838268856, ___zoomSpeed_2)); }
	inline float get_zoomSpeed_2() const { return ___zoomSpeed_2; }
	inline float* get_address_of_zoomSpeed_2() { return &___zoomSpeed_2; }
	inline void set_zoomSpeed_2(float value)
	{
		___zoomSpeed_2 = value;
	}

	inline static int32_t get_offset_of_touchZero_3() { return static_cast<int32_t>(offsetof(CameraControl_t2838268856, ___touchZero_3)); }
	inline Touch_t407273883  get_touchZero_3() const { return ___touchZero_3; }
	inline Touch_t407273883 * get_address_of_touchZero_3() { return &___touchZero_3; }
	inline void set_touchZero_3(Touch_t407273883  value)
	{
		___touchZero_3 = value;
	}

	inline static int32_t get_offset_of_touchOne_4() { return static_cast<int32_t>(offsetof(CameraControl_t2838268856, ___touchOne_4)); }
	inline Touch_t407273883  get_touchOne_4() const { return ___touchOne_4; }
	inline Touch_t407273883 * get_address_of_touchOne_4() { return &___touchOne_4; }
	inline void set_touchOne_4(Touch_t407273883  value)
	{
		___touchOne_4 = value;
	}

	inline static int32_t get_offset_of_touchZeroPrevPos_5() { return static_cast<int32_t>(offsetof(CameraControl_t2838268856, ___touchZeroPrevPos_5)); }
	inline Vector2_t2243707579  get_touchZeroPrevPos_5() const { return ___touchZeroPrevPos_5; }
	inline Vector2_t2243707579 * get_address_of_touchZeroPrevPos_5() { return &___touchZeroPrevPos_5; }
	inline void set_touchZeroPrevPos_5(Vector2_t2243707579  value)
	{
		___touchZeroPrevPos_5 = value;
	}

	inline static int32_t get_offset_of_touchOnePrevPos_6() { return static_cast<int32_t>(offsetof(CameraControl_t2838268856, ___touchOnePrevPos_6)); }
	inline Vector2_t2243707579  get_touchOnePrevPos_6() const { return ___touchOnePrevPos_6; }
	inline Vector2_t2243707579 * get_address_of_touchOnePrevPos_6() { return &___touchOnePrevPos_6; }
	inline void set_touchOnePrevPos_6(Vector2_t2243707579  value)
	{
		___touchOnePrevPos_6 = value;
	}

	inline static int32_t get_offset_of_prevTouchDeltaMag_7() { return static_cast<int32_t>(offsetof(CameraControl_t2838268856, ___prevTouchDeltaMag_7)); }
	inline float get_prevTouchDeltaMag_7() const { return ___prevTouchDeltaMag_7; }
	inline float* get_address_of_prevTouchDeltaMag_7() { return &___prevTouchDeltaMag_7; }
	inline void set_prevTouchDeltaMag_7(float value)
	{
		___prevTouchDeltaMag_7 = value;
	}

	inline static int32_t get_offset_of_touchDeltaMag_8() { return static_cast<int32_t>(offsetof(CameraControl_t2838268856, ___touchDeltaMag_8)); }
	inline float get_touchDeltaMag_8() const { return ___touchDeltaMag_8; }
	inline float* get_address_of_touchDeltaMag_8() { return &___touchDeltaMag_8; }
	inline void set_touchDeltaMag_8(float value)
	{
		___touchDeltaMag_8 = value;
	}

	inline static int32_t get_offset_of_deltaMagnitudeDiff_9() { return static_cast<int32_t>(offsetof(CameraControl_t2838268856, ___deltaMagnitudeDiff_9)); }
	inline float get_deltaMagnitudeDiff_9() const { return ___deltaMagnitudeDiff_9; }
	inline float* get_address_of_deltaMagnitudeDiff_9() { return &___deltaMagnitudeDiff_9; }
	inline void set_deltaMagnitudeDiff_9(float value)
	{
		___deltaMagnitudeDiff_9 = value;
	}

	inline static int32_t get_offset_of_panSpeed_10() { return static_cast<int32_t>(offsetof(CameraControl_t2838268856, ___panSpeed_10)); }
	inline float get_panSpeed_10() const { return ___panSpeed_10; }
	inline float* get_address_of_panSpeed_10() { return &___panSpeed_10; }
	inline void set_panSpeed_10(float value)
	{
		___panSpeed_10 = value;
	}

	inline static int32_t get_offset_of_touchDeltaPosition_11() { return static_cast<int32_t>(offsetof(CameraControl_t2838268856, ___touchDeltaPosition_11)); }
	inline Vector2_t2243707579  get_touchDeltaPosition_11() const { return ___touchDeltaPosition_11; }
	inline Vector2_t2243707579 * get_address_of_touchDeltaPosition_11() { return &___touchDeltaPosition_11; }
	inline void set_touchDeltaPosition_11(Vector2_t2243707579  value)
	{
		___touchDeltaPosition_11 = value;
	}

	inline static int32_t get_offset_of_mapWidth_12() { return static_cast<int32_t>(offsetof(CameraControl_t2838268856, ___mapWidth_12)); }
	inline float get_mapWidth_12() const { return ___mapWidth_12; }
	inline float* get_address_of_mapWidth_12() { return &___mapWidth_12; }
	inline void set_mapWidth_12(float value)
	{
		___mapWidth_12 = value;
	}

	inline static int32_t get_offset_of_mapHeight_13() { return static_cast<int32_t>(offsetof(CameraControl_t2838268856, ___mapHeight_13)); }
	inline float get_mapHeight_13() const { return ___mapHeight_13; }
	inline float* get_address_of_mapHeight_13() { return &___mapHeight_13; }
	inline void set_mapHeight_13(float value)
	{
		___mapHeight_13 = value;
	}

	inline static int32_t get_offset_of_minX_14() { return static_cast<int32_t>(offsetof(CameraControl_t2838268856, ___minX_14)); }
	inline float get_minX_14() const { return ___minX_14; }
	inline float* get_address_of_minX_14() { return &___minX_14; }
	inline void set_minX_14(float value)
	{
		___minX_14 = value;
	}

	inline static int32_t get_offset_of_maxX_15() { return static_cast<int32_t>(offsetof(CameraControl_t2838268856, ___maxX_15)); }
	inline float get_maxX_15() const { return ___maxX_15; }
	inline float* get_address_of_maxX_15() { return &___maxX_15; }
	inline void set_maxX_15(float value)
	{
		___maxX_15 = value;
	}

	inline static int32_t get_offset_of_minY_16() { return static_cast<int32_t>(offsetof(CameraControl_t2838268856, ___minY_16)); }
	inline float get_minY_16() const { return ___minY_16; }
	inline float* get_address_of_minY_16() { return &___minY_16; }
	inline void set_minY_16(float value)
	{
		___minY_16 = value;
	}

	inline static int32_t get_offset_of_maxY_17() { return static_cast<int32_t>(offsetof(CameraControl_t2838268856, ___maxY_17)); }
	inline float get_maxY_17() const { return ___maxY_17; }
	inline float* get_address_of_maxY_17() { return &___maxY_17; }
	inline void set_maxY_17(float value)
	{
		___maxY_17 = value;
	}

	inline static int32_t get_offset_of_pos_18() { return static_cast<int32_t>(offsetof(CameraControl_t2838268856, ___pos_18)); }
	inline Vector3_t2243707580  get_pos_18() const { return ___pos_18; }
	inline Vector3_t2243707580 * get_address_of_pos_18() { return &___pos_18; }
	inline void set_pos_18(Vector3_t2243707580  value)
	{
		___pos_18 = value;
	}

	inline static int32_t get_offset_of_isCameraMoving_20() { return static_cast<int32_t>(offsetof(CameraControl_t2838268856, ___isCameraMoving_20)); }
	inline bool get_isCameraMoving_20() const { return ___isCameraMoving_20; }
	inline bool* get_address_of_isCameraMoving_20() { return &___isCameraMoving_20; }
	inline void set_isCameraMoving_20(bool value)
	{
		___isCameraMoving_20 = value;
	}

	inline static int32_t get_offset_of_isZoomPan_21() { return static_cast<int32_t>(offsetof(CameraControl_t2838268856, ___isZoomPan_21)); }
	inline bool get_isZoomPan_21() const { return ___isZoomPan_21; }
	inline bool* get_address_of_isZoomPan_21() { return &___isZoomPan_21; }
	inline void set_isZoomPan_21(bool value)
	{
		___isZoomPan_21 = value;
	}

	inline static int32_t get_offset_of_maxClamp_22() { return static_cast<int32_t>(offsetof(CameraControl_t2838268856, ___maxClamp_22)); }
	inline float get_maxClamp_22() const { return ___maxClamp_22; }
	inline float* get_address_of_maxClamp_22() { return &___maxClamp_22; }
	inline void set_maxClamp_22(float value)
	{
		___maxClamp_22 = value;
	}

	inline static int32_t get_offset_of_mouseOrigin_23() { return static_cast<int32_t>(offsetof(CameraControl_t2838268856, ___mouseOrigin_23)); }
	inline Vector3_t2243707580  get_mouseOrigin_23() const { return ___mouseOrigin_23; }
	inline Vector3_t2243707580 * get_address_of_mouseOrigin_23() { return &___mouseOrigin_23; }
	inline void set_mouseOrigin_23(Vector3_t2243707580  value)
	{
		___mouseOrigin_23 = value;
	}

	inline static int32_t get_offset_of_isPanning_24() { return static_cast<int32_t>(offsetof(CameraControl_t2838268856, ___isPanning_24)); }
	inline bool get_isPanning_24() const { return ___isPanning_24; }
	inline bool* get_address_of_isPanning_24() { return &___isPanning_24; }
	inline void set_isPanning_24(bool value)
	{
		___isPanning_24 = value;
	}
};

struct CameraControl_t2838268856_StaticFields
{
public:
	// CameraControl CameraControl::instance
	CameraControl_t2838268856 * ___instance_19;

public:
	inline static int32_t get_offset_of_instance_19() { return static_cast<int32_t>(offsetof(CameraControl_t2838268856_StaticFields, ___instance_19)); }
	inline CameraControl_t2838268856 * get_instance_19() const { return ___instance_19; }
	inline CameraControl_t2838268856 ** get_address_of_instance_19() { return &___instance_19; }
	inline void set_instance_19(CameraControl_t2838268856 * value)
	{
		___instance_19 = value;
		Il2CppCodeGenWriteBarrier(&___instance_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
