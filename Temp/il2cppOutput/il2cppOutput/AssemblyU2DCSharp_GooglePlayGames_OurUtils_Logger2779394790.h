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

// GooglePlayGames.OurUtils.Logger
struct  Logger_t2779394790  : public Il2CppObject
{
public:

public:
};

struct Logger_t2779394790_StaticFields
{
public:
	// System.Boolean GooglePlayGames.OurUtils.Logger::debugLogEnabled
	bool ___debugLogEnabled_0;
	// System.Boolean GooglePlayGames.OurUtils.Logger::warningLogEnabled
	bool ___warningLogEnabled_1;

public:
	inline static int32_t get_offset_of_debugLogEnabled_0() { return static_cast<int32_t>(offsetof(Logger_t2779394790_StaticFields, ___debugLogEnabled_0)); }
	inline bool get_debugLogEnabled_0() const { return ___debugLogEnabled_0; }
	inline bool* get_address_of_debugLogEnabled_0() { return &___debugLogEnabled_0; }
	inline void set_debugLogEnabled_0(bool value)
	{
		___debugLogEnabled_0 = value;
	}

	inline static int32_t get_offset_of_warningLogEnabled_1() { return static_cast<int32_t>(offsetof(Logger_t2779394790_StaticFields, ___warningLogEnabled_1)); }
	inline bool get_warningLogEnabled_1() const { return ___warningLogEnabled_1; }
	inline bool* get_address_of_warningLogEnabled_1() { return &___warningLogEnabled_1; }
	inline void set_warningLogEnabled_1(bool value)
	{
		___warningLogEnabled_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
