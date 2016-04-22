// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Private/AndroidPlatformEditorPrivatePCH.h"
#include "AndroidPlatformEditor.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidPlatformEditor() {}
	void UAndroidSDKSettings::StaticRegisterNativesUAndroidSDKSettings()
	{
	}
	IMPLEMENT_CLASS(UAndroidSDKSettings, 2499815027);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();

	ANDROIDPLATFORMEDITOR_API class UClass* Z_Construct_UClass_UAndroidSDKSettings_NoRegister();
	ANDROIDPLATFORMEDITOR_API class UClass* Z_Construct_UClass_UAndroidSDKSettings();
	ANDROIDPLATFORMEDITOR_API class UPackage* Z_Construct_UPackage_AndroidPlatformEditor();
	UClass* Z_Construct_UClass_UAndroidSDKSettings_NoRegister()
	{
		return UAndroidSDKSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UAndroidSDKSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage_AndroidPlatformEditor();
			OuterClass = UAndroidSDKSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x28100084;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_NDKAPILevel = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NDKAPILevel"), RF_Public|RF_Transient|RF_Native) UStrProperty(CPP_PROPERTY_BASE(NDKAPILevel, UAndroidSDKSettings), 0x0000000000044001);
				UProperty* NewProp_SDKAPILevel = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SDKAPILevel"), RF_Public|RF_Transient|RF_Native) UStrProperty(CPP_PROPERTY_BASE(SDKAPILevel, UAndroidSDKSettings), 0x0000000000044001);
				UProperty* NewProp_JavaPath = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("JavaPath"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(JavaPath, UAndroidSDKSettings), 0x0000000000044001, Z_Construct_UScriptStruct_FDirectoryPath());
				UProperty* NewProp_ANTPath = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ANTPath"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(ANTPath, UAndroidSDKSettings), 0x0000000000044001, Z_Construct_UScriptStruct_FDirectoryPath());
				UProperty* NewProp_NDKPath = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NDKPath"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(NDKPath, UAndroidSDKSettings), 0x0000000000044001, Z_Construct_UScriptStruct_FDirectoryPath());
				UProperty* NewProp_SDKPath = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SDKPath"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(SDKPath, UAndroidSDKSettings), 0x0000000000044001, Z_Construct_UScriptStruct_FDirectoryPath());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AndroidSDKSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Private/AndroidSDKSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Implements the settings for the Android SDK setup."));
				MetaData->SetValue(NewProp_NDKAPILevel, TEXT("Category"), TEXT("SDKConfig"));
				MetaData->SetValue(NewProp_NDKAPILevel, TEXT("DisplayName"), TEXT("NDK API Level (specific version or 'latest' - see tooltip)"));
				MetaData->SetValue(NewProp_NDKAPILevel, TEXT("ModuleRelativePath"), TEXT("Private/AndroidSDKSettings.h"));
				MetaData->SetValue(NewProp_NDKAPILevel, TEXT("ToolTip"), TEXT("Which NDK to compile with (a specific version or (without quotes) 'latest' for latest version on disk). Note that choosing android-21 or later won't run on pre-5.0 devices."));
				MetaData->SetValue(NewProp_SDKAPILevel, TEXT("Category"), TEXT("SDKConfig"));
				MetaData->SetValue(NewProp_SDKAPILevel, TEXT("DisplayName"), TEXT("SDK API Level (specific version, 'latest', or 'matchndk' - see tooltip)"));
				MetaData->SetValue(NewProp_SDKAPILevel, TEXT("ModuleRelativePath"), TEXT("Private/AndroidSDKSettings.h"));
				MetaData->SetValue(NewProp_SDKAPILevel, TEXT("ToolTip"), TEXT("Which SDK to package and compile Java with (a specific version or (without quotes) 'latest' for latest version on disk, or 'matchndk' to match the NDK API Level)"));
				MetaData->SetValue(NewProp_JavaPath, TEXT("Category"), TEXT("SDKConfig"));
				MetaData->SetValue(NewProp_JavaPath, TEXT("DisplayName"), TEXT("Location of JAVA (the directory usually contains 'jdk')"));
				MetaData->SetValue(NewProp_JavaPath, TEXT("ModuleRelativePath"), TEXT("Private/AndroidSDKSettings.h"));
				MetaData->SetValue(NewProp_JavaPath, TEXT("ToolTip"), TEXT("Location on disk of Java (falls back to JAVA_HOME environment variable if this is left blank)"));
				MetaData->SetValue(NewProp_ANTPath, TEXT("Category"), TEXT("SDKConfig"));
				MetaData->SetValue(NewProp_ANTPath, TEXT("DisplayName"), TEXT("Location of ANT (the directory usually contains 'apache-ant-')"));
				MetaData->SetValue(NewProp_ANTPath, TEXT("ModuleRelativePath"), TEXT("Private/AndroidSDKSettings.h"));
				MetaData->SetValue(NewProp_ANTPath, TEXT("ToolTip"), TEXT("Location on disk of the ANT tool (falls back to ANT_HOME environment variable if this is left blank)"));
				MetaData->SetValue(NewProp_NDKPath, TEXT("Category"), TEXT("SDKConfig"));
				MetaData->SetValue(NewProp_NDKPath, TEXT("DisplayName"), TEXT("Location of Android NDK (the directory usually contains 'android-ndk-')"));
				MetaData->SetValue(NewProp_NDKPath, TEXT("ModuleRelativePath"), TEXT("Private/AndroidSDKSettings.h"));
				MetaData->SetValue(NewProp_NDKPath, TEXT("ToolTip"), TEXT("Location on disk of the Android NDK (falls back to NDKROOT environment variable if this is left blank)"));
				MetaData->SetValue(NewProp_SDKPath, TEXT("Category"), TEXT("SDKConfig"));
				MetaData->SetValue(NewProp_SDKPath, TEXT("DisplayName"), TEXT("Location of Android SDK (the directory usually contains 'android-sdk-')"));
				MetaData->SetValue(NewProp_SDKPath, TEXT("ModuleRelativePath"), TEXT("Private/AndroidSDKSettings.h"));
				MetaData->SetValue(NewProp_SDKPath, TEXT("ToolTip"), TEXT("Location on disk of the Android SDK (falls back to ANDROID_HOME environment variable if this is left blank)"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAndroidSDKSettings(Z_Construct_UClass_UAndroidSDKSettings, TEXT("UAndroidSDKSettings"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidSDKSettings);
	UPackage* Z_Construct_UPackage_AndroidPlatformEditor()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/AndroidPlatformEditor")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x4E5BDC03;
			Guid.B = 0x1A6CD83E;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS