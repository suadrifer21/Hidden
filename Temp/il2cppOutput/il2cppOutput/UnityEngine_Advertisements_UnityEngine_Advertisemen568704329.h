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
// UnityEngine.Advertisements.Editor.Configuration
struct Configuration_t3667730448;
// UnityEngine.Advertisements.Editor.Placeholder
struct Placeholder_t1837649965;
// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>
struct EventHandler_1_t3917218901;
// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>
struct EventHandler_1_t3580441194;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Editor.Platform
struct  Platform_t568704329  : public Il2CppObject
{
public:
	// System.Boolean UnityEngine.Advertisements.Editor.Platform::m_DebugMode
	bool ___m_DebugMode_1;
	// UnityEngine.Advertisements.Editor.Configuration UnityEngine.Advertisements.Editor.Platform::m_Configuration
	Configuration_t3667730448 * ___m_Configuration_2;
	// UnityEngine.Advertisements.Editor.Placeholder UnityEngine.Advertisements.Editor.Platform::m_Placeholder
	Placeholder_t1837649965 * ___m_Placeholder_3;
	// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs> UnityEngine.Advertisements.Editor.Platform::OnStart
	EventHandler_1_t3917218901 * ___OnStart_4;
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.Editor.Platform::OnFinish
	EventHandler_1_t3580441194 * ___OnFinish_5;

public:
	inline static int32_t get_offset_of_m_DebugMode_1() { return static_cast<int32_t>(offsetof(Platform_t568704329, ___m_DebugMode_1)); }
	inline bool get_m_DebugMode_1() const { return ___m_DebugMode_1; }
	inline bool* get_address_of_m_DebugMode_1() { return &___m_DebugMode_1; }
	inline void set_m_DebugMode_1(bool value)
	{
		___m_DebugMode_1 = value;
	}

	inline static int32_t get_offset_of_m_Configuration_2() { return static_cast<int32_t>(offsetof(Platform_t568704329, ___m_Configuration_2)); }
	inline Configuration_t3667730448 * get_m_Configuration_2() const { return ___m_Configuration_2; }
	inline Configuration_t3667730448 ** get_address_of_m_Configuration_2() { return &___m_Configuration_2; }
	inline void set_m_Configuration_2(Configuration_t3667730448 * value)
	{
		___m_Configuration_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Configuration_2, value);
	}

	inline static int32_t get_offset_of_m_Placeholder_3() { return static_cast<int32_t>(offsetof(Platform_t568704329, ___m_Placeholder_3)); }
	inline Placeholder_t1837649965 * get_m_Placeholder_3() const { return ___m_Placeholder_3; }
	inline Placeholder_t1837649965 ** get_address_of_m_Placeholder_3() { return &___m_Placeholder_3; }
	inline void set_m_Placeholder_3(Placeholder_t1837649965 * value)
	{
		___m_Placeholder_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Placeholder_3, value);
	}

	inline static int32_t get_offset_of_OnStart_4() { return static_cast<int32_t>(offsetof(Platform_t568704329, ___OnStart_4)); }
	inline EventHandler_1_t3917218901 * get_OnStart_4() const { return ___OnStart_4; }
	inline EventHandler_1_t3917218901 ** get_address_of_OnStart_4() { return &___OnStart_4; }
	inline void set_OnStart_4(EventHandler_1_t3917218901 * value)
	{
		___OnStart_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnStart_4, value);
	}

	inline static int32_t get_offset_of_OnFinish_5() { return static_cast<int32_t>(offsetof(Platform_t568704329, ___OnFinish_5)); }
	inline EventHandler_1_t3580441194 * get_OnFinish_5() const { return ___OnFinish_5; }
	inline EventHandler_1_t3580441194 ** get_address_of_OnFinish_5() { return &___OnFinish_5; }
	inline void set_OnFinish_5(EventHandler_1_t3580441194 * value)
	{
		___OnFinish_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnFinish_5, value);
	}
};

struct Platform_t568704329_StaticFields
{
public:
	// System.String UnityEngine.Advertisements.Editor.Platform::s_BaseUrl
	String_t* ___s_BaseUrl_0;

public:
	inline static int32_t get_offset_of_s_BaseUrl_0() { return static_cast<int32_t>(offsetof(Platform_t568704329_StaticFields, ___s_BaseUrl_0)); }
	inline String_t* get_s_BaseUrl_0() const { return ___s_BaseUrl_0; }
	inline String_t** get_address_of_s_BaseUrl_0() { return &___s_BaseUrl_0; }
	inline void set_s_BaseUrl_0(String_t* value)
	{
		___s_BaseUrl_0 = value;
		Il2CppCodeGenWriteBarrier(&___s_BaseUrl_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
