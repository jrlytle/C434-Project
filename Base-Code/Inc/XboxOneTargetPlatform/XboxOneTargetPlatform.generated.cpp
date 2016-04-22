// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Private/XboxOneTargetPlatformPrivatePCH.h"
#include "XboxOneTargetPlatform.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXboxOneTargetPlatform() {}
	void UXboxOneTargetSettings::StaticRegisterNativesUXboxOneTargetSettings()
	{
	}
	IMPLEMENT_CLASS(UXboxOneTargetSettings, 3203934440);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();

	XBOXONETARGETPLATFORM_API class UClass* Z_Construct_UClass_UXboxOneTargetSettings_NoRegister();
	XBOXONETARGETPLATFORM_API class UClass* Z_Construct_UClass_UXboxOneTargetSettings();
	XBOXONETARGETPLATFORM_API class UPackage* Z_Construct_UPackage_XboxOneTargetPlatform();
	UClass* Z_Construct_UClass_UXboxOneTargetSettings_NoRegister()
	{
		return UXboxOneTargetSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UXboxOneTargetSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage_XboxOneTargetPlatform();
			OuterClass = UXboxOneTargetSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100084;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_OSMaxVersionTested = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OSMaxVersionTested"), RF_Public|RF_Transient|RF_Native) UStrProperty(CPP_PROPERTY_BASE(OSMaxVersionTested, UXboxOneTargetSettings), 0x0000000000004001);
				UProperty* NewProp_OSMinVersion = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OSMinVersion"), RF_Public|RF_Transient|RF_Native) UStrProperty(CPP_PROPERTY_BASE(OSMinVersion, UXboxOneTargetSettings), 0x0000000000004001);
				UProperty* NewProp_TitleId = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TitleId"), RF_Public|RF_Transient|RF_Native) UStrProperty(CPP_PROPERTY_BASE(TitleId, UXboxOneTargetSettings), 0x0000000000004001);
				UProperty* NewProp_ContentId = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ContentId"), RF_Public|RF_Transient|RF_Native) UStrProperty(CPP_PROPERTY_BASE(ContentId, UXboxOneTargetSettings), 0x0000000000004001);
				UProperty* NewProp_ServiceConfigId = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ServiceConfigId"), RF_Public|RF_Transient|RF_Native) UStrProperty(CPP_PROPERTY_BASE(ServiceConfigId, UXboxOneTargetSettings), 0x0000000000004001);
				UProperty* NewProp_ProductId = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProductId"), RF_Public|RF_Transient|RF_Native) UStrProperty(CPP_PROPERTY_BASE(ProductId, UXboxOneTargetSettings), 0x0000000000004001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnablePIXProfiling, UXboxOneTargetSettings, bool);
				UProperty* NewProp_bEnablePIXProfiling = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bEnablePIXProfiling"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnablePIXProfiling, UXboxOneTargetSettings), 0x0000000000004001, CPP_BOOL_PROPERTY_BITMASK(bEnablePIXProfiling, UXboxOneTargetSettings), sizeof(bool), true);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("XboxOneTargetSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/XboxOneTargetSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Implements the settings for the XboxOne target platform."));
				MetaData->SetValue(NewProp_OSMaxVersionTested, TEXT("Category"), TEXT("Packaging"));
				MetaData->SetValue(NewProp_OSMaxVersionTested, TEXT("ModuleRelativePath"), TEXT("Classes/XboxOneTargetSettings.h"));
				MetaData->SetValue(NewProp_OSMaxVersionTested, TEXT("ToolTip"), TEXT("Maximum OS version the title has been tested against."));
				MetaData->SetValue(NewProp_OSMinVersion, TEXT("Category"), TEXT("Packaging"));
				MetaData->SetValue(NewProp_OSMinVersion, TEXT("ModuleRelativePath"), TEXT("Classes/XboxOneTargetSettings.h"));
				MetaData->SetValue(NewProp_OSMinVersion, TEXT("ToolTip"), TEXT("Minimum supported OS version."));
				MetaData->SetValue(NewProp_TitleId, TEXT("Category"), TEXT("TitleConfig"));
				MetaData->SetValue(NewProp_TitleId, TEXT("ModuleRelativePath"), TEXT("Classes/XboxOneTargetSettings.h"));
				MetaData->SetValue(NewProp_TitleId, TEXT("ToolTip"), TEXT("Title ID. Must match XDP configuration."));
				MetaData->SetValue(NewProp_ContentId, TEXT("Category"), TEXT("TitleConfig"));
				MetaData->SetValue(NewProp_ContentId, TEXT("ModuleRelativePath"), TEXT("Classes/XboxOneTargetSettings.h"));
				MetaData->SetValue(NewProp_ContentId, TEXT("ToolTip"), TEXT("Content GUID. Must match XDP configuration."));
				MetaData->SetValue(NewProp_ServiceConfigId, TEXT("Category"), TEXT("TitleConfig"));
				MetaData->SetValue(NewProp_ServiceConfigId, TEXT("ModuleRelativePath"), TEXT("Classes/XboxOneTargetSettings.h"));
				MetaData->SetValue(NewProp_ServiceConfigId, TEXT("ToolTip"), TEXT("Service Configuration GUID. Must match XDP configuration."));
				MetaData->SetValue(NewProp_ProductId, TEXT("Category"), TEXT("TitleConfig"));
				MetaData->SetValue(NewProp_ProductId, TEXT("ModuleRelativePath"), TEXT("Classes/XboxOneTargetSettings.h"));
				MetaData->SetValue(NewProp_ProductId, TEXT("ToolTip"), TEXT("Product GUID. Used in packaging. Must match XDP configuration."));
				MetaData->SetValue(NewProp_bEnablePIXProfiling, TEXT("Category"), TEXT("CompileTime"));
				MetaData->SetValue(NewProp_bEnablePIXProfiling, TEXT("ModuleRelativePath"), TEXT("Classes/XboxOneTargetSettings.h"));
				MetaData->SetValue(NewProp_bEnablePIXProfiling, TEXT("ToolTip"), TEXT("To enable instrumentation for PIX profiling"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXboxOneTargetSettings(Z_Construct_UClass_UXboxOneTargetSettings, TEXT("UXboxOneTargetSettings"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXboxOneTargetSettings);
	UPackage* Z_Construct_UPackage_XboxOneTargetPlatform()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/XboxOneTargetPlatform")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xA3263C68;
			Guid.B = 0xB137AF6A;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS