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
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t1445386684;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Editor.Configuration
struct  Configuration_t3667730448  : public Il2CppObject
{
public:
	// System.Boolean UnityEngine.Advertisements.Editor.Configuration::<enabled>k__BackingField
	bool ___U3CenabledU3Ek__BackingField_0;
	// System.String UnityEngine.Advertisements.Editor.Configuration::<defaultPlacement>k__BackingField
	String_t* ___U3CdefaultPlacementU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> UnityEngine.Advertisements.Editor.Configuration::<placements>k__BackingField
	Dictionary_2_t1445386684 * ___U3CplacementsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CenabledU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Configuration_t3667730448, ___U3CenabledU3Ek__BackingField_0)); }
	inline bool get_U3CenabledU3Ek__BackingField_0() const { return ___U3CenabledU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CenabledU3Ek__BackingField_0() { return &___U3CenabledU3Ek__BackingField_0; }
	inline void set_U3CenabledU3Ek__BackingField_0(bool value)
	{
		___U3CenabledU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CdefaultPlacementU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Configuration_t3667730448, ___U3CdefaultPlacementU3Ek__BackingField_1)); }
	inline String_t* get_U3CdefaultPlacementU3Ek__BackingField_1() const { return ___U3CdefaultPlacementU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CdefaultPlacementU3Ek__BackingField_1() { return &___U3CdefaultPlacementU3Ek__BackingField_1; }
	inline void set_U3CdefaultPlacementU3Ek__BackingField_1(String_t* value)
	{
		___U3CdefaultPlacementU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CdefaultPlacementU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CplacementsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Configuration_t3667730448, ___U3CplacementsU3Ek__BackingField_2)); }
	inline Dictionary_2_t1445386684 * get_U3CplacementsU3Ek__BackingField_2() const { return ___U3CplacementsU3Ek__BackingField_2; }
	inline Dictionary_2_t1445386684 ** get_address_of_U3CplacementsU3Ek__BackingField_2() { return &___U3CplacementsU3Ek__BackingField_2; }
	inline void set_U3CplacementsU3Ek__BackingField_2(Dictionary_2_t1445386684 * value)
	{
		___U3CplacementsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CplacementsU3Ek__BackingField_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
