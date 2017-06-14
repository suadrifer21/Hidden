#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Advertisements.IPlatform
struct IPlatform_t1402051828;
// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>
struct EventHandler_1_t3917218901;
// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>
struct EventHandler_1_t3580441194;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertiseme1597425191.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Advertisement
struct  Advertisement_t3914199195  : public Il2CppObject
{
public:

public:
};

struct Advertisement_t3914199195_StaticFields
{
public:
	// System.Boolean UnityEngine.Advertisements.Advertisement::s_Initialized
	bool ___s_Initialized_0;
	// UnityEngine.Advertisements.IPlatform UnityEngine.Advertisements.Advertisement::s_Platform
	Il2CppObject * ___s_Platform_1;
	// System.Boolean UnityEngine.Advertisements.Advertisement::s_EditorSupportedPlatform
	bool ___s_EditorSupportedPlatform_2;
	// System.Boolean UnityEngine.Advertisements.Advertisement::s_Showing
	bool ___s_Showing_3;
	// UnityEngine.Advertisements.Advertisement/DebugLevelInternal UnityEngine.Advertisements.Advertisement::s_DebugLevel
	int32_t ___s_DebugLevel_4;
	// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs> UnityEngine.Advertisements.Advertisement::<>f__am$cache0
	EventHandler_1_t3917218901 * ___U3CU3Ef__amU24cache0_5;
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.Advertisement::<>f__am$cache1
	EventHandler_1_t3580441194 * ___U3CU3Ef__amU24cache1_6;

public:
	inline static int32_t get_offset_of_s_Initialized_0() { return static_cast<int32_t>(offsetof(Advertisement_t3914199195_StaticFields, ___s_Initialized_0)); }
	inline bool get_s_Initialized_0() const { return ___s_Initialized_0; }
	inline bool* get_address_of_s_Initialized_0() { return &___s_Initialized_0; }
	inline void set_s_Initialized_0(bool value)
	{
		___s_Initialized_0 = value;
	}

	inline static int32_t get_offset_of_s_Platform_1() { return static_cast<int32_t>(offsetof(Advertisement_t3914199195_StaticFields, ___s_Platform_1)); }
	inline Il2CppObject * get_s_Platform_1() const { return ___s_Platform_1; }
	inline Il2CppObject ** get_address_of_s_Platform_1() { return &___s_Platform_1; }
	inline void set_s_Platform_1(Il2CppObject * value)
	{
		___s_Platform_1 = value;
		Il2CppCodeGenWriteBarrier(&___s_Platform_1, value);
	}

	inline static int32_t get_offset_of_s_EditorSupportedPlatform_2() { return static_cast<int32_t>(offsetof(Advertisement_t3914199195_StaticFields, ___s_EditorSupportedPlatform_2)); }
	inline bool get_s_EditorSupportedPlatform_2() const { return ___s_EditorSupportedPlatform_2; }
	inline bool* get_address_of_s_EditorSupportedPlatform_2() { return &___s_EditorSupportedPlatform_2; }
	inline void set_s_EditorSupportedPlatform_2(bool value)
	{
		___s_EditorSupportedPlatform_2 = value;
	}

	inline static int32_t get_offset_of_s_Showing_3() { return static_cast<int32_t>(offsetof(Advertisement_t3914199195_StaticFields, ___s_Showing_3)); }
	inline bool get_s_Showing_3() const { return ___s_Showing_3; }
	inline bool* get_address_of_s_Showing_3() { return &___s_Showing_3; }
	inline void set_s_Showing_3(bool value)
	{
		___s_Showing_3 = value;
	}

	inline static int32_t get_offset_of_s_DebugLevel_4() { return static_cast<int32_t>(offsetof(Advertisement_t3914199195_StaticFields, ___s_DebugLevel_4)); }
	inline int32_t get_s_DebugLevel_4() const { return ___s_DebugLevel_4; }
	inline int32_t* get_address_of_s_DebugLevel_4() { return &___s_DebugLevel_4; }
	inline void set_s_DebugLevel_4(int32_t value)
	{
		___s_DebugLevel_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_5() { return static_cast<int32_t>(offsetof(Advertisement_t3914199195_StaticFields, ___U3CU3Ef__amU24cache0_5)); }
	inline EventHandler_1_t3917218901 * get_U3CU3Ef__amU24cache0_5() const { return ___U3CU3Ef__amU24cache0_5; }
	inline EventHandler_1_t3917218901 ** get_address_of_U3CU3Ef__amU24cache0_5() { return &___U3CU3Ef__amU24cache0_5; }
	inline void set_U3CU3Ef__amU24cache0_5(EventHandler_1_t3917218901 * value)
	{
		___U3CU3Ef__amU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_6() { return static_cast<int32_t>(offsetof(Advertisement_t3914199195_StaticFields, ___U3CU3Ef__amU24cache1_6)); }
	inline EventHandler_1_t3580441194 * get_U3CU3Ef__amU24cache1_6() const { return ___U3CU3Ef__amU24cache1_6; }
	inline EventHandler_1_t3580441194 ** get_address_of_U3CU3Ef__amU24cache1_6() { return &___U3CU3Ef__amU24cache1_6; }
	inline void set_U3CU3Ef__amU24cache1_6(EventHandler_1_t3580441194 * value)
	{
		___U3CU3Ef__amU24cache1_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
