﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pointer
struct  Pointer_t2912100777  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Pointer::up
	bool ___up_2;
	// System.Single Pointer::time
	float ___time_3;

public:
	inline static int32_t get_offset_of_up_2() { return static_cast<int32_t>(offsetof(Pointer_t2912100777, ___up_2)); }
	inline bool get_up_2() const { return ___up_2; }
	inline bool* get_address_of_up_2() { return &___up_2; }
	inline void set_up_2(bool value)
	{
		___up_2 = value;
	}

	inline static int32_t get_offset_of_time_3() { return static_cast<int32_t>(offsetof(Pointer_t2912100777, ___time_3)); }
	inline float get_time_3() const { return ___time_3; }
	inline float* get_address_of_time_3() { return &___time_3; }
	inline void set_time_3(float value)
	{
		___time_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif