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
// System.String[]
struct StringU5BU5D_t1642385972;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AchievementContent
struct  AchievementContent_t4046082768  : public Il2CppObject
{
public:
	// System.String AchievementContent::title
	String_t* ___title_0;
	// System.String[] AchievementContent::text
	StringU5BU5D_t1642385972* ___text_1;

public:
	inline static int32_t get_offset_of_title_0() { return static_cast<int32_t>(offsetof(AchievementContent_t4046082768, ___title_0)); }
	inline String_t* get_title_0() const { return ___title_0; }
	inline String_t** get_address_of_title_0() { return &___title_0; }
	inline void set_title_0(String_t* value)
	{
		___title_0 = value;
		Il2CppCodeGenWriteBarrier(&___title_0, value);
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(AchievementContent_t4046082768, ___text_1)); }
	inline StringU5BU5D_t1642385972* get_text_1() const { return ___text_1; }
	inline StringU5BU5D_t1642385972** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(StringU5BU5D_t1642385972* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier(&___text_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
