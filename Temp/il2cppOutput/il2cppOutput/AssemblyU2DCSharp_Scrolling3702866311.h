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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scrolling
struct  Scrolling_t3702866311  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Scrolling::speed
	float ___speed_2;
	// UnityEngine.GameObject Scrolling::objectCopy
	GameObject_t1756533147 * ___objectCopy_3;
	// System.Single Scrolling::initPos
	float ___initPos_4;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(Scrolling_t3702866311, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_objectCopy_3() { return static_cast<int32_t>(offsetof(Scrolling_t3702866311, ___objectCopy_3)); }
	inline GameObject_t1756533147 * get_objectCopy_3() const { return ___objectCopy_3; }
	inline GameObject_t1756533147 ** get_address_of_objectCopy_3() { return &___objectCopy_3; }
	inline void set_objectCopy_3(GameObject_t1756533147 * value)
	{
		___objectCopy_3 = value;
		Il2CppCodeGenWriteBarrier(&___objectCopy_3, value);
	}

	inline static int32_t get_offset_of_initPos_4() { return static_cast<int32_t>(offsetof(Scrolling_t3702866311, ___initPos_4)); }
	inline float get_initPos_4() const { return ___initPos_4; }
	inline float* get_address_of_initPos_4() { return &___initPos_4; }
	inline void set_initPos_4(float value)
	{
		___initPos_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
