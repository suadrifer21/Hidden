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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Quit
struct  Quit_t2084238107  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Quit::confirmationDialog
	GameObject_t1756533147 * ___confirmationDialog_2;
	// UnityEngine.GameObject Quit::blocker
	GameObject_t1756533147 * ___blocker_3;

public:
	inline static int32_t get_offset_of_confirmationDialog_2() { return static_cast<int32_t>(offsetof(Quit_t2084238107, ___confirmationDialog_2)); }
	inline GameObject_t1756533147 * get_confirmationDialog_2() const { return ___confirmationDialog_2; }
	inline GameObject_t1756533147 ** get_address_of_confirmationDialog_2() { return &___confirmationDialog_2; }
	inline void set_confirmationDialog_2(GameObject_t1756533147 * value)
	{
		___confirmationDialog_2 = value;
		Il2CppCodeGenWriteBarrier(&___confirmationDialog_2, value);
	}

	inline static int32_t get_offset_of_blocker_3() { return static_cast<int32_t>(offsetof(Quit_t2084238107, ___blocker_3)); }
	inline GameObject_t1756533147 * get_blocker_3() const { return ___blocker_3; }
	inline GameObject_t1756533147 ** get_address_of_blocker_3() { return &___blocker_3; }
	inline void set_blocker_3(GameObject_t1756533147 * value)
	{
		___blocker_3 = value;
		Il2CppCodeGenWriteBarrier(&___blocker_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
