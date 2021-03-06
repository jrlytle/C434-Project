// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TriggerBase_generated_h
#error "TriggerBase.generated.h already included, missing '#pragma once' in TriggerBase.h"
#endif
#define ENGINE_TriggerBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_14_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesATriggerBase(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ATriggerBase(); \
	public: \
	DECLARE_CLASS(ATriggerBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(ATriggerBase) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ATriggerBase*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesATriggerBase(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ATriggerBase(); \
	public: \
	DECLARE_CLASS(ATriggerBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(ATriggerBase) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ATriggerBase*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ATriggerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ATriggerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerBase); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API ATriggerBase(const ATriggerBase& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ATriggerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API ATriggerBase(const ATriggerBase& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ATriggerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggerBase)


#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_11_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_14_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
