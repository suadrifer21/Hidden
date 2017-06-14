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
// GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_t1960848347;
struct EndpointDetails_t1960848347_marshaled_pinvoke;
struct EndpointDetails_t1960848347_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Nearby_1960848347.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GooglePlayGames.BasicApi.Nearby.EndpointDetails::.ctor(System.String,System.String,System.String,System.String)
extern "C"  void EndpointDetails__ctor_m3601830901 (EndpointDetails_t1960848347 * __this, String_t* ___endpointId0, String_t* ___deviceId1, String_t* ___name2, String_t* ___serviceId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_EndpointId()
extern "C"  String_t* EndpointDetails_get_EndpointId_m551763615 (EndpointDetails_t1960848347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_DeviceId()
extern "C"  String_t* EndpointDetails_get_DeviceId_m1913075168 (EndpointDetails_t1960848347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_Name()
extern "C"  String_t* EndpointDetails_get_Name_m4025292080 (EndpointDetails_t1960848347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_ServiceId()
extern "C"  String_t* EndpointDetails_get_ServiceId_m3367371589 (EndpointDetails_t1960848347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct EndpointDetails_t1960848347;
struct EndpointDetails_t1960848347_marshaled_pinvoke;

extern "C" void EndpointDetails_t1960848347_marshal_pinvoke(const EndpointDetails_t1960848347& unmarshaled, EndpointDetails_t1960848347_marshaled_pinvoke& marshaled);
extern "C" void EndpointDetails_t1960848347_marshal_pinvoke_back(const EndpointDetails_t1960848347_marshaled_pinvoke& marshaled, EndpointDetails_t1960848347& unmarshaled);
extern "C" void EndpointDetails_t1960848347_marshal_pinvoke_cleanup(EndpointDetails_t1960848347_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct EndpointDetails_t1960848347;
struct EndpointDetails_t1960848347_marshaled_com;

extern "C" void EndpointDetails_t1960848347_marshal_com(const EndpointDetails_t1960848347& unmarshaled, EndpointDetails_t1960848347_marshaled_com& marshaled);
extern "C" void EndpointDetails_t1960848347_marshal_com_back(const EndpointDetails_t1960848347_marshaled_com& marshaled, EndpointDetails_t1960848347& unmarshaled);
extern "C" void EndpointDetails_t1960848347_marshal_com_cleanup(EndpointDetails_t1960848347_marshaled_com& marshaled);
