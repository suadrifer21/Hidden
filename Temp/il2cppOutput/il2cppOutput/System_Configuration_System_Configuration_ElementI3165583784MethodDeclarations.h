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

// System.Configuration.ElementInformation
struct ElementInformation_t3165583784;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1776195828;
// System.Configuration.PropertyInformation
struct PropertyInformation_t2089433965;
// System.Configuration.PropertyInformationCollection
struct PropertyInformationCollection_t954922393;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configur1776195828.h"
#include "System_Configuration_System_Configuration_Property2089433965.h"
#include "System_Configuration_System_Configuration_ElementI3165583784.h"

// System.Void System.Configuration.ElementInformation::.ctor(System.Configuration.ConfigurationElement,System.Configuration.PropertyInformation)
extern "C"  void ElementInformation__ctor_m815008552 (ElementInformation_t3165583784 * __this, ConfigurationElement_t1776195828 * ___owner0, PropertyInformation_t2089433965 * ___propertyInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.PropertyInformationCollection System.Configuration.ElementInformation::get_Properties()
extern "C"  PropertyInformationCollection_t954922393 * ElementInformation_get_Properties_m1533763968 (ElementInformation_t3165583784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ElementInformation::Reset(System.Configuration.ElementInformation)
extern "C"  void ElementInformation_Reset_m3203551617 (ElementInformation_t3165583784 * __this, ElementInformation_t3165583784 * ___parentInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
