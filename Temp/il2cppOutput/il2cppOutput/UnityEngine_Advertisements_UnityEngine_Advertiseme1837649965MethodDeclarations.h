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

// UnityEngine.Advertisements.Editor.Placeholder
struct Placeholder_t1837649965;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.String
struct String_t;
// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>
struct EventHandler_1_t3580441194;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityEngine.Advertisements.Editor.Placeholder::.ctor()
extern "C"  void Placeholder__ctor_m3387162237 (Placeholder_t1837649965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.Advertisements.Editor.Placeholder::TextureFromFile(System.String)
extern "C"  Texture2D_t3542995729 * Placeholder_TextureFromFile_m3631645269 (Il2CppObject * __this /* static, unused */, String_t* ___filePath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Editor.Placeholder::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C"  void Placeholder_add_OnFinish_m81994132 (Placeholder_t1837649965 * __this, EventHandler_1_t3580441194 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Editor.Placeholder::remove_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C"  void Placeholder_remove_OnFinish_m1734007461 (Placeholder_t1837649965 * __this, EventHandler_1_t3580441194 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Editor.Placeholder::Load(System.String)
extern "C"  void Placeholder_Load_m818013469 (Placeholder_t1837649965 * __this, String_t* ___extensionPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Editor.Placeholder::Show(System.String,System.Boolean)
extern "C"  void Placeholder_Show_m3237880395 (Placeholder_t1837649965 * __this, String_t* ___placementId0, bool ___allowSkip1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Editor.Placeholder::OnGUI()
extern "C"  void Placeholder_OnGUI_m936828587 (Placeholder_t1837649965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Editor.Placeholder::ModalWindowFunction(System.Int32)
extern "C"  void Placeholder_ModalWindowFunction_m1435854805 (Placeholder_t1837649965 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
