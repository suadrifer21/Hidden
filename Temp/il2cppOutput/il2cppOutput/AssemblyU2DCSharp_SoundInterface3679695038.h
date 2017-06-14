#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Slider
struct Slider_t297367283;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SoundInterface
struct  SoundInterface_t3679695038  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Slider SoundInterface::bgmSlider
	Slider_t297367283 * ___bgmSlider_2;
	// UnityEngine.UI.Slider SoundInterface::sfxSlider
	Slider_t297367283 * ___sfxSlider_3;

public:
	inline static int32_t get_offset_of_bgmSlider_2() { return static_cast<int32_t>(offsetof(SoundInterface_t3679695038, ___bgmSlider_2)); }
	inline Slider_t297367283 * get_bgmSlider_2() const { return ___bgmSlider_2; }
	inline Slider_t297367283 ** get_address_of_bgmSlider_2() { return &___bgmSlider_2; }
	inline void set_bgmSlider_2(Slider_t297367283 * value)
	{
		___bgmSlider_2 = value;
		Il2CppCodeGenWriteBarrier(&___bgmSlider_2, value);
	}

	inline static int32_t get_offset_of_sfxSlider_3() { return static_cast<int32_t>(offsetof(SoundInterface_t3679695038, ___sfxSlider_3)); }
	inline Slider_t297367283 * get_sfxSlider_3() const { return ___sfxSlider_3; }
	inline Slider_t297367283 ** get_address_of_sfxSlider_3() { return &___sfxSlider_3; }
	inline void set_sfxSlider_3(Slider_t297367283 * value)
	{
		___sfxSlider_3 = value;
		Il2CppCodeGenWriteBarrier(&___sfxSlider_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
