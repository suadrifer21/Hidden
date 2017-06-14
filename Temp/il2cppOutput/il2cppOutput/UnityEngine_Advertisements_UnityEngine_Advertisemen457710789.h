#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.MetaData
struct  MetaData_t457710789  : public Il2CppObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Advertisements.MetaData::m_MetaData
	Il2CppObject* ___m_MetaData_0;
	// System.String UnityEngine.Advertisements.MetaData::<category>k__BackingField
	String_t* ___U3CcategoryU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_m_MetaData_0() { return static_cast<int32_t>(offsetof(MetaData_t457710789, ___m_MetaData_0)); }
	inline Il2CppObject* get_m_MetaData_0() const { return ___m_MetaData_0; }
	inline Il2CppObject** get_address_of_m_MetaData_0() { return &___m_MetaData_0; }
	inline void set_m_MetaData_0(Il2CppObject* value)
	{
		___m_MetaData_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_MetaData_0, value);
	}

	inline static int32_t get_offset_of_U3CcategoryU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MetaData_t457710789, ___U3CcategoryU3Ek__BackingField_1)); }
	inline String_t* get_U3CcategoryU3Ek__BackingField_1() const { return ___U3CcategoryU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CcategoryU3Ek__BackingField_1() { return &___U3CcategoryU3Ek__BackingField_1; }
	inline void set_U3CcategoryU3Ek__BackingField_1(String_t* value)
	{
		___U3CcategoryU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcategoryU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
