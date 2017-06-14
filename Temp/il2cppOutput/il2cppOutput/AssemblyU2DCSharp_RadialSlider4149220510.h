#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t2042527209;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RadialSlider
struct  RadialSlider_t4149220510  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image RadialSlider::circularSilder
	Image_t2042527209 * ___circularSilder_2;
	// System.Single RadialSlider::time
	float ___time_3;

public:
	inline static int32_t get_offset_of_circularSilder_2() { return static_cast<int32_t>(offsetof(RadialSlider_t4149220510, ___circularSilder_2)); }
	inline Image_t2042527209 * get_circularSilder_2() const { return ___circularSilder_2; }
	inline Image_t2042527209 ** get_address_of_circularSilder_2() { return &___circularSilder_2; }
	inline void set_circularSilder_2(Image_t2042527209 * value)
	{
		___circularSilder_2 = value;
		Il2CppCodeGenWriteBarrier(&___circularSilder_2, value);
	}

	inline static int32_t get_offset_of_time_3() { return static_cast<int32_t>(offsetof(RadialSlider_t4149220510, ___time_3)); }
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
