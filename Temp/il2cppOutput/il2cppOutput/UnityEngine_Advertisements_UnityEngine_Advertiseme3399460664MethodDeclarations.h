﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Advertisements.iOS.Platform/unityAdsDidError
struct unityAdsDidError_t3399460664;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidError::.ctor(System.Object,System.IntPtr)
extern "C"  void unityAdsDidError__ctor_m2386746158 (unityAdsDidError_t3399460664 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidError::Invoke(System.Int64,System.String)
extern "C"  void unityAdsDidError_Invoke_m1855823100 (unityAdsDidError_t3399460664 * __this, int64_t ___rawError0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.Advertisements.iOS.Platform/unityAdsDidError::BeginInvoke(System.Int64,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * unityAdsDidError_BeginInvoke_m594455625 (unityAdsDidError_t3399460664 * __this, int64_t ___rawError0, String_t* ___message1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidError::EndInvoke(System.IAsyncResult)
extern "C"  void unityAdsDidError_EndInvoke_m2138632944 (unityAdsDidError_t3399460664 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;