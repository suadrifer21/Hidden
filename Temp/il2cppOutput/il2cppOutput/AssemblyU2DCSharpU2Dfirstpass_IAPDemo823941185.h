#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Purchasing.IStoreController
struct IStoreController_t92554892;
// UnityEngine.Purchasing.IAppleExtensions
struct IAppleExtensions_t1627764765;
// UnityEngine.Purchasing.IMoolahExtension
struct IMoolahExtension_t3195861654;
// UnityEngine.Purchasing.ISamsungAppsExtensions
struct ISamsungAppsExtensions_t3429739537;
// UnityEngine.Purchasing.IMicrosoftExtensions
struct IMicrosoftExtensions_t1101930285;
// System.String
struct String_t;
// UnityEngine.UI.Selectable
struct Selectable_t1490392188;
// System.Action`3<System.String,UnityEngine.Purchasing.ValidateReceiptState,System.String>
struct Action_3_t681716397;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IAPDemo
struct  IAPDemo_t823941185  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Purchasing.IStoreController IAPDemo::m_Controller
	Il2CppObject * ___m_Controller_2;
	// UnityEngine.Purchasing.IAppleExtensions IAPDemo::m_AppleExtensions
	Il2CppObject * ___m_AppleExtensions_3;
	// UnityEngine.Purchasing.IMoolahExtension IAPDemo::m_MoolahExtensions
	Il2CppObject * ___m_MoolahExtensions_4;
	// UnityEngine.Purchasing.ISamsungAppsExtensions IAPDemo::m_SamsungExtensions
	Il2CppObject * ___m_SamsungExtensions_5;
	// UnityEngine.Purchasing.IMicrosoftExtensions IAPDemo::m_MicrosoftExtensions
	Il2CppObject * ___m_MicrosoftExtensions_6;
	// System.Boolean IAPDemo::m_IsGooglePlayStoreSelected
	bool ___m_IsGooglePlayStoreSelected_7;
	// System.Boolean IAPDemo::m_IsSamsungAppsStoreSelected
	bool ___m_IsSamsungAppsStoreSelected_8;
	// System.Boolean IAPDemo::m_IsCloudMoolahStoreSelected
	bool ___m_IsCloudMoolahStoreSelected_9;
	// System.String IAPDemo::m_LastTransationID
	String_t* ___m_LastTransationID_10;
	// System.String IAPDemo::m_LastReceipt
	String_t* ___m_LastReceipt_11;
	// System.String IAPDemo::m_CloudMoolahUserName
	String_t* ___m_CloudMoolahUserName_12;
	// System.Boolean IAPDemo::m_IsLoggedIn
	bool ___m_IsLoggedIn_13;
	// System.Int32 IAPDemo::m_SelectedItemIndex
	int32_t ___m_SelectedItemIndex_14;
	// System.Boolean IAPDemo::m_PurchaseInProgress
	bool ___m_PurchaseInProgress_15;
	// UnityEngine.UI.Selectable IAPDemo::m_InteractableSelectable
	Selectable_t1490392188 * ___m_InteractableSelectable_16;

public:
	inline static int32_t get_offset_of_m_Controller_2() { return static_cast<int32_t>(offsetof(IAPDemo_t823941185, ___m_Controller_2)); }
	inline Il2CppObject * get_m_Controller_2() const { return ___m_Controller_2; }
	inline Il2CppObject ** get_address_of_m_Controller_2() { return &___m_Controller_2; }
	inline void set_m_Controller_2(Il2CppObject * value)
	{
		___m_Controller_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Controller_2, value);
	}

	inline static int32_t get_offset_of_m_AppleExtensions_3() { return static_cast<int32_t>(offsetof(IAPDemo_t823941185, ___m_AppleExtensions_3)); }
	inline Il2CppObject * get_m_AppleExtensions_3() const { return ___m_AppleExtensions_3; }
	inline Il2CppObject ** get_address_of_m_AppleExtensions_3() { return &___m_AppleExtensions_3; }
	inline void set_m_AppleExtensions_3(Il2CppObject * value)
	{
		___m_AppleExtensions_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_AppleExtensions_3, value);
	}

	inline static int32_t get_offset_of_m_MoolahExtensions_4() { return static_cast<int32_t>(offsetof(IAPDemo_t823941185, ___m_MoolahExtensions_4)); }
	inline Il2CppObject * get_m_MoolahExtensions_4() const { return ___m_MoolahExtensions_4; }
	inline Il2CppObject ** get_address_of_m_MoolahExtensions_4() { return &___m_MoolahExtensions_4; }
	inline void set_m_MoolahExtensions_4(Il2CppObject * value)
	{
		___m_MoolahExtensions_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_MoolahExtensions_4, value);
	}

	inline static int32_t get_offset_of_m_SamsungExtensions_5() { return static_cast<int32_t>(offsetof(IAPDemo_t823941185, ___m_SamsungExtensions_5)); }
	inline Il2CppObject * get_m_SamsungExtensions_5() const { return ___m_SamsungExtensions_5; }
	inline Il2CppObject ** get_address_of_m_SamsungExtensions_5() { return &___m_SamsungExtensions_5; }
	inline void set_m_SamsungExtensions_5(Il2CppObject * value)
	{
		___m_SamsungExtensions_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_SamsungExtensions_5, value);
	}

	inline static int32_t get_offset_of_m_MicrosoftExtensions_6() { return static_cast<int32_t>(offsetof(IAPDemo_t823941185, ___m_MicrosoftExtensions_6)); }
	inline Il2CppObject * get_m_MicrosoftExtensions_6() const { return ___m_MicrosoftExtensions_6; }
	inline Il2CppObject ** get_address_of_m_MicrosoftExtensions_6() { return &___m_MicrosoftExtensions_6; }
	inline void set_m_MicrosoftExtensions_6(Il2CppObject * value)
	{
		___m_MicrosoftExtensions_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_MicrosoftExtensions_6, value);
	}

	inline static int32_t get_offset_of_m_IsGooglePlayStoreSelected_7() { return static_cast<int32_t>(offsetof(IAPDemo_t823941185, ___m_IsGooglePlayStoreSelected_7)); }
	inline bool get_m_IsGooglePlayStoreSelected_7() const { return ___m_IsGooglePlayStoreSelected_7; }
	inline bool* get_address_of_m_IsGooglePlayStoreSelected_7() { return &___m_IsGooglePlayStoreSelected_7; }
	inline void set_m_IsGooglePlayStoreSelected_7(bool value)
	{
		___m_IsGooglePlayStoreSelected_7 = value;
	}

	inline static int32_t get_offset_of_m_IsSamsungAppsStoreSelected_8() { return static_cast<int32_t>(offsetof(IAPDemo_t823941185, ___m_IsSamsungAppsStoreSelected_8)); }
	inline bool get_m_IsSamsungAppsStoreSelected_8() const { return ___m_IsSamsungAppsStoreSelected_8; }
	inline bool* get_address_of_m_IsSamsungAppsStoreSelected_8() { return &___m_IsSamsungAppsStoreSelected_8; }
	inline void set_m_IsSamsungAppsStoreSelected_8(bool value)
	{
		___m_IsSamsungAppsStoreSelected_8 = value;
	}

	inline static int32_t get_offset_of_m_IsCloudMoolahStoreSelected_9() { return static_cast<int32_t>(offsetof(IAPDemo_t823941185, ___m_IsCloudMoolahStoreSelected_9)); }
	inline bool get_m_IsCloudMoolahStoreSelected_9() const { return ___m_IsCloudMoolahStoreSelected_9; }
	inline bool* get_address_of_m_IsCloudMoolahStoreSelected_9() { return &___m_IsCloudMoolahStoreSelected_9; }
	inline void set_m_IsCloudMoolahStoreSelected_9(bool value)
	{
		___m_IsCloudMoolahStoreSelected_9 = value;
	}

	inline static int32_t get_offset_of_m_LastTransationID_10() { return static_cast<int32_t>(offsetof(IAPDemo_t823941185, ___m_LastTransationID_10)); }
	inline String_t* get_m_LastTransationID_10() const { return ___m_LastTransationID_10; }
	inline String_t** get_address_of_m_LastTransationID_10() { return &___m_LastTransationID_10; }
	inline void set_m_LastTransationID_10(String_t* value)
	{
		___m_LastTransationID_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_LastTransationID_10, value);
	}

	inline static int32_t get_offset_of_m_LastReceipt_11() { return static_cast<int32_t>(offsetof(IAPDemo_t823941185, ___m_LastReceipt_11)); }
	inline String_t* get_m_LastReceipt_11() const { return ___m_LastReceipt_11; }
	inline String_t** get_address_of_m_LastReceipt_11() { return &___m_LastReceipt_11; }
	inline void set_m_LastReceipt_11(String_t* value)
	{
		___m_LastReceipt_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_LastReceipt_11, value);
	}

	inline static int32_t get_offset_of_m_CloudMoolahUserName_12() { return static_cast<int32_t>(offsetof(IAPDemo_t823941185, ___m_CloudMoolahUserName_12)); }
	inline String_t* get_m_CloudMoolahUserName_12() const { return ___m_CloudMoolahUserName_12; }
	inline String_t** get_address_of_m_CloudMoolahUserName_12() { return &___m_CloudMoolahUserName_12; }
	inline void set_m_CloudMoolahUserName_12(String_t* value)
	{
		___m_CloudMoolahUserName_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_CloudMoolahUserName_12, value);
	}

	inline static int32_t get_offset_of_m_IsLoggedIn_13() { return static_cast<int32_t>(offsetof(IAPDemo_t823941185, ___m_IsLoggedIn_13)); }
	inline bool get_m_IsLoggedIn_13() const { return ___m_IsLoggedIn_13; }
	inline bool* get_address_of_m_IsLoggedIn_13() { return &___m_IsLoggedIn_13; }
	inline void set_m_IsLoggedIn_13(bool value)
	{
		___m_IsLoggedIn_13 = value;
	}

	inline static int32_t get_offset_of_m_SelectedItemIndex_14() { return static_cast<int32_t>(offsetof(IAPDemo_t823941185, ___m_SelectedItemIndex_14)); }
	inline int32_t get_m_SelectedItemIndex_14() const { return ___m_SelectedItemIndex_14; }
	inline int32_t* get_address_of_m_SelectedItemIndex_14() { return &___m_SelectedItemIndex_14; }
	inline void set_m_SelectedItemIndex_14(int32_t value)
	{
		___m_SelectedItemIndex_14 = value;
	}

	inline static int32_t get_offset_of_m_PurchaseInProgress_15() { return static_cast<int32_t>(offsetof(IAPDemo_t823941185, ___m_PurchaseInProgress_15)); }
	inline bool get_m_PurchaseInProgress_15() const { return ___m_PurchaseInProgress_15; }
	inline bool* get_address_of_m_PurchaseInProgress_15() { return &___m_PurchaseInProgress_15; }
	inline void set_m_PurchaseInProgress_15(bool value)
	{
		___m_PurchaseInProgress_15 = value;
	}

	inline static int32_t get_offset_of_m_InteractableSelectable_16() { return static_cast<int32_t>(offsetof(IAPDemo_t823941185, ___m_InteractableSelectable_16)); }
	inline Selectable_t1490392188 * get_m_InteractableSelectable_16() const { return ___m_InteractableSelectable_16; }
	inline Selectable_t1490392188 ** get_address_of_m_InteractableSelectable_16() { return &___m_InteractableSelectable_16; }
	inline void set_m_InteractableSelectable_16(Selectable_t1490392188 * value)
	{
		___m_InteractableSelectable_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_InteractableSelectable_16, value);
	}
};

struct IAPDemo_t823941185_StaticFields
{
public:
	// System.Action`3<System.String,UnityEngine.Purchasing.ValidateReceiptState,System.String> IAPDemo::<>f__am$cache0
	Action_3_t681716397 * ___U3CU3Ef__amU24cache0_17;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_17() { return static_cast<int32_t>(offsetof(IAPDemo_t823941185_StaticFields, ___U3CU3Ef__amU24cache0_17)); }
	inline Action_3_t681716397 * get_U3CU3Ef__amU24cache0_17() const { return ___U3CU3Ef__amU24cache0_17; }
	inline Action_3_t681716397 ** get_address_of_U3CU3Ef__amU24cache0_17() { return &___U3CU3Ef__amU24cache0_17; }
	inline void set_U3CU3Ef__amU24cache0_17(Action_3_t681716397 * value)
	{
		___U3CU3Ef__amU24cache0_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
