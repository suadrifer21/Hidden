#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Purchasing.IUnityAnalytics
struct IUnityAnalytics_t2407131490;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.AnalyticsReporter
struct  AnalyticsReporter_t3513180421  : public Il2CppObject
{
public:
	// UnityEngine.Purchasing.IUnityAnalytics UnityEngine.Purchasing.AnalyticsReporter::m_Analytics
	Il2CppObject * ___m_Analytics_0;

public:
	inline static int32_t get_offset_of_m_Analytics_0() { return static_cast<int32_t>(offsetof(AnalyticsReporter_t3513180421, ___m_Analytics_0)); }
	inline Il2CppObject * get_m_Analytics_0() const { return ___m_Analytics_0; }
	inline Il2CppObject ** get_address_of_m_Analytics_0() { return &___m_Analytics_0; }
	inline void set_m_Analytics_0(Il2CppObject * value)
	{
		___m_Analytics_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Analytics_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
