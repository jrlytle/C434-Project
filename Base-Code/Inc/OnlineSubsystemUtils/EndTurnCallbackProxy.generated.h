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
class UEndTurnCallbackProxy;
#ifdef ONLINESUBSYSTEMUTILS_EndTurnCallbackProxy_generated_h
#error "EndTurnCallbackProxy.generated.h already included, missing '#pragma once' in EndTurnCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_EndTurnCallbackProxy_generated_h

#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_EndTurnCallbackProxy_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndTurn) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchID); \
		P_GET_TINTERFACE(ITurnBasedMatchInterface,Z_Param_TurnBasedMatchInterface); \
		P_FINISH; \
		*(UEndTurnCallbackProxy**)Z_Param__Result=UEndTurnCallbackProxy::EndTurn(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_MatchID,Z_Param_TurnBasedMatchInterface); \
	}


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_EndTurnCallbackProxy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndTurn) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchID); \
		P_GET_TINTERFACE(ITurnBasedMatchInterface,Z_Param_TurnBasedMatchInterface); \
		P_FINISH; \
		*(UEndTurnCallbackProxy**)Z_Param__Result=UEndTurnCallbackProxy::EndTurn(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_MatchID,Z_Param_TurnBasedMatchInterface); \
	}


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_EndTurnCallbackProxy_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUEndTurnCallbackProxy(); \
	friend ONLINESUBSYSTEMUTILS_API class UClass* Z_Construct_UClass_UEndTurnCallbackProxy(); \
	public: \
	DECLARE_CLASS(UEndTurnCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), 0, OnlineSubsystemUtils, ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UEndTurnCallbackProxy) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UEndTurnCallbackProxy*>(this); }


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_EndTurnCallbackProxy_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesUEndTurnCallbackProxy(); \
	friend ONLINESUBSYSTEMUTILS_API class UClass* Z_Construct_UClass_UEndTurnCallbackProxy(); \
	public: \
	DECLARE_CLASS(UEndTurnCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), 0, OnlineSubsystemUtils, ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UEndTurnCallbackProxy) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UEndTurnCallbackProxy*>(this); }


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_EndTurnCallbackProxy_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UEndTurnCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndTurnCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UEndTurnCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndTurnCallbackProxy); \
private: \
	/** Private copy-constructor, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UEndTurnCallbackProxy(const UEndTurnCallbackProxy& InCopy); \
public:


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_EndTurnCallbackProxy_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UEndTurnCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UEndTurnCallbackProxy(const UEndTurnCallbackProxy& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UEndTurnCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndTurnCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndTurnCallbackProxy)


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_EndTurnCallbackProxy_h_11_PROLOG
#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_EndTurnCallbackProxy_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_EndTurnCallbackProxy_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_EndTurnCallbackProxy_h_14_INCLASS \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_EndTurnCallbackProxy_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_EndTurnCallbackProxy_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_EndTurnCallbackProxy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_EndTurnCallbackProxy_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_EndTurnCallbackProxy_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EndTurnCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_EndTurnCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS