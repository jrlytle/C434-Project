// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_VolumetricBuilder_generated_h
#error "VolumetricBuilder.generated.h already included, missing '#pragma once' in VolumetricBuilder.h"
#endif
#define UNREALED_VolumetricBuilder_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Builders_VolumetricBuilder_h_14_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Builders_VolumetricBuilder_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Builders_VolumetricBuilder_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUVolumetricBuilder(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UVolumetricBuilder(); \
	public: \
	DECLARE_CLASS(UVolumetricBuilder, UEditorBrushBuilder, COMPILED_IN_FLAGS(0), 0, UnrealEd, UNREALED_API) \
	DECLARE_SERIALIZER(UVolumetricBuilder) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UVolumetricBuilder*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Builders_VolumetricBuilder_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesUVolumetricBuilder(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UVolumetricBuilder(); \
	public: \
	DECLARE_CLASS(UVolumetricBuilder, UEditorBrushBuilder, COMPILED_IN_FLAGS(0), 0, UnrealEd, UNREALED_API) \
	DECLARE_SERIALIZER(UVolumetricBuilder) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UVolumetricBuilder*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Builders_VolumetricBuilder_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UVolumetricBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVolumetricBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UVolumetricBuilder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVolumetricBuilder); \
private: \
	/** Private copy-constructor, should never be used */ \
	UNREALED_API UVolumetricBuilder(const UVolumetricBuilder& InCopy); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Builders_VolumetricBuilder_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	UNREALED_API UVolumetricBuilder(const UVolumetricBuilder& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UVolumetricBuilder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVolumetricBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVolumetricBuilder)


#define Engine_Source_Editor_UnrealEd_Classes_Builders_VolumetricBuilder_h_10_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Builders_VolumetricBuilder_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Builders_VolumetricBuilder_h_14_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Builders_VolumetricBuilder_h_14_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Builders_VolumetricBuilder_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Builders_VolumetricBuilder_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Builders_VolumetricBuilder_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Builders_VolumetricBuilder_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Builders_VolumetricBuilder_h_14_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Builders_VolumetricBuilder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS