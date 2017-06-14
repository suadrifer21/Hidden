#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Object
struct Object_t1021602117;
// SimpleSpritePacker.SPSpriteInfo
struct SPSpriteInfo_t1094930498;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_SimpleSpritePacker_SPAction_Acti1167845321.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleSpritePacker.SPAction
struct  SPAction_t835737145  : public Il2CppObject
{
public:
	// SimpleSpritePacker.SPAction/ActionType SimpleSpritePacker.SPAction::actionType
	int32_t ___actionType_0;
	// UnityEngine.Object SimpleSpritePacker.SPAction::resource
	Object_t1021602117 * ___resource_1;
	// SimpleSpritePacker.SPSpriteInfo SimpleSpritePacker.SPAction::spriteInfo
	SPSpriteInfo_t1094930498 * ___spriteInfo_2;

public:
	inline static int32_t get_offset_of_actionType_0() { return static_cast<int32_t>(offsetof(SPAction_t835737145, ___actionType_0)); }
	inline int32_t get_actionType_0() const { return ___actionType_0; }
	inline int32_t* get_address_of_actionType_0() { return &___actionType_0; }
	inline void set_actionType_0(int32_t value)
	{
		___actionType_0 = value;
	}

	inline static int32_t get_offset_of_resource_1() { return static_cast<int32_t>(offsetof(SPAction_t835737145, ___resource_1)); }
	inline Object_t1021602117 * get_resource_1() const { return ___resource_1; }
	inline Object_t1021602117 ** get_address_of_resource_1() { return &___resource_1; }
	inline void set_resource_1(Object_t1021602117 * value)
	{
		___resource_1 = value;
		Il2CppCodeGenWriteBarrier(&___resource_1, value);
	}

	inline static int32_t get_offset_of_spriteInfo_2() { return static_cast<int32_t>(offsetof(SPAction_t835737145, ___spriteInfo_2)); }
	inline SPSpriteInfo_t1094930498 * get_spriteInfo_2() const { return ___spriteInfo_2; }
	inline SPSpriteInfo_t1094930498 ** get_address_of_spriteInfo_2() { return &___spriteInfo_2; }
	inline void set_spriteInfo_2(SPSpriteInfo_t1094930498 * value)
	{
		___spriteInfo_2 = value;
		Il2CppCodeGenWriteBarrier(&___spriteInfo_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
