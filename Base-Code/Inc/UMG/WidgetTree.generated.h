// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_WidgetTree_generated_h
#error "WidgetTree.generated.h already included, missing '#pragma once' in WidgetTree.h"
#endif
#define UMG_WidgetTree_generated_h

#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetTree_h_14_RPC_WRAPPERS
#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetTree_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetTree_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUWidgetTree(); \
	friend UMG_API class UClass* Z_Construct_UClass_UWidgetTree(); \
	public: \
	DECLARE_CLASS(UWidgetTree, UObject, COMPILED_IN_FLAGS(0), 0, UMG, NO_API) \
	DECLARE_SERIALIZER(UWidgetTree) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UWidgetTree*>(this); }


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetTree_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesUWidgetTree(); \
	friend UMG_API class UClass* Z_Construct_UClass_UWidgetTree(); \
	public: \
	DECLARE_CLASS(UWidgetTree, UObject, COMPILED_IN_FLAGS(0), 0, UMG, NO_API) \
	DECLARE_SERIALIZER(UWidgetTree) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UWidgetTree*>(this); }


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetTree_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetTree(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetTree) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetTree); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetTree); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UWidgetTree(const UWidgetTree& InCopy); \
public:


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetTree_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetTree(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UWidgetTree(const UWidgetTree& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetTree); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetTree); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetTree)


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetTree_h_11_PROLOG
#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetTree_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetTree_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetTree_h_14_INCLASS \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetTree_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetTree_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetTree_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetTree_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetTree_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WidgetTree."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Blueprint_WidgetTree_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
