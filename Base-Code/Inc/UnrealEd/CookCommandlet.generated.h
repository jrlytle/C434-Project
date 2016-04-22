// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_CookCommandlet_generated_h
#error "CookCommandlet.generated.h already included, missing '#pragma once' in CookCommandlet.h"
#endif
#define UNREALED_CookCommandlet_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_15_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_15_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUCookCommandlet(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UCookCommandlet(); \
	public: \
	DECLARE_CLASS(UCookCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UCookCommandlet) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UCookCommandlet*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_15_INCLASS \
	private: \
	static void StaticRegisterNativesUCookCommandlet(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UCookCommandlet(); \
	public: \
	DECLARE_CLASS(UCookCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UCookCommandlet) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UCookCommandlet*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCookCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCookCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCookCommandlet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCookCommandlet); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UCookCommandlet(const UCookCommandlet& InCopy); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCookCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UCookCommandlet(const UCookCommandlet& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCookCommandlet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCookCommandlet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCookCommandlet)


#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_11_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_15_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_15_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CookCommandlet."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS