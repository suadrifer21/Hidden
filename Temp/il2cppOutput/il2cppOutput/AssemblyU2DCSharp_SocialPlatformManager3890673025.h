#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SocialPlatformManager
struct SocialPlatformManager_t3890673025;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SocialPlatformManager
struct  SocialPlatformManager_t3890673025  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject SocialPlatformManager::loginButton
	GameObject_t1756533147 * ___loginButton_3;
	// UnityEngine.GameObject SocialPlatformManager::logoutButton
	GameObject_t1756533147 * ___logoutButton_4;
	// UnityEngine.GameObject SocialPlatformManager::leadButton
	GameObject_t1756533147 * ___leadButton_5;

public:
	inline static int32_t get_offset_of_loginButton_3() { return static_cast<int32_t>(offsetof(SocialPlatformManager_t3890673025, ___loginButton_3)); }
	inline GameObject_t1756533147 * get_loginButton_3() const { return ___loginButton_3; }
	inline GameObject_t1756533147 ** get_address_of_loginButton_3() { return &___loginButton_3; }
	inline void set_loginButton_3(GameObject_t1756533147 * value)
	{
		___loginButton_3 = value;
		Il2CppCodeGenWriteBarrier(&___loginButton_3, value);
	}

	inline static int32_t get_offset_of_logoutButton_4() { return static_cast<int32_t>(offsetof(SocialPlatformManager_t3890673025, ___logoutButton_4)); }
	inline GameObject_t1756533147 * get_logoutButton_4() const { return ___logoutButton_4; }
	inline GameObject_t1756533147 ** get_address_of_logoutButton_4() { return &___logoutButton_4; }
	inline void set_logoutButton_4(GameObject_t1756533147 * value)
	{
		___logoutButton_4 = value;
		Il2CppCodeGenWriteBarrier(&___logoutButton_4, value);
	}

	inline static int32_t get_offset_of_leadButton_5() { return static_cast<int32_t>(offsetof(SocialPlatformManager_t3890673025, ___leadButton_5)); }
	inline GameObject_t1756533147 * get_leadButton_5() const { return ___leadButton_5; }
	inline GameObject_t1756533147 ** get_address_of_leadButton_5() { return &___leadButton_5; }
	inline void set_leadButton_5(GameObject_t1756533147 * value)
	{
		___leadButton_5 = value;
		Il2CppCodeGenWriteBarrier(&___leadButton_5, value);
	}
};

struct SocialPlatformManager_t3890673025_StaticFields
{
public:
	// SocialPlatformManager SocialPlatformManager::instance
	SocialPlatformManager_t3890673025 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(SocialPlatformManager_t3890673025_StaticFields, ___instance_2)); }
	inline SocialPlatformManager_t3890673025 * get_instance_2() const { return ___instance_2; }
	inline SocialPlatformManager_t3890673025 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(SocialPlatformManager_t3890673025 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
