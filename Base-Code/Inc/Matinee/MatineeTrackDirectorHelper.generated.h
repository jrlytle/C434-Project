// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MATINEE_MatineeTrackDirectorHelper_generated_h
#error "MatineeTrackDirectorHelper.generated.h already included, missing '#pragma once' in MatineeTrackDirectorHelper.h"
#endif
#define MATINEE_MatineeTrackDirectorHelper_generated_h

#define Engine_Source_Editor_Matinee_Classes_MatineeTrackDirectorHelper_h_11_RPC_WRAPPERS
#define Engine_Source_Editor_Matinee_Classes_MatineeTrackDirectorHelper_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_Matinee_Classes_MatineeTrackDirectorHelper_h_11_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUMatineeTrackDirectorHelper(); \
	friend MATINEE_API class UClass* Z_Construct_UClass_UMatineeTrackDirectorHelper(); \
	public: \
	DECLARE_CLASS(UMatineeTrackDirectorHelper, UInterpTrackHelper, COMPILED_IN_FLAGS(0), 0, Matinee, NO_API) \
	DECLARE_SERIALIZER(UMatineeTrackDirectorHelper) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMatineeTrackDirectorHelper*>(this); }


#define Engine_Source_Editor_Matinee_Classes_MatineeTrackDirectorHelper_h_11_INCLASS \
	private: \
	static void StaticRegisterNativesUMatineeTrackDirectorHelper(); \
	friend MATINEE_API class UClass* Z_Construct_UClass_UMatineeTrackDirectorHelper(); \
	public: \
	DECLARE_CLASS(UMatineeTrackDirectorHelper, UInterpTrackHelper, COMPILED_IN_FLAGS(0), 0, Matinee, NO_API) \
	DECLARE_SERIALIZER(UMatineeTrackDirectorHelper) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMatineeTrackDirectorHelper*>(this); }


#define Engine_Source_Editor_Matinee_Classes_MatineeTrackDirectorHelper_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMatineeTrackDirectorHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMatineeTrackDirectorHelper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMatineeTrackDirectorHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMatineeTrackDirectorHelper); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMatineeTrackDirectorHelper(const UMatineeTrackDirectorHelper& InCopy); \
public:


#define Engine_Source_Editor_Matinee_Classes_MatineeTrackDirectorHelper_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMatineeTrackDirectorHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMatineeTrackDirectorHelper(const UMatineeTrackDirectorHelper& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMatineeTrackDirectorHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMatineeTrackDirectorHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMatineeTrackDirectorHelper)


#define Engine_Source_Editor_Matinee_Classes_MatineeTrackDirectorHelper_h_8_PROLOG
#define Engine_Source_Editor_Matinee_Classes_MatineeTrackDirectorHelper_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Matinee_Classes_MatineeTrackDirectorHelper_h_11_RPC_WRAPPERS \
	Engine_Source_Editor_Matinee_Classes_MatineeTrackDirectorHelper_h_11_INCLASS \
	Engine_Source_Editor_Matinee_Classes_MatineeTrackDirectorHelper_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_Matinee_Classes_MatineeTrackDirectorHelper_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Matinee_Classes_MatineeTrackDirectorHelper_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_Matinee_Classes_MatineeTrackDirectorHelper_h_11_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_Matinee_Classes_MatineeTrackDirectorHelper_h_11_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MatineeTrackDirectorHelper."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_Matinee_Classes_MatineeTrackDirectorHelper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS