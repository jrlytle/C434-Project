// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LineBatchComponent_generated_h
#error "LineBatchComponent.generated.h already included, missing '#pragma once' in LineBatchComponent.h"
#endif
#define ENGINE_LineBatchComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_51_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FBatchedPoint(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_10_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FBatchedLine(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_114_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_114_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_114_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesULineBatchComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ULineBatchComponent(); \
	public: \
	DECLARE_CLASS(ULineBatchComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(ULineBatchComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ULineBatchComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_114_INCLASS \
	private: \
	static void StaticRegisterNativesULineBatchComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ULineBatchComponent(); \
	public: \
	DECLARE_CLASS(ULineBatchComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(ULineBatchComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ULineBatchComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_114_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULineBatchComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULineBatchComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULineBatchComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULineBatchComponent); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API ULineBatchComponent(const ULineBatchComponent& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_114_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULineBatchComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API ULineBatchComponent(const ULineBatchComponent& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULineBatchComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULineBatchComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULineBatchComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_111_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_114_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_114_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_114_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_114_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_114_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_114_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_114_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_114_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LineBatchComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS