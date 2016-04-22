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
class UQuitMatchCallbackProxy;
#ifdef ONLINESUBSYSTEMUTILS_QuitMatchCallbackProxy_generated_h
#error "QuitMatchCallbackProxy.generated.h already included, missing '#pragma once' in QuitMatchCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_QuitMatchCallbackProxy_generated_h

#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_QuitMatchCallbackProxy_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execQuitMatch) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchID); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Outcome); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TurnTimeoutInSeconds); \
		P_FINISH; \
		*(UQuitMatchCallbackProxy**)Z_Param__Result=UQuitMatchCallbackProxy::QuitMatch(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_MatchID,EMPMatchOutcome::Outcome(Z_Param_Outcome),Z_Param_TurnTimeoutInSeconds); \
	}


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_QuitMatchCallbackProxy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execQuitMatch) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchID); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Outcome); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TurnTimeoutInSeconds); \
		P_FINISH; \
		*(UQuitMatchCallbackProxy**)Z_Param__Result=UQuitMatchCallbackProxy::QuitMatch(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_MatchID,EMPMatchOutcome::Outcome(Z_Param_Outcome),Z_Param_TurnTimeoutInSeconds); \
	}


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_QuitMatchCallbackProxy_h_12_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUQuitMatchCallbackProxy(); \
	friend ONLINESUBSYSTEMUTILS_API class UClass* Z_Construct_UClass_UQuitMatchCallbackProxy(); \
	public: \
	DECLARE_CLASS(UQuitMatchCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), 0, OnlineSubsystemUtils, ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UQuitMatchCallbackProxy) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UQuitMatchCallbackProxy*>(this); }


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_QuitMatchCallbackProxy_h_12_INCLASS \
	private: \
	static void StaticRegisterNativesUQuitMatchCallbackProxy(); \
	friend ONLINESUBSYSTEMUTILS_API class UClass* Z_Construct_UClass_UQuitMatchCallbackProxy(); \
	public: \
	DECLARE_CLASS(UQuitMatchCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), 0, OnlineSubsystemUtils, ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UQuitMatchCallbackProxy) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UQuitMatchCallbackProxy*>(this); }


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_QuitMatchCallbackProxy_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UQuitMatchCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuitMatchCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UQuitMatchCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuitMatchCallbackProxy); \
private: \
	/** Private copy-constructor, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UQuitMatchCallbackProxy(const UQuitMatchCallbackProxy& InCopy); \
public:


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_QuitMatchCallbackProxy_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UQuitMatchCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UQuitMatchCallbackProxy(const UQuitMatchCallbackProxy& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UQuitMatchCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuitMatchCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuitMatchCallbackProxy)


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_QuitMatchCallbackProxy_h_8_PROLOG
#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_QuitMatchCallbackProxy_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_QuitMatchCallbackProxy_h_12_RPC_WRAPPERS \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_QuitMatchCallbackProxy_h_12_INCLASS \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_QuitMatchCallbackProxy_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_QuitMatchCallbackProxy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_QuitMatchCallbackProxy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_QuitMatchCallbackProxy_h_12_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_QuitMatchCallbackProxy_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class QuitMatchCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_QuitMatchCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
