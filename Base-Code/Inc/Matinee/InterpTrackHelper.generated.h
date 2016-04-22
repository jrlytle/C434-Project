// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MATINEE_InterpTrackHelper_generated_h
#error "InterpTrackHelper.generated.h already included, missing '#pragma once' in InterpTrackHelper.h"
#endif
#define MATINEE_InterpTrackHelper_generated_h

#define Engine_Source_Editor_Matinee_Classes_InterpTrackHelper_h_11_RPC_WRAPPERS
#define Engine_Source_Editor_Matinee_Classes_InterpTrackHelper_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_Matinee_Classes_InterpTrackHelper_h_11_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUInterpTrackHelper(); \
	friend MATINEE_API class UClass* Z_Construct_UClass_UInterpTrackHelper(); \
	public: \
	DECLARE_CLASS(UInterpTrackHelper, UObject, COMPILED_IN_FLAGS(0), 0, Matinee, NO_API) \
	DECLARE_SERIALIZER(UInterpTrackHelper) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UInterpTrackHelper*>(this); }


#define Engine_Source_Editor_Matinee_Classes_InterpTrackHelper_h_11_INCLASS \
	private: \
	static void StaticRegisterNativesUInterpTrackHelper(); \
	friend MATINEE_API class UClass* Z_Construct_UClass_UInterpTrackHelper(); \
	public: \
	DECLARE_CLASS(UInterpTrackHelper, UObject, COMPILED_IN_FLAGS(0), 0, Matinee, NO_API) \
	DECLARE_SERIALIZER(UInterpTrackHelper) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UInterpTrackHelper*>(this); }


#define Engine_Source_Editor_Matinee_Classes_InterpTrackHelper_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterpTrackHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpTrackHelper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterpTrackHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpTrackHelper); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UInterpTrackHelper(const UInterpTrackHelper& InCopy); \
public:


#define Engine_Source_Editor_Matinee_Classes_InterpTrackHelper_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterpTrackHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UInterpTrackHelper(const UInterpTrackHelper& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterpTrackHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpTrackHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpTrackHelper)


#define Engine_Source_Editor_Matinee_Classes_InterpTrackHelper_h_8_PROLOG
#define Engine_Source_Editor_Matinee_Classes_InterpTrackHelper_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Matinee_Classes_InterpTrackHelper_h_11_RPC_WRAPPERS \
	Engine_Source_Editor_Matinee_Classes_InterpTrackHelper_h_11_INCLASS \
	Engine_Source_Editor_Matinee_Classes_InterpTrackHelper_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_Matinee_Classes_InterpTrackHelper_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Matinee_Classes_InterpTrackHelper_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_Matinee_Classes_InterpTrackHelper_h_11_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_Matinee_Classes_InterpTrackHelper_h_11_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InterpTrackHelper."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_Matinee_Classes_InterpTrackHelper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
