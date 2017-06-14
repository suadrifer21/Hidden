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

// ScorePopup
struct  ScorePopup_t171495204  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ScorePopup::alpha
	float ___alpha_2;
	// UnityEngine.Color ScorePopup::color
	Color_t2020392075  ___color_3;
	// System.Boolean ScorePopup::show
	bool ___show_4;
	// System.Single ScorePopup::addedScore
	float ___addedScore_5;

public:
	inline static int32_t get_offset_of_alpha_2() { return static_cast<int32_t>(offsetof(ScorePopup_t171495204, ___alpha_2)); }
	inline float get_alpha_2() const { return ___alpha_2; }
	inline float* get_address_of_alpha_2() { return &___alpha_2; }
	inline void set_alpha_2(float value)
	{
		___alpha_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(ScorePopup_t171495204, ___color_3)); }
	inline Color_t2020392075  get_color_3() const { return ___color_3; }
	inline Color_t2020392075 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(Color_t2020392075  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_show_4() { return static_cast<int32_t>(offsetof(ScorePopup_t171495204, ___show_4)); }
	inline bool get_show_4() const { return ___show_4; }
	inline bool* get_address_of_show_4() { return &___show_4; }
	inline void set_show_4(bool value)
	{
		___show_4 = value;
	}

	inline static int32_t get_offset_of_addedScore_5() { return static_cast<int32_t>(offsetof(ScorePopup_t171495204, ___addedScore_5)); }
	inline float get_addedScore_5() const { return ___addedScore_5; }
	inline float* get_address_of_addedScore_5() { return &___addedScore_5; }
	inline void set_addedScore_5(float value)
	{
		___addedScore_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
