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
// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t710107290;

#include "mscorlib_System_Object2689449295.h"
#include "Stores_UnityEngine_Purchasing_GoogleLocale3144343871.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.LocalizedProductDescription
struct  LocalizedProductDescription_t1525635964  : public Il2CppObject
{
public:
	// UnityEngine.Purchasing.GoogleLocale UnityEngine.Purchasing.LocalizedProductDescription::googleLocale
	int32_t ___googleLocale_0;
	// System.String UnityEngine.Purchasing.LocalizedProductDescription::title
	String_t* ___title_1;
	// System.String UnityEngine.Purchasing.LocalizedProductDescription::description
	String_t* ___description_2;

public:
	inline static int32_t get_offset_of_googleLocale_0() { return static_cast<int32_t>(offsetof(LocalizedProductDescription_t1525635964, ___googleLocale_0)); }
	inline int32_t get_googleLocale_0() const { return ___googleLocale_0; }
	inline int32_t* get_address_of_googleLocale_0() { return &___googleLocale_0; }
	inline void set_googleLocale_0(int32_t value)
	{
		___googleLocale_0 = value;
	}

	inline static int32_t get_offset_of_title_1() { return static_cast<int32_t>(offsetof(LocalizedProductDescription_t1525635964, ___title_1)); }
	inline String_t* get_title_1() const { return ___title_1; }
	inline String_t** get_address_of_title_1() { return &___title_1; }
	inline void set_title_1(String_t* value)
	{
		___title_1 = value;
		Il2CppCodeGenWriteBarrier(&___title_1, value);
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(LocalizedProductDescription_t1525635964, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier(&___description_2, value);
	}
};

struct LocalizedProductDescription_t1525635964_StaticFields
{
public:
	// System.Text.RegularExpressions.MatchEvaluator UnityEngine.Purchasing.LocalizedProductDescription::<>f__am$cache0
	MatchEvaluator_t710107290 * ___U3CU3Ef__amU24cache0_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_3() { return static_cast<int32_t>(offsetof(LocalizedProductDescription_t1525635964_StaticFields, ___U3CU3Ef__amU24cache0_3)); }
	inline MatchEvaluator_t710107290 * get_U3CU3Ef__amU24cache0_3() const { return ___U3CU3Ef__amU24cache0_3; }
	inline MatchEvaluator_t710107290 ** get_address_of_U3CU3Ef__amU24cache0_3() { return &___U3CU3Ef__amU24cache0_3; }
	inline void set_U3CU3Ef__amU24cache0_3(MatchEvaluator_t710107290 * value)
	{
		___U3CU3Ef__amU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
