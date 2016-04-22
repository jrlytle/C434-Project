// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Private/DestructibleMeshEditorPrivatePCH.h"
#include "DestructibleMeshEditor.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestructibleMeshEditor() {}
	void UDestructibleChunkParamsProxy::StaticRegisterNativesUDestructibleChunkParamsProxy()
	{
	}
	IMPLEMENT_CLASS(UDestructibleChunkParamsProxy, 1018723214);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FDestructibleChunkParameters();
	ENGINE_API class UClass* Z_Construct_UClass_UDestructibleMesh_NoRegister();

	DESTRUCTIBLEMESHEDITOR_API class UClass* Z_Construct_UClass_UDestructibleChunkParamsProxy_NoRegister();
	DESTRUCTIBLEMESHEDITOR_API class UClass* Z_Construct_UClass_UDestructibleChunkParamsProxy();
	DESTRUCTIBLEMESHEDITOR_API class UPackage* Z_Construct_UPackage_DestructibleMeshEditor();
	UClass* Z_Construct_UClass_UDestructibleChunkParamsProxy_NoRegister()
	{
		return UDestructibleChunkParamsProxy::StaticClass();
	}
	UClass* Z_Construct_UClass_UDestructibleChunkParamsProxy()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage_DestructibleMeshEditor();
			OuterClass = UDestructibleChunkParamsProxy::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_ChunkParams = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ChunkParams"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(ChunkParams, UDestructibleChunkParamsProxy), 0x0000000000000001, Z_Construct_UScriptStruct_FDestructibleChunkParameters());
				UProperty* NewProp_ChunkIndex = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ChunkIndex"), RF_Public|RF_Transient|RF_Native) UIntProperty(CPP_PROPERTY_BASE(ChunkIndex, UDestructibleChunkParamsProxy), 0x0000000000000000);
				UProperty* NewProp_DestructibleMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DestructibleMesh"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(DestructibleMesh, UDestructibleChunkParamsProxy), 0x0000000000000000, Z_Construct_UClass_UDestructibleMesh_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("DestructibleChunkParamsProxy.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/DestructibleChunkParamsProxy.h"));
				MetaData->SetValue(NewProp_ChunkParams, TEXT("Category"), TEXT("Chunks"));
				MetaData->SetValue(NewProp_ChunkParams, TEXT("ModuleRelativePath"), TEXT("Classes/DestructibleChunkParamsProxy.h"));
				MetaData->SetValue(NewProp_ChunkIndex, TEXT("ModuleRelativePath"), TEXT("Classes/DestructibleChunkParamsProxy.h"));
				MetaData->SetValue(NewProp_DestructibleMesh, TEXT("ModuleRelativePath"), TEXT("Classes/DestructibleChunkParamsProxy.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDestructibleChunkParamsProxy(Z_Construct_UClass_UDestructibleChunkParamsProxy, TEXT("UDestructibleChunkParamsProxy"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDestructibleChunkParamsProxy);
	UPackage* Z_Construct_UPackage_DestructibleMeshEditor()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/DestructibleMeshEditor")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x35B37354;
			Guid.B = 0xBEFBE97D;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
