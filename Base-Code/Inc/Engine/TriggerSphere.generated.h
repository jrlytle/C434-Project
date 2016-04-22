// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TriggerSphere_generated_h
#error "TriggerSphere.generated.h already included, missing '#pragma once' in TriggerSphere.h"
#endif
#define ENGINE_TriggerSphere_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_12_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_12_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesATriggerSphere(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ATriggerSphere(); \
	public: \
	DECLARE_CLASS(ATriggerSphere, ATriggerBase, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(ATriggerSphere) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ATriggerSphere*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_12_INCLASS \
	private: \
	static void StaticRegisterNativesATriggerSphere(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ATriggerSphere(); \
	public: \
	DECLARE_CLASS(ATriggerSphere, ATriggerBase, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(ATriggerSphere) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ATriggerSphere*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATriggerSphere(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggerSphere) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerSphere); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerSphere); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ATriggerSphere(const ATriggerSphere& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATriggerSphere(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ATriggerSphere(const ATriggerSphere& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerSphere); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerSphere); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggerSphere)


#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_9_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_12_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_12_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_12_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerSphere."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS