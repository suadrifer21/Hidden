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

// System.IO.CStreamWriter
struct CStreamWriter_t2592797654;
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
#include "mscorlib_System_String2029220233.h"

// System.Void System.IO.CStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void CStreamWriter__ctor_m4239814955 (CStreamWriter_t2592797654 * __this, Stream_t3255436806 * ___stream0, Encoding_t663144255 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C"  void CStreamWriter_Write_m3468285691 (CStreamWriter_t2592797654 * __this, CharU5BU5D_t1328083999* ___buffer0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::Write(System.Char)
extern "C"  void CStreamWriter_Write_m3213359241 (CStreamWriter_t2592797654 * __this, Il2CppChar ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::InternalWriteString(System.String)
extern "C"  void CStreamWriter_InternalWriteString_m2976066110 (CStreamWriter_t2592797654 * __this, String_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::InternalWriteChar(System.Char)
extern "C"  void CStreamWriter_InternalWriteChar_m1578570558 (CStreamWriter_t2592797654 * __this, Il2CppChar ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::InternalWriteChars(System.Char[],System.Int32)
extern "C"  void CStreamWriter_InternalWriteChars_m2564613996 (CStreamWriter_t2592797654 * __this, CharU5BU5D_t1328083999* ___buffer0, int32_t ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::Write(System.Char[])
extern "C"  void CStreamWriter_Write_m2969837959 (CStreamWriter_t2592797654 * __this, CharU5BU5D_t1328083999* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::Write(System.String)
extern "C"  void CStreamWriter_Write_m1803684744 (CStreamWriter_t2592797654 * __this, String_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
