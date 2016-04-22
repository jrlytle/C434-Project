// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URuntimeAssetCacheBuilder_ObjectBase;
class UObject;
struct FVoidPtrParam;
#ifdef RUNTIMEASSETCACHE_RuntimeAssetCacheBuilders_generated_h
#error "RuntimeAssetCacheBuilders.generated.h already included, missing '#pragma once' in RuntimeAssetCacheBuilders.h"
#endif
#define RUNTIMEASSETCACHE_RuntimeAssetCacheBuilders_generated_h

#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_8_DELEGATE \
struct _Script_RuntimeAssetCache_eventOnAssetCacheComplete_Parms \
{ \
	URuntimeAssetCacheBuilder_ObjectBase* CachedAssetBuilder; \
	bool Success; \
}; \
static inline void FOnAssetCacheComplete_DelegateWrapper(const FScriptDelegate& OnAssetCacheComplete, URuntimeAssetCacheBuilder_ObjectBase* CachedAssetBuilder, bool Success) \
{ \
	_Script_RuntimeAssetCache_eventOnAssetCacheComplete_Parms Parms; \
	Parms.CachedAssetBuilder=CachedAssetBuilder; \
	Parms.Success=Success ? true : false; \
	OnAssetCacheComplete.ProcessDelegate<UObject>(&Parms); \
}




#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_15_RPC_WRAPPERS \
	virtual void OnAssetCacheMiss_Implementation(); \
 \
	DECLARE_FUNCTION(execSaveNewAssetToCache) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_NewAsset); \
		P_FINISH; \
		this->SaveNewAssetToCache(Z_Param_NewAsset); \
	} \
 \
	DECLARE_FUNCTION(execOnAssetCacheMiss) \
	{ \
		P_FINISH; \
		this->OnAssetCacheMiss_Implementation(); \
	} \
 \
	DECLARE_FUNCTION(execGetFromCacheAsyncComplete) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Handle); \
		P_GET_STRUCT(FVoidPtrParam,Z_Param_DataPtr); \
		P_FINISH; \
		this->GetFromCacheAsyncComplete(Z_Param_Handle,Z_Param_DataPtr); \
	} \
 \
	DECLARE_FUNCTION(execGetFromCacheAsync) \
	{ \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_OnComplete); \
		P_FINISH; \
		this->GetFromCacheAsync(FOnAssetCacheComplete(Z_Param_Out_OnComplete)); \
	}


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveNewAssetToCache) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_NewAsset); \
		P_FINISH; \
		this->SaveNewAssetToCache(Z_Param_NewAsset); \
	} \
 \
	DECLARE_FUNCTION(execOnAssetCacheMiss) \
	{ \
		P_FINISH; \
		this->OnAssetCacheMiss_Implementation(); \
	} \
 \
	DECLARE_FUNCTION(execGetFromCacheAsyncComplete) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Handle); \
		P_GET_STRUCT(FVoidPtrParam,Z_Param_DataPtr); \
		P_FINISH; \
		this->GetFromCacheAsyncComplete(Z_Param_Handle,Z_Param_DataPtr); \
	} \
 \
	DECLARE_FUNCTION(execGetFromCacheAsync) \
	{ \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_OnComplete); \
		P_FINISH; \
		this->GetFromCacheAsync(FOnAssetCacheComplete(Z_Param_Out_OnComplete)); \
	}


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_15_EVENT_PARMS
extern RUNTIMEASSETCACHE_API  FName RUNTIMEASSETCACHE_OnAssetCacheMiss;
#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_15_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_15_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesURuntimeAssetCacheBuilder_ObjectBase(); \
	friend RUNTIMEASSETCACHE_API class UClass* Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase(); \
	public: \
	DECLARE_CLASS(URuntimeAssetCacheBuilder_ObjectBase, UObject, COMPILED_IN_FLAGS(0), 0, RuntimeAssetCache, NO_API) \
	DECLARE_SERIALIZER(URuntimeAssetCacheBuilder_ObjectBase) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<URuntimeAssetCacheBuilder_ObjectBase*>(this); }


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_15_INCLASS \
	private: \
	static void StaticRegisterNativesURuntimeAssetCacheBuilder_ObjectBase(); \
	friend RUNTIMEASSETCACHE_API class UClass* Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase(); \
	public: \
	DECLARE_CLASS(URuntimeAssetCacheBuilder_ObjectBase, UObject, COMPILED_IN_FLAGS(0), 0, RuntimeAssetCache, NO_API) \
	DECLARE_SERIALIZER(URuntimeAssetCacheBuilder_ObjectBase) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<URuntimeAssetCacheBuilder_ObjectBase*>(this); }


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeAssetCacheBuilder_ObjectBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeAssetCacheBuilder_ObjectBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeAssetCacheBuilder_ObjectBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeAssetCacheBuilder_ObjectBase); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API URuntimeAssetCacheBuilder_ObjectBase(const URuntimeAssetCacheBuilder_ObjectBase& InCopy); \
public:


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeAssetCacheBuilder_ObjectBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API URuntimeAssetCacheBuilder_ObjectBase(const URuntimeAssetCacheBuilder_ObjectBase& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeAssetCacheBuilder_ObjectBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeAssetCacheBuilder_ObjectBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeAssetCacheBuilder_ObjectBase)


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_12_PROLOG \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_15_EVENT_PARMS


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_15_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_15_INCLASS \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_15_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_152_RPC_WRAPPERS
#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_152_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_152_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUExampleTextureCacheBuilder(); \
	friend RUNTIMEASSETCACHE_API class UClass* Z_Construct_UClass_UExampleTextureCacheBuilder(); \
	public: \
	DECLARE_CLASS(UExampleTextureCacheBuilder, URuntimeAssetCacheBuilder_ObjectBase, COMPILED_IN_FLAGS(0), 0, RuntimeAssetCache, NO_API) \
	DECLARE_SERIALIZER(UExampleTextureCacheBuilder) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UExampleTextureCacheBuilder*>(this); }


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_152_INCLASS \
	private: \
	static void StaticRegisterNativesUExampleTextureCacheBuilder(); \
	friend RUNTIMEASSETCACHE_API class UClass* Z_Construct_UClass_UExampleTextureCacheBuilder(); \
	public: \
	DECLARE_CLASS(UExampleTextureCacheBuilder, URuntimeAssetCacheBuilder_ObjectBase, COMPILED_IN_FLAGS(0), 0, RuntimeAssetCache, NO_API) \
	DECLARE_SERIALIZER(UExampleTextureCacheBuilder) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UExampleTextureCacheBuilder*>(this); }


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_152_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExampleTextureCacheBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExampleTextureCacheBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExampleTextureCacheBuilder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExampleTextureCacheBuilder); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UExampleTextureCacheBuilder(const UExampleTextureCacheBuilder& InCopy); \
public:


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_152_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExampleTextureCacheBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UExampleTextureCacheBuilder(const UExampleTextureCacheBuilder& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExampleTextureCacheBuilder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExampleTextureCacheBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExampleTextureCacheBuilder)


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_149_PROLOG
#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_152_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_152_RPC_WRAPPERS \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_152_INCLASS \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_152_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_152_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_152_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_152_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_152_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS