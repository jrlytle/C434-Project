// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_InterpTrackFloatBase_generated_h
#error "InterpTrackFloatBase.generated.h already included, missing '#pragma once' in InterpTrackFloatBase.h"
#endif
#define ENGINE_InterpTrackFloatBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatBase_h_10_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatBase_h_10_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUInterpTrackFloatBase(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UInterpTrackFloatBase(); \
	public: \
	DECLARE_CLASS(UInterpTrackFloatBase, UInterpTrack, COMPILED_IN_FLAGS(CLASS_Abstract), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UInterpTrackFloatBase) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UInterpTrackFloatBase*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatBase_h_10_INCLASS \
	private: \
	static void StaticRegisterNativesUInterpTrackFloatBase(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UInterpTrackFloatBase(); \
	public: \
	DECLARE_CLASS(UInterpTrackFloatBase, UInterpTrack, COMPILED_IN_FLAGS(CLASS_Abstract), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UInterpTrackFloatBase) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UInterpTrackFloatBase*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatBase_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterpTrackFloatBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpTrackFloatBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterpTrackFloatBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpTrackFloatBase); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UInterpTrackFloatBase(const UInterpTrackFloatBase& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatBase_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterpTrackFloatBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UInterpTrackFloatBase(const UInterpTrackFloatBase& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterpTrackFloatBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpTrackFloatBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpTrackFloatBase)


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatBase_h_7_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatBase_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatBase_h_10_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatBase_h_10_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatBase_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatBase_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatBase_h_10_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatBase_h_10_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InterpTrackFloatBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS