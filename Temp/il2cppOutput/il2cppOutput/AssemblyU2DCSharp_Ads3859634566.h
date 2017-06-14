#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Ads
struct Ads_t3859634566;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ads
struct  Ads_t3859634566  : public MonoBehaviour_t1158329972
{
public:
	// System.String Ads::appleStoreId
	String_t* ___appleStoreId_3;
	// System.String Ads::googlePlayStoreId
	String_t* ___googlePlayStoreId_4;
	// System.String Ads::gameId
	String_t* ___gameId_5;
	// System.Single Ads::cooldown
	float ___cooldown_6;
	// System.Single Ads::remainingCooldown
	float ___remainingCooldown_7;

public:
	inline static int32_t get_offset_of_appleStoreId_3() { return static_cast<int32_t>(offsetof(Ads_t3859634566, ___appleStoreId_3)); }
	inline String_t* get_appleStoreId_3() const { return ___appleStoreId_3; }
	inline String_t** get_address_of_appleStoreId_3() { return &___appleStoreId_3; }
	inline void set_appleStoreId_3(String_t* value)
	{
		___appleStoreId_3 = value;
		Il2CppCodeGenWriteBarrier(&___appleStoreId_3, value);
	}

	inline static int32_t get_offset_of_googlePlayStoreId_4() { return static_cast<int32_t>(offsetof(Ads_t3859634566, ___googlePlayStoreId_4)); }
	inline String_t* get_googlePlayStoreId_4() const { return ___googlePlayStoreId_4; }
	inline String_t** get_address_of_googlePlayStoreId_4() { return &___googlePlayStoreId_4; }
	inline void set_googlePlayStoreId_4(String_t* value)
	{
		___googlePlayStoreId_4 = value;
		Il2CppCodeGenWriteBarrier(&___googlePlayStoreId_4, value);
	}

	inline static int32_t get_offset_of_gameId_5() { return static_cast<int32_t>(offsetof(Ads_t3859634566, ___gameId_5)); }
	inline String_t* get_gameId_5() const { return ___gameId_5; }
	inline String_t** get_address_of_gameId_5() { return &___gameId_5; }
	inline void set_gameId_5(String_t* value)
	{
		___gameId_5 = value;
		Il2CppCodeGenWriteBarrier(&___gameId_5, value);
	}

	inline static int32_t get_offset_of_cooldown_6() { return static_cast<int32_t>(offsetof(Ads_t3859634566, ___cooldown_6)); }
	inline float get_cooldown_6() const { return ___cooldown_6; }
	inline float* get_address_of_cooldown_6() { return &___cooldown_6; }
	inline void set_cooldown_6(float value)
	{
		___cooldown_6 = value;
	}

	inline static int32_t get_offset_of_remainingCooldown_7() { return static_cast<int32_t>(offsetof(Ads_t3859634566, ___remainingCooldown_7)); }
	inline float get_remainingCooldown_7() const { return ___remainingCooldown_7; }
	inline float* get_address_of_remainingCooldown_7() { return &___remainingCooldown_7; }
	inline void set_remainingCooldown_7(float value)
	{
		___remainingCooldown_7 = value;
	}
};

struct Ads_t3859634566_StaticFields
{
public:
	// Ads Ads::instance
	Ads_t3859634566 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(Ads_t3859634566_StaticFields, ___instance_2)); }
	inline Ads_t3859634566 * get_instance_2() const { return ___instance_2; }
	inline Ads_t3859634566 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(Ads_t3859634566 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
