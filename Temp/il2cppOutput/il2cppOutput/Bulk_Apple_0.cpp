#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// UnityEngine.Purchasing.iOSStoreBindings
struct iOSStoreBindings_t2633471826;
// System.String
struct String_t;
// UnityEngine.Purchasing.UnityPurchasingCallback
struct UnityPurchasingCallback_t2635187846;
// UnityEngine.Purchasing.OSXStoreBindings
struct OSXStoreBindings_t116576999;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "Apple_U3CModuleU3E3783534214.h"
#include "Apple_U3CModuleU3E3783534214MethodDeclarations.h"
#include "Apple_UnityEngine_Purchasing_iOSStoreBindings2633471826.h"
#include "Apple_UnityEngine_Purchasing_iOSStoreBindings2633471826MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_Object2689449295MethodDeclarations.h"
#include "mscorlib_System_String2029220233.h"
#include "Purchasing_Common_UnityEngine_Purchasing_UnityPurc2635187846.h"
#include "Apple_UnityEngine_Purchasing_OSXStoreBindings116576999.h"
#include "Apple_UnityEngine_Purchasing_OSXStoreBindings116576999MethodDeclarations.h"
#include "mscorlib_System_Boolean3825574718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.iOSStoreBindings::.ctor()
extern "C"  void iOSStoreBindings__ctor_m1139108122 (iOSStoreBindings_t2633471826 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL unityPurchasingRetrieveProducts(char*);
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingRetrieveProducts(System.String)
extern "C"  void iOSStoreBindings_unityPurchasingRetrieveProducts_m3384117001 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___json0' to native representation
	char* ____json0_marshaled = NULL;
	____json0_marshaled = il2cpp_codegen_marshal_string(___json0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(unityPurchasingRetrieveProducts)(____json0_marshaled);

	// Marshaling cleanup of parameter '___json0' native representation
	il2cpp_codegen_marshal_free(____json0_marshaled);
	____json0_marshaled = NULL;

}
extern "C" void DEFAULT_CALL unityPurchasingPurchase(char*, char*);
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingPurchase(System.String,System.String)
extern "C"  void iOSStoreBindings_unityPurchasingPurchase_m3145815186 (Il2CppObject * __this /* static, unused */, String_t* ___json0, String_t* ___developerPayload1, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___json0' to native representation
	char* ____json0_marshaled = NULL;
	____json0_marshaled = il2cpp_codegen_marshal_string(___json0);

	// Marshaling of parameter '___developerPayload1' to native representation
	char* ____developerPayload1_marshaled = NULL;
	____developerPayload1_marshaled = il2cpp_codegen_marshal_string(___developerPayload1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(unityPurchasingPurchase)(____json0_marshaled, ____developerPayload1_marshaled);

	// Marshaling cleanup of parameter '___json0' native representation
	il2cpp_codegen_marshal_free(____json0_marshaled);
	____json0_marshaled = NULL;

	// Marshaling cleanup of parameter '___developerPayload1' native representation
	il2cpp_codegen_marshal_free(____developerPayload1_marshaled);
	____developerPayload1_marshaled = NULL;

}
extern "C" void DEFAULT_CALL unityPurchasingFinishTransaction(char*, char*);
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingFinishTransaction(System.String,System.String)
extern "C"  void iOSStoreBindings_unityPurchasingFinishTransaction_m1006468916 (Il2CppObject * __this /* static, unused */, String_t* ___productJSON0, String_t* ___transactionId1, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___productJSON0' to native representation
	char* ____productJSON0_marshaled = NULL;
	____productJSON0_marshaled = il2cpp_codegen_marshal_string(___productJSON0);

	// Marshaling of parameter '___transactionId1' to native representation
	char* ____transactionId1_marshaled = NULL;
	____transactionId1_marshaled = il2cpp_codegen_marshal_string(___transactionId1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(unityPurchasingFinishTransaction)(____productJSON0_marshaled, ____transactionId1_marshaled);

	// Marshaling cleanup of parameter '___productJSON0' native representation
	il2cpp_codegen_marshal_free(____productJSON0_marshaled);
	____productJSON0_marshaled = NULL;

	// Marshaling cleanup of parameter '___transactionId1' native representation
	il2cpp_codegen_marshal_free(____transactionId1_marshaled);
	____transactionId1_marshaled = NULL;

}
extern "C" void DEFAULT_CALL unityPurchasingRestoreTransactions();
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingRestoreTransactions()
extern "C"  void iOSStoreBindings_unityPurchasingRestoreTransactions_m1181079512 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(unityPurchasingRestoreTransactions)();

}
extern "C" void DEFAULT_CALL unityPurchasingAddTransactionObserver();
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingAddTransactionObserver()
extern "C"  void iOSStoreBindings_unityPurchasingAddTransactionObserver_m1341923100 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(unityPurchasingAddTransactionObserver)();

}
extern "C" void DEFAULT_CALL setUnityPurchasingCallback(Il2CppMethodPointer);
// System.Void UnityEngine.Purchasing.iOSStoreBindings::setUnityPurchasingCallback(UnityEngine.Purchasing.UnityPurchasingCallback)
extern "C"  void iOSStoreBindings_setUnityPurchasingCallback_m2240767225 (Il2CppObject * __this /* static, unused */, UnityPurchasingCallback_t2635187846 * ___AsyncCallback0, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___AsyncCallback0' to native representation
	Il2CppMethodPointer ____AsyncCallback0_marshaled = NULL;
	____AsyncCallback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(___AsyncCallback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(setUnityPurchasingCallback)(____AsyncCallback0_marshaled);

}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::SetUnityPurchasingCallback(UnityEngine.Purchasing.UnityPurchasingCallback)
extern "C"  void iOSStoreBindings_SetUnityPurchasingCallback_m660255321 (iOSStoreBindings_t2633471826 * __this, UnityPurchasingCallback_t2635187846 * ___AsyncCallback0, const MethodInfo* method)
{
	{
		UnityPurchasingCallback_t2635187846 * L_0 = ___AsyncCallback0;
		iOSStoreBindings_setUnityPurchasingCallback_m2240767225(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::RetrieveProducts(System.String)
extern "C"  void iOSStoreBindings_RetrieveProducts_m2671913518 (iOSStoreBindings_t2633471826 * __this, String_t* ___json0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___json0;
		iOSStoreBindings_unityPurchasingRetrieveProducts_m3384117001(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::Purchase(System.String,System.String)
extern "C"  void iOSStoreBindings_Purchase_m467705019 (iOSStoreBindings_t2633471826 * __this, String_t* ___productJSON0, String_t* ___developerPayload1, const MethodInfo* method)
{
	{
		String_t* L_0 = ___productJSON0;
		String_t* L_1 = ___developerPayload1;
		iOSStoreBindings_unityPurchasingPurchase_m3145815186(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::FinishTransaction(System.String,System.String)
extern "C"  void iOSStoreBindings_FinishTransaction_m1278869051 (iOSStoreBindings_t2633471826 * __this, String_t* ___productJSON0, String_t* ___transactionId1, const MethodInfo* method)
{
	{
		String_t* L_0 = ___productJSON0;
		String_t* L_1 = ___transactionId1;
		iOSStoreBindings_unityPurchasingFinishTransaction_m1006468916(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::RestoreTransactions()
extern "C"  void iOSStoreBindings_RestoreTransactions_m2709386143 (iOSStoreBindings_t2633471826 * __this, const MethodInfo* method)
{
	{
		iOSStoreBindings_unityPurchasingRestoreTransactions_m1181079512(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::AddTransactionObserver()
extern "C"  void iOSStoreBindings_AddTransactionObserver_m3329758573 (iOSStoreBindings_t2633471826 * __this, const MethodInfo* method)
{
	{
		iOSStoreBindings_unityPurchasingAddTransactionObserver_m1341923100(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::.ctor()
extern "C"  void OSXStoreBindings__ctor_m3914056605 (OSXStoreBindings_t116576999 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingRetrieveProducts(System.String)
extern "C"  bool OSXStoreBindings_unityPurchasingRetrieveProducts_m3993276764 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("unitypurchasing"), "unityPurchasingRetrieveProducts", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'unityPurchasingRetrieveProducts'"));
		}
	}

	// Marshaling of parameter '___json0' to native representation
	char* ____json0_marshaled = NULL;
	____json0_marshaled = il2cpp_codegen_marshal_string(___json0);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____json0_marshaled);

	// Marshaling cleanup of parameter '___json0' native representation
	il2cpp_codegen_marshal_free(____json0_marshaled);
	____json0_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Boolean UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingPurchase(System.String,System.String)
extern "C"  bool OSXStoreBindings_unityPurchasingPurchase_m473905327 (Il2CppObject * __this /* static, unused */, String_t* ___json0, String_t* ___developerPayload1, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("unitypurchasing"), "unityPurchasingPurchase", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'unityPurchasingPurchase'"));
		}
	}

	// Marshaling of parameter '___json0' to native representation
	char* ____json0_marshaled = NULL;
	____json0_marshaled = il2cpp_codegen_marshal_string(___json0);

	// Marshaling of parameter '___developerPayload1' to native representation
	char* ____developerPayload1_marshaled = NULL;
	____developerPayload1_marshaled = il2cpp_codegen_marshal_string(___developerPayload1);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____json0_marshaled, ____developerPayload1_marshaled);

	// Marshaling cleanup of parameter '___json0' native representation
	il2cpp_codegen_marshal_free(____json0_marshaled);
	____json0_marshaled = NULL;

	// Marshaling cleanup of parameter '___developerPayload1' native representation
	il2cpp_codegen_marshal_free(____developerPayload1_marshaled);
	____developerPayload1_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Boolean UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingFinishTransaction(System.String,System.String)
extern "C"  bool OSXStoreBindings_unityPurchasingFinishTransaction_m2773124175 (Il2CppObject * __this /* static, unused */, String_t* ___productJSON0, String_t* ___transactionId1, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("unitypurchasing"), "unityPurchasingFinishTransaction", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'unityPurchasingFinishTransaction'"));
		}
	}

	// Marshaling of parameter '___productJSON0' to native representation
	char* ____productJSON0_marshaled = NULL;
	____productJSON0_marshaled = il2cpp_codegen_marshal_string(___productJSON0);

	// Marshaling of parameter '___transactionId1' to native representation
	char* ____transactionId1_marshaled = NULL;
	____transactionId1_marshaled = il2cpp_codegen_marshal_string(___transactionId1);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____productJSON0_marshaled, ____transactionId1_marshaled);

	// Marshaling cleanup of parameter '___productJSON0' native representation
	il2cpp_codegen_marshal_free(____productJSON0_marshaled);
	____productJSON0_marshaled = NULL;

	// Marshaling cleanup of parameter '___transactionId1' native representation
	il2cpp_codegen_marshal_free(____transactionId1_marshaled);
	____transactionId1_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingRestoreTransactions()
extern "C"  void OSXStoreBindings_unityPurchasingRestoreTransactions_m3416276475 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("unitypurchasing"), "unityPurchasingRestoreTransactions", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'unityPurchasingRestoreTransactions'"));
		}
	}

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingAddTransactionObserver()
extern "C"  void OSXStoreBindings_unityPurchasingAddTransactionObserver_m1513387321 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("unitypurchasing"), "unityPurchasingAddTransactionObserver", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'unityPurchasingAddTransactionObserver'"));
		}
	}

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::setUnityPurchasingCallback(UnityEngine.Purchasing.UnityPurchasingCallback)
extern "C"  void OSXStoreBindings_setUnityPurchasingCallback_m2447488934 (Il2CppObject * __this /* static, unused */, UnityPurchasingCallback_t2635187846 * ___AsyncCallback0, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("unitypurchasing"), "setUnityPurchasingCallback", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setUnityPurchasingCallback'"));
		}
	}

	// Marshaling of parameter '___AsyncCallback0' to native representation
	Il2CppMethodPointer ____AsyncCallback0_marshaled = NULL;
	____AsyncCallback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(___AsyncCallback0));

	// Native function invocation
	il2cppPInvokeFunc(____AsyncCallback0_marshaled);

}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::SetUnityPurchasingCallback(UnityEngine.Purchasing.UnityPurchasingCallback)
extern "C"  void OSXStoreBindings_SetUnityPurchasingCallback_m2800386886 (OSXStoreBindings_t116576999 * __this, UnityPurchasingCallback_t2635187846 * ___AsyncCallback0, const MethodInfo* method)
{
	{
		UnityPurchasingCallback_t2635187846 * L_0 = ___AsyncCallback0;
		OSXStoreBindings_setUnityPurchasingCallback_m2447488934(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::RetrieveProducts(System.String)
extern "C"  void OSXStoreBindings_RetrieveProducts_m2083493257 (OSXStoreBindings_t116576999 * __this, String_t* ___json0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___json0;
		OSXStoreBindings_unityPurchasingRetrieveProducts_m3993276764(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::Purchase(System.String,System.String)
extern "C"  void OSXStoreBindings_Purchase_m3563412408 (OSXStoreBindings_t116576999 * __this, String_t* ___productJSON0, String_t* ___developerPayload1, const MethodInfo* method)
{
	{
		String_t* L_0 = ___productJSON0;
		String_t* L_1 = ___developerPayload1;
		OSXStoreBindings_unityPurchasingPurchase_m473905327(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::FinishTransaction(System.String,System.String)
extern "C"  void OSXStoreBindings_FinishTransaction_m3636026038 (OSXStoreBindings_t116576999 * __this, String_t* ___productJSON0, String_t* ___transactionId1, const MethodInfo* method)
{
	{
		String_t* L_0 = ___productJSON0;
		String_t* L_1 = ___transactionId1;
		OSXStoreBindings_unityPurchasingFinishTransaction_m2773124175(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::RestoreTransactions()
extern "C"  void OSXStoreBindings_RestoreTransactions_m3460039746 (OSXStoreBindings_t116576999 * __this, const MethodInfo* method)
{
	{
		OSXStoreBindings_unityPurchasingRestoreTransactions_m3416276475(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::AddTransactionObserver()
extern "C"  void OSXStoreBindings_AddTransactionObserver_m2934661066 (OSXStoreBindings_t116576999 * __this, const MethodInfo* method)
{
	{
		OSXStoreBindings_unityPurchasingAddTransactionObserver_m1513387321(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
