// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYDEBUGGER_GameplayDebuggingHUDComponent_generated_h
#error "GameplayDebuggingHUDComponent.generated.h already included, missing '#pragma once' in GameplayDebuggingHUDComponent.h"
#endif
#define GAMEPLAYDEBUGGER_GameplayDebuggingHUDComponent_generated_h

#define Engine_Source_Developer_GameplayDebugger_Classes_GameplayDebuggingHUDComponent_h_27_RPC_WRAPPERS
#define Engine_Source_Developer_GameplayDebugger_Classes_GameplayDebuggingHUDComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Developer_GameplayDebugger_Classes_GameplayDebuggingHUDComponent_h_27_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAGameplayDebuggingHUDComponent(); \
	friend GAMEPLAYDEBUGGER_API class UClass* Z_Construct_UClass_AGameplayDebuggingHUDComponent(); \
	public: \
	DECLARE_CLASS(AGameplayDebuggingHUDComponent, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, GameplayDebugger, NO_API) \
	DECLARE_SERIALIZER(AGameplayDebuggingHUDComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AGameplayDebuggingHUDComponent*>(this); }


#define Engine_Source_Developer_GameplayDebugger_Classes_GameplayDebuggingHUDComponent_h_27_INCLASS \
	private: \
	static void StaticRegisterNativesAGameplayDebuggingHUDComponent(); \
	friend GAMEPLAYDEBUGGER_API class UClass* Z_Construct_UClass_AGameplayDebuggingHUDComponent(); \
	public: \
	DECLARE_CLASS(AGameplayDebuggingHUDComponent, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, GameplayDebugger, NO_API) \
	DECLARE_SERIALIZER(AGameplayDebuggingHUDComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AGameplayDebuggingHUDComponent*>(this); }


#define Engine_Source_Developer_GameplayDebugger_Classes_GameplayDebuggingHUDComponent_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameplayDebuggingHUDComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameplayDebuggingHUDComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameplayDebuggingHUDComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayDebuggingHUDComponent); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AGameplayDebuggingHUDComponent(const AGameplayDebuggingHUDComponent& InCopy); \
public:


#define Engine_Source_Developer_GameplayDebugger_Classes_GameplayDebuggingHUDComponent_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameplayDebuggingHUDComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AGameplayDebuggingHUDComponent(const AGameplayDebuggingHUDComponent& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameplayDebuggingHUDComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayDebuggingHUDComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameplayDebuggingHUDComponent)


#define Engine_Source_Developer_GameplayDebugger_Classes_GameplayDebuggingHUDComponent_h_24_PROLOG
#define Engine_Source_Developer_GameplayDebugger_Classes_GameplayDebuggingHUDComponent_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_GameplayDebugger_Classes_GameplayDebuggingHUDComponent_h_27_RPC_WRAPPERS \
	Engine_Source_Developer_GameplayDebugger_Classes_GameplayDebuggingHUDComponent_h_27_INCLASS \
	Engine_Source_Developer_GameplayDebugger_Classes_GameplayDebuggingHUDComponent_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_GameplayDebugger_Classes_GameplayDebuggingHUDComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_GameplayDebugger_Classes_GameplayDebuggingHUDComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Developer_GameplayDebugger_Classes_GameplayDebuggingHUDComponent_h_27_INCLASS_NO_PURE_DECLS \
	Engine_Source_Developer_GameplayDebugger_Classes_GameplayDebuggingHUDComponent_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameplayDebuggingHUDComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Developer_GameplayDebugger_Classes_GameplayDebuggingHUDComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS