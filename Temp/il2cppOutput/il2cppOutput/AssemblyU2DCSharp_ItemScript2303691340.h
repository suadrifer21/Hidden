#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ItemScript
struct  ItemScript_t2303691340  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean ItemScript::fadeOut
	bool ___fadeOut_2;
	// UnityEngine.Color ItemScript::color
	Color_t2020392075  ___color_3;
	// System.Single ItemScript::a
	float ___a_4;

public:
	inline static int32_t get_offset_of_fadeOut_2() { return static_cast<int32_t>(offsetof(ItemScript_t2303691340, ___fadeOut_2)); }
	inline bool get_fadeOut_2() const { return ___fadeOut_2; }
	inline bool* get_address_of_fadeOut_2() { return &___fadeOut_2; }
	inline void set_fadeOut_2(bool value)
	{
		___fadeOut_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(ItemScript_t2303691340, ___color_3)); }
	inline Color_t2020392075  get_color_3() const { return ___color_3; }
	inline Color_t2020392075 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(Color_t2020392075  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(ItemScript_t2303691340, ___a_4)); }
	inline float get_a_4() const { return ___a_4; }
	inline float* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(float value)
	{
		___a_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
