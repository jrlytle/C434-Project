// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_LevelFactory_generated_h
#error "LevelFactory.generated.h already included, missing '#pragma once' in LevelFactory.h"
#endif
#define UNREALED_LevelFactory_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Factories_LevelFactory_h_13_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_LevelFactory_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Factories_LevelFactory_h_13_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesULevelFactory(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_ULevelFactory(); \
	public: \
	DECLARE_CLASS(ULevelFactory, UFactory, COMPILED_IN_FLAGS(0), 0, UnrealEd, UNREALED_API) \
	DECLARE_SERIALIZER(ULevelFactory) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ULevelFactory*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Factories_LevelFactory_h_13_INCLASS \
	private: \
	static void StaticRegisterNativesULevelFactory(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_ULevelFactory(); \
	public: \
	DECLARE_CLASS(ULevelFactory, UFactory, COMPILED_IN_FLAGS(0), 0, UnrealEd, UNREALED_API) \
	DECLARE_SERIALIZER(ULevelFactory) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ULevelFactory*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Factories_LevelFactory_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API ULevelFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, ULevelFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelFactory); \
private: \
	/** Private copy-constructor, should never be used */ \
	UNREALED_API ULevelFactory(const ULevelFactory& InCopy); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Factories_LevelFactory_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API ULevelFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	UNREALED_API ULevelFactory(const ULevelFactory& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, ULevelFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelFactory)


#define Engine_Source_Editor_UnrealEd_Classes_Factories_LevelFactory_h_10_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Factories_LevelFactory_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_LevelFactory_h_13_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_LevelFactory_h_13_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_LevelFactory_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Factories_LevelFactory_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Factories_LevelFactory_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_LevelFactory_h_13_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Factories_LevelFactory_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LevelFactory."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Factories_LevelFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
