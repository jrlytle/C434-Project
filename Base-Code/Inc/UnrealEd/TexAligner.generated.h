// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_TexAligner_generated_h
#error "TexAligner.generated.h already included, missing '#pragma once' in TexAligner.h"
#endif
#define UNREALED_TexAligner_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_41_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_41_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_41_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUTexAligner(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UTexAligner(); \
	public: \
	DECLARE_CLASS(UTexAligner, UObject, COMPILED_IN_FLAGS(0), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UTexAligner) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UTexAligner*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_41_INCLASS \
	private: \
	static void StaticRegisterNativesUTexAligner(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UTexAligner(); \
	public: \
	DECLARE_CLASS(UTexAligner, UObject, COMPILED_IN_FLAGS(0), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(UTexAligner) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UTexAligner*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTexAligner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTexAligner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTexAligner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTexAligner); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UTexAligner(const UTexAligner& InCopy); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTexAligner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UTexAligner(const UTexAligner& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTexAligner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTexAligner); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTexAligner)


#define Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_38_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_41_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_41_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_41_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_41_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TexAligner."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h


#define FOREACH_ENUM_ETEXALIGN(op) \
	op(TEXALIGN_None) \
	op(TEXALIGN_Default) \
	op(TEXALIGN_Box) \
	op(TEXALIGN_Planar) \
	op(TEXALIGN_Fit) \
	op(TEXALIGN_PlanarAuto) \
	op(TEXALIGN_PlanarWall) \
	op(TEXALIGN_PlanarFloor) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
