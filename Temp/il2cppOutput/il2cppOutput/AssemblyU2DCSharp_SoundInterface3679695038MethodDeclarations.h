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

// SoundInterface
struct SoundInterface_t3679695038;

#include "codegen/il2cpp-codegen.h"

// System.Void SoundInterface::.ctor()
extern "C"  void SoundInterface__ctor_m730926249 (SoundInterface_t3679695038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundInterface::Start()
extern "C"  void SoundInterface_Start_m2721223721 (SoundInterface_t3679695038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundInterface::Update()
extern "C"  void SoundInterface_Update_m2947187136 (SoundInterface_t3679695038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundInterface::PlayStartMusic(System.Int32,System.Int32)
extern "C"  void SoundInterface_PlayStartMusic_m3373901100 (SoundInterface_t3679695038 * __this, int32_t ___startMusic0, int32_t ___loopMusic1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundInterface::SoundVolumeChanged()
extern "C"  void SoundInterface_SoundVolumeChanged_m869072162 (SoundInterface_t3679695038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundInterface::MusicVolumeChanged()
extern "C"  void SoundInterface_MusicVolumeChanged_m3980983886 (SoundInterface_t3679695038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundInterface::PlaySound(System.Int32)
extern "C"  void SoundInterface_PlaySound_m2361157787 (SoundInterface_t3679695038 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundInterface::PlayMusic(System.Int32)
extern "C"  void SoundInterface_PlayMusic_m801011893 (SoundInterface_t3679695038 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SoundInterface::GetSoundVolume()
extern "C"  float SoundInterface_GetSoundVolume_m1618229078 (SoundInterface_t3679695038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SoundInterface::GetMusicVolume()
extern "C"  float SoundInterface_GetMusicVolume_m1373959174 (SoundInterface_t3679695038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
