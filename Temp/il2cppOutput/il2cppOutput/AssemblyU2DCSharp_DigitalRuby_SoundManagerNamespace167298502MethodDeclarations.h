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

// DigitalRuby.SoundManagerNamespace.SoundManager
struct SoundManager_t167298502;
// System.Collections.Generic.IList`1<DigitalRuby.SoundManagerNamespace.LoopingAudioSource>
struct IList_1_t3974078738;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// System.Collections.Generic.List`1<DigitalRuby.SoundManagerNamespace.LoopingAudioSource>
struct List_1_t2802259269;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene1684909666.h"
#include "UnityEngine_UnityEngine_SceneManagement_LoadSceneM2981886439.h"
#include "UnityEngine_UnityEngine_AudioClip1932558630.h"
#include "UnityEngine_UnityEngine_AudioSource1135106623.h"

// System.Void DigitalRuby.SoundManagerNamespace.SoundManager::.ctor()
extern "C"  void SoundManager__ctor_m160237472 (SoundManager_t167298502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.SoundManager::EnsureCreated()
extern "C"  void SoundManager_EnsureCreated_m2970413854 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.SoundManager::StopLoopingListOnLevelLoad(System.Collections.Generic.IList`1<DigitalRuby.SoundManagerNamespace.LoopingAudioSource>)
extern "C"  void SoundManager_StopLoopingListOnLevelLoad_m2300742864 (SoundManager_t167298502 * __this, Il2CppObject* ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.SoundManager::ClearPersistedSounds()
extern "C"  void SoundManager_ClearPersistedSounds_m2399991200 (SoundManager_t167298502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.SoundManager::SceneManagerSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
extern "C"  void SoundManager_SceneManagerSceneLoaded_m3500972347 (SoundManager_t167298502 * __this, Scene_t1684909666  ___s0, int32_t ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.SoundManager::Start()
extern "C"  void SoundManager_Start_m2649821132 (SoundManager_t167298502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.SoundManager::Update()
extern "C"  void SoundManager_Update_m3071743519 (SoundManager_t167298502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.SoundManager::OnApplicationFocus(System.Boolean)
extern "C"  void SoundManager_OnApplicationFocus_m1554691052 (SoundManager_t167298502 * __this, bool ___paused0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.SoundManager::UpdateSounds()
extern "C"  void SoundManager_UpdateSounds_m263821831 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.SoundManager::UpdateMusic()
extern "C"  void SoundManager_UpdateMusic_m2345189508 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator DigitalRuby.SoundManagerNamespace.SoundManager::RemoveVolumeFromClip(UnityEngine.AudioClip,System.Single)
extern "C"  Il2CppObject * SoundManager_RemoveVolumeFromClip_m2612927924 (Il2CppObject * __this /* static, unused */, AudioClip_t1932558630 * ___clip0, float ___volume1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.SoundManager::PlayLooping(UnityEngine.AudioSource,System.Collections.Generic.List`1<DigitalRuby.SoundManagerNamespace.LoopingAudioSource>,System.Single,System.Single,System.Boolean,System.Boolean)
extern "C"  void SoundManager_PlayLooping_m3955890192 (Il2CppObject * __this /* static, unused */, AudioSource_t1135106623 * ___source0, List_1_t2802259269 * ___sources1, float ___volumeScale2, float ___fadeSeconds3, bool ___persist4, bool ___stopAll5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.SoundManager::StopLooping(UnityEngine.AudioSource,System.Collections.Generic.List`1<DigitalRuby.SoundManagerNamespace.LoopingAudioSource>)
extern "C"  void SoundManager_StopLooping_m3622663580 (Il2CppObject * __this /* static, unused */, AudioSource_t1135106623 * ___source0, List_1_t2802259269 * ___sources1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.SoundManager::PlayOneShotSound(UnityEngine.AudioSource,UnityEngine.AudioClip)
extern "C"  void SoundManager_PlayOneShotSound_m232378898 (Il2CppObject * __this /* static, unused */, AudioSource_t1135106623 * ___source0, AudioClip_t1932558630 * ___clip1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.SoundManager::PlayOneShotSound(UnityEngine.AudioSource,UnityEngine.AudioClip,System.Single)
extern "C"  void SoundManager_PlayOneShotSound_m3580836695 (Il2CppObject * __this /* static, unused */, AudioSource_t1135106623 * ___source0, AudioClip_t1932558630 * ___clip1, float ___volumeScale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.SoundManager::PlayLoopingSound(UnityEngine.AudioSource)
extern "C"  void SoundManager_PlayLoopingSound_m1288238209 (Il2CppObject * __this /* static, unused */, AudioSource_t1135106623 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.SoundManager::PlayLoopingSound(UnityEngine.AudioSource,System.Single,System.Single)
extern "C"  void SoundManager_PlayLoopingSound_m1303601249 (Il2CppObject * __this /* static, unused */, AudioSource_t1135106623 * ___source0, float ___volumeScale1, float ___fadeSeconds2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.SoundManager::PlayOneShotMusic(UnityEngine.AudioSource,UnityEngine.AudioClip)
extern "C"  void SoundManager_PlayOneShotMusic_m2437743078 (Il2CppObject * __this /* static, unused */, AudioSource_t1135106623 * ___source0, AudioClip_t1932558630 * ___clip1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.SoundManager::PlayOneShotMusic(UnityEngine.AudioSource,UnityEngine.AudioClip,System.Single)
extern "C"  void SoundManager_PlayOneShotMusic_m1728673761 (Il2CppObject * __this /* static, unused */, AudioSource_t1135106623 * ___source0, AudioClip_t1932558630 * ___clip1, float ___volumeScale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.SoundManager::PlayLoopingMusic(UnityEngine.AudioSource)
extern "C"  void SoundManager_PlayLoopingMusic_m40699255 (Il2CppObject * __this /* static, unused */, AudioSource_t1135106623 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.SoundManager::PlayLoopingMusic(UnityEngine.AudioSource,System.Single,System.Single,System.Boolean)
extern "C"  void SoundManager_PlayLoopingMusic_m902131898 (Il2CppObject * __this /* static, unused */, AudioSource_t1135106623 * ___source0, float ___volumeScale1, float ___fadeSeconds2, bool ___persist3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.SoundManager::StopLoopingSound(UnityEngine.AudioSource)
extern "C"  void SoundManager_StopLoopingSound_m4249220697 (Il2CppObject * __this /* static, unused */, AudioSource_t1135106623 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.SoundManager::StopLoopingMusic(UnityEngine.AudioSource)
extern "C"  void SoundManager_StopLoopingMusic_m2859217887 (Il2CppObject * __this /* static, unused */, AudioSource_t1135106623 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.SoundManager::StopAll()
extern "C"  void SoundManager_StopAll_m1499132315 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.SoundManager::StopAllLoopingSounds()
extern "C"  void SoundManager_StopAllLoopingSounds_m1082456407 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.SoundManager::StopNonLoopingSounds()
extern "C"  void SoundManager_StopNonLoopingSounds_m2963658633 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.SoundManager::PauseAll()
extern "C"  void SoundManager_PauseAll_m1824275241 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.SoundManager::ResumeAll()
extern "C"  void SoundManager_ResumeAll_m2623687734 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DigitalRuby.SoundManagerNamespace.SoundManager::get_MusicVolume()
extern "C"  float SoundManager_get_MusicVolume_m1300297320 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.SoundManager::set_MusicVolume(System.Single)
extern "C"  void SoundManager_set_MusicVolume_m2556320947 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DigitalRuby.SoundManagerNamespace.SoundManager::get_SoundVolume()
extern "C"  float SoundManager_get_SoundVolume_m4260498664 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.SoundManager::set_SoundVolume(System.Single)
extern "C"  void SoundManager_set_SoundVolume_m2601966929 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DigitalRuby.SoundManagerNamespace.SoundManager::get_PauseSoundsOnApplicationPause()
extern "C"  bool SoundManager_get_PauseSoundsOnApplicationPause_m3639801114 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.SoundManager::set_PauseSoundsOnApplicationPause(System.Boolean)
extern "C"  void SoundManager_set_PauseSoundsOnApplicationPause_m501638399 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.SoundManager::.cctor()
extern "C"  void SoundManager__cctor_m118745553 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
