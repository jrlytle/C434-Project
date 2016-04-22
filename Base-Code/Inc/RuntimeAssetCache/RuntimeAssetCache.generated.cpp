// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Private/RuntimeAssetCachePrivatePCH.h"
#include "RuntimeAssetCache.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeAssetCache() {}
class UScriptStruct* FVoidPtrParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEASSETCACHE_API class UScriptStruct* Z_Construct_UScriptStruct_FVoidPtrParam();
		extern RUNTIMEASSETCACHE_API uint32 Get_Z_Construct_UScriptStruct_FVoidPtrParam_CRC();
		extern RUNTIMEASSETCACHE_API class UPackage* Z_Construct_UPackage_RuntimeAssetCache();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoidPtrParam, Z_Construct_UPackage_RuntimeAssetCache(), TEXT("VoidPtrParam"), sizeof(FVoidPtrParam), Get_Z_Construct_UScriptStruct_FVoidPtrParam_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoidPtrParam(FVoidPtrParam::StaticStruct, TEXT("/Script/RuntimeAssetCache"));
static struct FScriptStruct_RuntimeAssetCache_StaticRegisterNativesFVoidPtrParam
{
	FScriptStruct_RuntimeAssetCache_StaticRegisterNativesFVoidPtrParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoidPtrParam")),new UScriptStruct::TCppStructOps<FVoidPtrParam>);
	}
} ScriptStruct_RuntimeAssetCache_StaticRegisterNativesFVoidPtrParam;
	void URuntimeAssetCacheBPHooks::StaticRegisterNativesURuntimeAssetCacheBPHooks()
	{
		FNativeFunctionRegistrar::RegisterFunction(URuntimeAssetCacheBPHooks::StaticClass(),"ClearCache",(Native)&URuntimeAssetCacheBPHooks::execClearCache);
		FNativeFunctionRegistrar::RegisterFunction(URuntimeAssetCacheBPHooks::StaticClass(),"GetAsynchronous",(Native)&URuntimeAssetCacheBPHooks::execGetAsynchronous);
		FNativeFunctionRegistrar::RegisterFunction(URuntimeAssetCacheBPHooks::StaticClass(),"GetAsynchronousResults",(Native)&URuntimeAssetCacheBPHooks::execGetAsynchronousResults);
		FNativeFunctionRegistrar::RegisterFunction(URuntimeAssetCacheBPHooks::StaticClass(),"GetCacheSize",(Native)&URuntimeAssetCacheBPHooks::execGetCacheSize);
		FNativeFunctionRegistrar::RegisterFunction(URuntimeAssetCacheBPHooks::StaticClass(),"GetSynchronous",(Native)&URuntimeAssetCacheBPHooks::execGetSynchronous);
		FNativeFunctionRegistrar::RegisterFunction(URuntimeAssetCacheBPHooks::StaticClass(),"PollAsynchronousCompletion",(Native)&URuntimeAssetCacheBPHooks::execPollAsynchronousCompletion);
		FNativeFunctionRegistrar::RegisterFunction(URuntimeAssetCacheBPHooks::StaticClass(),"WaitAsynchronousCompletion",(Native)&URuntimeAssetCacheBPHooks::execWaitAsynchronousCompletion);
	}
	IMPLEMENT_CLASS(URuntimeAssetCacheBPHooks, 1586877156);
	void URuntimeAssetCacheBuilder::StaticRegisterNativesURuntimeAssetCacheBuilder()
	{
	}
	IMPLEMENT_CLASS(URuntimeAssetCacheBuilder, 4066769657);
	void URuntimeAssetCacheBuilder_ObjectBase::OnAssetCacheMiss()
	{
		ProcessEvent(FindFunctionChecked(RUNTIMEASSETCACHE_OnAssetCacheMiss),NULL);
	}
	void URuntimeAssetCacheBuilder_ObjectBase::StaticRegisterNativesURuntimeAssetCacheBuilder_ObjectBase()
	{
		FNativeFunctionRegistrar::RegisterFunction(URuntimeAssetCacheBuilder_ObjectBase::StaticClass(),"GetFromCacheAsync",(Native)&URuntimeAssetCacheBuilder_ObjectBase::execGetFromCacheAsync);
		FNativeFunctionRegistrar::RegisterFunction(URuntimeAssetCacheBuilder_ObjectBase::StaticClass(),"GetFromCacheAsyncComplete",(Native)&URuntimeAssetCacheBuilder_ObjectBase::execGetFromCacheAsyncComplete);
		FNativeFunctionRegistrar::RegisterFunction(URuntimeAssetCacheBuilder_ObjectBase::StaticClass(),"OnAssetCacheMiss",(Native)&URuntimeAssetCacheBuilder_ObjectBase::execOnAssetCacheMiss);
		FNativeFunctionRegistrar::RegisterFunction(URuntimeAssetCacheBuilder_ObjectBase::StaticClass(),"SaveNewAssetToCache",(Native)&URuntimeAssetCacheBuilder_ObjectBase::execSaveNewAssetToCache);
	}
	IMPLEMENT_CLASS(URuntimeAssetCacheBuilder_ObjectBase, 49423611);
	void UExampleTextureCacheBuilder::StaticRegisterNativesUExampleTextureCacheBuilder()
	{
	}
	IMPLEMENT_CLASS(UExampleTextureCacheBuilder, 3050468927);
FName RUNTIMEASSETCACHE_OnAssetCacheMiss = FName(TEXT("OnAssetCacheMiss"));
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();
	ENGINE_API class UClass* Z_Construct_UClass_UTexture2D_NoRegister();

	RUNTIMEASSETCACHE_API class UFunction* Z_Construct_UDelegateFunction_RuntimeAssetCache_OnRuntimeAssetCacheAsyncComplete__DelegateSignature();
	RUNTIMEASSETCACHE_API class UScriptStruct* Z_Construct_UScriptStruct_FVoidPtrParam();
	RUNTIMEASSETCACHE_API class UFunction* Z_Construct_UFunction_URuntimeAssetCacheBPHooks_ClearCache();
	RUNTIMEASSETCACHE_API class UFunction* Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronous();
	RUNTIMEASSETCACHE_API class UFunction* Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronousResults();
	RUNTIMEASSETCACHE_API class UFunction* Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetCacheSize();
	RUNTIMEASSETCACHE_API class UFunction* Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetSynchronous();
	RUNTIMEASSETCACHE_API class UFunction* Z_Construct_UFunction_URuntimeAssetCacheBPHooks_PollAsynchronousCompletion();
	RUNTIMEASSETCACHE_API class UFunction* Z_Construct_UFunction_URuntimeAssetCacheBPHooks_WaitAsynchronousCompletion();
	RUNTIMEASSETCACHE_API class UClass* Z_Construct_UClass_URuntimeAssetCacheBPHooks_NoRegister();
	RUNTIMEASSETCACHE_API class UClass* Z_Construct_UClass_URuntimeAssetCacheBPHooks();
	RUNTIMEASSETCACHE_API class UClass* Z_Construct_UClass_URuntimeAssetCacheBuilder_NoRegister();
	RUNTIMEASSETCACHE_API class UClass* Z_Construct_UClass_URuntimeAssetCacheBuilder();
	RUNTIMEASSETCACHE_API class UFunction* Z_Construct_UDelegateFunction_RuntimeAssetCache_OnAssetCacheComplete__DelegateSignature();
	RUNTIMEASSETCACHE_API class UFunction* Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsync();
	RUNTIMEASSETCACHE_API class UFunction* Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsyncComplete();
	RUNTIMEASSETCACHE_API class UFunction* Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_OnAssetCacheMiss();
	RUNTIMEASSETCACHE_API class UFunction* Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_SaveNewAssetToCache();
	RUNTIMEASSETCACHE_API class UClass* Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_NoRegister();
	RUNTIMEASSETCACHE_API class UClass* Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase();
	RUNTIMEASSETCACHE_API class UClass* Z_Construct_UClass_UExampleTextureCacheBuilder_NoRegister();
	RUNTIMEASSETCACHE_API class UClass* Z_Construct_UClass_UExampleTextureCacheBuilder();
	RUNTIMEASSETCACHE_API class UPackage* Z_Construct_UPackage_RuntimeAssetCache();
	UFunction* Z_Construct_UDelegateFunction_RuntimeAssetCache_OnRuntimeAssetCacheAsyncComplete__DelegateSignature()
	{
		struct _Script_RuntimeAssetCache_eventOnRuntimeAssetCacheAsyncComplete_Parms
		{
			int32 Handle;
			FVoidPtrParam Data;
		};
		UObject* Outer=Z_Construct_UPackage_RuntimeAssetCache();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnRuntimeAssetCacheAsyncComplete__DelegateSignature"), RF_Public|RF_Transient|RF_Native) UDelegateFunction(FObjectInitializer(), NULL, 0x00120000, 65535, sizeof(_Script_RuntimeAssetCache_eventOnRuntimeAssetCacheAsyncComplete_Parms));
			UProperty* NewProp_Data = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Data"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(Data, _Script_RuntimeAssetCache_eventOnRuntimeAssetCacheAsyncComplete_Parms), 0x0000000000000080, Z_Construct_UScriptStruct_FVoidPtrParam());
			UProperty* NewProp_Handle = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Handle"), RF_Public|RF_Transient|RF_Native) UIntProperty(CPP_PROPERTY_BASE(Handle, _Script_RuntimeAssetCache_eventOnRuntimeAssetCacheAsyncComplete_Parms), 0x0000000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeAssetCacheInterface.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Delegates."));
#endif
		}
		return ReturnFunction;
	}
	UScriptStruct* Z_Construct_UScriptStruct_FVoidPtrParam()
	{
		UPackage* Outer=Z_Construct_UPackage_RuntimeAssetCache();
		extern uint32 Get_Z_Construct_UScriptStruct_FVoidPtrParam_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReload(Outer, TEXT("VoidPtrParam"), sizeof(FVoidPtrParam), Get_Z_Construct_UScriptStruct_FVoidPtrParam_CRC());
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("VoidPtrParam"), RF_Public|RF_Transient|RF_Native) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FVoidPtrParam>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeAssetCacheInterface.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Useful for passing around void* data and size"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoidPtrParam_CRC() { return 483920559U; }
	UFunction* Z_Construct_UFunction_URuntimeAssetCacheBPHooks_ClearCache()
	{
		struct RuntimeAssetCacheBPHooks_eventClearCache_Parms
		{
			FName Bucket;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeAssetCacheBPHooks();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClearCache"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(RuntimeAssetCacheBPHooks_eventClearCache_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, RuntimeAssetCacheBPHooks_eventClearCache_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, RuntimeAssetCacheBPHooks_eventClearCache_Parms), 0x0000000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, RuntimeAssetCacheBPHooks_eventClearCache_Parms), sizeof(bool), true);
			UProperty* NewProp_Bucket = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Bucket"), RF_Public|RF_Transient|RF_Native) UNameProperty(CPP_PROPERTY_BASE(Bucket, RuntimeAssetCacheBPHooks_eventClearCache_Parms), 0x0000000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("RuntimeAssetCache"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeAssetCacheBPHooks.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronous()
	{
		struct RuntimeAssetCacheBPHooks_eventGetAsynchronous_Parms
		{
			TScriptInterface<IRuntimeAssetCacheBuilder> CacheBuilder;
			FScriptDelegate CompletionDelegate;
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeAssetCacheBPHooks();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetAsynchronous"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x04422401, 65535, sizeof(RuntimeAssetCacheBPHooks_eventGetAsynchronous_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_Native) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, RuntimeAssetCacheBPHooks_eventGetAsynchronous_Parms), 0x0000000000000580);
			UProperty* NewProp_CompletionDelegate = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CompletionDelegate"), RF_Public|RF_Transient|RF_Native) UDelegateProperty(CPP_PROPERTY_BASE(CompletionDelegate, RuntimeAssetCacheBPHooks_eventGetAsynchronous_Parms), 0x0000000008000182, Z_Construct_UDelegateFunction_RuntimeAssetCache_OnRuntimeAssetCacheAsyncComplete__DelegateSignature());
			UProperty* NewProp_CacheBuilder = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CacheBuilder"), RF_Public|RF_Transient|RF_Native) UInterfaceProperty(CPP_PROPERTY_BASE(CacheBuilder, RuntimeAssetCacheBPHooks_eventGetAsynchronous_Parms), 0x0004000000000080, Z_Construct_UClass_URuntimeAssetCacheBuilder_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("RuntimeAssetCache"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeAssetCacheBPHooks.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronousResults()
	{
		struct RuntimeAssetCacheBPHooks_eventGetAsynchronousResults_Parms
		{
			int32 Handle;
			FVoidPtrParam ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeAssetCacheBPHooks();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetAsynchronousResults"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(RuntimeAssetCacheBPHooks_eventGetAsynchronousResults_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, RuntimeAssetCacheBPHooks_eventGetAsynchronousResults_Parms), 0x0000000000000580, Z_Construct_UScriptStruct_FVoidPtrParam());
			UProperty* NewProp_Handle = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Handle"), RF_Public|RF_Transient|RF_Native) UIntProperty(CPP_PROPERTY_BASE(Handle, RuntimeAssetCacheBPHooks_eventGetAsynchronousResults_Parms), 0x0000000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("RuntimeAssetCache"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeAssetCacheBPHooks.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetCacheSize()
	{
		struct RuntimeAssetCacheBPHooks_eventGetCacheSize_Parms
		{
			FName Bucket;
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeAssetCacheBPHooks();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetCacheSize"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(RuntimeAssetCacheBPHooks_eventGetCacheSize_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_Native) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, RuntimeAssetCacheBPHooks_eventGetCacheSize_Parms), 0x0000000000000580);
			UProperty* NewProp_Bucket = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Bucket"), RF_Public|RF_Transient|RF_Native) UNameProperty(CPP_PROPERTY_BASE(Bucket, RuntimeAssetCacheBPHooks_eventGetCacheSize_Parms), 0x0000000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("RuntimeAssetCache"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeAssetCacheBPHooks.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetSynchronous()
	{
		struct RuntimeAssetCacheBPHooks_eventGetSynchronous_Parms
		{
			TScriptInterface<IRuntimeAssetCacheBuilder> CacheBuilder;
			FVoidPtrParam ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeAssetCacheBPHooks();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSynchronous"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(RuntimeAssetCacheBPHooks_eventGetSynchronous_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, RuntimeAssetCacheBPHooks_eventGetSynchronous_Parms), 0x0000000000000580, Z_Construct_UScriptStruct_FVoidPtrParam());
			UProperty* NewProp_CacheBuilder = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CacheBuilder"), RF_Public|RF_Transient|RF_Native) UInterfaceProperty(CPP_PROPERTY_BASE(CacheBuilder, RuntimeAssetCacheBPHooks_eventGetSynchronous_Parms), 0x0004000000000080, Z_Construct_UClass_URuntimeAssetCacheBuilder_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("RuntimeAssetCache"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeAssetCacheBPHooks.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeAssetCacheBPHooks_PollAsynchronousCompletion()
	{
		struct RuntimeAssetCacheBPHooks_eventPollAsynchronousCompletion_Parms
		{
			int32 Handle;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeAssetCacheBPHooks();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PollAsynchronousCompletion"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(RuntimeAssetCacheBPHooks_eventPollAsynchronousCompletion_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, RuntimeAssetCacheBPHooks_eventPollAsynchronousCompletion_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, RuntimeAssetCacheBPHooks_eventPollAsynchronousCompletion_Parms), 0x0000000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, RuntimeAssetCacheBPHooks_eventPollAsynchronousCompletion_Parms), sizeof(bool), true);
			UProperty* NewProp_Handle = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Handle"), RF_Public|RF_Transient|RF_Native) UIntProperty(CPP_PROPERTY_BASE(Handle, RuntimeAssetCacheBPHooks_eventPollAsynchronousCompletion_Parms), 0x0000000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("RuntimeAssetCache"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeAssetCacheBPHooks.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeAssetCacheBPHooks_WaitAsynchronousCompletion()
	{
		struct RuntimeAssetCacheBPHooks_eventWaitAsynchronousCompletion_Parms
		{
			int32 Handle;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeAssetCacheBPHooks();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("WaitAsynchronousCompletion"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(RuntimeAssetCacheBPHooks_eventWaitAsynchronousCompletion_Parms));
			UProperty* NewProp_Handle = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Handle"), RF_Public|RF_Transient|RF_Native) UIntProperty(CPP_PROPERTY_BASE(Handle, RuntimeAssetCacheBPHooks_eventWaitAsynchronousCompletion_Parms), 0x0000000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("RuntimeAssetCache"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeAssetCacheBPHooks.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URuntimeAssetCacheBPHooks_NoRegister()
	{
		return URuntimeAssetCacheBPHooks::StaticClass();
	}
	UClass* Z_Construct_UClass_URuntimeAssetCacheBPHooks()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage_RuntimeAssetCache();
			OuterClass = URuntimeAssetCacheBPHooks::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000080;

				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_ClearCache());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronous());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronousResults());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetCacheSize());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetSynchronous());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_PollAsynchronousCompletion());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_WaitAsynchronousCompletion());

				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_ClearCache()); // 3397699204
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronous()); // 2343611849
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronousResults()); // 3323211749
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetCacheSize()); // 1354204337
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetSynchronous()); // 539251130
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_PollAsynchronousCompletion()); // 898132501
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_WaitAsynchronousCompletion()); // 2801305698
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("RuntimeAssetCacheBPHooks.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeAssetCacheBPHooks.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeAssetCacheBPHooks(Z_Construct_UClass_URuntimeAssetCacheBPHooks, TEXT("URuntimeAssetCacheBPHooks"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeAssetCacheBPHooks);
	UClass* Z_Construct_UClass_URuntimeAssetCacheBuilder_NoRegister()
	{
		return URuntimeAssetCacheBuilder::StaticClass();
	}
	UClass* Z_Construct_UClass_URuntimeAssetCacheBuilder()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			UInterface::StaticClass();
			Z_Construct_UPackage_RuntimeAssetCache();
			OuterClass = URuntimeAssetCacheBuilder::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20004081;


				OuterClass->StaticLink();
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeAssetCacheBuilder(Z_Construct_UClass_URuntimeAssetCacheBuilder, TEXT("URuntimeAssetCacheBuilder"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeAssetCacheBuilder);
	UFunction* Z_Construct_UDelegateFunction_RuntimeAssetCache_OnAssetCacheComplete__DelegateSignature()
	{
		struct _Script_RuntimeAssetCache_eventOnAssetCacheComplete_Parms
		{
			URuntimeAssetCacheBuilder_ObjectBase* CachedAssetBuilder;
			bool Success;
		};
		UObject* Outer=Z_Construct_UPackage_RuntimeAssetCache();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnAssetCacheComplete__DelegateSignature"), RF_Public|RF_Transient|RF_Native) UDelegateFunction(FObjectInitializer(), NULL, 0x00120000, 65535, sizeof(_Script_RuntimeAssetCache_eventOnAssetCacheComplete_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(Success, _Script_RuntimeAssetCache_eventOnAssetCacheComplete_Parms, bool);
			UProperty* NewProp_Success = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Success"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(Success, _Script_RuntimeAssetCache_eventOnAssetCacheComplete_Parms), 0x0000000000000080, CPP_BOOL_PROPERTY_BITMASK(Success, _Script_RuntimeAssetCache_eventOnAssetCacheComplete_Parms), sizeof(bool), true);
			UProperty* NewProp_CachedAssetBuilder = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CachedAssetBuilder"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(CachedAssetBuilder, _Script_RuntimeAssetCache_eventOnAssetCacheComplete_Parms), 0x0000000000000080, Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeAssetCacheBuilders.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsync()
	{
		struct RuntimeAssetCacheBuilder_ObjectBase_eventGetFromCacheAsync_Parms
		{
			FScriptDelegate OnComplete;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetFromCacheAsync"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(RuntimeAssetCacheBuilder_ObjectBase_eventGetFromCacheAsync_Parms));
			UProperty* NewProp_OnComplete = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OnComplete"), RF_Public|RF_Transient|RF_Native) UDelegateProperty(CPP_PROPERTY_BASE(OnComplete, RuntimeAssetCacheBuilder_ObjectBase_eventGetFromCacheAsync_Parms), 0x0000000008000182, Z_Construct_UDelegateFunction_RuntimeAssetCache_OnAssetCacheComplete__DelegateSignature());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("RuntimeAssetCache"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeAssetCacheBuilders.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Call this to get the asset named AssetName from the runtime asset cache.\nIf the asset does not exist on disk, then OnAssetCacheMiss will be called.\nImplement OnAssetCacheMiss in order to create the asset that you want cached."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsyncComplete()
	{
		struct RuntimeAssetCacheBuilder_ObjectBase_eventGetFromCacheAsyncComplete_Parms
		{
			int32 Handle;
			FVoidPtrParam DataPtr;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetFromCacheAsyncComplete"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535, sizeof(RuntimeAssetCacheBuilder_ObjectBase_eventGetFromCacheAsyncComplete_Parms));
			UProperty* NewProp_DataPtr = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DataPtr"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(DataPtr, RuntimeAssetCacheBuilder_ObjectBase_eventGetFromCacheAsyncComplete_Parms), 0x0000000000000080, Z_Construct_UScriptStruct_FVoidPtrParam());
			UProperty* NewProp_Handle = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Handle"), RF_Public|RF_Transient|RF_Native) UIntProperty(CPP_PROPERTY_BASE(Handle, RuntimeAssetCacheBuilder_ObjectBase_eventGetFromCacheAsyncComplete_Parms), 0x0000000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeAssetCacheBuilders.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_OnAssetCacheMiss()
	{
		UObject* Outer=Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnAssetCacheMiss"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x08020C00, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("RuntimeAssetCache"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeAssetCacheBuilders.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("When you get OnAssetCacheMiss you need to load/create the asset that is missing.\nCall SaveNewAssetToCache after you're finished creating the asset to save it back into the cache for next time.\nThis will then trigger OnAssetCacheComplete like normal, so you don't need additional code to handle it."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_SaveNewAssetToCache()
	{
		struct RuntimeAssetCacheBuilder_ObjectBase_eventSaveNewAssetToCache_Parms
		{
			UObject* NewAsset;
		};
		UObject* Outer=Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SaveNewAssetToCache"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(RuntimeAssetCacheBuilder_ObjectBase_eventSaveNewAssetToCache_Parms));
			UProperty* NewProp_NewAsset = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewAsset"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(NewAsset, RuntimeAssetCacheBuilder_ObjectBase_eventSaveNewAssetToCache_Parms), 0x0000000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("RuntimeAssetCache"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeAssetCacheBuilders.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Call SaveNewAssetToCache to save an asset back into the cache for next time.\nThis will then trigger OnAssetCacheComplete like normal, so you don't need additional code to handle it."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_NoRegister()
	{
		return URuntimeAssetCacheBuilder_ObjectBase::StaticClass();
	}
	UClass* Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage_RuntimeAssetCache();
			OuterClass = URuntimeAssetCacheBuilder_ObjectBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;

				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsync());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsyncComplete());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_OnAssetCacheMiss());
				OuterClass->LinkChild(Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_SaveNewAssetToCache());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_AssetName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AssetName"), RF_Public|RF_Transient|RF_Native) UStrProperty(CPP_PROPERTY_BASE(AssetName, URuntimeAssetCacheBuilder_ObjectBase), 0x0001000000000004);
				UProperty* NewProp_AssetVersion = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AssetVersion"), RF_Public|RF_Transient|RF_Native) UIntProperty(CPP_PROPERTY_BASE(AssetVersion, URuntimeAssetCacheBuilder_ObjectBase), 0x0001000000000004);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsync()); // 4278254961
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsyncComplete()); // 2419739742
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_OnAssetCacheMiss()); // 2943874424
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_SaveNewAssetToCache()); // 3873655886
				OuterClass->Interfaces.Add(FImplementedInterface(Z_Construct_UClass_URuntimeAssetCacheBuilder_NoRegister(), VTABLE_OFFSET(URuntimeAssetCacheBuilder_ObjectBase, IRuntimeAssetCacheBuilder), false ));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("RuntimeAssetCacheBuilders.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeAssetCacheBuilders.h"));
				MetaData->SetValue(NewProp_AssetName, TEXT("Category"), TEXT("RuntimeAssetCache"));
				MetaData->SetValue(NewProp_AssetName, TEXT("ExposeOnSpawn"), TEXT("true"));
				MetaData->SetValue(NewProp_AssetName, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeAssetCacheBuilders.h"));
				MetaData->SetValue(NewProp_AssetName, TEXT("ToolTip"), TEXT("The name of the asset. This should be unique per asset, and is used to look it up from the cache. This should be something that can be known without having Asset in memory (so we can look it up in the cache)."));
				MetaData->SetValue(NewProp_AssetVersion, TEXT("Category"), TEXT("RuntimeAssetCache"));
				MetaData->SetValue(NewProp_AssetVersion, TEXT("ExposeOnSpawn"), TEXT("true"));
				MetaData->SetValue(NewProp_AssetVersion, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeAssetCacheBuilders.h"));
				MetaData->SetValue(NewProp_AssetVersion, TEXT("ToolTip"), TEXT("The asset version. Changing this will force a new version of the asset to get cached."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeAssetCacheBuilder_ObjectBase(Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase, TEXT("URuntimeAssetCacheBuilder_ObjectBase"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeAssetCacheBuilder_ObjectBase);
	UClass* Z_Construct_UClass_UExampleTextureCacheBuilder_NoRegister()
	{
		return UExampleTextureCacheBuilder::StaticClass();
	}
	UClass* Z_Construct_UClass_UExampleTextureCacheBuilder()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase();
			Z_Construct_UPackage_RuntimeAssetCache();
			OuterClass = UExampleTextureCacheBuilder::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_Texture = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Texture"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(Texture, UExampleTextureCacheBuilder), 0x0000000000000014, Z_Construct_UClass_UTexture2D_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("RuntimeAssetCacheBuilders.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeAssetCacheBuilders.h"));
				MetaData->SetValue(NewProp_Texture, TEXT("Category"), TEXT("Cache"));
				MetaData->SetValue(NewProp_Texture, TEXT("ModuleRelativePath"), TEXT("Public/RuntimeAssetCacheBuilders.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExampleTextureCacheBuilder(Z_Construct_UClass_UExampleTextureCacheBuilder, TEXT("UExampleTextureCacheBuilder"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExampleTextureCacheBuilder);
	UPackage* Z_Construct_UPackage_RuntimeAssetCache()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/RuntimeAssetCache")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x5C35F320;
			Guid.B = 0x4E98A11C;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

			Z_Construct_UDelegateFunction_RuntimeAssetCache_OnRuntimeAssetCacheAsyncComplete__DelegateSignature();
			Z_Construct_UDelegateFunction_RuntimeAssetCache_OnAssetCacheComplete__DelegateSignature();
		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
