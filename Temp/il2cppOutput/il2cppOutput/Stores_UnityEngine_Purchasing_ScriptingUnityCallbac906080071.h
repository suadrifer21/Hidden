#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Purchasing.IUnityCallback
struct IUnityCallback_t1155931721;
// Uniject.IUtil
struct IUtil_t2188430191;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.ScriptingUnityCallback
struct  ScriptingUnityCallback_t906080071  : public Il2CppObject
{
public:
	// UnityEngine.Purchasing.IUnityCallback UnityEngine.Purchasing.ScriptingUnityCallback::forwardTo
	Il2CppObject * ___forwardTo_0;
	// Uniject.IUtil UnityEngine.Purchasing.ScriptingUnityCallback::util
	Il2CppObject * ___util_1;

public:
	inline static int32_t get_offset_of_forwardTo_0() { return static_cast<int32_t>(offsetof(ScriptingUnityCallback_t906080071, ___forwardTo_0)); }
	inline Il2CppObject * get_forwardTo_0() const { return ___forwardTo_0; }
	inline Il2CppObject ** get_address_of_forwardTo_0() { return &___forwardTo_0; }
	inline void set_forwardTo_0(Il2CppObject * value)
	{
		___forwardTo_0 = value;
		Il2CppCodeGenWriteBarrier(&___forwardTo_0, value);
	}

	inline static int32_t get_offset_of_util_1() { return static_cast<int32_t>(offsetof(ScriptingUnityCallback_t906080071, ___util_1)); }
	inline Il2CppObject * get_util_1() const { return ___util_1; }
	inline Il2CppObject ** get_address_of_util_1() { return &___util_1; }
	inline void set_util_1(Il2CppObject * value)
	{
		___util_1 = value;
		Il2CppCodeGenWriteBarrier(&___util_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
