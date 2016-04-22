// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class APlayerController;
class ITurnBasedMatchInterface;
class UEndMatchCallbackProxy;
#ifdef ONLINESUBSYSTEMUTILS_EndMatchCallbackProxy_generated_h
#error "EndMatchCallbackProxy.generated.h already included, missing '#pragma once' in EndMatchCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_EndMatchCallbackProxy_generated_h

#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndMatch) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_TINTERFACE(ITurnBasedMatchInterface,Z_Param_MatchActor); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchID); \
		P_GET_PROPERTY(UByteProperty,Z_Param_LocalPlayerOutcome); \
		P_GET_PROPERTY(UByteProperty,Z_Param_OtherPlayersOutcome); \
		P_FINISH; \
		*(UEndMatchCallbackProxy**)Z_Param__Result=UEndMatchCallbackProxy::EndMatch(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_MatchActor,Z_Param_MatchID,EMPMatchOutcome::Outcome(Z_Param_LocalPlayerOutcome),EMPMatchOutcome::Outcome(Z_Param_OtherPlayersOutcome)); \
	}


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndMatch) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_TINTERFACE(ITurnBasedMatchInterface,Z_Param_MatchActor); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchID); \
		P_GET_PROPERTY(UByteProperty,Z_Param_LocalPlayerOutcome); \
		P_GET_PROPERTY(UByteProperty,Z_Param_OtherPlayersOutcome); \
		P_FINISH; \
		*(UEndMatchCallbackProxy**)Z_Param__Result=UEndMatchCallbackProxy::EndMatch(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_MatchActor,Z_Param_MatchID,EMPMatchOutcome::Outcome(Z_Param_LocalPlayerOutcome),EMPMatchOutcome::Outcome(Z_Param_OtherPlayersOutcome)); \
	}


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUEndMatchCallbackProxy(); \
	friend ONLINESUBSYSTEMUTILS_API class UClass* Z_Construct_UClass_UEndMatchCallbackProxy(); \
	public: \
	DECLARE_CLASS(UEndMatchCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), 0, OnlineSubsystemUtils, ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UEndMatchCallbackProxy) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UEndMatchCallbackProxy*>(this); }


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesUEndMatchCallbackProxy(); \
	friend ONLINESUBSYSTEMUTILS_API class UClass* Z_Construct_UClass_UEndMatchCallbackProxy(); \
	public: \
	DECLARE_CLASS(UEndMatchCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), 0, OnlineSubsystemUtils, ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UEndMatchCallbackProxy) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UEndMatchCallbackProxy*>(this); }


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UEndMatchCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndMatchCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UEndMatchCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndMatchCallbackProxy); \
private: \
	/** Private copy-constructor, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UEndMatchCallbackProxy(const UEndMatchCallbackProxy& InCopy); \
public:


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UEndMatchCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UEndMatchCallbackProxy(const UEndMatchCallbackProxy& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UEndMatchCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndMatchCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndMatchCallbackProxy)


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_11_PROLOG
#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_14_INCLASS \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EndMatchCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
