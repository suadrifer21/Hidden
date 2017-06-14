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

// System.IO.CStreamReader
struct CStreamReader_t2584617632;
// System.IO.Stream
struct Stream_t3255436806;
// System.Text.Encoding
struct Encoding_t663144255;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_Text_Encoding663144255.h"

// System.Void System.IO.CStreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void CStreamReader__ctor_m3600006677 (CStreamReader_t2584617632 * __this, Stream_t3255436806 * ___stream0, Encoding_t663144255 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.CStreamReader::Peek()
extern "C"  int32_t CStreamReader_Peek_m2168894194 (CStreamReader_t2584617632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.CStreamReader::Read()
extern "C"  int32_t CStreamReader_Read_m4283489717 (CStreamReader_t2584617632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.CStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t CStreamReader_Read_m1142109876 (CStreamReader_t2584617632 * __this, CharU5BU5D_t1328083999* ___dest0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.CStreamReader::ReadLine()
extern "C"  String_t* CStreamReader_ReadLine_m2770043976 (CStreamReader_t2584617632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.CStreamReader::ReadToEnd()
extern "C"  String_t* CStreamReader_ReadToEnd_m1854595530 (CStreamReader_t2584617632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
