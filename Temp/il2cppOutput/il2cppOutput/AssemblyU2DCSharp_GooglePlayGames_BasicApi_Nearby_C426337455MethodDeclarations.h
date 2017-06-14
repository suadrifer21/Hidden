#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse
struct ConnectionResponse_t426337455;
struct ConnectionResponse_t426337455_marshaled_pinvoke;
struct ConnectionResponse_t426337455_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Nearby_C426337455.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Nearby_1092627307.h"

// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionResponse::.ctor(System.Int64,System.String,GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status,System.Byte[])
extern "C"  void ConnectionResponse__ctor_m815482887 (ConnectionResponse_t426337455 * __this, int64_t ___localClientId0, String_t* ___remoteEndpointId1, int32_t ___code2, ByteU5BU5D_t3397334013* ___payload3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_LocalClientId()
extern "C"  int64_t ConnectionResponse_get_LocalClientId_m4184014910 (ConnectionResponse_t426337455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_RemoteEndpointId()
extern "C"  String_t* ConnectionResponse_get_RemoteEndpointId_m2121602155 (ConnectionResponse_t426337455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_ResponseStatus()
extern "C"  int32_t ConnectionResponse_get_ResponseStatus_m358982561 (ConnectionResponse_t426337455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_Payload()
extern "C"  ByteU5BU5D_t3397334013* ConnectionResponse_get_Payload_m3688448196 (ConnectionResponse_t426337455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::Rejected(System.Int64,System.String)
extern "C"  ConnectionResponse_t426337455  ConnectionResponse_Rejected_m2820916898 (Il2CppObject * __this /* static, unused */, int64_t ___localClientId0, String_t* ___remoteEndpointId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::NetworkNotConnected(System.Int64,System.String)
extern "C"  ConnectionResponse_t426337455  ConnectionResponse_NetworkNotConnected_m2658362344 (Il2CppObject * __this /* static, unused */, int64_t ___localClientId0, String_t* ___remoteEndpointId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::InternalError(System.Int64,System.String)
extern "C"  ConnectionResponse_t426337455  ConnectionResponse_InternalError_m1934320683 (Il2CppObject * __this /* static, unused */, int64_t ___localClientId0, String_t* ___remoteEndpointId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::EndpointNotConnected(System.Int64,System.String)
extern "C"  ConnectionResponse_t426337455  ConnectionResponse_EndpointNotConnected_m3832965697 (Il2CppObject * __this /* static, unused */, int64_t ___localClientId0, String_t* ___remoteEndpointId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::Accepted(System.Int64,System.String,System.Byte[])
extern "C"  ConnectionResponse_t426337455  ConnectionResponse_Accepted_m1537561764 (Il2CppObject * __this /* static, unused */, int64_t ___localClientId0, String_t* ___remoteEndpointId1, ByteU5BU5D_t3397334013* ___payload2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::AlreadyConnected(System.Int64,System.String)
extern "C"  ConnectionResponse_t426337455  ConnectionResponse_AlreadyConnected_m1481599405 (Il2CppObject * __this /* static, unused */, int64_t ___localClientId0, String_t* ___remoteEndpointId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionResponse::.cctor()
extern "C"  void ConnectionResponse__cctor_m1139279340 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ConnectionResponse_t426337455;
struct ConnectionResponse_t426337455_marshaled_pinvoke;

extern "C" void ConnectionResponse_t426337455_marshal_pinvoke(const ConnectionResponse_t426337455& unmarshaled, ConnectionResponse_t426337455_marshaled_pinvoke& marshaled);
extern "C" void ConnectionResponse_t426337455_marshal_pinvoke_back(const ConnectionResponse_t426337455_marshaled_pinvoke& marshaled, ConnectionResponse_t426337455& unmarshaled);
extern "C" void ConnectionResponse_t426337455_marshal_pinvoke_cleanup(ConnectionResponse_t426337455_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ConnectionResponse_t426337455;
struct ConnectionResponse_t426337455_marshaled_com;

extern "C" void ConnectionResponse_t426337455_marshal_com(const ConnectionResponse_t426337455& unmarshaled, ConnectionResponse_t426337455_marshaled_com& marshaled);
extern "C" void ConnectionResponse_t426337455_marshal_com_back(const ConnectionResponse_t426337455_marshaled_com& marshaled, ConnectionResponse_t426337455& unmarshaled);
extern "C" void ConnectionResponse_t426337455_marshal_com_cleanup(ConnectionResponse_t426337455_marshaled_com& marshaled);
