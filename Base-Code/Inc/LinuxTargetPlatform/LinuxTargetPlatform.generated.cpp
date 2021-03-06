// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Private/LinuxTargetPlatformPrivatePCH.h"
#include "LinuxTargetPlatform.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLinuxTargetPlatform() {}
	void ULinuxTargetSettings::StaticRegisterNativesULinuxTargetSettings()
	{
	}
	IMPLEMENT_CLASS(ULinuxTargetSettings, 757621417);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();

	LINUXTARGETPLATFORM_API class UClass* Z_Construct_UClass_ULinuxTargetSettings_NoRegister();
	LINUXTARGETPLATFORM_API class UClass* Z_Construct_UClass_ULinuxTargetSettings();
	LINUXTARGETPLATFORM_API class UPackage* Z_Construct_UPackage_LinuxTargetPlatform();
	UClass* Z_Construct_UClass_ULinuxTargetSettings_NoRegister()
	{
		return ULinuxTargetSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_ULinuxTargetSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage_LinuxTargetPlatform();
			OuterClass = ULinuxTargetSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100086;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_TargetedRHIs = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TargetedRHIs"), RF_Public|RF_Transient|RF_Native) UArrayProperty(CPP_PROPERTY_BASE(TargetedRHIs, ULinuxTargetSettings), 0x0000000000004001);
				UProperty* NewProp_TargetedRHIs_Inner = new(EC_InternalUseOnlyConstructor, NewProp_TargetedRHIs, TEXT("TargetedRHIs"), RF_Public|RF_Transient|RF_Native) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LinuxTargetSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/LinuxTargetSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Implements the settings for the Android target platform."));
				MetaData->SetValue(NewProp_TargetedRHIs, TEXT("Category"), TEXT("Rendering"));
				MetaData->SetValue(NewProp_TargetedRHIs, TEXT("ModuleRelativePath"), TEXT("Classes/LinuxTargetSettings.h"));
				MetaData->SetValue(NewProp_TargetedRHIs, TEXT("ToolTip"), TEXT("The collection of RHI's we want to support on this platform.\nThis is not always the full list of RHI we can support."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULinuxTargetSettings(Z_Construct_UClass_ULinuxTargetSettings, TEXT("ULinuxTargetSettings"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULinuxTargetSettings);
	UPackage* Z_Construct_UPackage_LinuxTargetPlatform()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/LinuxTargetPlatform")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xDA7CEBD0;
			Guid.B = 0x1EEF30E1;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
