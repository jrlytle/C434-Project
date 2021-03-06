// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInAppPurchaseProductInfo;
class APlayerController;
class UInAppPurchaseQueryCallbackProxy;
#ifdef ONLINESUBSYSTEMUTILS_InAppPurchaseQueryCallbackProxy_generated_h
#error "InAppPurchaseQueryCallbackProxy.generated.h already included, missing '#pragma once' in InAppPurchaseQueryCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_InAppPurchaseQueryCallbackProxy_generated_h

#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_7_DELEGATE \
struct _Script_OnlineSubsystemUtils_eventInAppPurchaseQueryResult_Parms \
{ \
	TArray<FInAppPurchaseProductInfo> InAppPurchaseInformation; \
}; \
static inline void FInAppPurchaseQueryResult_DelegateWrapper(const FMulticastScriptDelegate& InAppPurchaseQueryResult, const TArray<FInAppPurchaseProductInfo>& InAppPurchaseInformation) \
{ \
	_Script_OnlineSubsystemUtils_eventInAppPurchaseQueryResult_Parms Parms; \
	Parms.InAppPurchaseInformation=InAppPurchaseInformation; \
	InAppPurchaseQueryResult.ProcessMulticastDelegate<UObject>(&Parms); \
}




#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchaseQuery) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_ProductIdentifiers); \
		P_FINISH; \
		*(UInAppPurchaseQueryCallbackProxy**)Z_Param__Result=UInAppPurchaseQueryCallbackProxy::CreateProxyObjectForInAppPurchaseQuery(Z_Param_PlayerController,Z_Param_Out_ProductIdentifiers); \
	}


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchaseQuery) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_ProductIdentifiers); \
		P_FINISH; \
		*(UInAppPurchaseQueryCallbackProxy**)Z_Param__Result=UInAppPurchaseQueryCallbackProxy::CreateProxyObjectForInAppPurchaseQuery(Z_Param_PlayerController,Z_Param_Out_ProductIdentifiers); \
	}


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_12_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUInAppPurchaseQueryCallbackProxy(); \
	friend ONLINESUBSYSTEMUTILS_API class UClass* Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy(); \
	public: \
	DECLARE_CLASS(UInAppPurchaseQueryCallbackProxy, UObject, COMPILED_IN_FLAGS(0), 0, OnlineSubsystemUtils, ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UInAppPurchaseQueryCallbackProxy) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UInAppPurchaseQueryCallbackProxy*>(this); }


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_12_INCLASS \
	private: \
	static void StaticRegisterNativesUInAppPurchaseQueryCallbackProxy(); \
	friend ONLINESUBSYSTEMUTILS_API class UClass* Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy(); \
	public: \
	DECLARE_CLASS(UInAppPurchaseQueryCallbackProxy, UObject, COMPILED_IN_FLAGS(0), 0, OnlineSubsystemUtils, ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UInAppPurchaseQueryCallbackProxy) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UInAppPurchaseQueryCallbackProxy*>(this); }


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseQueryCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInAppPurchaseQueryCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UInAppPurchaseQueryCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInAppPurchaseQueryCallbackProxy); \
private: \
	/** Private copy-constructor, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseQueryCallbackProxy(const UInAppPurchaseQueryCallbackProxy& InCopy); \
public:


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseQueryCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseQueryCallbackProxy(const UInAppPurchaseQueryCallbackProxy& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UInAppPurchaseQueryCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInAppPurchaseQueryCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInAppPurchaseQueryCallbackProxy)


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_9_PROLOG
#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_12_RPC_WRAPPERS \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_12_INCLASS \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_12_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InAppPurchaseQueryCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
