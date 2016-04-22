// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_InterpTrackFloatProp_generated_h
#error "InterpTrackFloatProp.generated.h already included, missing '#pragma once' in InterpTrackFloatProp.h"
#endif
#define ENGINE_InterpTrackFloatProp_generated_h

#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatProp_h_10_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatProp_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatProp_h_10_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUInterpTrackFloatProp(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UInterpTrackFloatProp(); \
	public: \
	DECLARE_CLASS(UInterpTrackFloatProp, UInterpTrackFloatBase, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UInterpTrackFloatProp) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UInterpTrackFloatProp*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatProp_h_10_INCLASS \
	private: \
	static void StaticRegisterNativesUInterpTrackFloatProp(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UInterpTrackFloatProp(); \
	public: \
	DECLARE_CLASS(UInterpTrackFloatProp, UInterpTrackFloatBase, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UInterpTrackFloatProp) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UInterpTrackFloatProp*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatProp_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterpTrackFloatProp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpTrackFloatProp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterpTrackFloatProp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpTrackFloatProp); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UInterpTrackFloatProp(const UInterpTrackFloatProp& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatProp_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterpTrackFloatProp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UInterpTrackFloatProp(const UInterpTrackFloatProp& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterpTrackFloatProp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpTrackFloatProp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpTrackFloatProp)


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatProp_h_7_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatProp_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatProp_h_10_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatProp_h_10_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatProp_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatProp_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatProp_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatProp_h_10_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatProp_h_10_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InterpTrackFloatProp."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatProp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
