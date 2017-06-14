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

// UnityEngine.Advertisements.iOS.Platform/unityAdsReady
struct unityAdsReady_t2056116968;
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

// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsReady::.ctor(System.Object,System.IntPtr)
extern "C"  void unityAdsReady__ctor_m203190000 (unityAdsReady_t2056116968 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsReady::Invoke(System.String)
extern "C"  void unityAdsReady_Invoke_m373631088 (unityAdsReady_t2056116968 * __this, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.Advertisements.iOS.Platform/unityAdsReady::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * unityAdsReady_BeginInvoke_m3586307517 (unityAdsReady_t2056116968 * __this, String_t* ___placementId0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsReady::EndInvoke(System.IAsyncResult)
extern "C"  void unityAdsReady_EndInvoke_m4171957158 (unityAdsReady_t2056116968 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
