#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenLock
struct  ScreenLock_t2320770853  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ScreenLock::activeSceneByDefault
	List_1_t1125654279 * ___activeSceneByDefault_2;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ScreenLock::sceneList
	List_1_t1125654279 * ___sceneList_3;

public:
	inline static int32_t get_offset_of_activeSceneByDefault_2() { return static_cast<int32_t>(offsetof(ScreenLock_t2320770853, ___activeSceneByDefault_2)); }
	inline List_1_t1125654279 * get_activeSceneByDefault_2() const { return ___activeSceneByDefault_2; }
	inline List_1_t1125654279 ** get_address_of_activeSceneByDefault_2() { return &___activeSceneByDefault_2; }
	inline void set_activeSceneByDefault_2(List_1_t1125654279 * value)
	{
		___activeSceneByDefault_2 = value;
		Il2CppCodeGenWriteBarrier(&___activeSceneByDefault_2, value);
	}

	inline static int32_t get_offset_of_sceneList_3() { return static_cast<int32_t>(offsetof(ScreenLock_t2320770853, ___sceneList_3)); }
	inline List_1_t1125654279 * get_sceneList_3() const { return ___sceneList_3; }
	inline List_1_t1125654279 ** get_address_of_sceneList_3() { return &___sceneList_3; }
	inline void set_sceneList_3(List_1_t1125654279 * value)
	{
		___sceneList_3 = value;
		Il2CppCodeGenWriteBarrier(&___sceneList_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
