#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GooglePlayGames.OurUtils.PlayGamesHelperObject
struct PlayGamesHelperObject_t3863181352;
// System.Collections.Generic.List`1<System.Action>
struct List_1_t2595592884;
// System.Collections.Generic.List`1<System.Action`1<System.Boolean>>
struct List_1_t2996495232;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_Boolean3825574718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.OurUtils.PlayGamesHelperObject
struct  PlayGamesHelperObject_t3863181352  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<System.Action> GooglePlayGames.OurUtils.PlayGamesHelperObject::localQueue
	List_1_t2595592884 * ___localQueue_5;

public:
	inline static int32_t get_offset_of_localQueue_5() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t3863181352, ___localQueue_5)); }
	inline List_1_t2595592884 * get_localQueue_5() const { return ___localQueue_5; }
	inline List_1_t2595592884 ** get_address_of_localQueue_5() { return &___localQueue_5; }
	inline void set_localQueue_5(List_1_t2595592884 * value)
	{
		___localQueue_5 = value;
		Il2CppCodeGenWriteBarrier(&___localQueue_5, value);
	}
};

struct PlayGamesHelperObject_t3863181352_StaticFields
{
public:
	// GooglePlayGames.OurUtils.PlayGamesHelperObject GooglePlayGames.OurUtils.PlayGamesHelperObject::instance
	PlayGamesHelperObject_t3863181352 * ___instance_2;
	// System.Boolean GooglePlayGames.OurUtils.PlayGamesHelperObject::sIsDummy
	bool ___sIsDummy_3;
	// System.Collections.Generic.List`1<System.Action> GooglePlayGames.OurUtils.PlayGamesHelperObject::sQueue
	List_1_t2595592884 * ___sQueue_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.OurUtils.PlayGamesHelperObject::sQueueEmpty
	bool ___sQueueEmpty_6;
	// System.Collections.Generic.List`1<System.Action`1<System.Boolean>> GooglePlayGames.OurUtils.PlayGamesHelperObject::sPauseCallbackList
	List_1_t2996495232 * ___sPauseCallbackList_7;
	// System.Collections.Generic.List`1<System.Action`1<System.Boolean>> GooglePlayGames.OurUtils.PlayGamesHelperObject::sFocusCallbackList
	List_1_t2996495232 * ___sFocusCallbackList_8;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t3863181352_StaticFields, ___instance_2)); }
	inline PlayGamesHelperObject_t3863181352 * get_instance_2() const { return ___instance_2; }
	inline PlayGamesHelperObject_t3863181352 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(PlayGamesHelperObject_t3863181352 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}

	inline static int32_t get_offset_of_sIsDummy_3() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t3863181352_StaticFields, ___sIsDummy_3)); }
	inline bool get_sIsDummy_3() const { return ___sIsDummy_3; }
	inline bool* get_address_of_sIsDummy_3() { return &___sIsDummy_3; }
	inline void set_sIsDummy_3(bool value)
	{
		___sIsDummy_3 = value;
	}

	inline static int32_t get_offset_of_sQueue_4() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t3863181352_StaticFields, ___sQueue_4)); }
	inline List_1_t2595592884 * get_sQueue_4() const { return ___sQueue_4; }
	inline List_1_t2595592884 ** get_address_of_sQueue_4() { return &___sQueue_4; }
	inline void set_sQueue_4(List_1_t2595592884 * value)
	{
		___sQueue_4 = value;
		Il2CppCodeGenWriteBarrier(&___sQueue_4, value);
	}

	inline static int32_t get_offset_of_sQueueEmpty_6() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t3863181352_StaticFields, ___sQueueEmpty_6)); }
	inline bool get_sQueueEmpty_6() const { return ___sQueueEmpty_6; }
	inline bool* get_address_of_sQueueEmpty_6() { return &___sQueueEmpty_6; }
	inline void set_sQueueEmpty_6(bool value)
	{
		___sQueueEmpty_6 = value;
	}

	inline static int32_t get_offset_of_sPauseCallbackList_7() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t3863181352_StaticFields, ___sPauseCallbackList_7)); }
	inline List_1_t2996495232 * get_sPauseCallbackList_7() const { return ___sPauseCallbackList_7; }
	inline List_1_t2996495232 ** get_address_of_sPauseCallbackList_7() { return &___sPauseCallbackList_7; }
	inline void set_sPauseCallbackList_7(List_1_t2996495232 * value)
	{
		___sPauseCallbackList_7 = value;
		Il2CppCodeGenWriteBarrier(&___sPauseCallbackList_7, value);
	}

	inline static int32_t get_offset_of_sFocusCallbackList_8() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t3863181352_StaticFields, ___sFocusCallbackList_8)); }
	inline List_1_t2996495232 * get_sFocusCallbackList_8() const { return ___sFocusCallbackList_8; }
	inline List_1_t2996495232 ** get_address_of_sFocusCallbackList_8() { return &___sFocusCallbackList_8; }
	inline void set_sFocusCallbackList_8(List_1_t2996495232 * value)
	{
		___sFocusCallbackList_8 = value;
		Il2CppCodeGenWriteBarrier(&___sFocusCallbackList_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
