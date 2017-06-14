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

// System.Text.Encoding
struct Encoding_t663144255;
// System.IO.TextWriter
struct TextWriter_t4027217640;
// System.IO.Stream
struct Stream_t3255436806;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_Encoding663144255.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_IO_FileAccess4282042064.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_ConsoleKeyInfo3124575640.h"

// System.Void System.Console::.cctor()
extern "C"  void Console__cctor_m4246683879 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::SetEncodings(System.Text.Encoding,System.Text.Encoding)
extern "C"  void Console_SetEncodings_m342145566 (Il2CppObject * __this /* static, unused */, Encoding_t663144255 * ___inputEncoding0, Encoding_t663144255 * ___outputEncoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.Console::get_Error()
extern "C"  TextWriter_t4027217640 * Console_get_Error_m2313154535 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::Open(System.IntPtr,System.IO.FileAccess,System.Int32)
extern "C"  Stream_t3255436806 * Console_Open_m2656719008 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, int32_t ___access1, int32_t ___bufferSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardError(System.Int32)
extern "C"  Stream_t3255436806 * Console_OpenStandardError_m3676373108 (Il2CppObject * __this /* static, unused */, int32_t ___bufferSize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardInput(System.Int32)
extern "C"  Stream_t3255436806 * Console_OpenStandardInput_m3779296306 (Il2CppObject * __this /* static, unused */, int32_t ___bufferSize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardOutput(System.Int32)
extern "C"  Stream_t3255436806 * Console_OpenStandardOutput_m271745789 (Il2CppObject * __this /* static, unused */, int32_t ___bufferSize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::WriteLine(System.String)
extern "C"  void Console_WriteLine_m3271989373 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::WriteLine(System.String,System.Object)
extern "C"  void Console_WriteLine_m3776981455 (Il2CppObject * __this /* static, unused */, String_t* ___format0, Il2CppObject * ___arg01, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::WriteLine(System.String,System.Object[])
extern "C"  void Console_WriteLine_m3998221605 (Il2CppObject * __this /* static, unused */, String_t* ___format0, ObjectU5BU5D_t3614634134* ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::WriteLine(System.String,System.Object,System.Object)
extern "C"  void Console_WriteLine_m3595319869 (Il2CppObject * __this /* static, unused */, String_t* ___format0, Il2CppObject * ___arg01, Il2CppObject * ___arg12, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::WriteLine(System.String,System.Object,System.Object,System.Object)
extern "C"  void Console_WriteLine_m1031882127 (Il2CppObject * __this /* static, unused */, String_t* ___format0, Il2CppObject * ___arg01, Il2CppObject * ___arg12, Il2CppObject * ___arg23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Console::get_InputEncoding()
extern "C"  Encoding_t663144255 * Console_get_InputEncoding_m279967470 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Console::get_OutputEncoding()
extern "C"  Encoding_t663144255 * Console_get_OutputEncoding_m612921941 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKeyInfo System.Console::ReadKey()
extern "C"  ConsoleKeyInfo_t3124575640  Console_ReadKey_m2436723015 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKeyInfo System.Console::ReadKey(System.Boolean)
extern "C"  ConsoleKeyInfo_t3124575640  Console_ReadKey_m1507505578 (Il2CppObject * __this /* static, unused */, bool ___intercept0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::DoConsoleCancelEvent()
extern "C"  void Console_DoConsoleCancelEvent_m3159219060 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
