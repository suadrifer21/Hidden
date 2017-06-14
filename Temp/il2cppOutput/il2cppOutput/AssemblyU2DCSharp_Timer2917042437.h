#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Timer
struct Timer_t2917042437;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Timer
struct  Timer_t2917042437  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text Timer::timePanel
	Text_t356221433 * ___timePanel_3;
	// System.Single Timer::curTime
	float ___curTime_4;
	// UnityEngine.GameObject Timer::gameOverPanel
	GameObject_t1756533147 * ___gameOverPanel_5;
	// UnityEngine.Transform Timer::addedText
	Transform_t3275118058 * ___addedText_6;
	// System.Single Timer::addedTime
	float ___addedTime_7;

public:
	inline static int32_t get_offset_of_timePanel_3() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___timePanel_3)); }
	inline Text_t356221433 * get_timePanel_3() const { return ___timePanel_3; }
	inline Text_t356221433 ** get_address_of_timePanel_3() { return &___timePanel_3; }
	inline void set_timePanel_3(Text_t356221433 * value)
	{
		___timePanel_3 = value;
		Il2CppCodeGenWriteBarrier(&___timePanel_3, value);
	}

	inline static int32_t get_offset_of_curTime_4() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___curTime_4)); }
	inline float get_curTime_4() const { return ___curTime_4; }
	inline float* get_address_of_curTime_4() { return &___curTime_4; }
	inline void set_curTime_4(float value)
	{
		___curTime_4 = value;
	}

	inline static int32_t get_offset_of_gameOverPanel_5() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___gameOverPanel_5)); }
	inline GameObject_t1756533147 * get_gameOverPanel_5() const { return ___gameOverPanel_5; }
	inline GameObject_t1756533147 ** get_address_of_gameOverPanel_5() { return &___gameOverPanel_5; }
	inline void set_gameOverPanel_5(GameObject_t1756533147 * value)
	{
		___gameOverPanel_5 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverPanel_5, value);
	}

	inline static int32_t get_offset_of_addedText_6() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___addedText_6)); }
	inline Transform_t3275118058 * get_addedText_6() const { return ___addedText_6; }
	inline Transform_t3275118058 ** get_address_of_addedText_6() { return &___addedText_6; }
	inline void set_addedText_6(Transform_t3275118058 * value)
	{
		___addedText_6 = value;
		Il2CppCodeGenWriteBarrier(&___addedText_6, value);
	}

	inline static int32_t get_offset_of_addedTime_7() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___addedTime_7)); }
	inline float get_addedTime_7() const { return ___addedTime_7; }
	inline float* get_address_of_addedTime_7() { return &___addedTime_7; }
	inline void set_addedTime_7(float value)
	{
		___addedTime_7 = value;
	}
};

struct Timer_t2917042437_StaticFields
{
public:
	// Timer Timer::instance
	Timer_t2917042437 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(Timer_t2917042437_StaticFields, ___instance_2)); }
	inline Timer_t2917042437 * get_instance_2() const { return ___instance_2; }
	inline Timer_t2917042437 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(Timer_t2917042437 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
