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

// UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish
struct unityAdsDidFinish_t649819413;
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

// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish::.ctor(System.Object,System.IntPtr)
extern "C"  void unityAdsDidFinish__ctor_m4144518933 (unityAdsDidFinish_t649819413 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish::Invoke(System.String,System.Int64)
extern "C"  void unityAdsDidFinish_Invoke_m460267737 (unityAdsDidFinish_t649819413 * __this, String_t* ___placementId0, int64_t ___rawFinishState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish::BeginInvoke(System.String,System.Int64,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * unityAdsDidFinish_BeginInvoke_m881800656 (unityAdsDidFinish_t649819413 * __this, String_t* ___placementId0, int64_t ___rawFinishState1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish::EndInvoke(System.IAsyncResult)
extern "C"  void unityAdsDidFinish_EndInvoke_m1322916367 (unityAdsDidFinish_t649819413 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
