#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Bag
struct Bag_t4262919230;
// UnityEngine.Animator
struct Animator_t69676727;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Bag
struct  Bag_t4262919230  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator Bag::anim
	Animator_t69676727 * ___anim_3;

public:
	inline static int32_t get_offset_of_anim_3() { return static_cast<int32_t>(offsetof(Bag_t4262919230, ___anim_3)); }
	inline Animator_t69676727 * get_anim_3() const { return ___anim_3; }
	inline Animator_t69676727 ** get_address_of_anim_3() { return &___anim_3; }
	inline void set_anim_3(Animator_t69676727 * value)
	{
		___anim_3 = value;
		Il2CppCodeGenWriteBarrier(&___anim_3, value);
	}
};

struct Bag_t4262919230_StaticFields
{
public:
	// Bag Bag::instance
	Bag_t4262919230 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(Bag_t4262919230_StaticFields, ___instance_2)); }
	inline Bag_t4262919230 * get_instance_2() const { return ___instance_2; }
	inline Bag_t4262919230 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(Bag_t4262919230 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
