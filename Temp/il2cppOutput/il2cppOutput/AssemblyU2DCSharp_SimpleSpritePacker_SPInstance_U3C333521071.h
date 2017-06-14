#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SimpleSpritePacker.SPSpriteInfo
struct SPSpriteInfo_t1094930498;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleSpritePacker.SPInstance/<QueueAction_RemoveSprite>c__AnonStorey1
struct  U3CQueueAction_RemoveSpriteU3Ec__AnonStorey1_t333521071  : public Il2CppObject
{
public:
	// SimpleSpritePacker.SPSpriteInfo SimpleSpritePacker.SPInstance/<QueueAction_RemoveSprite>c__AnonStorey1::spriteInfo
	SPSpriteInfo_t1094930498 * ___spriteInfo_0;

public:
	inline static int32_t get_offset_of_spriteInfo_0() { return static_cast<int32_t>(offsetof(U3CQueueAction_RemoveSpriteU3Ec__AnonStorey1_t333521071, ___spriteInfo_0)); }
	inline SPSpriteInfo_t1094930498 * get_spriteInfo_0() const { return ___spriteInfo_0; }
	inline SPSpriteInfo_t1094930498 ** get_address_of_spriteInfo_0() { return &___spriteInfo_0; }
	inline void set_spriteInfo_0(SPSpriteInfo_t1094930498 * value)
	{
		___spriteInfo_0 = value;
		Il2CppCodeGenWriteBarrier(&___spriteInfo_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
