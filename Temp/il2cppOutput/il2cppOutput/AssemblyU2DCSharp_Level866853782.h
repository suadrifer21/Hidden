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

// Level
struct  Level_t866853782  : public Il2CppObject
{
public:
	// System.String Level::name
	String_t* ___name_0;
	// System.String Level::thumbnail
	String_t* ___thumbnail_1;
	// System.String Level::path
	String_t* ___path_2;
	// System.Int32 Level::version
	int32_t ___version_3;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Level_t866853782, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_thumbnail_1() { return static_cast<int32_t>(offsetof(Level_t866853782, ___thumbnail_1)); }
	inline String_t* get_thumbnail_1() const { return ___thumbnail_1; }
	inline String_t** get_address_of_thumbnail_1() { return &___thumbnail_1; }
	inline void set_thumbnail_1(String_t* value)
	{
		___thumbnail_1 = value;
		Il2CppCodeGenWriteBarrier(&___thumbnail_1, value);
	}

	inline static int32_t get_offset_of_path_2() { return static_cast<int32_t>(offsetof(Level_t866853782, ___path_2)); }
	inline String_t* get_path_2() const { return ___path_2; }
	inline String_t** get_address_of_path_2() { return &___path_2; }
	inline void set_path_2(String_t* value)
	{
		___path_2 = value;
		Il2CppCodeGenWriteBarrier(&___path_2, value);
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Level_t866853782, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
