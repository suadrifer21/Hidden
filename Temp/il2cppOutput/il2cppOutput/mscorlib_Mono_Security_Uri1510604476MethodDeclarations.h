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

// Mono.Security.Uri
struct Uri_t1510604476;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_Mono_Security_UriPartial2274729157.h"

// System.Void Mono.Security.Uri::.ctor(System.String)
extern "C"  void Uri__ctor_m1603132169 (Uri_t1510604476 * __this, String_t* ___uriString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::.ctor(System.String,System.Boolean)
extern "C"  void Uri__ctor_m1623294148 (Uri_t1510604476 * __this, String_t* ___uriString0, bool ___dontEscape1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::.ctor(System.String,System.Boolean,System.Boolean)
extern "C"  void Uri__ctor_m2432412097 (Uri_t1510604476 * __this, String_t* ___uriString0, bool ___dontEscape1, bool ___reduce2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::.cctor()
extern "C"  void Uri__cctor_m3322636096 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::get_AbsolutePath()
extern "C"  String_t* Uri_get_AbsolutePath_m3936057009 (Uri_t1510604476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::get_Host()
extern "C"  String_t* Uri_get_Host_m2825264947 (Uri_t1510604476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::get_IsFile()
extern "C"  bool Uri_get_IsFile_m2465890306 (Uri_t1510604476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::get_IsLoopback()
extern "C"  bool Uri_get_IsLoopback_m350861923 (Uri_t1510604476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::get_IsUnc()
extern "C"  bool Uri_get_IsUnc_m2815828830 (Uri_t1510604476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::get_LocalPath()
extern "C"  String_t* Uri_get_LocalPath_m798968787 (Uri_t1510604476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::get_Scheme()
extern "C"  String_t* Uri_get_Scheme_m3280081480 (Uri_t1510604476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::Equals(System.Object)
extern "C"  bool Uri_Equals_m129457228 (Uri_t1510604476 * __this, Il2CppObject * ___comparant0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Uri::GetHashCode()
extern "C"  int32_t Uri_GetHashCode_m1909511864 (Uri_t1510604476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::GetLeftPart(Mono.Security.UriPartial)
extern "C"  String_t* Uri_GetLeftPart_m9890858 (Uri_t1510604476 * __this, int32_t ___part0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Uri::FromHex(System.Char)
extern "C"  int32_t Uri_FromHex_m504944805 (Il2CppObject * __this /* static, unused */, Il2CppChar ___digit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::HexEscape(System.Char)
extern "C"  String_t* Uri_HexEscape_m2267453485 (Il2CppObject * __this /* static, unused */, Il2CppChar ___character0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Mono.Security.Uri::HexUnescape(System.String,System.Int32&)
extern "C"  Il2CppChar Uri_HexUnescape_m2884662525 (Il2CppObject * __this /* static, unused */, String_t* ___pattern0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::IsHexDigit(System.Char)
extern "C"  bool Uri_IsHexDigit_m2069298716 (Il2CppObject * __this /* static, unused */, Il2CppChar ___digit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::IsHexEncoding(System.String,System.Int32)
extern "C"  bool Uri_IsHexEncoding_m2147481140 (Il2CppObject * __this /* static, unused */, String_t* ___pattern0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::ToString()
extern "C"  String_t* Uri_ToString_m4249100766 (Uri_t1510604476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::EscapeString(System.String)
extern "C"  String_t* Uri_EscapeString_m3731019906 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::EscapeString(System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C"  String_t* Uri_EscapeString_m2540923847 (Il2CppObject * __this /* static, unused */, String_t* ___str0, bool ___escapeReserved1, bool ___escapeHex2, bool ___escapeBrackets3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::Parse()
extern "C"  void Uri_Parse_m977235282 (Uri_t1510604476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::Unescape(System.String)
extern "C"  String_t* Uri_Unescape_m560673952 (Uri_t1510604476 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::Unescape(System.String,System.Boolean)
extern "C"  String_t* Uri_Unescape_m2144619357 (Uri_t1510604476 * __this, String_t* ___str0, bool ___excludeSharp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::ParseAsWindowsUNC(System.String)
extern "C"  void Uri_ParseAsWindowsUNC_m1593037461 (Uri_t1510604476 * __this, String_t* ___uriString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::ParseAsWindowsAbsoluteFilePath(System.String)
extern "C"  void Uri_ParseAsWindowsAbsoluteFilePath_m3617918109 (Uri_t1510604476 * __this, String_t* ___uriString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::ParseAsUnixAbsoluteFilePath(System.String)
extern "C"  void Uri_ParseAsUnixAbsoluteFilePath_m926098366 (Uri_t1510604476 * __this, String_t* ___uriString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::Parse(System.String)
extern "C"  void Uri_Parse_m2607690428 (Uri_t1510604476 * __this, String_t* ___uriString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::Reduce(System.String)
extern "C"  String_t* Uri_Reduce_m1933611310 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::GetSchemeDelimiter(System.String)
extern "C"  String_t* Uri_GetSchemeDelimiter_m741635136 (Il2CppObject * __this /* static, unused */, String_t* ___scheme0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Uri::GetDefaultPort(System.String)
extern "C"  int32_t Uri_GetDefaultPort_m993901611 (Il2CppObject * __this /* static, unused */, String_t* ___scheme0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::GetOpaqueWiseSchemeDelimiter()
extern "C"  String_t* Uri_GetOpaqueWiseSchemeDelimiter_m1035737297 (Uri_t1510604476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::IsPredefinedScheme(System.String)
extern "C"  bool Uri_IsPredefinedScheme_m3038418 (Il2CppObject * __this /* static, unused */, String_t* ___scheme0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
