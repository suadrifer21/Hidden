#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalRuby.SoundManagerNamespace.LoopingAudioSource
struct  LoopingAudioSource_t3433138137  : public Il2CppObject
{
public:
	// UnityEngine.AudioSource DigitalRuby.SoundManagerNamespace.LoopingAudioSource::<AudioSource>k__BackingField
	AudioSource_t1135106623 * ___U3CAudioSourceU3Ek__BackingField_0;
	// System.Single DigitalRuby.SoundManagerNamespace.LoopingAudioSource::<TargetVolume>k__BackingField
	float ___U3CTargetVolumeU3Ek__BackingField_1;
	// System.Single DigitalRuby.SoundManagerNamespace.LoopingAudioSource::<OriginalTargetVolume>k__BackingField
	float ___U3COriginalTargetVolumeU3Ek__BackingField_2;
	// System.Boolean DigitalRuby.SoundManagerNamespace.LoopingAudioSource::<Stopping>k__BackingField
	bool ___U3CStoppingU3Ek__BackingField_3;
	// System.Boolean DigitalRuby.SoundManagerNamespace.LoopingAudioSource::<Persist>k__BackingField
	bool ___U3CPersistU3Ek__BackingField_4;
	// System.Int32 DigitalRuby.SoundManagerNamespace.LoopingAudioSource::<Tag>k__BackingField
	int32_t ___U3CTagU3Ek__BackingField_5;
	// System.Single DigitalRuby.SoundManagerNamespace.LoopingAudioSource::startVolume
	float ___startVolume_6;
	// System.Single DigitalRuby.SoundManagerNamespace.LoopingAudioSource::startMultiplier
	float ___startMultiplier_7;
	// System.Single DigitalRuby.SoundManagerNamespace.LoopingAudioSource::stopMultiplier
	float ___stopMultiplier_8;
	// System.Single DigitalRuby.SoundManagerNamespace.LoopingAudioSource::currentMultiplier
	float ___currentMultiplier_9;
	// System.Single DigitalRuby.SoundManagerNamespace.LoopingAudioSource::timestamp
	float ___timestamp_10;
	// System.Boolean DigitalRuby.SoundManagerNamespace.LoopingAudioSource::paused
	bool ___paused_11;

public:
	inline static int32_t get_offset_of_U3CAudioSourceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LoopingAudioSource_t3433138137, ___U3CAudioSourceU3Ek__BackingField_0)); }
	inline AudioSource_t1135106623 * get_U3CAudioSourceU3Ek__BackingField_0() const { return ___U3CAudioSourceU3Ek__BackingField_0; }
	inline AudioSource_t1135106623 ** get_address_of_U3CAudioSourceU3Ek__BackingField_0() { return &___U3CAudioSourceU3Ek__BackingField_0; }
	inline void set_U3CAudioSourceU3Ek__BackingField_0(AudioSource_t1135106623 * value)
	{
		___U3CAudioSourceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAudioSourceU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CTargetVolumeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LoopingAudioSource_t3433138137, ___U3CTargetVolumeU3Ek__BackingField_1)); }
	inline float get_U3CTargetVolumeU3Ek__BackingField_1() const { return ___U3CTargetVolumeU3Ek__BackingField_1; }
	inline float* get_address_of_U3CTargetVolumeU3Ek__BackingField_1() { return &___U3CTargetVolumeU3Ek__BackingField_1; }
	inline void set_U3CTargetVolumeU3Ek__BackingField_1(float value)
	{
		___U3CTargetVolumeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3COriginalTargetVolumeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(LoopingAudioSource_t3433138137, ___U3COriginalTargetVolumeU3Ek__BackingField_2)); }
	inline float get_U3COriginalTargetVolumeU3Ek__BackingField_2() const { return ___U3COriginalTargetVolumeU3Ek__BackingField_2; }
	inline float* get_address_of_U3COriginalTargetVolumeU3Ek__BackingField_2() { return &___U3COriginalTargetVolumeU3Ek__BackingField_2; }
	inline void set_U3COriginalTargetVolumeU3Ek__BackingField_2(float value)
	{
		___U3COriginalTargetVolumeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CStoppingU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LoopingAudioSource_t3433138137, ___U3CStoppingU3Ek__BackingField_3)); }
	inline bool get_U3CStoppingU3Ek__BackingField_3() const { return ___U3CStoppingU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CStoppingU3Ek__BackingField_3() { return &___U3CStoppingU3Ek__BackingField_3; }
	inline void set_U3CStoppingU3Ek__BackingField_3(bool value)
	{
		___U3CStoppingU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CPersistU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(LoopingAudioSource_t3433138137, ___U3CPersistU3Ek__BackingField_4)); }
	inline bool get_U3CPersistU3Ek__BackingField_4() const { return ___U3CPersistU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CPersistU3Ek__BackingField_4() { return &___U3CPersistU3Ek__BackingField_4; }
	inline void set_U3CPersistU3Ek__BackingField_4(bool value)
	{
		___U3CPersistU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CTagU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(LoopingAudioSource_t3433138137, ___U3CTagU3Ek__BackingField_5)); }
	inline int32_t get_U3CTagU3Ek__BackingField_5() const { return ___U3CTagU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CTagU3Ek__BackingField_5() { return &___U3CTagU3Ek__BackingField_5; }
	inline void set_U3CTagU3Ek__BackingField_5(int32_t value)
	{
		___U3CTagU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_startVolume_6() { return static_cast<int32_t>(offsetof(LoopingAudioSource_t3433138137, ___startVolume_6)); }
	inline float get_startVolume_6() const { return ___startVolume_6; }
	inline float* get_address_of_startVolume_6() { return &___startVolume_6; }
	inline void set_startVolume_6(float value)
	{
		___startVolume_6 = value;
	}

	inline static int32_t get_offset_of_startMultiplier_7() { return static_cast<int32_t>(offsetof(LoopingAudioSource_t3433138137, ___startMultiplier_7)); }
	inline float get_startMultiplier_7() const { return ___startMultiplier_7; }
	inline float* get_address_of_startMultiplier_7() { return &___startMultiplier_7; }
	inline void set_startMultiplier_7(float value)
	{
		___startMultiplier_7 = value;
	}

	inline static int32_t get_offset_of_stopMultiplier_8() { return static_cast<int32_t>(offsetof(LoopingAudioSource_t3433138137, ___stopMultiplier_8)); }
	inline float get_stopMultiplier_8() const { return ___stopMultiplier_8; }
	inline float* get_address_of_stopMultiplier_8() { return &___stopMultiplier_8; }
	inline void set_stopMultiplier_8(float value)
	{
		___stopMultiplier_8 = value;
	}

	inline static int32_t get_offset_of_currentMultiplier_9() { return static_cast<int32_t>(offsetof(LoopingAudioSource_t3433138137, ___currentMultiplier_9)); }
	inline float get_currentMultiplier_9() const { return ___currentMultiplier_9; }
	inline float* get_address_of_currentMultiplier_9() { return &___currentMultiplier_9; }
	inline void set_currentMultiplier_9(float value)
	{
		___currentMultiplier_9 = value;
	}

	inline static int32_t get_offset_of_timestamp_10() { return static_cast<int32_t>(offsetof(LoopingAudioSource_t3433138137, ___timestamp_10)); }
	inline float get_timestamp_10() const { return ___timestamp_10; }
	inline float* get_address_of_timestamp_10() { return &___timestamp_10; }
	inline void set_timestamp_10(float value)
	{
		___timestamp_10 = value;
	}

	inline static int32_t get_offset_of_paused_11() { return static_cast<int32_t>(offsetof(LoopingAudioSource_t3433138137, ___paused_11)); }
	inline bool get_paused_11() const { return ___paused_11; }
	inline bool* get_address_of_paused_11() { return &___paused_11; }
	inline void set_paused_11(bool value)
	{
		___paused_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
