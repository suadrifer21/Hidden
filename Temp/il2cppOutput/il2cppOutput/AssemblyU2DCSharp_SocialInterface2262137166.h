#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SocialInterface
struct  SocialInterface_t2262137166  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject SocialInterface::loginButton
	GameObject_t1756533147 * ___loginButton_2;
	// UnityEngine.GameObject SocialInterface::logoutButton
	GameObject_t1756533147 * ___logoutButton_3;
	// UnityEngine.GameObject SocialInterface::leadButton
	GameObject_t1756533147 * ___leadButton_4;

public:
	inline static int32_t get_offset_of_loginButton_2() { return static_cast<int32_t>(offsetof(SocialInterface_t2262137166, ___loginButton_2)); }
	inline GameObject_t1756533147 * get_loginButton_2() const { return ___loginButton_2; }
	inline GameObject_t1756533147 ** get_address_of_loginButton_2() { return &___loginButton_2; }
	inline void set_loginButton_2(GameObject_t1756533147 * value)
	{
		___loginButton_2 = value;
		Il2CppCodeGenWriteBarrier(&___loginButton_2, value);
	}

	inline static int32_t get_offset_of_logoutButton_3() { return static_cast<int32_t>(offsetof(SocialInterface_t2262137166, ___logoutButton_3)); }
	inline GameObject_t1756533147 * get_logoutButton_3() const { return ___logoutButton_3; }
	inline GameObject_t1756533147 ** get_address_of_logoutButton_3() { return &___logoutButton_3; }
	inline void set_logoutButton_3(GameObject_t1756533147 * value)
	{
		___logoutButton_3 = value;
		Il2CppCodeGenWriteBarrier(&___logoutButton_3, value);
	}

	inline static int32_t get_offset_of_leadButton_4() { return static_cast<int32_t>(offsetof(SocialInterface_t2262137166, ___leadButton_4)); }
	inline GameObject_t1756533147 * get_leadButton_4() const { return ___leadButton_4; }
	inline GameObject_t1756533147 ** get_address_of_leadButton_4() { return &___leadButton_4; }
	inline void set_leadButton_4(GameObject_t1756533147 * value)
	{
		___leadButton_4 = value;
		Il2CppCodeGenWriteBarrier(&___leadButton_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
