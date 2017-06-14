#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Sound
struct Sound_t826716933;
// System.Collections.Generic.List`1<UnityEngine.AudioSource>
struct List_1_t504227755;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.UI.Slider
struct Slider_t297367283;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Sound
struct  Sound_t826716933  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.AudioSource> Sound::musicAudioSources
	List_1_t504227755 * ___musicAudioSources_3;
	// System.Collections.Generic.List`1<UnityEngine.AudioSource> Sound::soundAudioSources
	List_1_t504227755 * ___soundAudioSources_4;
	// UnityEngine.Transform Sound::bgm
	Transform_t3275118058 * ___bgm_5;
	// UnityEngine.Transform Sound::sfx
	Transform_t3275118058 * ___sfx_6;
	// UnityEngine.UI.Slider Sound::SoundSlider
	Slider_t297367283 * ___SoundSlider_7;
	// UnityEngine.UI.Slider Sound::MusicSlider
	Slider_t297367283 * ___MusicSlider_8;
	// UnityEngine.AudioSource Sound::playingMusic
	AudioSource_t1135106623 * ___playingMusic_9;
	// UnityEngine.AudioSource Sound::start
	AudioSource_t1135106623 * ___start_10;

public:
	inline static int32_t get_offset_of_musicAudioSources_3() { return static_cast<int32_t>(offsetof(Sound_t826716933, ___musicAudioSources_3)); }
	inline List_1_t504227755 * get_musicAudioSources_3() const { return ___musicAudioSources_3; }
	inline List_1_t504227755 ** get_address_of_musicAudioSources_3() { return &___musicAudioSources_3; }
	inline void set_musicAudioSources_3(List_1_t504227755 * value)
	{
		___musicAudioSources_3 = value;
		Il2CppCodeGenWriteBarrier(&___musicAudioSources_3, value);
	}

	inline static int32_t get_offset_of_soundAudioSources_4() { return static_cast<int32_t>(offsetof(Sound_t826716933, ___soundAudioSources_4)); }
	inline List_1_t504227755 * get_soundAudioSources_4() const { return ___soundAudioSources_4; }
	inline List_1_t504227755 ** get_address_of_soundAudioSources_4() { return &___soundAudioSources_4; }
	inline void set_soundAudioSources_4(List_1_t504227755 * value)
	{
		___soundAudioSources_4 = value;
		Il2CppCodeGenWriteBarrier(&___soundAudioSources_4, value);
	}

	inline static int32_t get_offset_of_bgm_5() { return static_cast<int32_t>(offsetof(Sound_t826716933, ___bgm_5)); }
	inline Transform_t3275118058 * get_bgm_5() const { return ___bgm_5; }
	inline Transform_t3275118058 ** get_address_of_bgm_5() { return &___bgm_5; }
	inline void set_bgm_5(Transform_t3275118058 * value)
	{
		___bgm_5 = value;
		Il2CppCodeGenWriteBarrier(&___bgm_5, value);
	}

	inline static int32_t get_offset_of_sfx_6() { return static_cast<int32_t>(offsetof(Sound_t826716933, ___sfx_6)); }
	inline Transform_t3275118058 * get_sfx_6() const { return ___sfx_6; }
	inline Transform_t3275118058 ** get_address_of_sfx_6() { return &___sfx_6; }
	inline void set_sfx_6(Transform_t3275118058 * value)
	{
		___sfx_6 = value;
		Il2CppCodeGenWriteBarrier(&___sfx_6, value);
	}

	inline static int32_t get_offset_of_SoundSlider_7() { return static_cast<int32_t>(offsetof(Sound_t826716933, ___SoundSlider_7)); }
	inline Slider_t297367283 * get_SoundSlider_7() const { return ___SoundSlider_7; }
	inline Slider_t297367283 ** get_address_of_SoundSlider_7() { return &___SoundSlider_7; }
	inline void set_SoundSlider_7(Slider_t297367283 * value)
	{
		___SoundSlider_7 = value;
		Il2CppCodeGenWriteBarrier(&___SoundSlider_7, value);
	}

	inline static int32_t get_offset_of_MusicSlider_8() { return static_cast<int32_t>(offsetof(Sound_t826716933, ___MusicSlider_8)); }
	inline Slider_t297367283 * get_MusicSlider_8() const { return ___MusicSlider_8; }
	inline Slider_t297367283 ** get_address_of_MusicSlider_8() { return &___MusicSlider_8; }
	inline void set_MusicSlider_8(Slider_t297367283 * value)
	{
		___MusicSlider_8 = value;
		Il2CppCodeGenWriteBarrier(&___MusicSlider_8, value);
	}

	inline static int32_t get_offset_of_playingMusic_9() { return static_cast<int32_t>(offsetof(Sound_t826716933, ___playingMusic_9)); }
	inline AudioSource_t1135106623 * get_playingMusic_9() const { return ___playingMusic_9; }
	inline AudioSource_t1135106623 ** get_address_of_playingMusic_9() { return &___playingMusic_9; }
	inline void set_playingMusic_9(AudioSource_t1135106623 * value)
	{
		___playingMusic_9 = value;
		Il2CppCodeGenWriteBarrier(&___playingMusic_9, value);
	}

	inline static int32_t get_offset_of_start_10() { return static_cast<int32_t>(offsetof(Sound_t826716933, ___start_10)); }
	inline AudioSource_t1135106623 * get_start_10() const { return ___start_10; }
	inline AudioSource_t1135106623 ** get_address_of_start_10() { return &___start_10; }
	inline void set_start_10(AudioSource_t1135106623 * value)
	{
		___start_10 = value;
		Il2CppCodeGenWriteBarrier(&___start_10, value);
	}
};

struct Sound_t826716933_StaticFields
{
public:
	// Sound Sound::instance
	Sound_t826716933 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(Sound_t826716933_StaticFields, ___instance_2)); }
	inline Sound_t826716933 * get_instance_2() const { return ___instance_2; }
	inline Sound_t826716933 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(Sound_t826716933 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
