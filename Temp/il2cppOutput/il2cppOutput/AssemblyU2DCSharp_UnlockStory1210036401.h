#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnlockStory
struct  UnlockStory_t1210036401  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 UnlockStory::cost
	int32_t ___cost_2;
	// System.String UnlockStory::sceneName
	String_t* ___sceneName_3;
	// UnityEngine.UI.Text UnlockStory::costText
	Text_t356221433 * ___costText_4;
	// UnityEngine.GameObject UnlockStory::g
	GameObject_t1756533147 * ___g_5;

public:
	inline static int32_t get_offset_of_cost_2() { return static_cast<int32_t>(offsetof(UnlockStory_t1210036401, ___cost_2)); }
	inline int32_t get_cost_2() const { return ___cost_2; }
	inline int32_t* get_address_of_cost_2() { return &___cost_2; }
	inline void set_cost_2(int32_t value)
	{
		___cost_2 = value;
	}

	inline static int32_t get_offset_of_sceneName_3() { return static_cast<int32_t>(offsetof(UnlockStory_t1210036401, ___sceneName_3)); }
	inline String_t* get_sceneName_3() const { return ___sceneName_3; }
	inline String_t** get_address_of_sceneName_3() { return &___sceneName_3; }
	inline void set_sceneName_3(String_t* value)
	{
		___sceneName_3 = value;
		Il2CppCodeGenWriteBarrier(&___sceneName_3, value);
	}

	inline static int32_t get_offset_of_costText_4() { return static_cast<int32_t>(offsetof(UnlockStory_t1210036401, ___costText_4)); }
	inline Text_t356221433 * get_costText_4() const { return ___costText_4; }
	inline Text_t356221433 ** get_address_of_costText_4() { return &___costText_4; }
	inline void set_costText_4(Text_t356221433 * value)
	{
		___costText_4 = value;
		Il2CppCodeGenWriteBarrier(&___costText_4, value);
	}

	inline static int32_t get_offset_of_g_5() { return static_cast<int32_t>(offsetof(UnlockStory_t1210036401, ___g_5)); }
	inline GameObject_t1756533147 * get_g_5() const { return ___g_5; }
	inline GameObject_t1756533147 ** get_address_of_g_5() { return &___g_5; }
	inline void set_g_5(GameObject_t1756533147 * value)
	{
		___g_5 = value;
		Il2CppCodeGenWriteBarrier(&___g_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
