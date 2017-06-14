#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ChangeScene
struct ChangeScene_t3263655284;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Image
struct Image_t2042527209;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChangeScene
struct  ChangeScene_t3263655284  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ChangeScene::endScene
	GameObject_t1756533147 * ___endScene_3;
	// UnityEngine.UI.Image ChangeScene::sceneTransitionImage
	Image_t2042527209 * ___sceneTransitionImage_4;
	// System.String ChangeScene::nextScene
	String_t* ___nextScene_5;
	// System.Int32 ChangeScene::startMusic
	int32_t ___startMusic_6;
	// System.Int32 ChangeScene::loopingMusic
	int32_t ___loopingMusic_7;
	// System.Boolean ChangeScene::noMusic
	bool ___noMusic_8;
	// System.Boolean ChangeScene::isExecuted
	bool ___isExecuted_9;
	// UnityEngine.GameObject ChangeScene::finalScorePanel
	GameObject_t1756533147 * ___finalScorePanel_10;
	// System.Single ChangeScene::alpha
	float ___alpha_11;
	// UnityEngine.Color ChangeScene::color
	Color_t2020392075  ___color_12;
	// UnityEngine.GameObject ChangeScene::confirmationDialog
	GameObject_t1756533147 * ___confirmationDialog_13;
	// System.Boolean ChangeScene::returnToMain
	bool ___returnToMain_14;

public:
	inline static int32_t get_offset_of_endScene_3() { return static_cast<int32_t>(offsetof(ChangeScene_t3263655284, ___endScene_3)); }
	inline GameObject_t1756533147 * get_endScene_3() const { return ___endScene_3; }
	inline GameObject_t1756533147 ** get_address_of_endScene_3() { return &___endScene_3; }
	inline void set_endScene_3(GameObject_t1756533147 * value)
	{
		___endScene_3 = value;
		Il2CppCodeGenWriteBarrier(&___endScene_3, value);
	}

	inline static int32_t get_offset_of_sceneTransitionImage_4() { return static_cast<int32_t>(offsetof(ChangeScene_t3263655284, ___sceneTransitionImage_4)); }
	inline Image_t2042527209 * get_sceneTransitionImage_4() const { return ___sceneTransitionImage_4; }
	inline Image_t2042527209 ** get_address_of_sceneTransitionImage_4() { return &___sceneTransitionImage_4; }
	inline void set_sceneTransitionImage_4(Image_t2042527209 * value)
	{
		___sceneTransitionImage_4 = value;
		Il2CppCodeGenWriteBarrier(&___sceneTransitionImage_4, value);
	}

	inline static int32_t get_offset_of_nextScene_5() { return static_cast<int32_t>(offsetof(ChangeScene_t3263655284, ___nextScene_5)); }
	inline String_t* get_nextScene_5() const { return ___nextScene_5; }
	inline String_t** get_address_of_nextScene_5() { return &___nextScene_5; }
	inline void set_nextScene_5(String_t* value)
	{
		___nextScene_5 = value;
		Il2CppCodeGenWriteBarrier(&___nextScene_5, value);
	}

	inline static int32_t get_offset_of_startMusic_6() { return static_cast<int32_t>(offsetof(ChangeScene_t3263655284, ___startMusic_6)); }
	inline int32_t get_startMusic_6() const { return ___startMusic_6; }
	inline int32_t* get_address_of_startMusic_6() { return &___startMusic_6; }
	inline void set_startMusic_6(int32_t value)
	{
		___startMusic_6 = value;
	}

	inline static int32_t get_offset_of_loopingMusic_7() { return static_cast<int32_t>(offsetof(ChangeScene_t3263655284, ___loopingMusic_7)); }
	inline int32_t get_loopingMusic_7() const { return ___loopingMusic_7; }
	inline int32_t* get_address_of_loopingMusic_7() { return &___loopingMusic_7; }
	inline void set_loopingMusic_7(int32_t value)
	{
		___loopingMusic_7 = value;
	}

	inline static int32_t get_offset_of_noMusic_8() { return static_cast<int32_t>(offsetof(ChangeScene_t3263655284, ___noMusic_8)); }
	inline bool get_noMusic_8() const { return ___noMusic_8; }
	inline bool* get_address_of_noMusic_8() { return &___noMusic_8; }
	inline void set_noMusic_8(bool value)
	{
		___noMusic_8 = value;
	}

	inline static int32_t get_offset_of_isExecuted_9() { return static_cast<int32_t>(offsetof(ChangeScene_t3263655284, ___isExecuted_9)); }
	inline bool get_isExecuted_9() const { return ___isExecuted_9; }
	inline bool* get_address_of_isExecuted_9() { return &___isExecuted_9; }
	inline void set_isExecuted_9(bool value)
	{
		___isExecuted_9 = value;
	}

	inline static int32_t get_offset_of_finalScorePanel_10() { return static_cast<int32_t>(offsetof(ChangeScene_t3263655284, ___finalScorePanel_10)); }
	inline GameObject_t1756533147 * get_finalScorePanel_10() const { return ___finalScorePanel_10; }
	inline GameObject_t1756533147 ** get_address_of_finalScorePanel_10() { return &___finalScorePanel_10; }
	inline void set_finalScorePanel_10(GameObject_t1756533147 * value)
	{
		___finalScorePanel_10 = value;
		Il2CppCodeGenWriteBarrier(&___finalScorePanel_10, value);
	}

	inline static int32_t get_offset_of_alpha_11() { return static_cast<int32_t>(offsetof(ChangeScene_t3263655284, ___alpha_11)); }
	inline float get_alpha_11() const { return ___alpha_11; }
	inline float* get_address_of_alpha_11() { return &___alpha_11; }
	inline void set_alpha_11(float value)
	{
		___alpha_11 = value;
	}

	inline static int32_t get_offset_of_color_12() { return static_cast<int32_t>(offsetof(ChangeScene_t3263655284, ___color_12)); }
	inline Color_t2020392075  get_color_12() const { return ___color_12; }
	inline Color_t2020392075 * get_address_of_color_12() { return &___color_12; }
	inline void set_color_12(Color_t2020392075  value)
	{
		___color_12 = value;
	}

	inline static int32_t get_offset_of_confirmationDialog_13() { return static_cast<int32_t>(offsetof(ChangeScene_t3263655284, ___confirmationDialog_13)); }
	inline GameObject_t1756533147 * get_confirmationDialog_13() const { return ___confirmationDialog_13; }
	inline GameObject_t1756533147 ** get_address_of_confirmationDialog_13() { return &___confirmationDialog_13; }
	inline void set_confirmationDialog_13(GameObject_t1756533147 * value)
	{
		___confirmationDialog_13 = value;
		Il2CppCodeGenWriteBarrier(&___confirmationDialog_13, value);
	}

	inline static int32_t get_offset_of_returnToMain_14() { return static_cast<int32_t>(offsetof(ChangeScene_t3263655284, ___returnToMain_14)); }
	inline bool get_returnToMain_14() const { return ___returnToMain_14; }
	inline bool* get_address_of_returnToMain_14() { return &___returnToMain_14; }
	inline void set_returnToMain_14(bool value)
	{
		___returnToMain_14 = value;
	}
};

struct ChangeScene_t3263655284_StaticFields
{
public:
	// ChangeScene ChangeScene::instance
	ChangeScene_t3263655284 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(ChangeScene_t3263655284_StaticFields, ___instance_2)); }
	inline ChangeScene_t3263655284 * get_instance_2() const { return ___instance_2; }
	inline ChangeScene_t3263655284 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(ChangeScene_t3263655284 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
