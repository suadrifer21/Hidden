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

// UITexturePacker/Storage
struct Storage_t926507209;
struct Storage_t926507209_marshaled_pinvoke;
struct Storage_t926507209_marshaled_com;

#include "codegen/il2cpp-codegen.h"


// Methods for marshaling
struct Storage_t926507209;
struct Storage_t926507209_marshaled_pinvoke;

extern "C" void Storage_t926507209_marshal_pinvoke(const Storage_t926507209& unmarshaled, Storage_t926507209_marshaled_pinvoke& marshaled);
extern "C" void Storage_t926507209_marshal_pinvoke_back(const Storage_t926507209_marshaled_pinvoke& marshaled, Storage_t926507209& unmarshaled);
extern "C" void Storage_t926507209_marshal_pinvoke_cleanup(Storage_t926507209_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Storage_t926507209;
struct Storage_t926507209_marshaled_com;

extern "C" void Storage_t926507209_marshal_com(const Storage_t926507209& unmarshaled, Storage_t926507209_marshaled_com& marshaled);
extern "C" void Storage_t926507209_marshal_com_back(const Storage_t926507209_marshaled_com& marshaled, Storage_t926507209& unmarshaled);
extern "C" void Storage_t926507209_marshal_com_cleanup(Storage_t926507209_marshaled_com& marshaled);
