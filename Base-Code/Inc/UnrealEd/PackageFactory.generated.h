// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_PackageFactory_generated_h
#error "PackageFactory.generated.h already included, missing '#pragma once' in PackageFactory.h"
#endif
#define UNREALED_PackageFactory_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_13_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_13_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUPackageFactory(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UPackageFactory(); \
	public: \
	DECLARE_CLASS(UPackageFactory, UFactory, COMPILED_IN_FLAGS(0), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UPackageFactory) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UPackageFactory*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_13_INCLASS \
	private: \
	static void StaticRegisterNativesUPackageFactory(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UPackageFactory(); \
	public: \
	DECLARE_CLASS(UPackageFactory, UFactory, COMPILED_IN_FLAGS(0), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UPackageFactory) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UPackageFactory*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPackageFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPackageFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPackageFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPackageFactory); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UPackageFactory(const UPackageFactory& InCopy); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPackageFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UPackageFactory(const UPackageFactory& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPackageFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPackageFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPackageFactory)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_10_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_13_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_13_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_13_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PackageFactory."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
