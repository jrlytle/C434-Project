// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Private/MaterialShaderQualitySettingsPrivatePCH.h"
#include "MaterialShaderQualitySettings.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialShaderQualitySettings() {}
class UScriptStruct* FMaterialQualityOverrides::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MATERIALSHADERQUALITYSETTINGS_API class UScriptStruct* Z_Construct_UScriptStruct_FMaterialQualityOverrides();
		extern MATERIALSHADERQUALITYSETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FMaterialQualityOverrides_CRC();
		extern MATERIALSHADERQUALITYSETTINGS_API class UPackage* Z_Construct_UPackage_MaterialShaderQualitySettings();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialQualityOverrides, Z_Construct_UPackage_MaterialShaderQualitySettings(), TEXT("MaterialQualityOverrides"), sizeof(FMaterialQualityOverrides), Get_Z_Construct_UScriptStruct_FMaterialQualityOverrides_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialQualityOverrides(FMaterialQualityOverrides::StaticStruct, TEXT("/Script/MaterialShaderQualitySettings"));
static struct FScriptStruct_MaterialShaderQualitySettings_StaticRegisterNativesFMaterialQualityOverrides
{
	FScriptStruct_MaterialShaderQualitySettings_StaticRegisterNativesFMaterialQualityOverrides()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialQualityOverrides")),new UScriptStruct::TCppStructOps<FMaterialQualityOverrides>);
	}
} ScriptStruct_MaterialShaderQualitySettings_StaticRegisterNativesFMaterialQualityOverrides;
	void UShaderPlatformQualitySettings::StaticRegisterNativesUShaderPlatformQualitySettings()
	{
	}
	IMPLEMENT_CLASS(UShaderPlatformQualitySettings, 3006376448);
	void UMaterialShaderQualitySettings::StaticRegisterNativesUMaterialShaderQualitySettings()
	{
	}
	IMPLEMENT_CLASS(UMaterialShaderQualitySettings, 192463711);
class UScriptStruct* FShaderQualityOverridesListItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MATERIALSHADERQUALITYSETTINGS_API class UScriptStruct* Z_Construct_UScriptStruct_FShaderQualityOverridesListItem();
		extern MATERIALSHADERQUALITYSETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FShaderQualityOverridesListItem_CRC();
		extern MATERIALSHADERQUALITYSETTINGS_API class UPackage* Z_Construct_UPackage_MaterialShaderQualitySettings();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FShaderQualityOverridesListItem, Z_Construct_UPackage_MaterialShaderQualitySettings(), TEXT("ShaderQualityOverridesListItem"), sizeof(FShaderQualityOverridesListItem), Get_Z_Construct_UScriptStruct_FShaderQualityOverridesListItem_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FShaderQualityOverridesListItem(FShaderQualityOverridesListItem::StaticStruct, TEXT("/Script/MaterialShaderQualitySettings"));
static struct FScriptStruct_MaterialShaderQualitySettings_StaticRegisterNativesFShaderQualityOverridesListItem
{
	FScriptStruct_MaterialShaderQualitySettings_StaticRegisterNativesFShaderQualityOverridesListItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ShaderQualityOverridesListItem")),new UScriptStruct::TCppStructOps<FShaderQualityOverridesListItem>);
	}
} ScriptStruct_MaterialShaderQualitySettings_StaticRegisterNativesFShaderQualityOverridesListItem;
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();

	MATERIALSHADERQUALITYSETTINGS_API class UScriptStruct* Z_Construct_UScriptStruct_FMaterialQualityOverrides();
	MATERIALSHADERQUALITYSETTINGS_API class UClass* Z_Construct_UClass_UShaderPlatformQualitySettings_NoRegister();
	MATERIALSHADERQUALITYSETTINGS_API class UClass* Z_Construct_UClass_UShaderPlatformQualitySettings();
	MATERIALSHADERQUALITYSETTINGS_API class UClass* Z_Construct_UClass_UMaterialShaderQualitySettings_NoRegister();
	MATERIALSHADERQUALITYSETTINGS_API class UClass* Z_Construct_UClass_UMaterialShaderQualitySettings();
	MATERIALSHADERQUALITYSETTINGS_API class UScriptStruct* Z_Construct_UScriptStruct_FShaderQualityOverridesListItem();
	MATERIALSHADERQUALITYSETTINGS_API class UPackage* Z_Construct_UPackage_MaterialShaderQualitySettings();
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialQualityOverrides()
	{
		UPackage* Outer=Z_Construct_UPackage_MaterialShaderQualitySettings();
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialQualityOverrides_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReload(Outer, TEXT("MaterialQualityOverrides"), sizeof(FMaterialQualityOverrides), Get_Z_Construct_UScriptStruct_FMaterialQualityOverrides_CRC());
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MaterialQualityOverrides"), RF_Public|RF_Transient|RF_Native) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FMaterialQualityOverrides>, EStructFlags(0x00000001));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bForceDisableLMDirectionality, FMaterialQualityOverrides, bool);
			UProperty* NewProp_bForceDisableLMDirectionality = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bForceDisableLMDirectionality"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bForceDisableLMDirectionality, FMaterialQualityOverrides), 0x0000000000004000, CPP_BOOL_PROPERTY_BITMASK(bForceDisableLMDirectionality, FMaterialQualityOverrides), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bForceNonMetal, FMaterialQualityOverrides, bool);
			UProperty* NewProp_bForceNonMetal = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bForceNonMetal"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bForceNonMetal, FMaterialQualityOverrides), 0x0000000000004000, CPP_BOOL_PROPERTY_BITMASK(bForceNonMetal, FMaterialQualityOverrides), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bForceFullyRough, FMaterialQualityOverrides, bool);
			UProperty* NewProp_bForceFullyRough = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bForceFullyRough"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bForceFullyRough, FMaterialQualityOverrides), 0x0000000000004000, CPP_BOOL_PROPERTY_BITMASK(bForceFullyRough, FMaterialQualityOverrides), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnableOverride, FMaterialQualityOverrides, bool);
			UProperty* NewProp_bEnableOverride = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bEnableOverride"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnableOverride, FMaterialQualityOverrides), 0x0000000000004000, CPP_BOOL_PROPERTY_BITMASK(bEnableOverride, FMaterialQualityOverrides), sizeof(bool), true);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/ShaderPlatformQualitySettings.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("// FMaterialQualityOverrides represents the full set of possible material overrides per quality level."));
			MetaData->SetValue(NewProp_bForceDisableLMDirectionality, TEXT("DisplayName"), TEXT("Disable Lightmap directionality"));
			MetaData->SetValue(NewProp_bForceDisableLMDirectionality, TEXT("ModuleRelativePath"), TEXT("Classes/ShaderPlatformQualitySettings.h"));
			MetaData->SetValue(NewProp_bForceNonMetal, TEXT("DisplayName"), TEXT("Force Non-metal"));
			MetaData->SetValue(NewProp_bForceNonMetal, TEXT("ModuleRelativePath"), TEXT("Classes/ShaderPlatformQualitySettings.h"));
			MetaData->SetValue(NewProp_bForceFullyRough, TEXT("DisplayName"), TEXT("Force Fully Rough"));
			MetaData->SetValue(NewProp_bForceFullyRough, TEXT("ModuleRelativePath"), TEXT("Classes/ShaderPlatformQualitySettings.h"));
			MetaData->SetValue(NewProp_bEnableOverride, TEXT("DisplayName"), TEXT("Enable Quality Override"));
			MetaData->SetValue(NewProp_bEnableOverride, TEXT("ModuleRelativePath"), TEXT("Classes/ShaderPlatformQualitySettings.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialQualityOverrides_CRC() { return 64939018U; }
	UClass* Z_Construct_UClass_UShaderPlatformQualitySettings_NoRegister()
	{
		return UShaderPlatformQualitySettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UShaderPlatformQualitySettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage_MaterialShaderQualitySettings();
			OuterClass = UShaderPlatformQualitySettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100486;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_QualityOverrides = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("QualityOverrides"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(QualityOverrides, UShaderPlatformQualitySettings), 0x0000000000004000, Z_Construct_UScriptStruct_FMaterialQualityOverrides());
				NewProp_QualityOverrides->ArrayDim = CPP_ARRAY_DIM(QualityOverrides, UShaderPlatformQualitySettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ShaderPlatformQualitySettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/ShaderPlatformQualitySettings.h"));
				MetaData->SetValue(NewProp_QualityOverrides, TEXT("ModuleRelativePath"), TEXT("Classes/ShaderPlatformQualitySettings.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShaderPlatformQualitySettings(Z_Construct_UClass_UShaderPlatformQualitySettings, TEXT("UShaderPlatformQualitySettings"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShaderPlatformQualitySettings);
	UClass* Z_Construct_UClass_UMaterialShaderQualitySettings_NoRegister()
	{
		return UMaterialShaderQualitySettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialShaderQualitySettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage_MaterialShaderQualitySettings();
			OuterClass = UMaterialShaderQualitySettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_ForwardSettingMap = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ForwardSettingMap"), RF_Public|RF_Transient|RF_Native) UMapProperty(CPP_PROPERTY_BASE(ForwardSettingMap, UMaterialShaderQualitySettings), 0x0000000000000000);
				UProperty* NewProp_ForwardSettingMap_Key_KeyProp = new(EC_InternalUseOnlyConstructor, NewProp_ForwardSettingMap, TEXT("ForwardSettingMap_Key"), RF_Public|RF_Transient|RF_Native) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_ForwardSettingMap_ValueProp = new(EC_InternalUseOnlyConstructor, NewProp_ForwardSettingMap, TEXT("ForwardSettingMap"), RF_Public|RF_Transient|RF_Native) UObjectProperty(FObjectInitializer(), EC_CppProperty, 1, 0x0000000000000000, Z_Construct_UClass_UShaderPlatformQualitySettings_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MaterialShaderQualitySettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/MaterialShaderQualitySettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("UCLASS(config = Engine, defaultconfig)"));
				MetaData->SetValue(NewProp_ForwardSettingMap, TEXT("ModuleRelativePath"), TEXT("Classes/MaterialShaderQualitySettings.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialShaderQualitySettings(Z_Construct_UClass_UMaterialShaderQualitySettings, TEXT("UMaterialShaderQualitySettings"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialShaderQualitySettings);
	UScriptStruct* Z_Construct_UScriptStruct_FShaderQualityOverridesListItem()
	{
		UPackage* Outer=Z_Construct_UPackage_MaterialShaderQualitySettings();
		extern uint32 Get_Z_Construct_UScriptStruct_FShaderQualityOverridesListItem_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReload(Outer, TEXT("ShaderQualityOverridesListItem"), sizeof(FShaderQualityOverridesListItem), Get_Z_Construct_UScriptStruct_FShaderQualityOverridesListItem_CRC());
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ShaderQualityOverridesListItem"), RF_Public|RF_Transient|RF_Native) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FShaderQualityOverridesListItem>, EStructFlags(0x00000001));
			UProperty* NewProp_SettingContainer = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SettingContainer"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(SettingContainer, FShaderQualityOverridesListItem), 0x0000000000000000, Z_Construct_UClass_UShaderPlatformQualitySettings_NoRegister());
			UProperty* NewProp_QualityProperty = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("QualityProperty"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(QualityProperty, FShaderQualityOverridesListItem), 0x0000000000000000, UBoolProperty::StaticClass());
			UProperty* NewProp_RangeName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RangeName"), RF_Public|RF_Transient|RF_Native) UStrProperty(CPP_PROPERTY_BASE(RangeName, FShaderQualityOverridesListItem), 0x0000000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Private/ShaderQualityOverridesListItem.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("FShaderQualityOverridesListItem\nHelper struct for FMaterialShaderQualitySettingsCustomization, contains info required to populate a material quality row."));
			MetaData->SetValue(NewProp_SettingContainer, TEXT("ModuleRelativePath"), TEXT("Private/ShaderQualityOverridesListItem.h"));
			MetaData->SetValue(NewProp_QualityProperty, TEXT("ModuleRelativePath"), TEXT("Private/ShaderQualityOverridesListItem.h"));
			MetaData->SetValue(NewProp_RangeName, TEXT("ModuleRelativePath"), TEXT("Private/ShaderQualityOverridesListItem.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FShaderQualityOverridesListItem_CRC() { return 2414371091U; }
	UPackage* Z_Construct_UPackage_MaterialShaderQualitySettings()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/MaterialShaderQualitySettings")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x83245A34;
			Guid.B = 0xB162C5E8;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
