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
// GooglePlayGames.BasicApi.Nearby.AdvertisingResult
struct AdvertisingResult_t1490481921;
struct AdvertisingResult_t1490481921_marshaled_pinvoke;
struct AdvertisingResult_t1490481921_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Nearby_1490481921.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Response167331027.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GooglePlayGames.BasicApi.Nearby.AdvertisingResult::.ctor(GooglePlayGames.BasicApi.ResponseStatus,System.String)
extern "C"  void AdvertisingResult__ctor_m952205138 (AdvertisingResult_t1490481921 * __this, int32_t ___status0, String_t* ___localEndpointName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_Succeeded()
extern "C"  bool AdvertisingResult_get_Succeeded_m2324769829 (AdvertisingResult_t1490481921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_Status()
extern "C"  int32_t AdvertisingResult_get_Status_m981440860 (AdvertisingResult_t1490481921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_LocalEndpointName()
extern "C"  String_t* AdvertisingResult_get_LocalEndpointName_m1212285900 (AdvertisingResult_t1490481921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct AdvertisingResult_t1490481921;
struct AdvertisingResult_t1490481921_marshaled_pinvoke;

extern "C" void AdvertisingResult_t1490481921_marshal_pinvoke(const AdvertisingResult_t1490481921& unmarshaled, AdvertisingResult_t1490481921_marshaled_pinvoke& marshaled);
extern "C" void AdvertisingResult_t1490481921_marshal_pinvoke_back(const AdvertisingResult_t1490481921_marshaled_pinvoke& marshaled, AdvertisingResult_t1490481921& unmarshaled);
extern "C" void AdvertisingResult_t1490481921_marshal_pinvoke_cleanup(AdvertisingResult_t1490481921_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct AdvertisingResult_t1490481921;
struct AdvertisingResult_t1490481921_marshaled_com;

extern "C" void AdvertisingResult_t1490481921_marshal_com(const AdvertisingResult_t1490481921& unmarshaled, AdvertisingResult_t1490481921_marshaled_com& marshaled);
extern "C" void AdvertisingResult_t1490481921_marshal_com_back(const AdvertisingResult_t1490481921_marshaled_com& marshaled, AdvertisingResult_t1490481921& unmarshaled);
extern "C" void AdvertisingResult_t1490481921_marshal_com_cleanup(AdvertisingResult_t1490481921_marshaled_com& marshaled);
