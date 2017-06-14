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

// GooglePlayGames.BasicApi.SavedGame.ConflictCallback
struct ConflictCallback_t1500688787;
// System.Object
struct Il2CppObject;
// GooglePlayGames.BasicApi.SavedGame.IConflictResolver
struct IConflictResolver_t2675184411;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata
struct ISavedGameMetadata_t1103844695;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void GooglePlayGames.BasicApi.SavedGame.ConflictCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void ConflictCallback__ctor_m182569551 (ConflictCallback_t1500688787 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.SavedGame.ConflictCallback::Invoke(GooglePlayGames.BasicApi.SavedGame.IConflictResolver,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[],GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[])
extern "C"  void ConflictCallback_Invoke_m3820550289 (ConflictCallback_t1500688787 * __this, Il2CppObject * ___resolver0, Il2CppObject * ___original1, ByteU5BU5D_t3397334013* ___originalData2, Il2CppObject * ___unmerged3, ByteU5BU5D_t3397334013* ___unmergedData4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GooglePlayGames.BasicApi.SavedGame.ConflictCallback::BeginInvoke(GooglePlayGames.BasicApi.SavedGame.IConflictResolver,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[],GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ConflictCallback_BeginInvoke_m2303699872 (ConflictCallback_t1500688787 * __this, Il2CppObject * ___resolver0, Il2CppObject * ___original1, ByteU5BU5D_t3397334013* ___originalData2, Il2CppObject * ___unmerged3, ByteU5BU5D_t3397334013* ___unmergedData4, AsyncCallback_t163412349 * ___callback5, Il2CppObject * ___object6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.SavedGame.ConflictCallback::EndInvoke(System.IAsyncResult)
extern "C"  void ConflictCallback_EndInvoke_m3522808041 (ConflictCallback_t1500688787 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
