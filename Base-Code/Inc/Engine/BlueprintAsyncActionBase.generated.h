// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BlueprintAsyncActionBase_generated_h
#error "BlueprintAsyncActionBase.generated.h already included, missing '#pragma once' in BlueprintAsyncActionBase.h"
#endif
#define ENGINE_BlueprintAsyncActionBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActivate) \
	{ \
		P_FINISH; \
		this->Activate(); \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActivate) \
	{ \
		P_FINISH; \
		this->Activate(); \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_9_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUBlueprintAsyncActionBase(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UBlueprintAsyncActionBase(); \
	public: \
	DECLARE_CLASS(UBlueprintAsyncActionBase, UObject, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UBlueprintAsyncActionBase) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UBlueprintAsyncActionBase*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_9_INCLASS \
	private: \
	static void StaticRegisterNativesUBlueprintAsyncActionBase(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UBlueprintAsyncActionBase(); \
	public: \
	DECLARE_CLASS(UBlueprintAsyncActionBase, UObject, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UBlueprintAsyncActionBase) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UBlueprintAsyncActionBase*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintAsyncActionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintAsyncActionBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintAsyncActionBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintAsyncActionBase); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UBlueprintAsyncActionBase(const UBlueprintAsyncActionBase& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintAsyncActionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UBlueprintAsyncActionBase(const UBlueprintAsyncActionBase& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintAsyncActionBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintAsyncActionBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintAsyncActionBase)


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_6_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_9_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_9_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_9_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_9_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BlueprintAsyncActionBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS