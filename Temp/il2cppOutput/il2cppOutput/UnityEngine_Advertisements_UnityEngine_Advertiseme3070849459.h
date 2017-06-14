#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t4251328308;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t2973420583;
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

#include "UnityEngine_UnityEngine_AndroidJavaProxy4274989947.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Android.Platform
struct  Platform_t3070849459  : public AndroidJavaProxy_t4274989947
{
public:
	// UnityEngine.AndroidJavaObject UnityEngine.Advertisements.Android.Platform::m_CurrentActivity
	AndroidJavaObject_t4251328308 * ___m_CurrentActivity_1;
	// UnityEngine.AndroidJavaClass UnityEngine.Advertisements.Android.Platform::m_UnityAds
	AndroidJavaClass_t2973420583 * ___m_UnityAds_2;
	// UnityEngine.Advertisements.CallbackExecutor UnityEngine.Advertisements.Android.Platform::m_CallbackExecutor
	CallbackExecutor_t2947320436 * ___m_CallbackExecutor_3;
	// System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs> UnityEngine.Advertisements.Android.Platform::OnReady
	EventHandler_1_t2737845578 * ___OnReady_4;
	// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs> UnityEngine.Advertisements.Android.Platform::OnStart
	EventHandler_1_t3917218901 * ___OnStart_5;
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.Android.Platform::OnFinish
	EventHandler_1_t3580441194 * ___OnFinish_6;
	// System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs> UnityEngine.Advertisements.Android.Platform::OnError
	EventHandler_1_t4277752891 * ___OnError_7;

public:
	inline static int32_t get_offset_of_m_CurrentActivity_1() { return static_cast<int32_t>(offsetof(Platform_t3070849459, ___m_CurrentActivity_1)); }
	inline AndroidJavaObject_t4251328308 * get_m_CurrentActivity_1() const { return ___m_CurrentActivity_1; }
	inline AndroidJavaObject_t4251328308 ** get_address_of_m_CurrentActivity_1() { return &___m_CurrentActivity_1; }
	inline void set_m_CurrentActivity_1(AndroidJavaObject_t4251328308 * value)
	{
		___m_CurrentActivity_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_CurrentActivity_1, value);
	}

	inline static int32_t get_offset_of_m_UnityAds_2() { return static_cast<int32_t>(offsetof(Platform_t3070849459, ___m_UnityAds_2)); }
	inline AndroidJavaClass_t2973420583 * get_m_UnityAds_2() const { return ___m_UnityAds_2; }
	inline AndroidJavaClass_t2973420583 ** get_address_of_m_UnityAds_2() { return &___m_UnityAds_2; }
	inline void set_m_UnityAds_2(AndroidJavaClass_t2973420583 * value)
	{
		___m_UnityAds_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_UnityAds_2, value);
	}

	inline static int32_t get_offset_of_m_CallbackExecutor_3() { return static_cast<int32_t>(offsetof(Platform_t3070849459, ___m_CallbackExecutor_3)); }
	inline CallbackExecutor_t2947320436 * get_m_CallbackExecutor_3() const { return ___m_CallbackExecutor_3; }
	inline CallbackExecutor_t2947320436 ** get_address_of_m_CallbackExecutor_3() { return &___m_CallbackExecutor_3; }
	inline void set_m_CallbackExecutor_3(CallbackExecutor_t2947320436 * value)
	{
		___m_CallbackExecutor_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_CallbackExecutor_3, value);
	}

	inline static int32_t get_offset_of_OnReady_4() { return static_cast<int32_t>(offsetof(Platform_t3070849459, ___OnReady_4)); }
	inline EventHandler_1_t2737845578 * get_OnReady_4() const { return ___OnReady_4; }
	inline EventHandler_1_t2737845578 ** get_address_of_OnReady_4() { return &___OnReady_4; }
	inline void set_OnReady_4(EventHandler_1_t2737845578 * value)
	{
		___OnReady_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnReady_4, value);
	}

	inline static int32_t get_offset_of_OnStart_5() { return static_cast<int32_t>(offsetof(Platform_t3070849459, ___OnStart_5)); }
	inline EventHandler_1_t3917218901 * get_OnStart_5() const { return ___OnStart_5; }
	inline EventHandler_1_t3917218901 ** get_address_of_OnStart_5() { return &___OnStart_5; }
	inline void set_OnStart_5(EventHandler_1_t3917218901 * value)
	{
		___OnStart_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnStart_5, value);
	}

	inline static int32_t get_offset_of_OnFinish_6() { return static_cast<int32_t>(offsetof(Platform_t3070849459, ___OnFinish_6)); }
	inline EventHandler_1_t3580441194 * get_OnFinish_6() const { return ___OnFinish_6; }
	inline EventHandler_1_t3580441194 ** get_address_of_OnFinish_6() { return &___OnFinish_6; }
	inline void set_OnFinish_6(EventHandler_1_t3580441194 * value)
	{
		___OnFinish_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnFinish_6, value);
	}

	inline static int32_t get_offset_of_OnError_7() { return static_cast<int32_t>(offsetof(Platform_t3070849459, ___OnError_7)); }
	inline EventHandler_1_t4277752891 * get_OnError_7() const { return ___OnError_7; }
	inline EventHandler_1_t4277752891 ** get_address_of_OnError_7() { return &___OnError_7; }
	inline void set_OnError_7(EventHandler_1_t4277752891 * value)
	{
		___OnError_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnError_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
