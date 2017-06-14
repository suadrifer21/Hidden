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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.FakeMoolahConfiguration
struct  FakeMoolahConfiguration_t1681533527  : public Il2CppObject
{
public:
	// System.String UnityEngine.Purchasing.FakeMoolahConfiguration::m_appKey
	String_t* ___m_appKey_0;
	// System.String UnityEngine.Purchasing.FakeMoolahConfiguration::m_hashKey
	String_t* ___m_hashKey_1;

public:
	inline static int32_t get_offset_of_m_appKey_0() { return static_cast<int32_t>(offsetof(FakeMoolahConfiguration_t1681533527, ___m_appKey_0)); }
	inline String_t* get_m_appKey_0() const { return ___m_appKey_0; }
	inline String_t** get_address_of_m_appKey_0() { return &___m_appKey_0; }
	inline void set_m_appKey_0(String_t* value)
	{
		___m_appKey_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_appKey_0, value);
	}

	inline static int32_t get_offset_of_m_hashKey_1() { return static_cast<int32_t>(offsetof(FakeMoolahConfiguration_t1681533527, ___m_hashKey_1)); }
	inline String_t* get_m_hashKey_1() const { return ___m_hashKey_1; }
	inline String_t** get_address_of_m_hashKey_1() { return &___m_hashKey_1; }
	inline void set_m_hashKey_1(String_t* value)
	{
		___m_hashKey_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_hashKey_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
