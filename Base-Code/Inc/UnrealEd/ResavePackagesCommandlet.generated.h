// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ResavePackagesCommandlet_generated_h
#error "ResavePackagesCommandlet.generated.h already included, missing '#pragma once' in ResavePackagesCommandlet.h"
#endif
#define UNREALED_ResavePackagesCommandlet_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_ResavePackagesCommandlet_h_11_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_ResavePackagesCommandlet_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_ResavePackagesCommandlet_h_11_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUResavePackagesCommandlet(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UResavePackagesCommandlet(); \
	public: \
	DECLARE_CLASS(UResavePackagesCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UResavePackagesCommandlet) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UResavePackagesCommandlet*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_ResavePackagesCommandlet_h_11_INCLASS \
	private: \
	static void StaticRegisterNativesUResavePackagesCommandlet(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UResavePackagesCommandlet(); \
	public: \
	DECLARE_CLASS(UResavePackagesCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UResavePackagesCommandlet) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UResavePackagesCommandlet*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_ResavePackagesCommandlet_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UResavePackagesCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResavePackagesCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResavePackagesCommandlet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResavePackagesCommandlet); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UResavePackagesCommandlet(const UResavePackagesCommandlet& InCopy); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_ResavePackagesCommandlet_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UResavePackagesCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UResavePackagesCommandlet(const UResavePackagesCommandlet& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResavePackagesCommandlet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResavePackagesCommandlet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResavePackagesCommandlet)


#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_ResavePackagesCommandlet_h_7_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_ResavePackagesCommandlet_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Commandlets_ResavePackagesCommandlet_h_11_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Commandlets_ResavePackagesCommandlet_h_11_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Commandlets_ResavePackagesCommandlet_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_ResavePackagesCommandlet_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Commandlets_ResavePackagesCommandlet_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Commandlets_ResavePackagesCommandlet_h_11_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Commandlets_ResavePackagesCommandlet_h_11_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ResavePackagesCommandlet."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Commandlets_ResavePackagesCommandlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
