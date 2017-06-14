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
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChangeMode
struct  ChangeMode_t921630831  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean ChangeMode::storyMode
	bool ___storyMode_2;
	// UnityEngine.GameObject ChangeMode::storyGroup
	GameObject_t1756533147 * ___storyGroup_3;
	// UnityEngine.GameObject ChangeMode::challengeGroup
	GameObject_t1756533147 * ___challengeGroup_4;
	// UnityEngine.UI.Text ChangeMode::modeText
	Text_t356221433 * ___modeText_5;

public:
	inline static int32_t get_offset_of_storyMode_2() { return static_cast<int32_t>(offsetof(ChangeMode_t921630831, ___storyMode_2)); }
	inline bool get_storyMode_2() const { return ___storyMode_2; }
	inline bool* get_address_of_storyMode_2() { return &___storyMode_2; }
	inline void set_storyMode_2(bool value)
	{
		___storyMode_2 = value;
	}

	inline static int32_t get_offset_of_storyGroup_3() { return static_cast<int32_t>(offsetof(ChangeMode_t921630831, ___storyGroup_3)); }
	inline GameObject_t1756533147 * get_storyGroup_3() const { return ___storyGroup_3; }
	inline GameObject_t1756533147 ** get_address_of_storyGroup_3() { return &___storyGroup_3; }
	inline void set_storyGroup_3(GameObject_t1756533147 * value)
	{
		___storyGroup_3 = value;
		Il2CppCodeGenWriteBarrier(&___storyGroup_3, value);
	}

	inline static int32_t get_offset_of_challengeGroup_4() { return static_cast<int32_t>(offsetof(ChangeMode_t921630831, ___challengeGroup_4)); }
	inline GameObject_t1756533147 * get_challengeGroup_4() const { return ___challengeGroup_4; }
	inline GameObject_t1756533147 ** get_address_of_challengeGroup_4() { return &___challengeGroup_4; }
	inline void set_challengeGroup_4(GameObject_t1756533147 * value)
	{
		___challengeGroup_4 = value;
		Il2CppCodeGenWriteBarrier(&___challengeGroup_4, value);
	}

	inline static int32_t get_offset_of_modeText_5() { return static_cast<int32_t>(offsetof(ChangeMode_t921630831, ___modeText_5)); }
	inline Text_t356221433 * get_modeText_5() const { return ___modeText_5; }
	inline Text_t356221433 ** get_address_of_modeText_5() { return &___modeText_5; }
	inline void set_modeText_5(Text_t356221433 * value)
	{
		___modeText_5 = value;
		Il2CppCodeGenWriteBarrier(&___modeText_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
