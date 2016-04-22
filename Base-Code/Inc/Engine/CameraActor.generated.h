// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CameraActor_generated_h
#error "CameraActor.generated.h already included, missing '#pragma once' in CameraActor.h"
#endif
#define ENGINE_CameraActor_generated_h

#define Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAutoActivatePlayerIndex) \
	{ \
		P_FINISH; \
		*(int32*)Z_Param__Result=this->GetAutoActivatePlayerIndex(); \
	}


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAutoActivatePlayerIndex) \
	{ \
		P_FINISH; \
		*(int32*)Z_Param__Result=this->GetAutoActivatePlayerIndex(); \
	}


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_15_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesACameraActor(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ACameraActor(); \
	public: \
	DECLARE_CLASS(ACameraActor, AActor, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(ACameraActor) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ACameraActor*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_15_INCLASS \
	private: \
	static void StaticRegisterNativesACameraActor(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ACameraActor(); \
	public: \
	DECLARE_CLASS(ACameraActor, AActor, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(ACameraActor) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ACameraActor*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACameraActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACameraActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraActor); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ACameraActor(const ACameraActor& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACameraActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ACameraActor(const ACameraActor& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACameraActor)


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_12_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_15_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CameraActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
