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

// System.TermInfoReader
struct TermInfoReader_t3840788697;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_TermInfoNumbers1380902466.h"
#include "mscorlib_System_TermInfoStrings1425267120.h"

// System.Void System.TermInfoReader::.ctor(System.String,System.String)
extern "C"  void TermInfoReader__ctor_m3126524680 (TermInfoReader_t3840788697 * __this, String_t* ___term0, String_t* ___filename1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoReader::.ctor(System.String,System.Byte[])
extern "C"  void TermInfoReader__ctor_m2816890743 (TermInfoReader_t3840788697 * __this, String_t* ___term0, ByteU5BU5D_t3397334013* ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoReader::ReadHeader(System.Byte[],System.Int32&)
extern "C"  void TermInfoReader_ReadHeader_m1440274131 (TermInfoReader_t3840788697 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t* ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoReader::ReadNames(System.Byte[],System.Int32&)
extern "C"  void TermInfoReader_ReadNames_m2557708900 (TermInfoReader_t3840788697 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t* ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TermInfoReader::Get(System.TermInfoNumbers)
extern "C"  int32_t TermInfoReader_Get_m2250176589 (TermInfoReader_t3840788697 * __this, int32_t ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TermInfoReader::Get(System.TermInfoStrings)
extern "C"  String_t* TermInfoReader_Get_m3530223990 (TermInfoReader_t3840788697 * __this, int32_t ___tstr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.TermInfoReader::GetStringBytes(System.TermInfoStrings)
extern "C"  ByteU5BU5D_t3397334013* TermInfoReader_GetStringBytes_m462385773 (TermInfoReader_t3840788697 * __this, int32_t ___tstr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.TermInfoReader::GetInt16(System.Byte[],System.Int32)
extern "C"  int16_t TermInfoReader_GetInt16_m808937162 (TermInfoReader_t3840788697 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TermInfoReader::GetString(System.Byte[],System.Int32)
extern "C"  String_t* TermInfoReader_GetString_m148713352 (TermInfoReader_t3840788697 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.TermInfoReader::GetStringBytes(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t3397334013* TermInfoReader_GetStringBytes_m1005725546 (TermInfoReader_t3840788697 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
