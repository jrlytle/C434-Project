// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Private/InternationalizationSettingsModulePrivatePCH.h"
#include "InternationalizationSettings.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInternationalizationSettings() {}
	void UInternationalizationSettingsModel::StaticRegisterNativesUInternationalizationSettingsModel()
	{
	}
	IMPLEMENT_CLASS(UInternationalizationSettingsModel, 3685910790);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();

	INTERNATIONALIZATIONSETTINGS_API class UClass* Z_Construct_UClass_UInternationalizationSettingsModel_NoRegister();
	INTERNATIONALIZATIONSETTINGS_API class UClass* Z_Construct_UClass_UInternationalizationSettingsModel();
	INTERNATIONALIZATIONSETTINGS_API class UPackage* Z_Construct_UPackage_InternationalizationSettings();
	UClass* Z_Construct_UClass_UInternationalizationSettingsModel_NoRegister()
	{
		return UInternationalizationSettingsModel::StaticClass();
	}
	UClass* Z_Construct_UClass_UInternationalizationSettingsModel()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage_InternationalizationSettings();
			OuterClass = UInternationalizationSettingsModel::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("InternationalizationSettingsModel.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/InternationalizationSettingsModel.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Implements loading and saving of internationalization settings."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInternationalizationSettingsModel(Z_Construct_UClass_UInternationalizationSettingsModel, TEXT("UInternationalizationSettingsModel"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInternationalizationSettingsModel);
	UPackage* Z_Construct_UPackage_InternationalizationSettings()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/InternationalizationSettings")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xC750F73C;
			Guid.B = 0x96FB4366;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
