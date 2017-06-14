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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScrollingUVs_Layers
struct  ScrollingUVs_Layers_t2350647444  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector2 ScrollingUVs_Layers::uvAnimationRate
	Vector2_t2243707579  ___uvAnimationRate_2;
	// System.String ScrollingUVs_Layers::textureName
	String_t* ___textureName_3;
	// UnityEngine.Vector2 ScrollingUVs_Layers::uvOffset
	Vector2_t2243707579  ___uvOffset_4;

public:
	inline static int32_t get_offset_of_uvAnimationRate_2() { return static_cast<int32_t>(offsetof(ScrollingUVs_Layers_t2350647444, ___uvAnimationRate_2)); }
	inline Vector2_t2243707579  get_uvAnimationRate_2() const { return ___uvAnimationRate_2; }
	inline Vector2_t2243707579 * get_address_of_uvAnimationRate_2() { return &___uvAnimationRate_2; }
	inline void set_uvAnimationRate_2(Vector2_t2243707579  value)
	{
		___uvAnimationRate_2 = value;
	}

	inline static int32_t get_offset_of_textureName_3() { return static_cast<int32_t>(offsetof(ScrollingUVs_Layers_t2350647444, ___textureName_3)); }
	inline String_t* get_textureName_3() const { return ___textureName_3; }
	inline String_t** get_address_of_textureName_3() { return &___textureName_3; }
	inline void set_textureName_3(String_t* value)
	{
		___textureName_3 = value;
		Il2CppCodeGenWriteBarrier(&___textureName_3, value);
	}

	inline static int32_t get_offset_of_uvOffset_4() { return static_cast<int32_t>(offsetof(ScrollingUVs_Layers_t2350647444, ___uvOffset_4)); }
	inline Vector2_t2243707579  get_uvOffset_4() const { return ___uvOffset_4; }
	inline Vector2_t2243707579 * get_address_of_uvOffset_4() { return &___uvOffset_4; }
	inline void set_uvOffset_4(Vector2_t2243707579  value)
	{
		___uvOffset_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
