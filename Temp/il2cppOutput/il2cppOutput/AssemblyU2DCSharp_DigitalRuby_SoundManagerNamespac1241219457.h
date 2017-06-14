#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1445631064;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalRuby.SoundManagerNamespace.SoundManager/<RemoveVolumeFromClip>c__Iterator0
struct  U3CRemoveVolumeFromClipU3Ec__Iterator0_t1241219457  : public Il2CppObject
{
public:
	// UnityEngine.AudioClip DigitalRuby.SoundManagerNamespace.SoundManager/<RemoveVolumeFromClip>c__Iterator0::clip
	AudioClip_t1932558630 * ___clip_0;
	// System.Collections.Generic.List`1<System.Single> DigitalRuby.SoundManagerNamespace.SoundManager/<RemoveVolumeFromClip>c__Iterator0::<volumes>__0
	List_1_t1445631064 * ___U3CvolumesU3E__0_1;
	// System.Single DigitalRuby.SoundManagerNamespace.SoundManager/<RemoveVolumeFromClip>c__Iterator0::volume
	float ___volume_2;
	// System.Object DigitalRuby.SoundManagerNamespace.SoundManager/<RemoveVolumeFromClip>c__Iterator0::$current
	Il2CppObject * ___U24current_3;
	// System.Boolean DigitalRuby.SoundManagerNamespace.SoundManager/<RemoveVolumeFromClip>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 DigitalRuby.SoundManagerNamespace.SoundManager/<RemoveVolumeFromClip>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_clip_0() { return static_cast<int32_t>(offsetof(U3CRemoveVolumeFromClipU3Ec__Iterator0_t1241219457, ___clip_0)); }
	inline AudioClip_t1932558630 * get_clip_0() const { return ___clip_0; }
	inline AudioClip_t1932558630 ** get_address_of_clip_0() { return &___clip_0; }
	inline void set_clip_0(AudioClip_t1932558630 * value)
	{
		___clip_0 = value;
		Il2CppCodeGenWriteBarrier(&___clip_0, value);
	}

	inline static int32_t get_offset_of_U3CvolumesU3E__0_1() { return static_cast<int32_t>(offsetof(U3CRemoveVolumeFromClipU3Ec__Iterator0_t1241219457, ___U3CvolumesU3E__0_1)); }
	inline List_1_t1445631064 * get_U3CvolumesU3E__0_1() const { return ___U3CvolumesU3E__0_1; }
	inline List_1_t1445631064 ** get_address_of_U3CvolumesU3E__0_1() { return &___U3CvolumesU3E__0_1; }
	inline void set_U3CvolumesU3E__0_1(List_1_t1445631064 * value)
	{
		___U3CvolumesU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CvolumesU3E__0_1, value);
	}

	inline static int32_t get_offset_of_volume_2() { return static_cast<int32_t>(offsetof(U3CRemoveVolumeFromClipU3Ec__Iterator0_t1241219457, ___volume_2)); }
	inline float get_volume_2() const { return ___volume_2; }
	inline float* get_address_of_volume_2() { return &___volume_2; }
	inline void set_volume_2(float value)
	{
		___volume_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CRemoveVolumeFromClipU3Ec__Iterator0_t1241219457, ___U24current_3)); }
	inline Il2CppObject * get_U24current_3() const { return ___U24current_3; }
	inline Il2CppObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(Il2CppObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CRemoveVolumeFromClipU3Ec__Iterator0_t1241219457, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CRemoveVolumeFromClipU3Ec__Iterator0_t1241219457, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
