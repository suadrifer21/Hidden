#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Advertisements.iOS.Platform
struct Platform_t1646290531;
// UnityEngine.Advertisements.CallbackExecutor
struct CallbackExecutor_t2947320436;
// System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>
struct EventHandler_1_t2737845578;
// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>
struct EventHandler_1_t3917218901;
// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>
struct EventHandler_1_t3580441194;
// System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>
struct EventHandler_1_t4277752891;
// UnityEngine.Advertisements.iOS.Platform/unityAdsReady
struct unityAdsReady_t2056116968;
// UnityEngine.Advertisements.iOS.Platform/unityAdsDidError
struct unityAdsDidError_t3399460664;
// UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart
struct unityAdsDidStart_t88170910;
// UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish
struct unityAdsDidFinish_t649819413;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform
struct  Platform_t1646290531  : public Il2CppObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs> UnityEngine.Advertisements.iOS.Platform::OnReady
	EventHandler_1_t2737845578 * ___OnReady_2;
	// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs> UnityEngine.Advertisements.iOS.Platform::OnStart
	EventHandler_1_t3917218901 * ___OnStart_3;
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.iOS.Platform::OnFinish
	EventHandler_1_t3580441194 * ___OnFinish_4;
	// System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs> UnityEngine.Advertisements.iOS.Platform::OnError
	EventHandler_1_t4277752891 * ___OnError_5;

public:
	inline static int32_t get_offset_of_OnReady_2() { return static_cast<int32_t>(offsetof(Platform_t1646290531, ___OnReady_2)); }
	inline EventHandler_1_t2737845578 * get_OnReady_2() const { return ___OnReady_2; }
	inline EventHandler_1_t2737845578 ** get_address_of_OnReady_2() { return &___OnReady_2; }
	inline void set_OnReady_2(EventHandler_1_t2737845578 * value)
	{
		___OnReady_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnReady_2, value);
	}

	inline static int32_t get_offset_of_OnStart_3() { return static_cast<int32_t>(offsetof(Platform_t1646290531, ___OnStart_3)); }
	inline EventHandler_1_t3917218901 * get_OnStart_3() const { return ___OnStart_3; }
	inline EventHandler_1_t3917218901 ** get_address_of_OnStart_3() { return &___OnStart_3; }
	inline void set_OnStart_3(EventHandler_1_t3917218901 * value)
	{
		___OnStart_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnStart_3, value);
	}

	inline static int32_t get_offset_of_OnFinish_4() { return static_cast<int32_t>(offsetof(Platform_t1646290531, ___OnFinish_4)); }
	inline EventHandler_1_t3580441194 * get_OnFinish_4() const { return ___OnFinish_4; }
	inline EventHandler_1_t3580441194 ** get_address_of_OnFinish_4() { return &___OnFinish_4; }
	inline void set_OnFinish_4(EventHandler_1_t3580441194 * value)
	{
		___OnFinish_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnFinish_4, value);
	}

	inline static int32_t get_offset_of_OnError_5() { return static_cast<int32_t>(offsetof(Platform_t1646290531, ___OnError_5)); }
	inline EventHandler_1_t4277752891 * get_OnError_5() const { return ___OnError_5; }
	inline EventHandler_1_t4277752891 ** get_address_of_OnError_5() { return &___OnError_5; }
	inline void set_OnError_5(EventHandler_1_t4277752891 * value)
	{
		___OnError_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnError_5, value);
	}
};

struct Platform_t1646290531_StaticFields
{
public:
	// UnityEngine.Advertisements.iOS.Platform UnityEngine.Advertisements.iOS.Platform::s_Instance
	Platform_t1646290531 * ___s_Instance_0;
	// UnityEngine.Advertisements.CallbackExecutor UnityEngine.Advertisements.iOS.Platform::s_CallbackExecutor
	CallbackExecutor_t2947320436 * ___s_CallbackExecutor_1;
	// UnityEngine.Advertisements.iOS.Platform/unityAdsReady UnityEngine.Advertisements.iOS.Platform::<>f__mg$cache0
	unityAdsReady_t2056116968 * ___U3CU3Ef__mgU24cache0_6;
	// UnityEngine.Advertisements.iOS.Platform/unityAdsDidError UnityEngine.Advertisements.iOS.Platform::<>f__mg$cache1
	unityAdsDidError_t3399460664 * ___U3CU3Ef__mgU24cache1_7;
	// UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart UnityEngine.Advertisements.iOS.Platform::<>f__mg$cache2
	unityAdsDidStart_t88170910 * ___U3CU3Ef__mgU24cache2_8;
	// UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish UnityEngine.Advertisements.iOS.Platform::<>f__mg$cache3
	unityAdsDidFinish_t649819413 * ___U3CU3Ef__mgU24cache3_9;

public:
	inline static int32_t get_offset_of_s_Instance_0() { return static_cast<int32_t>(offsetof(Platform_t1646290531_StaticFields, ___s_Instance_0)); }
	inline Platform_t1646290531 * get_s_Instance_0() const { return ___s_Instance_0; }
	inline Platform_t1646290531 ** get_address_of_s_Instance_0() { return &___s_Instance_0; }
	inline void set_s_Instance_0(Platform_t1646290531 * value)
	{
		___s_Instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___s_Instance_0, value);
	}

	inline static int32_t get_offset_of_s_CallbackExecutor_1() { return static_cast<int32_t>(offsetof(Platform_t1646290531_StaticFields, ___s_CallbackExecutor_1)); }
	inline CallbackExecutor_t2947320436 * get_s_CallbackExecutor_1() const { return ___s_CallbackExecutor_1; }
	inline CallbackExecutor_t2947320436 ** get_address_of_s_CallbackExecutor_1() { return &___s_CallbackExecutor_1; }
	inline void set_s_CallbackExecutor_1(CallbackExecutor_t2947320436 * value)
	{
		___s_CallbackExecutor_1 = value;
		Il2CppCodeGenWriteBarrier(&___s_CallbackExecutor_1, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_6() { return static_cast<int32_t>(offsetof(Platform_t1646290531_StaticFields, ___U3CU3Ef__mgU24cache0_6)); }
	inline unityAdsReady_t2056116968 * get_U3CU3Ef__mgU24cache0_6() const { return ___U3CU3Ef__mgU24cache0_6; }
	inline unityAdsReady_t2056116968 ** get_address_of_U3CU3Ef__mgU24cache0_6() { return &___U3CU3Ef__mgU24cache0_6; }
	inline void set_U3CU3Ef__mgU24cache0_6(unityAdsReady_t2056116968 * value)
	{
		___U3CU3Ef__mgU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_7() { return static_cast<int32_t>(offsetof(Platform_t1646290531_StaticFields, ___U3CU3Ef__mgU24cache1_7)); }
	inline unityAdsDidError_t3399460664 * get_U3CU3Ef__mgU24cache1_7() const { return ___U3CU3Ef__mgU24cache1_7; }
	inline unityAdsDidError_t3399460664 ** get_address_of_U3CU3Ef__mgU24cache1_7() { return &___U3CU3Ef__mgU24cache1_7; }
	inline void set_U3CU3Ef__mgU24cache1_7(unityAdsDidError_t3399460664 * value)
	{
		___U3CU3Ef__mgU24cache1_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_7, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_8() { return static_cast<int32_t>(offsetof(Platform_t1646290531_StaticFields, ___U3CU3Ef__mgU24cache2_8)); }
	inline unityAdsDidStart_t88170910 * get_U3CU3Ef__mgU24cache2_8() const { return ___U3CU3Ef__mgU24cache2_8; }
	inline unityAdsDidStart_t88170910 ** get_address_of_U3CU3Ef__mgU24cache2_8() { return &___U3CU3Ef__mgU24cache2_8; }
	inline void set_U3CU3Ef__mgU24cache2_8(unityAdsDidStart_t88170910 * value)
	{
		___U3CU3Ef__mgU24cache2_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache2_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_9() { return static_cast<int32_t>(offsetof(Platform_t1646290531_StaticFields, ___U3CU3Ef__mgU24cache3_9)); }
	inline unityAdsDidFinish_t649819413 * get_U3CU3Ef__mgU24cache3_9() const { return ___U3CU3Ef__mgU24cache3_9; }
	inline unityAdsDidFinish_t649819413 ** get_address_of_U3CU3Ef__mgU24cache3_9() { return &___U3CU3Ef__mgU24cache3_9; }
	inline void set_U3CU3Ef__mgU24cache3_9(unityAdsDidFinish_t649819413 * value)
	{
		___U3CU3Ef__mgU24cache3_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache3_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
