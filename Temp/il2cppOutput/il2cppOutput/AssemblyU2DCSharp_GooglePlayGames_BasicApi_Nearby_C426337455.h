#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Nearby_1092627307.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.Nearby.ConnectionResponse
struct  ConnectionResponse_t426337455 
{
public:
	// System.Int64 GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mLocalClientId
	int64_t ___mLocalClientId_1;
	// System.String GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mRemoteEndpointId
	String_t* ___mRemoteEndpointId_2;
	// GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mResponseStatus
	int32_t ___mResponseStatus_3;
	// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mPayload
	ByteU5BU5D_t3397334013* ___mPayload_4;

public:
	inline static int32_t get_offset_of_mLocalClientId_1() { return static_cast<int32_t>(offsetof(ConnectionResponse_t426337455, ___mLocalClientId_1)); }
	inline int64_t get_mLocalClientId_1() const { return ___mLocalClientId_1; }
	inline int64_t* get_address_of_mLocalClientId_1() { return &___mLocalClientId_1; }
	inline void set_mLocalClientId_1(int64_t value)
	{
		___mLocalClientId_1 = value;
	}

	inline static int32_t get_offset_of_mRemoteEndpointId_2() { return static_cast<int32_t>(offsetof(ConnectionResponse_t426337455, ___mRemoteEndpointId_2)); }
	inline String_t* get_mRemoteEndpointId_2() const { return ___mRemoteEndpointId_2; }
	inline String_t** get_address_of_mRemoteEndpointId_2() { return &___mRemoteEndpointId_2; }
	inline void set_mRemoteEndpointId_2(String_t* value)
	{
		___mRemoteEndpointId_2 = value;
		Il2CppCodeGenWriteBarrier(&___mRemoteEndpointId_2, value);
	}

	inline static int32_t get_offset_of_mResponseStatus_3() { return static_cast<int32_t>(offsetof(ConnectionResponse_t426337455, ___mResponseStatus_3)); }
	inline int32_t get_mResponseStatus_3() const { return ___mResponseStatus_3; }
	inline int32_t* get_address_of_mResponseStatus_3() { return &___mResponseStatus_3; }
	inline void set_mResponseStatus_3(int32_t value)
	{
		___mResponseStatus_3 = value;
	}

	inline static int32_t get_offset_of_mPayload_4() { return static_cast<int32_t>(offsetof(ConnectionResponse_t426337455, ___mPayload_4)); }
	inline ByteU5BU5D_t3397334013* get_mPayload_4() const { return ___mPayload_4; }
	inline ByteU5BU5D_t3397334013** get_address_of_mPayload_4() { return &___mPayload_4; }
	inline void set_mPayload_4(ByteU5BU5D_t3397334013* value)
	{
		___mPayload_4 = value;
		Il2CppCodeGenWriteBarrier(&___mPayload_4, value);
	}
};

struct ConnectionResponse_t426337455_StaticFields
{
public:
	// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::EmptyPayload
	ByteU5BU5D_t3397334013* ___EmptyPayload_0;

public:
	inline static int32_t get_offset_of_EmptyPayload_0() { return static_cast<int32_t>(offsetof(ConnectionResponse_t426337455_StaticFields, ___EmptyPayload_0)); }
	inline ByteU5BU5D_t3397334013* get_EmptyPayload_0() const { return ___EmptyPayload_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_EmptyPayload_0() { return &___EmptyPayload_0; }
	inline void set_EmptyPayload_0(ByteU5BU5D_t3397334013* value)
	{
		___EmptyPayload_0 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyPayload_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionResponse
struct ConnectionResponse_t426337455_marshaled_pinvoke
{
	int64_t ___mLocalClientId_1;
	char* ___mRemoteEndpointId_2;
	int32_t ___mResponseStatus_3;
	uint8_t* ___mPayload_4;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionResponse
struct ConnectionResponse_t426337455_marshaled_com
{
	int64_t ___mLocalClientId_1;
	Il2CppChar* ___mRemoteEndpointId_2;
	int32_t ___mResponseStatus_3;
	uint8_t* ___mPayload_4;
};
