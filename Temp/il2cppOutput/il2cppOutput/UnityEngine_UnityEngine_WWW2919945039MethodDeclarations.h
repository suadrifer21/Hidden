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

// UnityEngine.WWW
struct WWW_t2919945039;
// System.String
struct String_t;
// UnityEngine.WWWForm
struct WWWForm_t3950226929;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Text.Encoding
struct Encoding_t663144255;
// UnityEngine.AssetBundle
struct AssetBundle_t2054978754;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_WWWForm3950226929.h"
#include "UnityEngine_UnityEngine_Hash1282836532937.h"
#include "UnityEngine_UnityEngine_WWW2919945039.h"

// System.Void UnityEngine.WWW::.ctor(System.String)
extern "C"  void WWW__ctor_m2024029190 (WWW_t2919945039 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.WWWForm)
extern "C"  void WWW__ctor_m578693146 (WWW_t2919945039 * __this, String_t* ___url0, WWWForm_t3950226929 * ___form1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.Hash128,System.UInt32)
extern "C"  void WWW__ctor_m3849977946 (WWW_t2919945039 * __this, String_t* ___url0, Hash128_t2836532937  ___hash1, uint32_t ___crc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Dispose()
extern "C"  void WWW_Dispose_m2554269413 (WWW_t2919945039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Finalize()
extern "C"  void WWW_Finalize_m3300880244 (WWW_t2919945039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C"  void WWW_DestroyWWW_m2548500174 (WWW_t2919945039 * __this, bool ___cancel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
extern "C"  void WWW_InitWWW_m1194933100 (WWW_t2919945039 * __this, String_t* ___url0, ByteU5BU5D_t3397334013* ___postData1, StringU5BU5D_t1642385972* ___iHeaders2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::get_responseHeaders()
extern "C"  Dictionary_2_t3943999495 * WWW_get_responseHeaders_m977130892 (WWW_t2919945039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_responseHeadersString()
extern "C"  String_t* WWW_get_responseHeadersString_m1644144100 (WWW_t2919945039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_text()
extern "C"  String_t* WWW_get_text_m1558985139 (WWW_t2919945039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::get_DefaultEncoding()
extern "C"  Encoding_t663144255 * WWW_get_DefaultEncoding_m1497697991 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::GetTextEncoder()
extern "C"  Encoding_t663144255 * WWW_GetTextEncoder_m1231410509 (WWW_t2919945039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWW::get_bytes()
extern "C"  ByteU5BU5D_t3397334013* WWW_get_bytes_m420718112 (WWW_t2919945039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_error()
extern "C"  String_t* WWW_get_error_m3092701216 (WWW_t2919945039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWW::get_isDone()
extern "C"  bool WWW_get_isDone_m3240254121 (WWW_t2919945039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.WWW::get_progress()
extern "C"  float WWW_get_progress_m220810418 (WWW_t2919945039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AssetBundle UnityEngine.WWW::get_assetBundle()
extern "C"  AssetBundle_t2054978754 * WWW_get_assetBundle_m80031863 (WWW_t2919945039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::INTERNAL_CALL_WWW(UnityEngine.WWW,System.String,UnityEngine.Hash128&,System.UInt32)
extern "C"  void WWW_INTERNAL_CALL_WWW_m1861215166 (Il2CppObject * __this /* static, unused */, WWW_t2919945039 * ___self0, String_t* ___url1, Hash128_t2836532937 * ___hash2, uint32_t ___crc3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWW UnityEngine.WWW::LoadFromCacheOrDownload(System.String,System.Int32)
extern "C"  WWW_t2919945039 * WWW_LoadFromCacheOrDownload_m3967609319 (Il2CppObject * __this /* static, unused */, String_t* ___url0, int32_t ___version1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWW UnityEngine.WWW::LoadFromCacheOrDownload(System.String,System.Int32,System.UInt32)
extern "C"  WWW_t2919945039 * WWW_LoadFromCacheOrDownload_m2961193343 (Il2CppObject * __this /* static, unused */, String_t* ___url0, int32_t ___version1, uint32_t ___crc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWW UnityEngine.WWW::LoadFromCacheOrDownload(System.String,UnityEngine.Hash128,System.UInt32)
extern "C"  WWW_t2919945039 * WWW_LoadFromCacheOrDownload_m2048032378 (Il2CppObject * __this /* static, unused */, String_t* ___url0, Hash128_t2836532937  ___hash1, uint32_t ___crc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.WWW::FlattenedHeadersFrom(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  StringU5BU5D_t1642385972* WWW_FlattenedHeadersFrom_m3590846145 (Il2CppObject * __this /* static, unused */, Dictionary_2_t3943999495 * ___headers0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::ParseHTTPHeaderString(System.String)
extern "C"  Dictionary_2_t3943999495 * WWW_ParseHTTPHeaderString_m1452467655 (Il2CppObject * __this /* static, unused */, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
