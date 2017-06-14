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
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_t3624437952;
struct Builder_t3624437952_marshaled_pinvoke;
struct Builder_t3624437952_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_SavedGa3624437952.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_SavedGa1415369233.h"

// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedDescription(System.String)
extern "C"  Builder_t3624437952  Builder_WithUpdatedDescription_m2057166771 (Builder_t3624437952 * __this, String_t* ___description0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPngCoverImage(System.Byte[])
extern "C"  Builder_t3624437952  Builder_WithUpdatedPngCoverImage_m2276106099 (Builder_t3624437952 * __this, ByteU5BU5D_t3397334013* ___newPngCoverImage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPlayedTime(System.TimeSpan)
extern "C"  Builder_t3624437952  Builder_WithUpdatedPlayedTime_m3224006445 (Builder_t3624437952 * __this, TimeSpan_t3430258949  ___newPlayedTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::Build()
extern "C"  SavedGameMetadataUpdate_t1415369233  Builder_Build_m1774412950 (Builder_t3624437952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Builder_t3624437952;
struct Builder_t3624437952_marshaled_pinvoke;

extern "C" void Builder_t3624437952_marshal_pinvoke(const Builder_t3624437952& unmarshaled, Builder_t3624437952_marshaled_pinvoke& marshaled);
extern "C" void Builder_t3624437952_marshal_pinvoke_back(const Builder_t3624437952_marshaled_pinvoke& marshaled, Builder_t3624437952& unmarshaled);
extern "C" void Builder_t3624437952_marshal_pinvoke_cleanup(Builder_t3624437952_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Builder_t3624437952;
struct Builder_t3624437952_marshaled_com;

extern "C" void Builder_t3624437952_marshal_com(const Builder_t3624437952& unmarshaled, Builder_t3624437952_marshaled_com& marshaled);
extern "C" void Builder_t3624437952_marshal_com_back(const Builder_t3624437952_marshaled_com& marshaled, Builder_t3624437952& unmarshaled);
extern "C" void Builder_t3624437952_marshal_com_cleanup(Builder_t3624437952_marshaled_com& marshaled);
