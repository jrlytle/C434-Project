// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PlayerState_generated_h
#error "PlayerState.generated.h already included, missing '#pragma once' in PlayerState.h"
#endif
#define ENGINE_PlayerState_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_UniqueId) \
	{ \
		P_FINISH; \
		this->OnRep_UniqueId(); \
	} \
 \
	DECLARE_FUNCTION(execOnRep_bIsInactive) \
	{ \
		P_FINISH; \
		this->OnRep_bIsInactive(); \
	} \
 \
	DECLARE_FUNCTION(execOnRep_PlayerName) \
	{ \
		P_FINISH; \
		this->OnRep_PlayerName(); \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Score) \
	{ \
		P_FINISH; \
		this->OnRep_Score(); \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_UniqueId) \
	{ \
		P_FINISH; \
		this->OnRep_UniqueId(); \
	} \
 \
	DECLARE_FUNCTION(execOnRep_bIsInactive) \
	{ \
		P_FINISH; \
		this->OnRep_bIsInactive(); \
	} \
 \
	DECLARE_FUNCTION(execOnRep_PlayerName) \
	{ \
		P_FINISH; \
		this->OnRep_PlayerName(); \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Score) \
	{ \
		P_FINISH; \
		this->OnRep_Score(); \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_34_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAPlayerState(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_APlayerState(); \
	public: \
	DECLARE_CLASS(APlayerState, AInfo, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(APlayerState) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<APlayerState*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_34_INCLASS \
	private: \
	static void StaticRegisterNativesAPlayerState(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_APlayerState(); \
	public: \
	DECLARE_CLASS(APlayerState, AInfo, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(APlayerState) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<APlayerState*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerState); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API APlayerState(const APlayerState& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API APlayerState(const APlayerState& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerState)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_31_PROLOG
#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_34_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_34_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_34_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_34_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlayerState."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS