// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_PawnAction_Wait_generated_h
#error "PawnAction_Wait.generated.h already included, missing '#pragma once' in PawnAction_Wait.h"
#endif
#define AIMODULE_PawnAction_Wait_generated_h

#define Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_12_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_12_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUPawnAction_Wait(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_UPawnAction_Wait(); \
	public: \
	DECLARE_CLASS(UPawnAction_Wait, UPawnAction, COMPILED_IN_FLAGS(0), 0, AIModule, NO_API) \
	DECLARE_SERIALIZER(UPawnAction_Wait) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UPawnAction_Wait*>(this); }


#define Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_12_INCLASS \
	private: \
	static void StaticRegisterNativesUPawnAction_Wait(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_UPawnAction_Wait(); \
	public: \
	DECLARE_CLASS(UPawnAction_Wait, UPawnAction, COMPILED_IN_FLAGS(0), 0, AIModule, NO_API) \
	DECLARE_SERIALIZER(UPawnAction_Wait) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UPawnAction_Wait*>(this); }


#define Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnAction_Wait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnAction_Wait) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnAction_Wait); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnAction_Wait); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UPawnAction_Wait(const UPawnAction_Wait& InCopy); \
public:


#define Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnAction_Wait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UPawnAction_Wait(const UPawnAction_Wait& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnAction_Wait); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnAction_Wait); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnAction_Wait)


#define Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_9_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_12_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_12_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_12_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PawnAction_Wait."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
