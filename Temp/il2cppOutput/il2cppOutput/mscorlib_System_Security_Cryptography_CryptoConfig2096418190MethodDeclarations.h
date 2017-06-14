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

// System.Security.Cryptography.CryptoConfig/CryptoHandler
struct CryptoHandler_t2096418190;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t3549787957;
// System.String
struct String_t;
// Mono.Xml.SmallXmlParser/IAttrList
struct IAttrList_t4064541270;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Hashtable909839986.h"
#include "mscorlib_Mono_Xml_SmallXmlParser3549787957.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::.ctor(System.Collections.Hashtable,System.Collections.Hashtable)
extern "C"  void CryptoHandler__ctor_m3547249994 (CryptoHandler_t2096418190 * __this, Hashtable_t909839986 * ___algorithms0, Hashtable_t909839986 * ___oid1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnStartParsing(Mono.Xml.SmallXmlParser)
extern "C"  void CryptoHandler_OnStartParsing_m3184096172 (CryptoHandler_t2096418190 * __this, SmallXmlParser_t3549787957 * ___parser0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnEndParsing(Mono.Xml.SmallXmlParser)
extern "C"  void CryptoHandler_OnEndParsing_m756466567 (CryptoHandler_t2096418190 * __this, SmallXmlParser_t3549787957 * ___parser0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.CryptoConfig/CryptoHandler::Get(Mono.Xml.SmallXmlParser/IAttrList,System.String)
extern "C"  String_t* CryptoHandler_Get_m1494379603 (CryptoHandler_t2096418190 * __this, Il2CppObject * ___attrs0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnStartElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void CryptoHandler_OnStartElement_m2508864019 (CryptoHandler_t2096418190 * __this, String_t* ___name0, Il2CppObject * ___attrs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnEndElement(System.String)
extern "C"  void CryptoHandler_OnEndElement_m1023843434 (CryptoHandler_t2096418190 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnProcessingInstruction(System.String,System.String)
extern "C"  void CryptoHandler_OnProcessingInstruction_m3258363344 (CryptoHandler_t2096418190 * __this, String_t* ___name0, String_t* ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnChars(System.String)
extern "C"  void CryptoHandler_OnChars_m791663084 (CryptoHandler_t2096418190 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnIgnorableWhitespace(System.String)
extern "C"  void CryptoHandler_OnIgnorableWhitespace_m2975534881 (CryptoHandler_t2096418190 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
