#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.Collections.Generic.List`1<SimpleSpritePacker.SPSpriteInfo>
struct List_1_t464051630;
// System.Collections.Generic.List`1<SimpleSpritePacker.SPAction>
struct List_1_t204858277;

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"
#include "AssemblyU2DCSharp_SimpleSpritePacker_SPInstance_Pa2997969040.h"
#include "UnityEngine_UnityEngine_SpriteAlignment1292636872.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleSpritePacker.SPInstance
struct  SPInstance_t1207479728  : public ScriptableObject_t1975622470
{
public:
	// UnityEngine.Texture2D SimpleSpritePacker.SPInstance::m_Texture
	Texture2D_t3542995729 * ___m_Texture_2;
	// System.Int32 SimpleSpritePacker.SPInstance::m_Padding
	int32_t ___m_Padding_3;
	// System.Int32 SimpleSpritePacker.SPInstance::m_MaxSize
	int32_t ___m_MaxSize_4;
	// SimpleSpritePacker.SPInstance/PackingMethod SimpleSpritePacker.SPInstance::m_PackingMethod
	int32_t ___m_PackingMethod_5;
	// UnityEngine.SpriteAlignment SimpleSpritePacker.SPInstance::m_DefaultPivot
	int32_t ___m_DefaultPivot_6;
	// UnityEngine.Vector2 SimpleSpritePacker.SPInstance::m_DefaultCustomPivot
	Vector2_t2243707579  ___m_DefaultCustomPivot_7;
	// System.Collections.Generic.List`1<SimpleSpritePacker.SPSpriteInfo> SimpleSpritePacker.SPInstance::m_Sprites
	List_1_t464051630 * ___m_Sprites_8;
	// System.Collections.Generic.List`1<SimpleSpritePacker.SPAction> SimpleSpritePacker.SPInstance::m_PendingActions
	List_1_t204858277 * ___m_PendingActions_9;

public:
	inline static int32_t get_offset_of_m_Texture_2() { return static_cast<int32_t>(offsetof(SPInstance_t1207479728, ___m_Texture_2)); }
	inline Texture2D_t3542995729 * get_m_Texture_2() const { return ___m_Texture_2; }
	inline Texture2D_t3542995729 ** get_address_of_m_Texture_2() { return &___m_Texture_2; }
	inline void set_m_Texture_2(Texture2D_t3542995729 * value)
	{
		___m_Texture_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Texture_2, value);
	}

	inline static int32_t get_offset_of_m_Padding_3() { return static_cast<int32_t>(offsetof(SPInstance_t1207479728, ___m_Padding_3)); }
	inline int32_t get_m_Padding_3() const { return ___m_Padding_3; }
	inline int32_t* get_address_of_m_Padding_3() { return &___m_Padding_3; }
	inline void set_m_Padding_3(int32_t value)
	{
		___m_Padding_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxSize_4() { return static_cast<int32_t>(offsetof(SPInstance_t1207479728, ___m_MaxSize_4)); }
	inline int32_t get_m_MaxSize_4() const { return ___m_MaxSize_4; }
	inline int32_t* get_address_of_m_MaxSize_4() { return &___m_MaxSize_4; }
	inline void set_m_MaxSize_4(int32_t value)
	{
		___m_MaxSize_4 = value;
	}

	inline static int32_t get_offset_of_m_PackingMethod_5() { return static_cast<int32_t>(offsetof(SPInstance_t1207479728, ___m_PackingMethod_5)); }
	inline int32_t get_m_PackingMethod_5() const { return ___m_PackingMethod_5; }
	inline int32_t* get_address_of_m_PackingMethod_5() { return &___m_PackingMethod_5; }
	inline void set_m_PackingMethod_5(int32_t value)
	{
		___m_PackingMethod_5 = value;
	}

	inline static int32_t get_offset_of_m_DefaultPivot_6() { return static_cast<int32_t>(offsetof(SPInstance_t1207479728, ___m_DefaultPivot_6)); }
	inline int32_t get_m_DefaultPivot_6() const { return ___m_DefaultPivot_6; }
	inline int32_t* get_address_of_m_DefaultPivot_6() { return &___m_DefaultPivot_6; }
	inline void set_m_DefaultPivot_6(int32_t value)
	{
		___m_DefaultPivot_6 = value;
	}

	inline static int32_t get_offset_of_m_DefaultCustomPivot_7() { return static_cast<int32_t>(offsetof(SPInstance_t1207479728, ___m_DefaultCustomPivot_7)); }
	inline Vector2_t2243707579  get_m_DefaultCustomPivot_7() const { return ___m_DefaultCustomPivot_7; }
	inline Vector2_t2243707579 * get_address_of_m_DefaultCustomPivot_7() { return &___m_DefaultCustomPivot_7; }
	inline void set_m_DefaultCustomPivot_7(Vector2_t2243707579  value)
	{
		___m_DefaultCustomPivot_7 = value;
	}

	inline static int32_t get_offset_of_m_Sprites_8() { return static_cast<int32_t>(offsetof(SPInstance_t1207479728, ___m_Sprites_8)); }
	inline List_1_t464051630 * get_m_Sprites_8() const { return ___m_Sprites_8; }
	inline List_1_t464051630 ** get_address_of_m_Sprites_8() { return &___m_Sprites_8; }
	inline void set_m_Sprites_8(List_1_t464051630 * value)
	{
		___m_Sprites_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_Sprites_8, value);
	}

	inline static int32_t get_offset_of_m_PendingActions_9() { return static_cast<int32_t>(offsetof(SPInstance_t1207479728, ___m_PendingActions_9)); }
	inline List_1_t204858277 * get_m_PendingActions_9() const { return ___m_PendingActions_9; }
	inline List_1_t204858277 ** get_address_of_m_PendingActions_9() { return &___m_PendingActions_9; }
	inline void set_m_PendingActions_9(List_1_t204858277 * value)
	{
		___m_PendingActions_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_PendingActions_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
