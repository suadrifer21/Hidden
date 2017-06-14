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

// DigitalRuby.SoundManagerNamespace.LoopingAudioSource
struct LoopingAudioSource_t3433138137;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AudioSource1135106623.h"

// System.Void DigitalRuby.SoundManagerNamespace.LoopingAudioSource::.ctor(UnityEngine.AudioSource,System.Single,System.Single,System.Boolean)
extern "C"  void LoopingAudioSource__ctor_m4045857834 (LoopingAudioSource_t3433138137 * __this, AudioSource_t1135106623 * ___audioSource0, float ___startMultiplier1, float ___stopMultiplier2, bool ___persist3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource DigitalRuby.SoundManagerNamespace.LoopingAudioSource::get_AudioSource()
extern "C"  AudioSource_t1135106623 * LoopingAudioSource_get_AudioSource_m3367225388 (LoopingAudioSource_t3433138137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.LoopingAudioSource::set_AudioSource(UnityEngine.AudioSource)
extern "C"  void LoopingAudioSource_set_AudioSource_m2732756307 (LoopingAudioSource_t3433138137 * __this, AudioSource_t1135106623 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DigitalRuby.SoundManagerNamespace.LoopingAudioSource::get_TargetVolume()
extern "C"  float LoopingAudioSource_get_TargetVolume_m4115706571 (LoopingAudioSource_t3433138137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.LoopingAudioSource::set_TargetVolume(System.Single)
extern "C"  void LoopingAudioSource_set_TargetVolume_m1918466036 (LoopingAudioSource_t3433138137 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DigitalRuby.SoundManagerNamespace.LoopingAudioSource::get_OriginalTargetVolume()
extern "C"  float LoopingAudioSource_get_OriginalTargetVolume_m1492381638 (LoopingAudioSource_t3433138137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.LoopingAudioSource::set_OriginalTargetVolume(System.Single)
extern "C"  void LoopingAudioSource_set_OriginalTargetVolume_m1404859101 (LoopingAudioSource_t3433138137 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DigitalRuby.SoundManagerNamespace.LoopingAudioSource::get_Stopping()
extern "C"  bool LoopingAudioSource_get_Stopping_m1673461414 (LoopingAudioSource_t3433138137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.LoopingAudioSource::set_Stopping(System.Boolean)
extern "C"  void LoopingAudioSource_set_Stopping_m836639015 (LoopingAudioSource_t3433138137 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DigitalRuby.SoundManagerNamespace.LoopingAudioSource::get_Persist()
extern "C"  bool LoopingAudioSource_get_Persist_m3408006624 (LoopingAudioSource_t3433138137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.LoopingAudioSource::set_Persist(System.Boolean)
extern "C"  void LoopingAudioSource_set_Persist_m1765438837 (LoopingAudioSource_t3433138137 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DigitalRuby.SoundManagerNamespace.LoopingAudioSource::get_Tag()
extern "C"  int32_t LoopingAudioSource_get_Tag_m2162849884 (LoopingAudioSource_t3433138137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.LoopingAudioSource::set_Tag(System.Int32)
extern "C"  void LoopingAudioSource_set_Tag_m3646013011 (LoopingAudioSource_t3433138137 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.LoopingAudioSource::Play(System.Boolean)
extern "C"  void LoopingAudioSource_Play_m4155841898 (LoopingAudioSource_t3433138137 * __this, bool ___isMusic0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DigitalRuby.SoundManagerNamespace.LoopingAudioSource::Play(System.Single,System.Boolean)
extern "C"  bool LoopingAudioSource_Play_m2177965551 (LoopingAudioSource_t3433138137 * __this, float ___targetVolume0, bool ___isMusic1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.LoopingAudioSource::Stop()
extern "C"  void LoopingAudioSource_Stop_m4188231453 (LoopingAudioSource_t3433138137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.LoopingAudioSource::Pause()
extern "C"  void LoopingAudioSource_Pause_m3953023863 (LoopingAudioSource_t3433138137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.SoundManagerNamespace.LoopingAudioSource::Resume()
extern "C"  void LoopingAudioSource_Resume_m109869570 (LoopingAudioSource_t3433138137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DigitalRuby.SoundManagerNamespace.LoopingAudioSource::Update()
extern "C"  bool LoopingAudioSource_Update_m2099591598 (LoopingAudioSource_t3433138137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
