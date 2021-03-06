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
class UDestroySessionCallbackProxy;
#ifdef ONLINESUBSYSTEMUTILS_DestroySessionCallbackProxy_generated_h
#error "DestroySessionCallbackProxy.generated.h already included, missing '#pragma once' in DestroySessionCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_DestroySessionCallbackProxy_generated_h

#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_DestroySessionCallbackProxy_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDestroySession) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		*(UDestroySessionCallbackProxy**)Z_Param__Result=UDestroySessionCallbackProxy::DestroySession(Z_Param_WorldContextObject,Z_Param_PlayerController); \
	}


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_DestroySessionCallbackProxy_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDestroySession) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		*(UDestroySessionCallbackProxy**)Z_Param__Result=UDestroySessionCallbackProxy::DestroySession(Z_Param_WorldContextObject,Z_Param_PlayerController); \
	}


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_DestroySessionCallbackProxy_h_10_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUDestroySessionCallbackProxy(); \
	friend ONLINESUBSYSTEMUTILS_API class UClass* Z_Construct_UClass_UDestroySessionCallbackProxy(); \
	public: \
	DECLARE_CLASS(UDestroySessionCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), 0, OnlineSubsystemUtils, ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UDestroySessionCallbackProxy) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UDestroySessionCallbackProxy*>(this); }


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_DestroySessionCallbackProxy_h_10_INCLASS \
	private: \
	static void StaticRegisterNativesUDestroySessionCallbackProxy(); \
	friend ONLINESUBSYSTEMUTILS_API class UClass* Z_Construct_UClass_UDestroySessionCallbackProxy(); \
	public: \
	DECLARE_CLASS(UDestroySessionCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), 0, OnlineSubsystemUtils, ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UDestroySessionCallbackProxy) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UDestroySessionCallbackProxy*>(this); }


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_DestroySessionCallbackProxy_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UDestroySessionCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDestroySessionCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UDestroySessionCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDestroySessionCallbackProxy); \
private: \
	/** Private copy-constructor, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UDestroySessionCallbackProxy(const UDestroySessionCallbackProxy& InCopy); \
public:


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_DestroySessionCallbackProxy_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UDestroySessionCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UDestroySessionCallbackProxy(const UDestroySessionCallbackProxy& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UDestroySessionCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDestroySessionCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDestroySessionCallbackProxy)


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_DestroySessionCallbackProxy_h_7_PROLOG
#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_DestroySessionCallbackProxy_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_DestroySessionCallbackProxy_h_10_RPC_WRAPPERS \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_DestroySessionCallbackProxy_h_10_INCLASS \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_DestroySessionCallbackProxy_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_DestroySessionCallbackProxy_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_DestroySessionCallbackProxy_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_DestroySessionCallbackProxy_h_10_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_DestroySessionCallbackProxy_h_10_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DestroySessionCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Online_OnlineSubsystemUtils_Classes_DestroySessionCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
