#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.IDs
struct  IDs_t3808979560  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.Purchasing.IDs::m_Dic
	Dictionary_2_t3943999495 * ___m_Dic_0;

public:
	inline static int32_t get_offset_of_m_Dic_0() { return static_cast<int32_t>(offsetof(IDs_t3808979560, ___m_Dic_0)); }
	inline Dictionary_2_t3943999495 * get_m_Dic_0() const { return ___m_Dic_0; }
	inline Dictionary_2_t3943999495 ** get_address_of_m_Dic_0() { return &___m_Dic_0; }
	inline void set_m_Dic_0(Dictionary_2_t3943999495 * value)
	{
		___m_Dic_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Dic_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
