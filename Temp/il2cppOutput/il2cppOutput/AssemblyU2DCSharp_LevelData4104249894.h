#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Level>
struct List_1_t235974914;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelData
struct  LevelData_t4104249894  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<Level> LevelData::level
	List_1_t235974914 * ___level_0;

public:
	inline static int32_t get_offset_of_level_0() { return static_cast<int32_t>(offsetof(LevelData_t4104249894, ___level_0)); }
	inline List_1_t235974914 * get_level_0() const { return ___level_0; }
	inline List_1_t235974914 ** get_address_of_level_0() { return &___level_0; }
	inline void set_level_0(List_1_t235974914 * value)
	{
		___level_0 = value;
		Il2CppCodeGenWriteBarrier(&___level_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
