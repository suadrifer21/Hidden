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

// UnityEngine.Purchasing.StoreID
struct  StoreID_t471452324  : public Il2CppObject
{
public:
	// System.String UnityEngine.Purchasing.StoreID::store
	String_t* ___store_0;
	// System.String UnityEngine.Purchasing.StoreID::id
	String_t* ___id_1;

public:
	inline static int32_t get_offset_of_store_0() { return static_cast<int32_t>(offsetof(StoreID_t471452324, ___store_0)); }
	inline String_t* get_store_0() const { return ___store_0; }
	inline String_t** get_address_of_store_0() { return &___store_0; }
	inline void set_store_0(String_t* value)
	{
		___store_0 = value;
		Il2CppCodeGenWriteBarrier(&___store_0, value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(StoreID_t471452324, ___id_1)); }
	inline String_t* get_id_1() const { return ___id_1; }
	inline String_t** get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(String_t* value)
	{
		___id_1 = value;
		Il2CppCodeGenWriteBarrier(&___id_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
