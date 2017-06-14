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

// SimpleSpritePacker.SPInstance
struct SPInstance_t1207479728;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.Collections.Generic.List`1<SimpleSpritePacker.SPSpriteInfo>
struct List_1_t464051630;
// System.Collections.Generic.List`1<SimpleSpritePacker.SPAction>
struct List_1_t204858277;
// SimpleSpritePacker.SPSpriteInfo
struct SPSpriteInfo_t1094930498;
// UnityEngine.Object
struct Object_t1021602117;
// UnityEngine.Object[]
struct ObjectU5BU5D_t4217747464;
// SimpleSpritePacker.SPAction
struct SPAction_t835737145;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"
#include "AssemblyU2DCSharp_SimpleSpritePacker_SPInstance_Pa2997969040.h"
#include "UnityEngine_UnityEngine_SpriteAlignment1292636872.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_SimpleSpritePacker_SPSpriteInfo1094930498.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "AssemblyU2DCSharp_SimpleSpritePacker_SPAction835737145.h"

// System.Void SimpleSpritePacker.SPInstance::.ctor()
extern "C"  void SPInstance__ctor_m2233498008 (SPInstance_t1207479728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D SimpleSpritePacker.SPInstance::get_texture()
extern "C"  Texture2D_t3542995729 * SPInstance_get_texture_m1092824781 (SPInstance_t1207479728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleSpritePacker.SPInstance::set_texture(UnityEngine.Texture2D)
extern "C"  void SPInstance_set_texture_m123920858 (SPInstance_t1207479728 * __this, Texture2D_t3542995729 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleSpritePacker.SPInstance::get_padding()
extern "C"  int32_t SPInstance_get_padding_m3047004868 (SPInstance_t1207479728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleSpritePacker.SPInstance::set_padding(System.Int32)
extern "C"  void SPInstance_set_padding_m139289819 (SPInstance_t1207479728 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleSpritePacker.SPInstance::get_maxSize()
extern "C"  int32_t SPInstance_get_maxSize_m1611522494 (SPInstance_t1207479728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleSpritePacker.SPInstance::set_maxSize(System.Int32)
extern "C"  void SPInstance_set_maxSize_m2059758567 (SPInstance_t1207479728 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleSpritePacker.SPInstance/PackingMethod SimpleSpritePacker.SPInstance::get_packingMethod()
extern "C"  int32_t SPInstance_get_packingMethod_m268177400 (SPInstance_t1207479728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleSpritePacker.SPInstance::set_packingMethod(SimpleSpritePacker.SPInstance/PackingMethod)
extern "C"  void SPInstance_set_packingMethod_m487778817 (SPInstance_t1207479728 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SpriteAlignment SimpleSpritePacker.SPInstance::get_defaultPivot()
extern "C"  int32_t SPInstance_get_defaultPivot_m1593497260 (SPInstance_t1207479728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleSpritePacker.SPInstance::set_defaultPivot(UnityEngine.SpriteAlignment)
extern "C"  void SPInstance_set_defaultPivot_m1272367161 (SPInstance_t1207479728 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 SimpleSpritePacker.SPInstance::get_defaultCustomPivot()
extern "C"  Vector2_t2243707579  SPInstance_get_defaultCustomPivot_m808795272 (SPInstance_t1207479728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleSpritePacker.SPInstance::set_defaultCustomPivot(UnityEngine.Vector2)
extern "C"  void SPInstance_set_defaultCustomPivot_m1922228779 (SPInstance_t1207479728 * __this, Vector2_t2243707579  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<SimpleSpritePacker.SPSpriteInfo> SimpleSpritePacker.SPInstance::get_sprites()
extern "C"  List_1_t464051630 * SPInstance_get_sprites_m439964751 (SPInstance_t1207479728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<SimpleSpritePacker.SPSpriteInfo> SimpleSpritePacker.SPInstance::get_copyOfSprites()
extern "C"  List_1_t464051630 * SPInstance_get_copyOfSprites_m981500163 (SPInstance_t1207479728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<SimpleSpritePacker.SPAction> SimpleSpritePacker.SPInstance::get_pendingActions()
extern "C"  List_1_t204858277 * SPInstance_get_pendingActions_m2665379596 (SPInstance_t1207479728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleSpritePacker.SPInstance::ChangeSpriteSource(SimpleSpritePacker.SPSpriteInfo,UnityEngine.Object)
extern "C"  void SPInstance_ChangeSpriteSource_m2328961405 (SPInstance_t1207479728 * __this, SPSpriteInfo_t1094930498 * ___spriteInfo0, Object_t1021602117 * ___newSource1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleSpritePacker.SPInstance::QueueAction_AddSprite(UnityEngine.Object)
extern "C"  void SPInstance_QueueAction_AddSprite_m1269721048 (SPInstance_t1207479728 * __this, Object_t1021602117 * ___resource0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleSpritePacker.SPInstance::QueueAction_AddSprites(UnityEngine.Object[])
extern "C"  void SPInstance_QueueAction_AddSprites_m3487929417 (SPInstance_t1207479728 * __this, ObjectU5BU5D_t4217747464* ___resources0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleSpritePacker.SPInstance::QueueAction_RemoveSprite(SimpleSpritePacker.SPSpriteInfo)
extern "C"  void SPInstance_QueueAction_RemoveSprite_m3844330208 (SPInstance_t1207479728 * __this, SPSpriteInfo_t1094930498 * ___spriteInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleSpritePacker.SPInstance::UnqueueAction(SimpleSpritePacker.SPAction)
extern "C"  void SPInstance_UnqueueAction_m2441014790 (SPInstance_t1207479728 * __this, SPAction_t835737145 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<SimpleSpritePacker.SPAction> SimpleSpritePacker.SPInstance::GetAddSpriteActions()
extern "C"  List_1_t204858277 * SPInstance_GetAddSpriteActions_m870558846 (SPInstance_t1207479728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<SimpleSpritePacker.SPAction> SimpleSpritePacker.SPInstance::GetRemoveSpriteActions()
extern "C"  List_1_t204858277 * SPInstance_GetRemoveSpriteActions_m85243033 (SPInstance_t1207479728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleSpritePacker.SPInstance::ClearSprites()
extern "C"  void SPInstance_ClearSprites_m402923129 (SPInstance_t1207479728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleSpritePacker.SPInstance::AddSprite(SimpleSpritePacker.SPSpriteInfo)
extern "C"  void SPInstance_AddSprite_m2923563081 (SPInstance_t1207479728 * __this, SPSpriteInfo_t1094930498 * ___spriteInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleSpritePacker.SPInstance::ClearActions()
extern "C"  void SPInstance_ClearActions_m844567490 (SPInstance_t1207479728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<SimpleSpritePacker.SPSpriteInfo> SimpleSpritePacker.SPInstance::GetSpriteListWithAppliedActions()
extern "C"  List_1_t464051630 * SPInstance_GetSpriteListWithAppliedActions_m2498905971 (SPInstance_t1207479728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
