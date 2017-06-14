#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameCenter
struct  GameCenter_t3483805403  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text GameCenter::authStatus
	Text_t356221433 * ___authStatus_2;
	// System.String GameCenter::userInfo
	String_t* ___userInfo_3;
	// UnityEngine.GameObject GameCenter::loginButton
	GameObject_t1756533147 * ___loginButton_4;
	// UnityEngine.GameObject GameCenter::logoutButton
	GameObject_t1756533147 * ___logoutButton_5;

public:
	inline static int32_t get_offset_of_authStatus_2() { return static_cast<int32_t>(offsetof(GameCenter_t3483805403, ___authStatus_2)); }
	inline Text_t356221433 * get_authStatus_2() const { return ___authStatus_2; }
	inline Text_t356221433 ** get_address_of_authStatus_2() { return &___authStatus_2; }
	inline void set_authStatus_2(Text_t356221433 * value)
	{
		___authStatus_2 = value;
		Il2CppCodeGenWriteBarrier(&___authStatus_2, value);
	}

	inline static int32_t get_offset_of_userInfo_3() { return static_cast<int32_t>(offsetof(GameCenter_t3483805403, ___userInfo_3)); }
	inline String_t* get_userInfo_3() const { return ___userInfo_3; }
	inline String_t** get_address_of_userInfo_3() { return &___userInfo_3; }
	inline void set_userInfo_3(String_t* value)
	{
		___userInfo_3 = value;
		Il2CppCodeGenWriteBarrier(&___userInfo_3, value);
	}

	inline static int32_t get_offset_of_loginButton_4() { return static_cast<int32_t>(offsetof(GameCenter_t3483805403, ___loginButton_4)); }
	inline GameObject_t1756533147 * get_loginButton_4() const { return ___loginButton_4; }
	inline GameObject_t1756533147 ** get_address_of_loginButton_4() { return &___loginButton_4; }
	inline void set_loginButton_4(GameObject_t1756533147 * value)
	{
		___loginButton_4 = value;
		Il2CppCodeGenWriteBarrier(&___loginButton_4, value);
	}

	inline static int32_t get_offset_of_logoutButton_5() { return static_cast<int32_t>(offsetof(GameCenter_t3483805403, ___logoutButton_5)); }
	inline GameObject_t1756533147 * get_logoutButton_5() const { return ___logoutButton_5; }
	inline GameObject_t1756533147 ** get_address_of_logoutButton_5() { return &___logoutButton_5; }
	inline void set_logoutButton_5(GameObject_t1756533147 * value)
	{
		___logoutButton_5 = value;
		Il2CppCodeGenWriteBarrier(&___logoutButton_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
