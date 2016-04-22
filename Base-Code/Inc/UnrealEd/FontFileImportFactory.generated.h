// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_FontFileImportFactory_generated_h
#error "FontFileImportFactory.generated.h already included, missing '#pragma once' in FontFileImportFactory.h"
#endif
#define UNREALED_FontFileImportFactory_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Factories_FontFileImportFactory_h_13_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FontFileImportFactory_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FontFileImportFactory_h_13_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUFontFileImportFactory(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UFontFileImportFactory(); \
	public: \
	DECLARE_CLASS(UFontFileImportFactory, UFactory, COMPILED_IN_FLAGS(0), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UFontFileImportFactory) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UFontFileImportFactory*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FontFileImportFactory_h_13_INCLASS \
	private: \
	static void StaticRegisterNativesUFontFileImportFactory(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UFontFileImportFactory(); \
	public: \
	DECLARE_CLASS(UFontFileImportFactory, UFactory, COMPILED_IN_FLAGS(0), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UFontFileImportFactory) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UFontFileImportFactory*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FontFileImportFactory_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFontFileImportFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFontFileImportFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFontFileImportFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFontFileImportFactory); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UFontFileImportFactory(const UFontFileImportFactory& InCopy); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FontFileImportFactory_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFontFileImportFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UFontFileImportFactory(const UFontFileImportFactory& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFontFileImportFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFontFileImportFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFontFileImportFactory)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FontFileImportFactory_h_10_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Factories_FontFileImportFactory_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FontFileImportFactory_h_13_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FontFileImportFactory_h_13_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FontFileImportFactory_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Factories_FontFileImportFactory_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FontFileImportFactory_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FontFileImportFactory_h_13_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_FontFileImportFactory_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FontFileImportFactory."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Factories_FontFileImportFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS