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
// DigitalRuby.SoundManagerNamespace.SoundManager
struct SoundManager_t167298502;
// System.Collections.Generic.List`1<DigitalRuby.SoundManagerNamespace.LoopingAudioSource>
struct List_1_t2802259269;
// System.Collections.Generic.List`1<UnityEngine.AudioSource>
struct List_1_t504227755;
// System.Collections.Generic.HashSet`1<DigitalRuby.SoundManagerNamespace.LoopingAudioSource>
struct HashSet_1_t1766598991;
// System.Collections.Generic.Dictionary`2<UnityEngine.AudioClip,System.Collections.Generic.List`1<System.Single>>
struct Dictionary_2_t3921379365;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalRuby.SoundManagerNamespace.SoundManager
struct  SoundManager_t167298502  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct SoundManager_t167298502_StaticFields
{
public:
	// System.Int32 DigitalRuby.SoundManagerNamespace.SoundManager::persistTag
	int32_t ___persistTag_2;
	// System.Boolean DigitalRuby.SoundManagerNamespace.SoundManager::needsInitialize
	bool ___needsInitialize_3;
	// UnityEngine.GameObject DigitalRuby.SoundManagerNamespace.SoundManager::root
	GameObject_t1756533147 * ___root_4;
	// DigitalRuby.SoundManagerNamespace.SoundManager DigitalRuby.SoundManagerNamespace.SoundManager::instance
	SoundManager_t167298502 * ___instance_5;
	// System.Collections.Generic.List`1<DigitalRuby.SoundManagerNamespace.LoopingAudioSource> DigitalRuby.SoundManagerNamespace.SoundManager::music
	List_1_t2802259269 * ___music_6;
	// System.Collections.Generic.List`1<UnityEngine.AudioSource> DigitalRuby.SoundManagerNamespace.SoundManager::musicOneShot
	List_1_t504227755 * ___musicOneShot_7;
	// System.Collections.Generic.List`1<DigitalRuby.SoundManagerNamespace.LoopingAudioSource> DigitalRuby.SoundManagerNamespace.SoundManager::sounds
	List_1_t2802259269 * ___sounds_8;
	// System.Collections.Generic.HashSet`1<DigitalRuby.SoundManagerNamespace.LoopingAudioSource> DigitalRuby.SoundManagerNamespace.SoundManager::persistedSounds
	HashSet_1_t1766598991 * ___persistedSounds_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.AudioClip,System.Collections.Generic.List`1<System.Single>> DigitalRuby.SoundManagerNamespace.SoundManager::soundsOneShot
	Dictionary_2_t3921379365 * ___soundsOneShot_10;
	// System.Single DigitalRuby.SoundManagerNamespace.SoundManager::soundVolume
	float ___soundVolume_11;
	// System.Single DigitalRuby.SoundManagerNamespace.SoundManager::musicVolume
	float ___musicVolume_12;
	// System.Boolean DigitalRuby.SoundManagerNamespace.SoundManager::updated
	bool ___updated_13;
	// System.Boolean DigitalRuby.SoundManagerNamespace.SoundManager::pauseSoundsOnApplicationPause
	bool ___pauseSoundsOnApplicationPause_14;
	// System.Int32 DigitalRuby.SoundManagerNamespace.SoundManager::MaxDuplicateAudioClips
	int32_t ___MaxDuplicateAudioClips_15;

public:
	inline static int32_t get_offset_of_persistTag_2() { return static_cast<int32_t>(offsetof(SoundManager_t167298502_StaticFields, ___persistTag_2)); }
	inline int32_t get_persistTag_2() const { return ___persistTag_2; }
	inline int32_t* get_address_of_persistTag_2() { return &___persistTag_2; }
	inline void set_persistTag_2(int32_t value)
	{
		___persistTag_2 = value;
	}

	inline static int32_t get_offset_of_needsInitialize_3() { return static_cast<int32_t>(offsetof(SoundManager_t167298502_StaticFields, ___needsInitialize_3)); }
	inline bool get_needsInitialize_3() const { return ___needsInitialize_3; }
	inline bool* get_address_of_needsInitialize_3() { return &___needsInitialize_3; }
	inline void set_needsInitialize_3(bool value)
	{
		___needsInitialize_3 = value;
	}

	inline static int32_t get_offset_of_root_4() { return static_cast<int32_t>(offsetof(SoundManager_t167298502_StaticFields, ___root_4)); }
	inline GameObject_t1756533147 * get_root_4() const { return ___root_4; }
	inline GameObject_t1756533147 ** get_address_of_root_4() { return &___root_4; }
	inline void set_root_4(GameObject_t1756533147 * value)
	{
		___root_4 = value;
		Il2CppCodeGenWriteBarrier(&___root_4, value);
	}

	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(SoundManager_t167298502_StaticFields, ___instance_5)); }
	inline SoundManager_t167298502 * get_instance_5() const { return ___instance_5; }
	inline SoundManager_t167298502 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(SoundManager_t167298502 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}

	inline static int32_t get_offset_of_music_6() { return static_cast<int32_t>(offsetof(SoundManager_t167298502_StaticFields, ___music_6)); }
	inline List_1_t2802259269 * get_music_6() const { return ___music_6; }
	inline List_1_t2802259269 ** get_address_of_music_6() { return &___music_6; }
	inline void set_music_6(List_1_t2802259269 * value)
	{
		___music_6 = value;
		Il2CppCodeGenWriteBarrier(&___music_6, value);
	}

	inline static int32_t get_offset_of_musicOneShot_7() { return static_cast<int32_t>(offsetof(SoundManager_t167298502_StaticFields, ___musicOneShot_7)); }
	inline List_1_t504227755 * get_musicOneShot_7() const { return ___musicOneShot_7; }
	inline List_1_t504227755 ** get_address_of_musicOneShot_7() { return &___musicOneShot_7; }
	inline void set_musicOneShot_7(List_1_t504227755 * value)
	{
		___musicOneShot_7 = value;
		Il2CppCodeGenWriteBarrier(&___musicOneShot_7, value);
	}

	inline static int32_t get_offset_of_sounds_8() { return static_cast<int32_t>(offsetof(SoundManager_t167298502_StaticFields, ___sounds_8)); }
	inline List_1_t2802259269 * get_sounds_8() const { return ___sounds_8; }
	inline List_1_t2802259269 ** get_address_of_sounds_8() { return &___sounds_8; }
	inline void set_sounds_8(List_1_t2802259269 * value)
	{
		___sounds_8 = value;
		Il2CppCodeGenWriteBarrier(&___sounds_8, value);
	}

	inline static int32_t get_offset_of_persistedSounds_9() { return static_cast<int32_t>(offsetof(SoundManager_t167298502_StaticFields, ___persistedSounds_9)); }
	inline HashSet_1_t1766598991 * get_persistedSounds_9() const { return ___persistedSounds_9; }
	inline HashSet_1_t1766598991 ** get_address_of_persistedSounds_9() { return &___persistedSounds_9; }
	inline void set_persistedSounds_9(HashSet_1_t1766598991 * value)
	{
		___persistedSounds_9 = value;
		Il2CppCodeGenWriteBarrier(&___persistedSounds_9, value);
	}

	inline static int32_t get_offset_of_soundsOneShot_10() { return static_cast<int32_t>(offsetof(SoundManager_t167298502_StaticFields, ___soundsOneShot_10)); }
	inline Dictionary_2_t3921379365 * get_soundsOneShot_10() const { return ___soundsOneShot_10; }
	inline Dictionary_2_t3921379365 ** get_address_of_soundsOneShot_10() { return &___soundsOneShot_10; }
	inline void set_soundsOneShot_10(Dictionary_2_t3921379365 * value)
	{
		___soundsOneShot_10 = value;
		Il2CppCodeGenWriteBarrier(&___soundsOneShot_10, value);
	}

	inline static int32_t get_offset_of_soundVolume_11() { return static_cast<int32_t>(offsetof(SoundManager_t167298502_StaticFields, ___soundVolume_11)); }
	inline float get_soundVolume_11() const { return ___soundVolume_11; }
	inline float* get_address_of_soundVolume_11() { return &___soundVolume_11; }
	inline void set_soundVolume_11(float value)
	{
		___soundVolume_11 = value;
	}

	inline static int32_t get_offset_of_musicVolume_12() { return static_cast<int32_t>(offsetof(SoundManager_t167298502_StaticFields, ___musicVolume_12)); }
	inline float get_musicVolume_12() const { return ___musicVolume_12; }
	inline float* get_address_of_musicVolume_12() { return &___musicVolume_12; }
	inline void set_musicVolume_12(float value)
	{
		___musicVolume_12 = value;
	}

	inline static int32_t get_offset_of_updated_13() { return static_cast<int32_t>(offsetof(SoundManager_t167298502_StaticFields, ___updated_13)); }
	inline bool get_updated_13() const { return ___updated_13; }
	inline bool* get_address_of_updated_13() { return &___updated_13; }
	inline void set_updated_13(bool value)
	{
		___updated_13 = value;
	}

	inline static int32_t get_offset_of_pauseSoundsOnApplicationPause_14() { return static_cast<int32_t>(offsetof(SoundManager_t167298502_StaticFields, ___pauseSoundsOnApplicationPause_14)); }
	inline bool get_pauseSoundsOnApplicationPause_14() const { return ___pauseSoundsOnApplicationPause_14; }
	inline bool* get_address_of_pauseSoundsOnApplicationPause_14() { return &___pauseSoundsOnApplicationPause_14; }
	inline void set_pauseSoundsOnApplicationPause_14(bool value)
	{
		___pauseSoundsOnApplicationPause_14 = value;
	}

	inline static int32_t get_offset_of_MaxDuplicateAudioClips_15() { return static_cast<int32_t>(offsetof(SoundManager_t167298502_StaticFields, ___MaxDuplicateAudioClips_15)); }
	inline int32_t get_MaxDuplicateAudioClips_15() const { return ___MaxDuplicateAudioClips_15; }
	inline int32_t* get_address_of_MaxDuplicateAudioClips_15() { return &___MaxDuplicateAudioClips_15; }
	inline void set_MaxDuplicateAudioClips_15(int32_t value)
	{
		___MaxDuplicateAudioClips_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
