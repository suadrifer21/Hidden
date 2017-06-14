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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct  EndpointDetails_t1960848347 
{
public:
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mEndpointId
	String_t* ___mEndpointId_0;
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mDeviceId
	String_t* ___mDeviceId_1;
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mName
	String_t* ___mName_2;
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mServiceId
	String_t* ___mServiceId_3;

public:
	inline static int32_t get_offset_of_mEndpointId_0() { return static_cast<int32_t>(offsetof(EndpointDetails_t1960848347, ___mEndpointId_0)); }
	inline String_t* get_mEndpointId_0() const { return ___mEndpointId_0; }
	inline String_t** get_address_of_mEndpointId_0() { return &___mEndpointId_0; }
	inline void set_mEndpointId_0(String_t* value)
	{
		___mEndpointId_0 = value;
		Il2CppCodeGenWriteBarrier(&___mEndpointId_0, value);
	}

	inline static int32_t get_offset_of_mDeviceId_1() { return static_cast<int32_t>(offsetof(EndpointDetails_t1960848347, ___mDeviceId_1)); }
	inline String_t* get_mDeviceId_1() const { return ___mDeviceId_1; }
	inline String_t** get_address_of_mDeviceId_1() { return &___mDeviceId_1; }
	inline void set_mDeviceId_1(String_t* value)
	{
		___mDeviceId_1 = value;
		Il2CppCodeGenWriteBarrier(&___mDeviceId_1, value);
	}

	inline static int32_t get_offset_of_mName_2() { return static_cast<int32_t>(offsetof(EndpointDetails_t1960848347, ___mName_2)); }
	inline String_t* get_mName_2() const { return ___mName_2; }
	inline String_t** get_address_of_mName_2() { return &___mName_2; }
	inline void set_mName_2(String_t* value)
	{
		___mName_2 = value;
		Il2CppCodeGenWriteBarrier(&___mName_2, value);
	}

	inline static int32_t get_offset_of_mServiceId_3() { return static_cast<int32_t>(offsetof(EndpointDetails_t1960848347, ___mServiceId_3)); }
	inline String_t* get_mServiceId_3() const { return ___mServiceId_3; }
	inline String_t** get_address_of_mServiceId_3() { return &___mServiceId_3; }
	inline void set_mServiceId_3(String_t* value)
	{
		___mServiceId_3 = value;
		Il2CppCodeGenWriteBarrier(&___mServiceId_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_t1960848347_marshaled_pinvoke
{
	char* ___mEndpointId_0;
	char* ___mDeviceId_1;
	char* ___mName_2;
	char* ___mServiceId_3;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_t1960848347_marshaled_com
{
	Il2CppChar* ___mEndpointId_0;
	Il2CppChar* ___mDeviceId_1;
	Il2CppChar* ___mName_2;
	Il2CppChar* ___mServiceId_3;
};
