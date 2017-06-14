#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BezierMovement
struct  BezierMovement_t2550636266  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 BezierMovement::startPoint
	Vector3_t2243707580  ___startPoint_2;
	// System.Single BezierMovement::controlX
	float ___controlX_3;
	// System.Single BezierMovement::controlY
	float ___controlY_4;
	// UnityEngine.Vector3 BezierMovement::endPoint
	Vector3_t2243707580  ___endPoint_5;
	// System.Single BezierMovement::curveX
	float ___curveX_6;
	// System.Single BezierMovement::curveY
	float ___curveY_7;
	// System.Single BezierMovement::bezierTime
	float ___bezierTime_8;
	// UnityEngine.GameObject BezierMovement::endObject
	GameObject_t1756533147 * ___endObject_9;
	// System.Boolean BezierMovement::isMoving
	bool ___isMoving_10;
	// UnityEngine.GameObject BezierMovement::bag
	GameObject_t1756533147 * ___bag_11;
	// System.Single BezierMovement::speed
	float ___speed_12;
	// UnityEngine.Vector3 BezierMovement::newPos
	Vector3_t2243707580  ___newPos_13;
	// System.Single BezierMovement::y
	float ___y_14;

public:
	inline static int32_t get_offset_of_startPoint_2() { return static_cast<int32_t>(offsetof(BezierMovement_t2550636266, ___startPoint_2)); }
	inline Vector3_t2243707580  get_startPoint_2() const { return ___startPoint_2; }
	inline Vector3_t2243707580 * get_address_of_startPoint_2() { return &___startPoint_2; }
	inline void set_startPoint_2(Vector3_t2243707580  value)
	{
		___startPoint_2 = value;
	}

	inline static int32_t get_offset_of_controlX_3() { return static_cast<int32_t>(offsetof(BezierMovement_t2550636266, ___controlX_3)); }
	inline float get_controlX_3() const { return ___controlX_3; }
	inline float* get_address_of_controlX_3() { return &___controlX_3; }
	inline void set_controlX_3(float value)
	{
		___controlX_3 = value;
	}

	inline static int32_t get_offset_of_controlY_4() { return static_cast<int32_t>(offsetof(BezierMovement_t2550636266, ___controlY_4)); }
	inline float get_controlY_4() const { return ___controlY_4; }
	inline float* get_address_of_controlY_4() { return &___controlY_4; }
	inline void set_controlY_4(float value)
	{
		___controlY_4 = value;
	}

	inline static int32_t get_offset_of_endPoint_5() { return static_cast<int32_t>(offsetof(BezierMovement_t2550636266, ___endPoint_5)); }
	inline Vector3_t2243707580  get_endPoint_5() const { return ___endPoint_5; }
	inline Vector3_t2243707580 * get_address_of_endPoint_5() { return &___endPoint_5; }
	inline void set_endPoint_5(Vector3_t2243707580  value)
	{
		___endPoint_5 = value;
	}

	inline static int32_t get_offset_of_curveX_6() { return static_cast<int32_t>(offsetof(BezierMovement_t2550636266, ___curveX_6)); }
	inline float get_curveX_6() const { return ___curveX_6; }
	inline float* get_address_of_curveX_6() { return &___curveX_6; }
	inline void set_curveX_6(float value)
	{
		___curveX_6 = value;
	}

	inline static int32_t get_offset_of_curveY_7() { return static_cast<int32_t>(offsetof(BezierMovement_t2550636266, ___curveY_7)); }
	inline float get_curveY_7() const { return ___curveY_7; }
	inline float* get_address_of_curveY_7() { return &___curveY_7; }
	inline void set_curveY_7(float value)
	{
		___curveY_7 = value;
	}

	inline static int32_t get_offset_of_bezierTime_8() { return static_cast<int32_t>(offsetof(BezierMovement_t2550636266, ___bezierTime_8)); }
	inline float get_bezierTime_8() const { return ___bezierTime_8; }
	inline float* get_address_of_bezierTime_8() { return &___bezierTime_8; }
	inline void set_bezierTime_8(float value)
	{
		___bezierTime_8 = value;
	}

	inline static int32_t get_offset_of_endObject_9() { return static_cast<int32_t>(offsetof(BezierMovement_t2550636266, ___endObject_9)); }
	inline GameObject_t1756533147 * get_endObject_9() const { return ___endObject_9; }
	inline GameObject_t1756533147 ** get_address_of_endObject_9() { return &___endObject_9; }
	inline void set_endObject_9(GameObject_t1756533147 * value)
	{
		___endObject_9 = value;
		Il2CppCodeGenWriteBarrier(&___endObject_9, value);
	}

	inline static int32_t get_offset_of_isMoving_10() { return static_cast<int32_t>(offsetof(BezierMovement_t2550636266, ___isMoving_10)); }
	inline bool get_isMoving_10() const { return ___isMoving_10; }
	inline bool* get_address_of_isMoving_10() { return &___isMoving_10; }
	inline void set_isMoving_10(bool value)
	{
		___isMoving_10 = value;
	}

	inline static int32_t get_offset_of_bag_11() { return static_cast<int32_t>(offsetof(BezierMovement_t2550636266, ___bag_11)); }
	inline GameObject_t1756533147 * get_bag_11() const { return ___bag_11; }
	inline GameObject_t1756533147 ** get_address_of_bag_11() { return &___bag_11; }
	inline void set_bag_11(GameObject_t1756533147 * value)
	{
		___bag_11 = value;
		Il2CppCodeGenWriteBarrier(&___bag_11, value);
	}

	inline static int32_t get_offset_of_speed_12() { return static_cast<int32_t>(offsetof(BezierMovement_t2550636266, ___speed_12)); }
	inline float get_speed_12() const { return ___speed_12; }
	inline float* get_address_of_speed_12() { return &___speed_12; }
	inline void set_speed_12(float value)
	{
		___speed_12 = value;
	}

	inline static int32_t get_offset_of_newPos_13() { return static_cast<int32_t>(offsetof(BezierMovement_t2550636266, ___newPos_13)); }
	inline Vector3_t2243707580  get_newPos_13() const { return ___newPos_13; }
	inline Vector3_t2243707580 * get_address_of_newPos_13() { return &___newPos_13; }
	inline void set_newPos_13(Vector3_t2243707580  value)
	{
		___newPos_13 = value;
	}

	inline static int32_t get_offset_of_y_14() { return static_cast<int32_t>(offsetof(BezierMovement_t2550636266, ___y_14)); }
	inline float get_y_14() const { return ___y_14; }
	inline float* get_address_of_y_14() { return &___y_14; }
	inline void set_y_14(float value)
	{
		___y_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
