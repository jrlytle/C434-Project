// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DataAsset_generated_h
#error "DataAsset.generated.h already included, missing '#pragma once' in DataAsset.h"
#endif
#define ENGINE_DataAsset_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_15_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_15_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUDataAsset(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UDataAsset(); \
	public: \
	DECLARE_CLASS(UDataAsset, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UDataAsset) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UDataAsset*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_15_INCLASS \
	private: \
	static void StaticRegisterNativesUDataAsset(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UDataAsset(); \
	public: \
	DECLARE_CLASS(UDataAsset, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UDataAsset) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UDataAsset*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDataAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataAsset); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UDataAsset(const UDataAsset& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UDataAsset(const UDataAsset& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDataAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataAsset)


#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_11_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_15_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DataAsset."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
