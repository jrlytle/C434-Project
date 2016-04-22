// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBlueprintSessionResult;
class UObject;
class APlayerController;
class UFindSessionsCallbackProxy;
#ifdef ONLINESUBSYSTEMUTILS_FindSessionsCallbackProxy_generated_h
#error "FindSessionsCallbackProxy.generated.h already included, missing '#pragma once' in FindSessionsCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_FindSessionsCallbackProxy_generated_h

#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_10_GENERATED_BODY \
	friend ONLINESUBSYSTEMUTILS_API class UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult(); \
	ONLINESUBSYSTEMUTILS_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_15_DELEGATE \
struct _Script_OnlineSubsystemUtils_eventBlueprintFindSessionsResultDelegate_Parms \
{ \
	TArray<FBlueprintSessionResult> Results; \
}; \
static inline void FBlueprintFindSessionsResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlueprintFindSessionsResultDelegate, const TArray<FBlueprintSessionResult>& Results) \
{ \
	_Script_OnlineSubsystemUtils_eventBlueprintFindSessionsResultDelegate_Parms Parms; \
	Parms.Results=Results; \
	BlueprintFindSessionsResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}




#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMaxPlayers) \
	{ \
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_Result); \
		P_FINISH; \
		*(int32*)Z_Param__Result=UFindSessionsCallbackProxy::GetMaxPlayers(Z_Param_Out_Result); \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentPlayers) \
	{ \
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_Result); \
		P_FINISH; \
		*(int32*)Z_Param__Result=UFindSessionsCallbackProxy::GetCurrentPlayers(Z_Param_Out_Result); \
	} \
 \
	DECLARE_FUNCTION(execGetServerName) \
	{ \
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_Result); \
		P_FINISH; \
		*(FString*)Z_Param__Result=UFindSessionsCallbackProxy::GetServerName(Z_Param_Out_Result); \
	} \
 \
	DECLARE_FUNCTION(execGetPingInMs) \
	{ \
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_Result); \
		P_FINISH; \
		*(int32*)Z_Param__Result=UFindSessionsCallbackProxy::GetPingInMs(Z_Param_Out_Result); \
	} \
 \
	DECLARE_FUNCTION(execFindSessions) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxResults); \
		P_GET_UBOOL(Z_Param_bUseLAN); \
		P_FINISH; \
		*(UFindSessionsCallbackProxy**)Z_Param__Result=UFindSessionsCallbackProxy::FindSessions(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_MaxResults,Z_Param_bUseLAN); \
	}


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMaxPlayers) \
	{ \
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_Result); \
		P_FINISH; \
		*(int32*)Z_Param__Result=UFindSessionsCallbackProxy::GetMaxPlayers(Z_Param_Out_Result); \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentPlayers) \
	{ \
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_Result); \
		P_FINISH; \
		*(int32*)Z_Param__Result=UFindSessionsCallbackProxy::GetCurrentPlayers(Z_Param_Out_Result); \
	} \
 \
	DECLARE_FUNCTION(execGetServerName) \
	{ \
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_Result); \
		P_FINISH; \
		*(FString*)Z_Param__Result=UFindSessionsCallbackProxy::GetServerName(Z_Param_Out_Result); \
	} \
 \
	DECLARE_FUNCTION(execGetPingInMs) \
	{ \
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_Result); \
		P_FINISH; \
		*(int32*)Z_Param__Result=UFindSessionsCallbackProxy::GetPingInMs(Z_Param_Out_Result); \
	} \
 \
	DECLARE_FUNCTION(execFindSessions) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxResults); \
		P_GET_UBOOL(Z_Param_bUseLAN); \
		P_FINISH; \
		*(UFindSessionsCallbackProxy**)Z_Param__Result=UFindSessionsCallbackProxy::FindSessions(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_MaxResults,Z_Param_bUseLAN); \
	}


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_20_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUFindSessionsCallbackProxy(); \
	friend ONLINESUBSYSTEMUTILS_API class UClass* Z_Construct_UClass_UFindSessionsCallbackProxy(); \
	public: \
	DECLARE_CLASS(UFindSessionsCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), 0, OnlineSubsystemUtils, ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UFindSessionsCallbackProxy) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UFindSessionsCallbackProxy*>(this); }


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_20_INCLASS \
	private: \
	static void StaticRegisterNativesUFindSessionsCallbackProxy(); \
	friend ONLINESUBSYSTEMUTILS_API class UClass* Z_Construct_UClass_UFindSessionsCallbackProxy(); \
	public: \
	DECLARE_CLASS(UFindSessionsCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), 0, OnlineSubsystemUtils, ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UFindSessionsCallbackProxy) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UFindSessionsCallbackProxy*>(this); }


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UFindSessionsCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFindSessionsCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UFindSessionsCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFindSessionsCallbackProxy); \
private: \
	/** Private copy-constructor, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UFindSessionsCallbackProxy(const UFindSessionsCallbackProxy& InCopy); \
public:


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UFindSessionsCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UFindSessionsCallbackProxy(const UFindSessionsCallbackProxy& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UFindSessionsCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFindSessionsCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFindSessionsCallbackProxy)


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_17_PROLOG
#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_20_INCLASS \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FindSessionsCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
