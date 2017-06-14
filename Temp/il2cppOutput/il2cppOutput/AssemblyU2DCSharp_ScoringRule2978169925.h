#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoringRule
struct  ScoringRule_t2978169925  : public Il2CppObject
{
public:
	// System.Single ScoringRule::min
	float ___min_0;
	// System.Single ScoringRule::max
	float ___max_1;
	// System.Single ScoringRule::multiplier
	float ___multiplier_2;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(ScoringRule_t2978169925, ___min_0)); }
	inline float get_min_0() const { return ___min_0; }
	inline float* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(float value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(ScoringRule_t2978169925, ___max_1)); }
	inline float get_max_1() const { return ___max_1; }
	inline float* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(float value)
	{
		___max_1 = value;
	}

	inline static int32_t get_offset_of_multiplier_2() { return static_cast<int32_t>(offsetof(ScoringRule_t2978169925, ___multiplier_2)); }
	inline float get_multiplier_2() const { return ___multiplier_2; }
	inline float* get_address_of_multiplier_2() { return &___multiplier_2; }
	inline void set_multiplier_2(float value)
	{
		___multiplier_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
