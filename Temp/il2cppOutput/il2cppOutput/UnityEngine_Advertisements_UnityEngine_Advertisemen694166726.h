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

#include "mscorlib_System_EventArgs3289624707.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertisemen456670012.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.FinishEventArgs
struct  FinishEventArgs_t694166726  : public EventArgs_t3289624707
{
public:
	// System.String UnityEngine.Advertisements.FinishEventArgs::<placementId>k__BackingField
	String_t* ___U3CplacementIdU3Ek__BackingField_1;
	// UnityEngine.Advertisements.ShowResult UnityEngine.Advertisements.FinishEventArgs::<showResult>k__BackingField
	int32_t ___U3CshowResultU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CplacementIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FinishEventArgs_t694166726, ___U3CplacementIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CplacementIdU3Ek__BackingField_1() const { return ___U3CplacementIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CplacementIdU3Ek__BackingField_1() { return &___U3CplacementIdU3Ek__BackingField_1; }
	inline void set_U3CplacementIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CplacementIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CplacementIdU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CshowResultU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FinishEventArgs_t694166726, ___U3CshowResultU3Ek__BackingField_2)); }
	inline int32_t get_U3CshowResultU3Ek__BackingField_2() const { return ___U3CshowResultU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CshowResultU3Ek__BackingField_2() { return &___U3CshowResultU3Ek__BackingField_2; }
	inline void set_U3CshowResultU3Ek__BackingField_2(int32_t value)
	{
		___U3CshowResultU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
