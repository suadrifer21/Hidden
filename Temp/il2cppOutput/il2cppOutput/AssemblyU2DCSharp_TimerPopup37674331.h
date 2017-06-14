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

// TimerPopup
struct  TimerPopup_t37674331  : public MonoBehaviour_t1158329972
{
public:
	// System.Single TimerPopup::alpha
	float ___alpha_2;
	// UnityEngine.Color TimerPopup::color
	Color_t2020392075  ___color_3;
	// System.Boolean TimerPopup::show
	bool ___show_4;
	// System.Boolean TimerPopup::plus
	bool ___plus_5;
	// System.Single TimerPopup::extra
	float ___extra_6;

public:
	inline static int32_t get_offset_of_alpha_2() { return static_cast<int32_t>(offsetof(TimerPopup_t37674331, ___alpha_2)); }
	inline float get_alpha_2() const { return ___alpha_2; }
	inline float* get_address_of_alpha_2() { return &___alpha_2; }
	inline void set_alpha_2(float value)
	{
		___alpha_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(TimerPopup_t37674331, ___color_3)); }
	inline Color_t2020392075  get_color_3() const { return ___color_3; }
	inline Color_t2020392075 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(Color_t2020392075  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_show_4() { return static_cast<int32_t>(offsetof(TimerPopup_t37674331, ___show_4)); }
	inline bool get_show_4() const { return ___show_4; }
	inline bool* get_address_of_show_4() { return &___show_4; }
	inline void set_show_4(bool value)
	{
		___show_4 = value;
	}

	inline static int32_t get_offset_of_plus_5() { return static_cast<int32_t>(offsetof(TimerPopup_t37674331, ___plus_5)); }
	inline bool get_plus_5() const { return ___plus_5; }
	inline bool* get_address_of_plus_5() { return &___plus_5; }
	inline void set_plus_5(bool value)
	{
		___plus_5 = value;
	}

	inline static int32_t get_offset_of_extra_6() { return static_cast<int32_t>(offsetof(TimerPopup_t37674331, ___extra_6)); }
	inline float get_extra_6() const { return ___extra_6; }
	inline float* get_address_of_extra_6() { return &___extra_6; }
	inline void set_extra_6(float value)
	{
		___extra_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
