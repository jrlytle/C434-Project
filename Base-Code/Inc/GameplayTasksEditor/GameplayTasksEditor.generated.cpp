// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Private/GameplayTasksEditorPrivatePCH.h"
#include "GameplayTasksEditor.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTasksEditor() {}
	void UK2Node_LatentGameplayTaskCall::StaticRegisterNativesUK2Node_LatentGameplayTaskCall()
	{
	}
	IMPLEMENT_CLASS(UK2Node_LatentGameplayTaskCall, 3907126837);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	BLUEPRINTGRAPH_API class UClass* Z_Construct_UClass_UK2Node_BaseAsyncTask();
	ENGINE_API class UClass* Z_Construct_UClass_UEdGraphPin_NoRegister();

	GAMEPLAYTASKSEDITOR_API class UClass* Z_Construct_UClass_UK2Node_LatentGameplayTaskCall_NoRegister();
	GAMEPLAYTASKSEDITOR_API class UClass* Z_Construct_UClass_UK2Node_LatentGameplayTaskCall();
	GAMEPLAYTASKSEDITOR_API class UPackage* Z_Construct_UPackage_GameplayTasksEditor();
	UClass* Z_Construct_UClass_UK2Node_LatentGameplayTaskCall_NoRegister()
	{
		return UK2Node_LatentGameplayTaskCall::StaticClass();
	}
	UClass* Z_Construct_UClass_UK2Node_LatentGameplayTaskCall()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UK2Node_BaseAsyncTask();
			Z_Construct_UPackage_GameplayTasksEditor();
			OuterClass = UK2Node_LatentGameplayTaskCall::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_SpawnParmPins = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SpawnParmPins"), RF_Public|RF_Transient|RF_Native) UArrayProperty(CPP_PROPERTY_BASE(SpawnParmPins, UK2Node_LatentGameplayTaskCall), 0x0000000000000000);
				UProperty* NewProp_SpawnParmPins_Inner = new(EC_InternalUseOnlyConstructor, NewProp_SpawnParmPins, TEXT("SpawnParmPins"), RF_Public|RF_Transient|RF_Native) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_UEdGraphPin_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("K2Node_LatentGameplayTaskCall.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/K2Node_LatentGameplayTaskCall.h"));
				MetaData->SetValue(NewProp_SpawnParmPins, TEXT("ModuleRelativePath"), TEXT("Classes/K2Node_LatentGameplayTaskCall.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_LatentGameplayTaskCall(Z_Construct_UClass_UK2Node_LatentGameplayTaskCall, TEXT("UK2Node_LatentGameplayTaskCall"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_LatentGameplayTaskCall);
	UPackage* Z_Construct_UPackage_GameplayTasksEditor()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/GameplayTasksEditor")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xD4BCD929;
			Guid.B = 0x55D506D7;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
