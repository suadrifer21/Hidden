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
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelLock
struct  LevelLock_t1247758995  : public Il2CppObject
{
public:
	// System.String LevelLock::name
	String_t* ___name_0;
	// UnityEngine.GameObject LevelLock::overlay
	GameObject_t1756533147 * ___overlay_1;
	// System.Boolean LevelLock::isDefaultActive
	bool ___isDefaultActive_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(LevelLock_t1247758995, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_overlay_1() { return static_cast<int32_t>(offsetof(LevelLock_t1247758995, ___overlay_1)); }
	inline GameObject_t1756533147 * get_overlay_1() const { return ___overlay_1; }
	inline GameObject_t1756533147 ** get_address_of_overlay_1() { return &___overlay_1; }
	inline void set_overlay_1(GameObject_t1756533147 * value)
	{
		___overlay_1 = value;
		Il2CppCodeGenWriteBarrier(&___overlay_1, value);
	}

	inline static int32_t get_offset_of_isDefaultActive_2() { return static_cast<int32_t>(offsetof(LevelLock_t1247758995, ___isDefaultActive_2)); }
	inline bool get_isDefaultActive_2() const { return ___isDefaultActive_2; }
	inline bool* get_address_of_isDefaultActive_2() { return &___isDefaultActive_2; }
	inline void set_isDefaultActive_2(bool value)
	{
		___isDefaultActive_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
