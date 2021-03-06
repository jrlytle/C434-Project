// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVoidPtrParam;
#ifdef RUNTIMEASSETCACHE_RuntimeAssetCacheInterface_generated_h
#error "RuntimeAssetCacheInterface.generated.h already included, missing '#pragma once' in RuntimeAssetCacheInterface.h"
#endif
#define RUNTIMEASSETCACHE_RuntimeAssetCacheInterface_generated_h

#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheInterface_h_15_GENERATED_BODY \
	friend RUNTIMEASSETCACHE_API class UScriptStruct* Z_Construct_UScriptStruct_FVoidPtrParam(); \
	RUNTIMEASSETCACHE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheInterface_h_48_DELEGATE \
struct _Script_RuntimeAssetCache_eventOnRuntimeAssetCacheAsyncComplete_Parms \
{ \
	int32 Handle; \
	FVoidPtrParam Data; \
}; \
static inline void FOnRuntimeAssetCacheAsyncComplete_DelegateWrapper(const FScriptDelegate& OnRuntimeAssetCacheAsyncComplete, int32 Handle, FVoidPtrParam Data) \
{ \
	_Script_RuntimeAssetCache_eventOnRuntimeAssetCacheAsyncComplete_Parms Parms; \
	Parms.Handle=Handle; \
	Parms.Data=Data; \
	OnRuntimeAssetCacheAsyncComplete.ProcessDelegate<UObject>(&Parms); \
}




#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
