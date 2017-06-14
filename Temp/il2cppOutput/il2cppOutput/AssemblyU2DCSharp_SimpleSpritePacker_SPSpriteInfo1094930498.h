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
// UnityEngine.Sprite
struct Sprite_t309593783;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleSpritePacker.SPSpriteInfo
struct  SPSpriteInfo_t1094930498  : public Il2CppObject
{
public:
	// UnityEngine.Object SimpleSpritePacker.SPSpriteInfo::source
	Object_t1021602117 * ___source_0;
	// UnityEngine.Sprite SimpleSpritePacker.SPSpriteInfo::targetSprite
	Sprite_t309593783 * ___targetSprite_1;

public:
	inline static int32_t get_offset_of_source_0() { return static_cast<int32_t>(offsetof(SPSpriteInfo_t1094930498, ___source_0)); }
	inline Object_t1021602117 * get_source_0() const { return ___source_0; }
	inline Object_t1021602117 ** get_address_of_source_0() { return &___source_0; }
	inline void set_source_0(Object_t1021602117 * value)
	{
		___source_0 = value;
		Il2CppCodeGenWriteBarrier(&___source_0, value);
	}

	inline static int32_t get_offset_of_targetSprite_1() { return static_cast<int32_t>(offsetof(SPSpriteInfo_t1094930498, ___targetSprite_1)); }
	inline Sprite_t309593783 * get_targetSprite_1() const { return ___targetSprite_1; }
	inline Sprite_t309593783 ** get_address_of_targetSprite_1() { return &___targetSprite_1; }
	inline void set_targetSprite_1(Sprite_t309593783 * value)
	{
		___targetSprite_1 = value;
		Il2CppCodeGenWriteBarrier(&___targetSprite_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
