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

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Response167331027.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.Nearby.AdvertisingResult
struct  AdvertisingResult_t1490481921 
{
public:
	// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.Nearby.AdvertisingResult::mStatus
	int32_t ___mStatus_0;
	// System.String GooglePlayGames.BasicApi.Nearby.AdvertisingResult::mLocalEndpointName
	String_t* ___mLocalEndpointName_1;

public:
	inline static int32_t get_offset_of_mStatus_0() { return static_cast<int32_t>(offsetof(AdvertisingResult_t1490481921, ___mStatus_0)); }
	inline int32_t get_mStatus_0() const { return ___mStatus_0; }
	inline int32_t* get_address_of_mStatus_0() { return &___mStatus_0; }
	inline void set_mStatus_0(int32_t value)
	{
		___mStatus_0 = value;
	}

	inline static int32_t get_offset_of_mLocalEndpointName_1() { return static_cast<int32_t>(offsetof(AdvertisingResult_t1490481921, ___mLocalEndpointName_1)); }
	inline String_t* get_mLocalEndpointName_1() const { return ___mLocalEndpointName_1; }
	inline String_t** get_address_of_mLocalEndpointName_1() { return &___mLocalEndpointName_1; }
	inline void set_mLocalEndpointName_1(String_t* value)
	{
		___mLocalEndpointName_1 = value;
		Il2CppCodeGenWriteBarrier(&___mLocalEndpointName_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.AdvertisingResult
struct AdvertisingResult_t1490481921_marshaled_pinvoke
{
	int32_t ___mStatus_0;
	char* ___mLocalEndpointName_1;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.AdvertisingResult
struct AdvertisingResult_t1490481921_marshaled_com
{
	int32_t ___mStatus_0;
	Il2CppChar* ___mLocalEndpointName_1;
};
