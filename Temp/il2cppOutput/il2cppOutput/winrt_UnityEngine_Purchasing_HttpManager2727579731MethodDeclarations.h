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

// UnityEngine.Purchasing.HttpManager
struct HttpManager_t2727579731;
// System.String
struct String_t;
// System.Action`1<System.IAsyncResult>
struct Action_1_t1801450390;
// System.Action`2<System.Object,System.Boolean>
struct Action_2_t3708177276;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t283079845;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t777637347;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Security_Cryptography_X509Certifica283079845.h"
#include "System_System_Security_Cryptography_X509Certificate777637347.h"
#include "System_System_Net_Security_SslPolicyErrors1928581431.h"

// System.Void UnityEngine.Purchasing.HttpManager::GetAsyncHttpWebData(System.String,System.Action`1<System.IAsyncResult>,System.Action`2<System.Object,System.Boolean>,System.String,System.String,System.Int32)
extern "C"  void HttpManager_GetAsyncHttpWebData_m162872277 (HttpManager_t2727579731 * __this, String_t* ___httpAddress0, Action_1_t1801450390 * ___asyncCompleate1, Action_2_t3708177276 * ___asyncTimeout2, String_t* ___param3, String_t* ___requestMothod4, int32_t ___timeout5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.HttpManager::VerifyServerCertificate(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C"  bool HttpManager_VerifyServerCertificate_m1145453977 (HttpManager_t2727579731 * __this, Il2CppObject * ___sender0, X509Certificate_t283079845 * ___certificate1, X509Chain_t777637347 * ___chain2, int32_t ___sslPolicyErrors3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.HttpManager::.ctor()
extern "C"  void HttpManager__ctor_m3949962385 (HttpManager_t2727579731 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
