#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.AsyncOperation
struct AsyncOperation_t3814632279;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChangeScene/<LoadAsync>c__Iterator1
struct  U3CLoadAsyncU3Ec__Iterator1_t592750619  : public Il2CppObject
{
public:
	// System.String ChangeScene/<LoadAsync>c__Iterator1::nextScene
	String_t* ___nextScene_0;
	// UnityEngine.AsyncOperation ChangeScene/<LoadAsync>c__Iterator1::<async>__0
	AsyncOperation_t3814632279 * ___U3CasyncU3E__0_1;
	// System.Object ChangeScene/<LoadAsync>c__Iterator1::$current
	Il2CppObject * ___U24current_2;
	// System.Boolean ChangeScene/<LoadAsync>c__Iterator1::$disposing
	bool ___U24disposing_3;
	// System.Int32 ChangeScene/<LoadAsync>c__Iterator1::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_nextScene_0() { return static_cast<int32_t>(offsetof(U3CLoadAsyncU3Ec__Iterator1_t592750619, ___nextScene_0)); }
	inline String_t* get_nextScene_0() const { return ___nextScene_0; }
	inline String_t** get_address_of_nextScene_0() { return &___nextScene_0; }
	inline void set_nextScene_0(String_t* value)
	{
		___nextScene_0 = value;
		Il2CppCodeGenWriteBarrier(&___nextScene_0, value);
	}

	inline static int32_t get_offset_of_U3CasyncU3E__0_1() { return static_cast<int32_t>(offsetof(U3CLoadAsyncU3Ec__Iterator1_t592750619, ___U3CasyncU3E__0_1)); }
	inline AsyncOperation_t3814632279 * get_U3CasyncU3E__0_1() const { return ___U3CasyncU3E__0_1; }
	inline AsyncOperation_t3814632279 ** get_address_of_U3CasyncU3E__0_1() { return &___U3CasyncU3E__0_1; }
	inline void set_U3CasyncU3E__0_1(AsyncOperation_t3814632279 * value)
	{
		___U3CasyncU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CasyncU3E__0_1, value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CLoadAsyncU3Ec__Iterator1_t592750619, ___U24current_2)); }
	inline Il2CppObject * get_U24current_2() const { return ___U24current_2; }
	inline Il2CppObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(Il2CppObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_2, value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CLoadAsyncU3Ec__Iterator1_t592750619, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CLoadAsyncU3Ec__Iterator1_t592750619, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
