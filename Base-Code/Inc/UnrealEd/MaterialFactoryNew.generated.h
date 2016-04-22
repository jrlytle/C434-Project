// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_MaterialFactoryNew_generated_h
#error "MaterialFactoryNew.generated.h already included, missing '#pragma once' in MaterialFactoryNew.h"
#endif
#define UNREALED_MaterialFactoryNew_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFactoryNew_h_13_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFactoryNew_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFactoryNew_h_13_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUMaterialFactoryNew(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UMaterialFactoryNew(); \
	public: \
	DECLARE_CLASS(UMaterialFactoryNew, UFactory, COMPILED_IN_FLAGS(0), 0, UnrealEd, UNREALED_API) \
	DECLARE_SERIALIZER(UMaterialFactoryNew) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMaterialFactoryNew*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFactoryNew_h_13_INCLASS \
	private: \
	static void StaticRegisterNativesUMaterialFactoryNew(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UMaterialFactoryNew(); \
	public: \
	DECLARE_CLASS(UMaterialFactoryNew, UFactory, COMPILED_IN_FLAGS(0), 0, UnrealEd, UNREALED_API) \
	DECLARE_SERIALIZER(UMaterialFactoryNew) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMaterialFactoryNew*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFactoryNew_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UMaterialFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UMaterialFactoryNew); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialFactoryNew); \
private: \
	/** Private copy-constructor, should never be used */ \
	UNREALED_API UMaterialFactoryNew(const UMaterialFactoryNew& InCopy); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFactoryNew_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UMaterialFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	UNREALED_API UMaterialFactoryNew(const UMaterialFactoryNew& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UMaterialFactoryNew); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialFactoryNew); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialFactoryNew)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFactoryNew_h_10_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFactoryNew_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFactoryNew_h_13_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFactoryNew_h_13_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFactoryNew_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFactoryNew_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFactoryNew_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFactoryNew_h_13_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFactoryNew_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialFactoryNew."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFactoryNew_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS