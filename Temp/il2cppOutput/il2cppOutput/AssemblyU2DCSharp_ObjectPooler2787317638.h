#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ObjectPooler
struct ObjectPooler_t2787317638;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectPooler
struct  ObjectPooler_t2787317638  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ObjectPooler::pooledObjects
	List_1_t1125654279 * ___pooledObjects_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ObjectPooler::objectToPool
	List_1_t1125654279 * ___objectToPool_4;
	// System.Int32 ObjectPooler::amountToPool
	int32_t ___amountToPool_5;

public:
	inline static int32_t get_offset_of_pooledObjects_3() { return static_cast<int32_t>(offsetof(ObjectPooler_t2787317638, ___pooledObjects_3)); }
	inline List_1_t1125654279 * get_pooledObjects_3() const { return ___pooledObjects_3; }
	inline List_1_t1125654279 ** get_address_of_pooledObjects_3() { return &___pooledObjects_3; }
	inline void set_pooledObjects_3(List_1_t1125654279 * value)
	{
		___pooledObjects_3 = value;
		Il2CppCodeGenWriteBarrier(&___pooledObjects_3, value);
	}

	inline static int32_t get_offset_of_objectToPool_4() { return static_cast<int32_t>(offsetof(ObjectPooler_t2787317638, ___objectToPool_4)); }
	inline List_1_t1125654279 * get_objectToPool_4() const { return ___objectToPool_4; }
	inline List_1_t1125654279 ** get_address_of_objectToPool_4() { return &___objectToPool_4; }
	inline void set_objectToPool_4(List_1_t1125654279 * value)
	{
		___objectToPool_4 = value;
		Il2CppCodeGenWriteBarrier(&___objectToPool_4, value);
	}

	inline static int32_t get_offset_of_amountToPool_5() { return static_cast<int32_t>(offsetof(ObjectPooler_t2787317638, ___amountToPool_5)); }
	inline int32_t get_amountToPool_5() const { return ___amountToPool_5; }
	inline int32_t* get_address_of_amountToPool_5() { return &___amountToPool_5; }
	inline void set_amountToPool_5(int32_t value)
	{
		___amountToPool_5 = value;
	}
};

struct ObjectPooler_t2787317638_StaticFields
{
public:
	// ObjectPooler ObjectPooler::instance
	ObjectPooler_t2787317638 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(ObjectPooler_t2787317638_StaticFields, ___instance_2)); }
	inline ObjectPooler_t2787317638 * get_instance_2() const { return ___instance_2; }
	inline ObjectPooler_t2787317638 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(ObjectPooler_t2787317638 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
