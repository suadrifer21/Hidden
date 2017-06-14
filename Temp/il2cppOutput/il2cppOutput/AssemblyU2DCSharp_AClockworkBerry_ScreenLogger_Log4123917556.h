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
#include "UnityEngine_UnityEngine_LogType1559732862.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AClockworkBerry.ScreenLogger/LogMessage
struct  LogMessage_t4123917556  : public Il2CppObject
{
public:
	// System.String AClockworkBerry.ScreenLogger/LogMessage::Message
	String_t* ___Message_0;
	// UnityEngine.LogType AClockworkBerry.ScreenLogger/LogMessage::Type
	int32_t ___Type_1;

public:
	inline static int32_t get_offset_of_Message_0() { return static_cast<int32_t>(offsetof(LogMessage_t4123917556, ___Message_0)); }
	inline String_t* get_Message_0() const { return ___Message_0; }
	inline String_t** get_address_of_Message_0() { return &___Message_0; }
	inline void set_Message_0(String_t* value)
	{
		___Message_0 = value;
		Il2CppCodeGenWriteBarrier(&___Message_0, value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(LogMessage_t4123917556, ___Type_1)); }
	inline int32_t get_Type_1() const { return ___Type_1; }
	inline int32_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(int32_t value)
	{
		___Type_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
