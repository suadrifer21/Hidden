#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.WWW
struct WWW_t2919945039;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.AsyncUtil/<Process>c__Iterator1
struct  U3CProcessU3Ec__Iterator1_t3541402849  : public Il2CppObject
{
public:
	// UnityEngine.WWW UnityEngine.Purchasing.AsyncUtil/<Process>c__Iterator1::request
	WWW_t2919945039 * ___request_0;
	// System.Action`1<System.String> UnityEngine.Purchasing.AsyncUtil/<Process>c__Iterator1::errorHandler
	Action_1_t1831019615 * ___errorHandler_1;
	// System.Action`1<System.String> UnityEngine.Purchasing.AsyncUtil/<Process>c__Iterator1::responseHandler
	Action_1_t1831019615 * ___responseHandler_2;
	// System.Object UnityEngine.Purchasing.AsyncUtil/<Process>c__Iterator1::$current
	Il2CppObject * ___U24current_3;
	// System.Boolean UnityEngine.Purchasing.AsyncUtil/<Process>c__Iterator1::$disposing
	bool ___U24disposing_4;
	// System.Int32 UnityEngine.Purchasing.AsyncUtil/<Process>c__Iterator1::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_request_0() { return static_cast<int32_t>(offsetof(U3CProcessU3Ec__Iterator1_t3541402849, ___request_0)); }
	inline WWW_t2919945039 * get_request_0() const { return ___request_0; }
	inline WWW_t2919945039 ** get_address_of_request_0() { return &___request_0; }
	inline void set_request_0(WWW_t2919945039 * value)
	{
		___request_0 = value;
		Il2CppCodeGenWriteBarrier(&___request_0, value);
	}

	inline static int32_t get_offset_of_errorHandler_1() { return static_cast<int32_t>(offsetof(U3CProcessU3Ec__Iterator1_t3541402849, ___errorHandler_1)); }
	inline Action_1_t1831019615 * get_errorHandler_1() const { return ___errorHandler_1; }
	inline Action_1_t1831019615 ** get_address_of_errorHandler_1() { return &___errorHandler_1; }
	inline void set_errorHandler_1(Action_1_t1831019615 * value)
	{
		___errorHandler_1 = value;
		Il2CppCodeGenWriteBarrier(&___errorHandler_1, value);
	}

	inline static int32_t get_offset_of_responseHandler_2() { return static_cast<int32_t>(offsetof(U3CProcessU3Ec__Iterator1_t3541402849, ___responseHandler_2)); }
	inline Action_1_t1831019615 * get_responseHandler_2() const { return ___responseHandler_2; }
	inline Action_1_t1831019615 ** get_address_of_responseHandler_2() { return &___responseHandler_2; }
	inline void set_responseHandler_2(Action_1_t1831019615 * value)
	{
		___responseHandler_2 = value;
		Il2CppCodeGenWriteBarrier(&___responseHandler_2, value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CProcessU3Ec__Iterator1_t3541402849, ___U24current_3)); }
	inline Il2CppObject * get_U24current_3() const { return ___U24current_3; }
	inline Il2CppObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(Il2CppObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CProcessU3Ec__Iterator1_t3541402849, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CProcessU3Ec__Iterator1_t3541402849, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
