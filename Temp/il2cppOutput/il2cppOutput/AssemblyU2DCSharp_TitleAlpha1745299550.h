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
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TitleAlpha
struct  TitleAlpha_t1745299550  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean TitleAlpha::zoom
	bool ___zoom_2;
	// System.Single TitleAlpha::alpha
	float ___alpha_3;
	// System.Single TitleAlpha::alphaInc
	float ___alphaInc_4;
	// System.Single TitleAlpha::min
	float ___min_5;
	// System.Single TitleAlpha::max
	float ___max_6;
	// UnityEngine.Color TitleAlpha::color
	Color_t2020392075  ___color_7;
	// UnityEngine.GameObject TitleAlpha::continueText
	GameObject_t1756533147 * ___continueText_8;
	// UnityEngine.GameObject TitleAlpha::clickToNext
	GameObject_t1756533147 * ___clickToNext_9;

public:
	inline static int32_t get_offset_of_zoom_2() { return static_cast<int32_t>(offsetof(TitleAlpha_t1745299550, ___zoom_2)); }
	inline bool get_zoom_2() const { return ___zoom_2; }
	inline bool* get_address_of_zoom_2() { return &___zoom_2; }
	inline void set_zoom_2(bool value)
	{
		___zoom_2 = value;
	}

	inline static int32_t get_offset_of_alpha_3() { return static_cast<int32_t>(offsetof(TitleAlpha_t1745299550, ___alpha_3)); }
	inline float get_alpha_3() const { return ___alpha_3; }
	inline float* get_address_of_alpha_3() { return &___alpha_3; }
	inline void set_alpha_3(float value)
	{
		___alpha_3 = value;
	}

	inline static int32_t get_offset_of_alphaInc_4() { return static_cast<int32_t>(offsetof(TitleAlpha_t1745299550, ___alphaInc_4)); }
	inline float get_alphaInc_4() const { return ___alphaInc_4; }
	inline float* get_address_of_alphaInc_4() { return &___alphaInc_4; }
	inline void set_alphaInc_4(float value)
	{
		___alphaInc_4 = value;
	}

	inline static int32_t get_offset_of_min_5() { return static_cast<int32_t>(offsetof(TitleAlpha_t1745299550, ___min_5)); }
	inline float get_min_5() const { return ___min_5; }
	inline float* get_address_of_min_5() { return &___min_5; }
	inline void set_min_5(float value)
	{
		___min_5 = value;
	}

	inline static int32_t get_offset_of_max_6() { return static_cast<int32_t>(offsetof(TitleAlpha_t1745299550, ___max_6)); }
	inline float get_max_6() const { return ___max_6; }
	inline float* get_address_of_max_6() { return &___max_6; }
	inline void set_max_6(float value)
	{
		___max_6 = value;
	}

	inline static int32_t get_offset_of_color_7() { return static_cast<int32_t>(offsetof(TitleAlpha_t1745299550, ___color_7)); }
	inline Color_t2020392075  get_color_7() const { return ___color_7; }
	inline Color_t2020392075 * get_address_of_color_7() { return &___color_7; }
	inline void set_color_7(Color_t2020392075  value)
	{
		___color_7 = value;
	}

	inline static int32_t get_offset_of_continueText_8() { return static_cast<int32_t>(offsetof(TitleAlpha_t1745299550, ___continueText_8)); }
	inline GameObject_t1756533147 * get_continueText_8() const { return ___continueText_8; }
	inline GameObject_t1756533147 ** get_address_of_continueText_8() { return &___continueText_8; }
	inline void set_continueText_8(GameObject_t1756533147 * value)
	{
		___continueText_8 = value;
		Il2CppCodeGenWriteBarrier(&___continueText_8, value);
	}

	inline static int32_t get_offset_of_clickToNext_9() { return static_cast<int32_t>(offsetof(TitleAlpha_t1745299550, ___clickToNext_9)); }
	inline GameObject_t1756533147 * get_clickToNext_9() const { return ___clickToNext_9; }
	inline GameObject_t1756533147 ** get_address_of_clickToNext_9() { return &___clickToNext_9; }
	inline void set_clickToNext_9(GameObject_t1756533147 * value)
	{
		___clickToNext_9 = value;
		Il2CppCodeGenWriteBarrier(&___clickToNext_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
