// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ActorFactoryCameraActor_generated_h
#error "ActorFactoryCameraActor.generated.h already included, missing '#pragma once' in ActorFactoryCameraActor.h"
#endif
#define UNREALED_ActorFactoryCameraActor_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCameraActor_h_10_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCameraActor_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCameraActor_h_10_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUActorFactoryCameraActor(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UActorFactoryCameraActor(); \
	public: \
	DECLARE_CLASS(UActorFactoryCameraActor, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, UnrealEd, UNREALED_API) \
	DECLARE_SERIALIZER(UActorFactoryCameraActor) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UActorFactoryCameraActor*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCameraActor_h_10_INCLASS \
	private: \
	static void StaticRegisterNativesUActorFactoryCameraActor(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_UActorFactoryCameraActor(); \
	public: \
	DECLARE_CLASS(UActorFactoryCameraActor, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, UnrealEd, UNREALED_API) \
	DECLARE_SERIALIZER(UActorFactoryCameraActor) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UActorFactoryCameraActor*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCameraActor_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryCameraActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryCameraActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryCameraActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryCameraActor); \
private: \
	/** Private copy-constructor, should never be used */ \
	UNREALED_API UActorFactoryCameraActor(const UActorFactoryCameraActor& InCopy); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCameraActor_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryCameraActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	UNREALED_API UActorFactoryCameraActor(const UActorFactoryCameraActor& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryCameraActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryCameraActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryCameraActor)


#define Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCameraActor_h_7_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCameraActor_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCameraActor_h_10_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCameraActor_h_10_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCameraActor_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCameraActor_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCameraActor_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCameraActor_h_10_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCameraActor_h_10_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ActorFactoryCameraActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCameraActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS