// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Private/EditorStylePrivatePCH.h"
#include "EditorStyle.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorStyle() {}
static class UEnum* EColorVisionDeficiency_StaticEnum()
{
	static class UEnum* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITORSTYLE_API class UEnum* Z_Construct_UEnum_EditorStyle_EColorVisionDeficiency();
		extern EDITORSTYLE_API class UPackage* Z_Construct_UPackage_EditorStyle();
		Singleton = GetStaticEnum(Z_Construct_UEnum_EditorStyle_EColorVisionDeficiency, Z_Construct_UPackage_EditorStyle(), TEXT("EColorVisionDeficiency"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EColorVisionDeficiency(EColorVisionDeficiency_StaticEnum, TEXT("/Script/EditorStyle"));
	void UEditorStyleSettings::StaticRegisterNativesUEditorStyleSettings()
	{
	}
	IMPLEMENT_CLASS(UEditorStyleSettings, 456431275);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API class UEnum* Z_Construct_UEnum_CoreUObject_ELogTimes();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();

	EDITORSTYLE_API class UEnum* Z_Construct_UEnum_EditorStyle_EColorVisionDeficiency();
	EDITORSTYLE_API class UClass* Z_Construct_UClass_UEditorStyleSettings_NoRegister();
	EDITORSTYLE_API class UClass* Z_Construct_UClass_UEditorStyleSettings();
	EDITORSTYLE_API class UPackage* Z_Construct_UPackage_EditorStyle();
	UEnum* Z_Construct_UEnum_EditorStyle_EColorVisionDeficiency()
	{
		UPackage* Outer=Z_Construct_UPackage_EditorStyle();
		extern uint32 Get_Z_Construct_UEnum_EditorStyle_EColorVisionDeficiency_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReload(Outer, TEXT("EColorVisionDeficiency"), 0, Get_Z_Construct_UEnum_EditorStyle_EColorVisionDeficiency_CRC());
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EColorVisionDeficiency"), RF_Public|RF_Transient|RF_Native) UEnum(FObjectInitializer());
			TArray<TPair<FName, uint8>> EnumNames;
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("CVD_NormalVision")), 0));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("CVD_Deuteranomly")), 1));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("CVD_Deuteranopia")), 2));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("CVD_Protanomly")), 3));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("CVD_Protanopia")), 4));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("CVD_Tritanomaly")), 5));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("CVD_Tritanopia")), 6));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("CVD_Achromatopsia")), 7));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("CVD_MAX")), 8));
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Regular);
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("CVD_Achromatopsia.DisplayName"), TEXT("Achromatopsia (Extremely Rare)"));
			MetaData->SetValue(ReturnEnum, TEXT("CVD_Deuteranomly.DisplayName"), TEXT("Deuteranomly (6% of males, 0.4% of females)"));
			MetaData->SetValue(ReturnEnum, TEXT("CVD_Deuteranopia.DisplayName"), TEXT("Deuteranopia (1% of males)"));
			MetaData->SetValue(ReturnEnum, TEXT("CVD_NormalVision.DisplayName"), TEXT("Normal Vision"));
			MetaData->SetValue(ReturnEnum, TEXT("CVD_Protanomly.DisplayName"), TEXT("Protanomly (1% of males, 0.01% of females)"));
			MetaData->SetValue(ReturnEnum, TEXT("CVD_Protanopia.DisplayName"), TEXT("Protanopia (1% of males)"));
			MetaData->SetValue(ReturnEnum, TEXT("CVD_Tritanomaly.DisplayName"), TEXT("Tritanomaly (0.01% of males and females)"));
			MetaData->SetValue(ReturnEnum, TEXT("CVD_Tritanopia.DisplayName"), TEXT("Tritanopia (1% of males and females)"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Enumerates color vision deficiency types."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_EditorStyle_EColorVisionDeficiency_CRC() { return 4267553556U; }
	UClass* Z_Construct_UClass_UEditorStyleSettings_NoRegister()
	{
		return UEditorStyleSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UEditorStyleSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage_EditorStyle();
			OuterClass = UEditorStyleSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100084;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bOpenAssetEditorTabsInNewWindow, UEditorStyleSettings, bool);
				UProperty* NewProp_bOpenAssetEditorTabsInNewWindow = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bOpenAssetEditorTabsInNewWindow"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bOpenAssetEditorTabsInNewWindow, UEditorStyleSettings), 0x0000000000004001, CPP_BOOL_PROPERTY_BITMASK(bOpenAssetEditorTabsInNewWindow, UEditorStyleSettings), sizeof(bool), true);
				UProperty* NewProp_LogTimestampMode = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LogTimestampMode"), RF_Public|RF_Transient|RF_Native) UByteProperty(CPP_PROPERTY_BASE(LogTimestampMode, UEditorStyleSettings), 0x0000040000004001, Z_Construct_UEnum_CoreUObject_ELogTimes());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bShowLaunchMenus, UEditorStyleSettings, uint8);
				UProperty* NewProp_bShowLaunchMenus = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bShowLaunchMenus"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bShowLaunchMenus, UEditorStyleSettings), 0x0000000000004000, CPP_BOOL_PROPERTY_BITMASK(bShowLaunchMenus, UEditorStyleSettings), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bShowProjectMenus, UEditorStyleSettings, uint8);
				UProperty* NewProp_bShowProjectMenus = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bShowProjectMenus"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bShowProjectMenus, UEditorStyleSettings), 0x0000000000004000, CPP_BOOL_PROPERTY_BITMASK(bShowProjectMenus, UEditorStyleSettings), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bExpandConfigurationMenus, UEditorStyleSettings, uint8);
				UProperty* NewProp_bExpandConfigurationMenus = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bExpandConfigurationMenus"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bExpandConfigurationMenus, UEditorStyleSettings), 0x0000040000004001, CPP_BOOL_PROPERTY_BITMASK(bExpandConfigurationMenus, UEditorStyleSettings), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bShowFriendlyNames, UEditorStyleSettings, uint8);
				UProperty* NewProp_bShowFriendlyNames = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bShowFriendlyNames"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bShowFriendlyNames, UEditorStyleSettings), 0x0000000000004001, CPP_BOOL_PROPERTY_BITMASK(bShowFriendlyNames, UEditorStyleSettings), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnableWindowAnimations, UEditorStyleSettings, uint8);
				UProperty* NewProp_bEnableWindowAnimations = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bEnableWindowAnimations"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnableWindowAnimations, UEditorStyleSettings), 0x0000000000004001, CPP_BOOL_PROPERTY_BITMASK(bEnableWindowAnimations, UEditorStyleSettings), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseSmallToolBarIcons, UEditorStyleSettings, uint8);
				UProperty* NewProp_bUseSmallToolBarIcons = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseSmallToolBarIcons"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseSmallToolBarIcons, UEditorStyleSettings), 0x0000000000004001, CPP_BOOL_PROPERTY_BITMASK(bUseSmallToolBarIcons, UEditorStyleSettings), sizeof(uint8), false);
				UProperty* NewProp_ColorVisionDeficiencyPreviewType = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ColorVisionDeficiencyPreviewType"), RF_Public|RF_Transient|RF_Native) UByteProperty(CPP_PROPERTY_BASE(ColorVisionDeficiencyPreviewType, UEditorStyleSettings), 0x0000000000004001, Z_Construct_UEnum_EditorStyle_EColorVisionDeficiency());
				UProperty* NewProp_KeyboardFocusColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("KeyboardFocusColor"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(KeyboardFocusColor, UEditorStyleSettings), 0x0000040000004001, Z_Construct_UScriptStruct_FLinearColor());
				UProperty* NewProp_InactiveSelectionColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InactiveSelectionColor"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(InactiveSelectionColor, UEditorStyleSettings), 0x0000000000004001, Z_Construct_UScriptStruct_FLinearColor());
				UProperty* NewProp_PressedSelectionColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PressedSelectionColor"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(PressedSelectionColor, UEditorStyleSettings), 0x0000000000004001, Z_Construct_UScriptStruct_FLinearColor());
				UProperty* NewProp_SelectionColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SelectionColor"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(SelectionColor, UEditorStyleSettings), 0x0000000000004001, Z_Construct_UScriptStruct_FLinearColor());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("EditorPerProjectUserSettings"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Classes/EditorStyleSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Implements the Editor style settings."));
				MetaData->SetValue(NewProp_bOpenAssetEditorTabsInNewWindow, TEXT("Category"), TEXT("UserInterface"));
				MetaData->SetValue(NewProp_bOpenAssetEditorTabsInNewWindow, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_bOpenAssetEditorTabsInNewWindow, TEXT("ToolTip"), TEXT("If checked, new asset editor tabs will open in a new window instead of docked in the tab from which they were opened"));
				MetaData->SetValue(NewProp_LogTimestampMode, TEXT("Category"), TEXT("UserInterface"));
				MetaData->SetValue(NewProp_LogTimestampMode, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_LogTimestampMode, TEXT("ToolTip"), TEXT("The display mode for timestamps in the output log"));
				MetaData->SetValue(NewProp_bShowLaunchMenus, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_bShowLaunchMenus, TEXT("ToolTip"), TEXT("When enabled, the Launch menu items will be shown."));
				MetaData->SetValue(NewProp_bShowProjectMenus, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_bShowProjectMenus, TEXT("ToolTip"), TEXT("When enabled, the Editor Preferences and Project Settings menu items in the main menu will be expanded with sub-menus for each settings section."));
				MetaData->SetValue(NewProp_bExpandConfigurationMenus, TEXT("Category"), TEXT("UserInterface"));
				MetaData->SetValue(NewProp_bExpandConfigurationMenus, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_bExpandConfigurationMenus, TEXT("ToolTip"), TEXT("When enabled, the Editor Preferences and Project Settings menu items in the main menu will be expanded with sub-menus for each settings section."));
				MetaData->SetValue(NewProp_bShowFriendlyNames, TEXT("Category"), TEXT("UserInterface"));
				MetaData->SetValue(NewProp_bShowFriendlyNames, TEXT("DisplayName"), TEXT("Show Friendly Variable Names"));
				MetaData->SetValue(NewProp_bShowFriendlyNames, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_bShowFriendlyNames, TEXT("ToolTip"), TEXT("When enabled, the C++ names for properties and functions will be displayed in a format that is easier to read"));
				MetaData->SetValue(NewProp_bEnableWindowAnimations, TEXT("Category"), TEXT("UserInterface"));
				MetaData->SetValue(NewProp_bEnableWindowAnimations, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_bEnableWindowAnimations, TEXT("ToolTip"), TEXT("Enables animated transitions for certain menus and pop-up windows.  Note that animations may be automatically disabled at low frame rates in order to improve responsiveness."));
				MetaData->SetValue(NewProp_bUseSmallToolBarIcons, TEXT("Category"), TEXT("UserInterface"));
				MetaData->SetValue(NewProp_bUseSmallToolBarIcons, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_bUseSmallToolBarIcons, TEXT("ToolTip"), TEXT("Whether to use small toolbar icons without labels or not."));
				MetaData->SetValue(NewProp_ColorVisionDeficiencyPreviewType, TEXT("Category"), TEXT("Colors"));
				MetaData->SetValue(NewProp_ColorVisionDeficiencyPreviewType, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_ColorVisionDeficiencyPreviewType, TEXT("ToolTip"), TEXT("Applies a color vision deficiency filter to the entire editor"));
				MetaData->SetValue(NewProp_KeyboardFocusColor, TEXT("Category"), TEXT("Colors"));
				MetaData->SetValue(NewProp_KeyboardFocusColor, TEXT("DisplayName"), TEXT("Keyboard Focus Color"));
				MetaData->SetValue(NewProp_KeyboardFocusColor, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_KeyboardFocusColor, TEXT("ToolTip"), TEXT("The color used to represent keyboard input selection focus"));
				MetaData->SetValue(NewProp_InactiveSelectionColor, TEXT("Category"), TEXT("Colors"));
				MetaData->SetValue(NewProp_InactiveSelectionColor, TEXT("DisplayName"), TEXT("Inactive Selection Color"));
				MetaData->SetValue(NewProp_InactiveSelectionColor, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_InactiveSelectionColor, TEXT("ToolTip"), TEXT("The color used to represent selected items that are currently inactive"));
				MetaData->SetValue(NewProp_PressedSelectionColor, TEXT("Category"), TEXT("Colors"));
				MetaData->SetValue(NewProp_PressedSelectionColor, TEXT("DisplayName"), TEXT("Pressed Selection Color"));
				MetaData->SetValue(NewProp_PressedSelectionColor, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_PressedSelectionColor, TEXT("ToolTip"), TEXT("The color used to represent a pressed item"));
				MetaData->SetValue(NewProp_SelectionColor, TEXT("Category"), TEXT("Colors"));
				MetaData->SetValue(NewProp_SelectionColor, TEXT("DisplayName"), TEXT("Selection Color"));
				MetaData->SetValue(NewProp_SelectionColor, TEXT("ModuleRelativePath"), TEXT("Public/Classes/EditorStyleSettings.h"));
				MetaData->SetValue(NewProp_SelectionColor, TEXT("ToolTip"), TEXT("The color used to represent selection"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorStyleSettings(Z_Construct_UClass_UEditorStyleSettings, TEXT("UEditorStyleSettings"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorStyleSettings);
	UPackage* Z_Construct_UPackage_EditorStyle()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/EditorStyle")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xFE1319B8;
			Guid.B = 0x97CC0903;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS