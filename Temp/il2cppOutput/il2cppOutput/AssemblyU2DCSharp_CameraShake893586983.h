#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraShake
struct  CameraShake_t893586983  : public MonoBehaviour_t1158329972
{
public:
	// System.Single CameraShake::curTime
	float ___curTime_2;
	// System.Single CameraShake::shakeTime
	float ___shakeTime_3;
	// System.Single CameraShake::delay
	float ___delay_4;
	// System.Boolean CameraShake::shake
	bool ___shake_5;
	// System.Boolean CameraShake::up
	bool ___up_6;
	// System.Single CameraShake::time
	float ___time_7;
	// UnityEngine.Vector3 CameraShake::shakeForce
	Vector3_t2243707580  ___shakeForce_8;
	// System.Single CameraShake::shaker
	float ___shaker_9;

public:
	inline static int32_t get_offset_of_curTime_2() { return static_cast<int32_t>(offsetof(CameraShake_t893586983, ___curTime_2)); }
	inline float get_curTime_2() const { return ___curTime_2; }
	inline float* get_address_of_curTime_2() { return &___curTime_2; }
	inline void set_curTime_2(float value)
	{
		___curTime_2 = value;
	}

	inline static int32_t get_offset_of_shakeTime_3() { return static_cast<int32_t>(offsetof(CameraShake_t893586983, ___shakeTime_3)); }
	inline float get_shakeTime_3() const { return ___shakeTime_3; }
	inline float* get_address_of_shakeTime_3() { return &___shakeTime_3; }
	inline void set_shakeTime_3(float value)
	{
		___shakeTime_3 = value;
	}

	inline static int32_t get_offset_of_delay_4() { return static_cast<int32_t>(offsetof(CameraShake_t893586983, ___delay_4)); }
	inline float get_delay_4() const { return ___delay_4; }
	inline float* get_address_of_delay_4() { return &___delay_4; }
	inline void set_delay_4(float value)
	{
		___delay_4 = value;
	}

	inline static int32_t get_offset_of_shake_5() { return static_cast<int32_t>(offsetof(CameraShake_t893586983, ___shake_5)); }
	inline bool get_shake_5() const { return ___shake_5; }
	inline bool* get_address_of_shake_5() { return &___shake_5; }
	inline void set_shake_5(bool value)
	{
		___shake_5 = value;
	}

	inline static int32_t get_offset_of_up_6() { return static_cast<int32_t>(offsetof(CameraShake_t893586983, ___up_6)); }
	inline bool get_up_6() const { return ___up_6; }
	inline bool* get_address_of_up_6() { return &___up_6; }
	inline void set_up_6(bool value)
	{
		___up_6 = value;
	}

	inline static int32_t get_offset_of_time_7() { return static_cast<int32_t>(offsetof(CameraShake_t893586983, ___time_7)); }
	inline float get_time_7() const { return ___time_7; }
	inline float* get_address_of_time_7() { return &___time_7; }
	inline void set_time_7(float value)
	{
		___time_7 = value;
	}

	inline static int32_t get_offset_of_shakeForce_8() { return static_cast<int32_t>(offsetof(CameraShake_t893586983, ___shakeForce_8)); }
	inline Vector3_t2243707580  get_shakeForce_8() const { return ___shakeForce_8; }
	inline Vector3_t2243707580 * get_address_of_shakeForce_8() { return &___shakeForce_8; }
	inline void set_shakeForce_8(Vector3_t2243707580  value)
	{
		___shakeForce_8 = value;
	}

	inline static int32_t get_offset_of_shaker_9() { return static_cast<int32_t>(offsetof(CameraShake_t893586983, ___shaker_9)); }
	inline float get_shaker_9() const { return ___shaker_9; }
	inline float* get_address_of_shaker_9() { return &___shaker_9; }
	inline void set_shaker_9(float value)
	{
		___shaker_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
