#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Purchasing.StandardPurchasingModule
struct StandardPurchasingModule_t4003664591;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.StandardPurchasingModule/MicrosoftConfiguration
struct  MicrosoftConfiguration_t1310600573  : public Il2CppObject
{
public:
	// System.Boolean UnityEngine.Purchasing.StandardPurchasingModule/MicrosoftConfiguration::useMock
	bool ___useMock_0;
	// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule/MicrosoftConfiguration::module
	StandardPurchasingModule_t4003664591 * ___module_1;

public:
	inline static int32_t get_offset_of_useMock_0() { return static_cast<int32_t>(offsetof(MicrosoftConfiguration_t1310600573, ___useMock_0)); }
	inline bool get_useMock_0() const { return ___useMock_0; }
	inline bool* get_address_of_useMock_0() { return &___useMock_0; }
	inline void set_useMock_0(bool value)
	{
		___useMock_0 = value;
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(MicrosoftConfiguration_t1310600573, ___module_1)); }
	inline StandardPurchasingModule_t4003664591 * get_module_1() const { return ___module_1; }
	inline StandardPurchasingModule_t4003664591 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(StandardPurchasingModule_t4003664591 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier(&___module_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
