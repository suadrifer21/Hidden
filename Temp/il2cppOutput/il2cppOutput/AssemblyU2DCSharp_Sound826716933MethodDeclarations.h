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

// Sound
struct Sound_t826716933;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"

// System.Void Sound::.ctor()
extern "C"  void Sound__ctor_m3476080378 (Sound_t826716933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sound::Awake()
extern "C"  void Sound_Awake_m1566702385 (Sound_t826716933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sound::Start()
extern "C"  void Sound_Start_m2692431562 (Sound_t826716933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sound::Update()
extern "C"  void Sound_Update_m38004269 (Sound_t826716933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sound::PlayStartMusic(System.Int32,System.Int32)
extern "C"  void Sound_PlayStartMusic_m2492255673 (Sound_t826716933 * __this, int32_t ___startMusic0, int32_t ___loopingMusic1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Sound::PlayLoopAfterStart(System.Int32)
extern "C"  Il2CppObject * Sound_PlayLoopAfterStart_m2626855711 (Sound_t826716933 * __this, int32_t ___loopingMusic0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sound::SoundVolumeChanged()
extern "C"  void Sound_SoundVolumeChanged_m1859219405 (Sound_t826716933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sound::MusicVolumeChanged()
extern "C"  void Sound_MusicVolumeChanged_m1866168367 (Sound_t826716933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sound::PlaySound(System.Int32)
extern "C"  void Sound_PlaySound_m3325956910 (Sound_t826716933 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sound::PlayMusic(System.Int32)
extern "C"  void Sound_PlayMusic_m2532826542 (Sound_t826716933 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Sound::GetSoundVolume()
extern "C"  float Sound_GetSoundVolume_m3465968111 (Sound_t826716933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Sound::GetMusicVolume()
extern "C"  float Sound_GetMusicVolume_m99654581 (Sound_t826716933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sound::StopLoopingMusic()
extern "C"  void Sound_StopLoopingMusic_m1580063593 (Sound_t826716933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sound::PauseLoopingMusic()
extern "C"  void Sound_PauseLoopingMusic_m376296867 (Sound_t826716933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sound::ResumeLoopingMusic()
extern "C"  void Sound_ResumeLoopingMusic_m1852525738 (Sound_t826716933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
