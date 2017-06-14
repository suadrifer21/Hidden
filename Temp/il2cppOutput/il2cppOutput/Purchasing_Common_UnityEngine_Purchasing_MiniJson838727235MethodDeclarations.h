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

// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Object UnityEngine.Purchasing.MiniJson::JsonDecode(System.String)
extern "C"  Il2CppObject * MiniJson_JsonDecode_m947751129 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.MiniJson::JsonEncode(System.Object)
extern "C"  String_t* MiniJson_JsonEncode_m3219535883 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.MiniJson::ParseObject(System.Char[],System.Int32&)
extern "C"  Dictionary_2_t309261261 * MiniJson_ParseObject_m1839453398 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> UnityEngine.Purchasing.MiniJson::ParseArray(System.Char[],System.Int32&)
extern "C"  List_1_t2058570427 * MiniJson_ParseArray_m552515783 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.Purchasing.MiniJson::ParseValue(System.Char[],System.Int32&,System.Boolean&)
extern "C"  Il2CppObject * MiniJson_ParseValue_m3464353348 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, bool* ___success2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.MiniJson::ParseString(System.Char[],System.Int32&)
extern "C"  String_t* MiniJson_ParseString_m3169564533 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Purchasing.MiniJson::ParseNumber(System.Char[],System.Int32&)
extern "C"  double MiniJson_ParseNumber_m1580256931 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Purchasing.MiniJson::GetLastIndexOfNumber(System.Char[],System.Int32)
extern "C"  int32_t MiniJson_GetLastIndexOfNumber_m1637819282 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MiniJson::EatWhitespace(System.Char[],System.Int32&)
extern "C"  void MiniJson_EatWhitespace_m4195328679 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Purchasing.MiniJson::LookAhead(System.Char[],System.Int32)
extern "C"  int32_t MiniJson_LookAhead_m4023477776 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Purchasing.MiniJson::NextToken(System.Char[],System.Int32&)
extern "C"  int32_t MiniJson_NextToken_m3422889398 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.MiniJson::SerializeObject(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Text.StringBuilder)
extern "C"  bool MiniJson_SerializeObject_m3098825570 (Il2CppObject * __this /* static, unused */, Dictionary_2_t309261261 * ___anObject0, StringBuilder_t1221177846 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.MiniJson::SerializeDictionary(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Text.StringBuilder)
extern "C"  bool MiniJson_SerializeDictionary_m1463424843 (Il2CppObject * __this /* static, unused */, Dictionary_2_t3943999495 * ___dict0, StringBuilder_t1221177846 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.MiniJson::SerializeArray(System.Collections.Generic.List`1<System.Object>,System.Text.StringBuilder)
extern "C"  bool MiniJson_SerializeArray_m1285943981 (Il2CppObject * __this /* static, unused */, List_1_t2058570427 * ___anArray0, StringBuilder_t1221177846 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.MiniJson::SerializeValue(System.Object,System.Text.StringBuilder)
extern "C"  bool MiniJson_SerializeValue_m3185781229 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, StringBuilder_t1221177846 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MiniJson::SerializeString(System.String,System.Text.StringBuilder)
extern "C"  void MiniJson_SerializeString_m175368467 (Il2CppObject * __this /* static, unused */, String_t* ___aString0, StringBuilder_t1221177846 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MiniJson::SerializeNumber(System.Double,System.Text.StringBuilder)
extern "C"  void MiniJson_SerializeNumber_m2207592457 (Il2CppObject * __this /* static, unused */, double ___number0, StringBuilder_t1221177846 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MiniJson::.cctor()
extern "C"  void MiniJson__cctor_m3413513269 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
