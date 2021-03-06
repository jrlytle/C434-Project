// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Private/WindowsTargetPlatformPrivatePCH.h"
#include "WindowsTargetPlatform.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindowsTargetPlatform() {}
static class UEnum* EMinimumSupportedOS_StaticEnum()
{
	static class UEnum* Singleton = NULL;
	if (!Singleton)
	{
		extern WINDOWSTARGETPLATFORM_API class UEnum* Z_Construct_UEnum_WindowsTargetPlatform_EMinimumSupportedOS();
		extern WINDOWSTARGETPLATFORM_API class UPackage* Z_Construct_UPackage_WindowsTargetPlatform();
		Singleton = GetStaticEnum(Z_Construct_UEnum_WindowsTargetPlatform_EMinimumSupportedOS, Z_Construct_UPackage_WindowsTargetPlatform(), TEXT("EMinimumSupportedOS"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMinimumSupportedOS(EMinimumSupportedOS_StaticEnum, TEXT("/Script/WindowsTargetPlatform"));
	void UWindowsTargetSettings::StaticRegisterNativesUWindowsTargetSettings()
	{
	}
	IMPLEMENT_CLASS(UWindowsTargetSettings, 1377176918);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();

	WINDOWSTARGETPLATFORM_API class UEnum* Z_Construct_UEnum_WindowsTargetPlatform_EMinimumSupportedOS();
	WINDOWSTARGETPLATFORM_API class UClass* Z_Construct_UClass_UWindowsTargetSettings_NoRegister();
	WINDOWSTARGETPLATFORM_API class UClass* Z_Construct_UClass_UWindowsTargetSettings();
	WINDOWSTARGETPLATFORM_API class UPackage* Z_Construct_UPackage_WindowsTargetPlatform();
	UEnum* Z_Construct_UEnum_WindowsTargetPlatform_EMinimumSupportedOS()
	{
		UPackage* Outer=Z_Construct_UPackage_WindowsTargetPlatform();
		extern uint32 Get_Z_Construct_UEnum_WindowsTargetPlatform_EMinimumSupportedOS_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReload(Outer, TEXT("EMinimumSupportedOS"), 0, Get_Z_Construct_UEnum_WindowsTargetPlatform_EMinimumSupportedOS_CRC());
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EMinimumSupportedOS"), RF_Public|RF_Transient|RF_Native) UEnum(FObjectInitializer());
			TArray<TPair<FName, uint8>> EnumNames;
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EMinimumSupportedOS::MSOS_Vista")), 0));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EMinimumSupportedOS::MSOS_XP")), 1));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EMinimumSupportedOS::MSOS_MAX")), 2));
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Classes/WindowsTargetSettings.h"));
			MetaData->SetValue(ReturnEnum, TEXT("MSOS_Vista.DisplayName"), TEXT("Windows Vista"));
			MetaData->SetValue(ReturnEnum, TEXT("MSOS_XP.DisplayName"), TEXT("Windows XP"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_WindowsTargetPlatform_EMinimumSupportedOS_CRC() { return 2792387564U; }
	UClass* Z_Construct_UClass_UWindowsTargetSettings_NoRegister()
	{
		return UWindowsTargetSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UWindowsTargetSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage_WindowsTargetPlatform();
			OuterClass = UWindowsTargetSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100086;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_MinimumOSVersion = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MinimumOSVersion"), RF_Public|RF_Transient|RF_Native) UByteProperty(CPP_PROPERTY_BASE(MinimumOSVersion, UWindowsTargetSettings), 0x0000000000004001, Z_Construct_UEnum_WindowsTargetPlatform_EMinimumSupportedOS());
				UProperty* NewProp_TargetedRHIs = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TargetedRHIs"), RF_Public|RF_Transient|RF_Native) UArrayProperty(CPP_PROPERTY_BASE(TargetedRHIs, UWindowsTargetSettings), 0x0000000000004001);
				UProperty* NewProp_TargetedRHIs_Inner = new(EC_InternalUseOnlyConstructor, NewProp_TargetedRHIs, TEXT("TargetedRHIs"), RF_Public|RF_Transient|RF_Native) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("WindowsTargetSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/WindowsTargetSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Implements the settings for the Windows target platform."));
				MetaData->SetValue(NewProp_MinimumOSVersion, TEXT("Category"), TEXT("OS Info"));
				MetaData->SetValue(NewProp_MinimumOSVersion, TEXT("DisplayName"), TEXT("Minimum OS Version"));
				MetaData->SetValue(NewProp_MinimumOSVersion, TEXT("ModuleRelativePath"), TEXT("Classes/WindowsTargetSettings.h"));
				MetaData->SetValue(NewProp_MinimumOSVersion, TEXT("ToolTip"), TEXT("Determine the minimum supported"));
				MetaData->SetValue(NewProp_TargetedRHIs, TEXT("Category"), TEXT("Rendering"));
				MetaData->SetValue(NewProp_TargetedRHIs, TEXT("ModuleRelativePath"), TEXT("Classes/WindowsTargetSettings.h"));
				MetaData->SetValue(NewProp_TargetedRHIs, TEXT("ToolTip"), TEXT("The collection of RHI's we want to support on this platform.\nThis is not always the full list of RHI we can support."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWindowsTargetSettings(Z_Construct_UClass_UWindowsTargetSettings, TEXT("UWindowsTargetSettings"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWindowsTargetSettings);
	UPackage* Z_Construct_UPackage_WindowsTargetPlatform()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/WindowsTargetPlatform")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x81F5D3C9;
			Guid.B = 0x9DC70D54;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
