// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Private/GameMenuBuilderPrivatePCH.h"
#include "GameMenuBuilder.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameMenuBuilder() {}
static class UEnum* GameMenuLayoutType_StaticEnum()
{
	static class UEnum* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEMENUBUILDER_API class UEnum* Z_Construct_UEnum_GameMenuBuilder_GameMenuLayoutType();
		extern GAMEMENUBUILDER_API class UPackage* Z_Construct_UPackage_GameMenuBuilder();
		Singleton = GetStaticEnum(Z_Construct_UEnum_GameMenuBuilder_GameMenuLayoutType, Z_Construct_UPackage_GameMenuBuilder(), TEXT("GameMenuLayoutType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_GameMenuLayoutType(GameMenuLayoutType_StaticEnum, TEXT("/Script/GameMenuBuilder"));
class UScriptStruct* FGameMenuStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEMENUBUILDER_API class UScriptStruct* Z_Construct_UScriptStruct_FGameMenuStyle();
		extern GAMEMENUBUILDER_API uint32 Get_Z_Construct_UScriptStruct_FGameMenuStyle_CRC();
		extern GAMEMENUBUILDER_API class UPackage* Z_Construct_UPackage_GameMenuBuilder();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameMenuStyle, Z_Construct_UPackage_GameMenuBuilder(), TEXT("GameMenuStyle"), sizeof(FGameMenuStyle), Get_Z_Construct_UScriptStruct_FGameMenuStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameMenuStyle(FGameMenuStyle::StaticStruct, TEXT("/Script/GameMenuBuilder"));
static struct FScriptStruct_GameMenuBuilder_StaticRegisterNativesFGameMenuStyle
{
	FScriptStruct_GameMenuBuilder_StaticRegisterNativesFGameMenuStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameMenuStyle")),new UScriptStruct::TCppStructOps<FGameMenuStyle>);
	}
} ScriptStruct_GameMenuBuilder_StaticRegisterNativesFGameMenuStyle;
	void UGameMenuWidgetStyle::StaticRegisterNativesUGameMenuWidgetStyle()
	{
	}
	IMPLEMENT_CLASS(UGameMenuWidgetStyle, 494023773);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	SLATECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	SLATECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API class UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	SLATECORE_API class UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FSlateSound();
	SLATECORE_API class UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API class UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();

	GAMEMENUBUILDER_API class UEnum* Z_Construct_UEnum_GameMenuBuilder_GameMenuLayoutType();
	GAMEMENUBUILDER_API class UScriptStruct* Z_Construct_UScriptStruct_FGameMenuStyle();
	GAMEMENUBUILDER_API class UClass* Z_Construct_UClass_UGameMenuWidgetStyle_NoRegister();
	GAMEMENUBUILDER_API class UClass* Z_Construct_UClass_UGameMenuWidgetStyle();
	GAMEMENUBUILDER_API class UPackage* Z_Construct_UPackage_GameMenuBuilder();
	UEnum* Z_Construct_UEnum_GameMenuBuilder_GameMenuLayoutType()
	{
		UPackage* Outer=Z_Construct_UPackage_GameMenuBuilder();
		extern uint32 Get_Z_Construct_UEnum_GameMenuBuilder_GameMenuLayoutType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReload(Outer, TEXT("GameMenuLayoutType"), 0, Get_Z_Construct_UEnum_GameMenuBuilder_GameMenuLayoutType_CRC());
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GameMenuLayoutType"), RF_Public|RF_Transient|RF_Native) UEnum(FObjectInitializer());
			TArray<TPair<FName, uint8>> EnumNames;
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("GameMenuLayoutType::Single")), 0));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("GameMenuLayoutType::SideBySide")), 1));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("GameMenuLayoutType::GameMenuLayoutType_MAX")), 2));
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/GameMenuWidgetStyle.h"));
			MetaData->SetValue(ReturnEnum, TEXT("SideBySide.ToolTip"), TEXT("Side by side menu. Main menu on left, any sub menu on right."));
			MetaData->SetValue(ReturnEnum, TEXT("Single.ToolTip"), TEXT("Single one page menu."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_GameMenuBuilder_GameMenuLayoutType_CRC() { return 2678347056U; }
	UScriptStruct* Z_Construct_UScriptStruct_FGameMenuStyle()
	{
		UPackage* Outer=Z_Construct_UPackage_GameMenuBuilder();
		extern uint32 Get_Z_Construct_UScriptStruct_FGameMenuStyle_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReload(Outer, TEXT("GameMenuStyle"), sizeof(FGameMenuStyle), Get_Z_Construct_UScriptStruct_FGameMenuStyle_CRC());
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GameMenuStyle"), RF_Public|RF_Transient|RF_Native) UScriptStruct(FObjectInitializer(), Z_Construct_UScriptStruct_FSlateWidgetStyle(), new UScriptStruct::TCppStructOps<FGameMenuStyle>, EStructFlags(0x00000001));
			UProperty* NewProp_TextColor = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TextColor"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(TextColor, FGameMenuStyle), 0x0000000000000001, Z_Construct_UScriptStruct_FSlateColor());
			UProperty* NewProp_AnimationSpeed = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AnimationSpeed"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(AnimationSpeed, FGameMenuStyle), 0x0000000000000001);
			UProperty* NewProp_PanelsVerticalAlignment = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("PanelsVerticalAlignment"), RF_Public|RF_Transient|RF_Native) UByteProperty(CPP_PROPERTY_BASE(PanelsVerticalAlignment, FGameMenuStyle), 0x0000000000000001, Z_Construct_UEnum_SlateCore_EVerticalAlignment());
			UProperty* NewProp_TitleVerticalAlignment = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TitleVerticalAlignment"), RF_Public|RF_Transient|RF_Native) UByteProperty(CPP_PROPERTY_BASE(TitleVerticalAlignment, FGameMenuStyle), 0x0000000000000001, Z_Construct_UEnum_SlateCore_EVerticalAlignment());
			UProperty* NewProp_TitleHorizontalAlignment = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TitleHorizontalAlignment"), RF_Public|RF_Transient|RF_Native) UByteProperty(CPP_PROPERTY_BASE(TitleHorizontalAlignment, FGameMenuStyle), 0x0000000000000001, Z_Construct_UEnum_SlateCore_EHorizontalAlignment());
			UProperty* NewProp_ItemBorderMargin = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ItemBorderMargin"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(ItemBorderMargin, FGameMenuStyle), 0x0000000000000001, Z_Construct_UScriptStruct_FMargin());
			UProperty* NewProp_TitleBorderMargin = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TitleBorderMargin"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(TitleBorderMargin, FGameMenuStyle), 0x0000000000000001, Z_Construct_UScriptStruct_FMargin());
			UProperty* NewProp_LayoutType = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("LayoutType"), RF_Public|RF_Transient|RF_Native) UByteProperty(CPP_PROPERTY_BASE(LayoutType, FGameMenuStyle), 0x0000000000000001, Z_Construct_UEnum_GameMenuBuilder_GameMenuLayoutType());
			UProperty* NewProp_SubMenuMarginPercent = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SubMenuMarginPercent"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(SubMenuMarginPercent, FGameMenuStyle), 0x0000000000000001);
			UProperty* NewProp_LeftMarginPercent = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("LeftMarginPercent"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(LeftMarginPercent, FGameMenuStyle), 0x0000000000000001);
			UProperty* NewProp_MenuItemChosenSound = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MenuItemChosenSound"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(MenuItemChosenSound, FGameMenuStyle), 0x0000000000000001, Z_Construct_UScriptStruct_FSlateSound());
			UProperty* NewProp_MenuItemInactiveSound = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MenuItemInactiveSound"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(MenuItemInactiveSound, FGameMenuStyle), 0x0000000000000001, Z_Construct_UScriptStruct_FSlateSound());
			UProperty* NewProp_MenuItemChangeSound = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MenuItemChangeSound"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(MenuItemChangeSound, FGameMenuStyle), 0x0000000000000001, Z_Construct_UScriptStruct_FSlateSound());
			UProperty* NewProp_OptionChangeSound = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("OptionChangeSound"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(OptionChangeSound, FGameMenuStyle), 0x0000000000000001, Z_Construct_UScriptStruct_FSlateSound());
			UProperty* NewProp_MenuBackSound = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MenuBackSound"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(MenuBackSound, FGameMenuStyle), 0x0000000000000001, Z_Construct_UScriptStruct_FSlateSound());
			UProperty* NewProp_MenuEnterSound = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MenuEnterSound"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(MenuEnterSound, FGameMenuStyle), 0x0000000000000001, Z_Construct_UScriptStruct_FSlateSound());
			UProperty* NewProp_MenuSelectBrush = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MenuSelectBrush"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(MenuSelectBrush, FGameMenuStyle), 0x0000000000000001, Z_Construct_UScriptStruct_FSlateBrush());
			UProperty* NewProp_MenuBackgroundBrush = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MenuBackgroundBrush"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(MenuBackgroundBrush, FGameMenuStyle), 0x0000000000000001, Z_Construct_UScriptStruct_FSlateBrush());
			UProperty* NewProp_MenuFrameBrush = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MenuFrameBrush"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(MenuFrameBrush, FGameMenuStyle), 0x0000000000000001, Z_Construct_UScriptStruct_FSlateBrush());
			UProperty* NewProp_MenuTopBrush = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MenuTopBrush"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(MenuTopBrush, FGameMenuStyle), 0x0000000000000001, Z_Construct_UScriptStruct_FSlateBrush());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/GameMenuWidgetStyle.h"));
			MetaData->SetValue(NewProp_TextColor, TEXT("Category"), TEXT("Color"));
			MetaData->SetValue(NewProp_TextColor, TEXT("ModuleRelativePath"), TEXT("Public/GameMenuWidgetStyle.h"));
			MetaData->SetValue(NewProp_TextColor, TEXT("ToolTip"), TEXT("Color of the text."));
			MetaData->SetValue(NewProp_AnimationSpeed, TEXT("Category"), TEXT("Animation"));
			MetaData->SetValue(NewProp_AnimationSpeed, TEXT("ModuleRelativePath"), TEXT("Public/GameMenuWidgetStyle.h"));
			MetaData->SetValue(NewProp_AnimationSpeed, TEXT("ToolTip"), TEXT("Speed at which the menu initially appears."));
			MetaData->SetValue(NewProp_PanelsVerticalAlignment, TEXT("Category"), TEXT("Layout"));
			MetaData->SetValue(NewProp_PanelsVerticalAlignment, TEXT("ModuleRelativePath"), TEXT("Public/GameMenuWidgetStyle.h"));
			MetaData->SetValue(NewProp_PanelsVerticalAlignment, TEXT("ToolTip"), TEXT("Panel vertical alignment."));
			MetaData->SetValue(NewProp_TitleVerticalAlignment, TEXT("Category"), TEXT("Layout"));
			MetaData->SetValue(NewProp_TitleVerticalAlignment, TEXT("ModuleRelativePath"), TEXT("Public/GameMenuWidgetStyle.h"));
			MetaData->SetValue(NewProp_TitleVerticalAlignment, TEXT("ToolTip"), TEXT("Title vertical alignment."));
			MetaData->SetValue(NewProp_TitleHorizontalAlignment, TEXT("Category"), TEXT("Layout"));
			MetaData->SetValue(NewProp_TitleHorizontalAlignment, TEXT("ModuleRelativePath"), TEXT("Public/GameMenuWidgetStyle.h"));
			MetaData->SetValue(NewProp_TitleHorizontalAlignment, TEXT("ToolTip"), TEXT("Title horizontal alignment."));
			MetaData->SetValue(NewProp_ItemBorderMargin, TEXT("Category"), TEXT("Layout"));
			MetaData->SetValue(NewProp_ItemBorderMargin, TEXT("ModuleRelativePath"), TEXT("Public/GameMenuWidgetStyle.h"));
			MetaData->SetValue(NewProp_ItemBorderMargin, TEXT("ToolTip"), TEXT("Item border margin."));
			MetaData->SetValue(NewProp_TitleBorderMargin, TEXT("Category"), TEXT("Layout"));
			MetaData->SetValue(NewProp_TitleBorderMargin, TEXT("ModuleRelativePath"), TEXT("Public/GameMenuWidgetStyle.h"));
			MetaData->SetValue(NewProp_TitleBorderMargin, TEXT("ToolTip"), TEXT("Title border margin."));
			MetaData->SetValue(NewProp_LayoutType, TEXT("Category"), TEXT("Layout"));
			MetaData->SetValue(NewProp_LayoutType, TEXT("ModuleRelativePath"), TEXT("Public/GameMenuWidgetStyle.h"));
			MetaData->SetValue(NewProp_LayoutType, TEXT("ToolTip"), TEXT("Layout type."));
			MetaData->SetValue(NewProp_SubMenuMarginPercent, TEXT("Category"), TEXT("Layout"));
			MetaData->SetValue(NewProp_SubMenuMarginPercent, TEXT("ModuleRelativePath"), TEXT("Public/GameMenuWidgetStyle.h"));
			MetaData->SetValue(NewProp_SubMenuMarginPercent, TEXT("ToolTip"), TEXT("The left hand margin for the sub menu"));
			MetaData->SetValue(NewProp_LeftMarginPercent, TEXT("Category"), TEXT("Layout"));
			MetaData->SetValue(NewProp_LeftMarginPercent, TEXT("ModuleRelativePath"), TEXT("Public/GameMenuWidgetStyle.h"));
			MetaData->SetValue(NewProp_LeftMarginPercent, TEXT("ToolTip"), TEXT("The left hand margin for the main menu"));
			MetaData->SetValue(NewProp_MenuItemChosenSound, TEXT("Category"), TEXT("Sound"));
			MetaData->SetValue(NewProp_MenuItemChosenSound, TEXT("ModuleRelativePath"), TEXT("Public/GameMenuWidgetStyle.h"));
			MetaData->SetValue(NewProp_MenuItemChosenSound, TEXT("ToolTip"), TEXT("The sound the menu should play when the selected menu item is chosen"));
			MetaData->SetValue(NewProp_MenuItemInactiveSound, TEXT("Category"), TEXT("Sound"));
			MetaData->SetValue(NewProp_MenuItemInactiveSound, TEXT("ModuleRelativePath"), TEXT("Public/GameMenuWidgetStyle.h"));
			MetaData->SetValue(NewProp_MenuItemInactiveSound, TEXT("ToolTip"), TEXT("The sound the menu should play when the selected menu item is disabled or unbound"));
			MetaData->SetValue(NewProp_MenuItemChangeSound, TEXT("Category"), TEXT("Sound"));
			MetaData->SetValue(NewProp_MenuItemChangeSound, TEXT("ModuleRelativePath"), TEXT("Public/GameMenuWidgetStyle.h"));
			MetaData->SetValue(NewProp_MenuItemChangeSound, TEXT("ToolTip"), TEXT("The sound the menu should play when the selected menu item is changed"));
			MetaData->SetValue(NewProp_OptionChangeSound, TEXT("Category"), TEXT("Sound"));
			MetaData->SetValue(NewProp_OptionChangeSound, TEXT("ModuleRelativePath"), TEXT("Public/GameMenuWidgetStyle.h"));
			MetaData->SetValue(NewProp_OptionChangeSound, TEXT("ToolTip"), TEXT("The sound the menu should play when a menu option is changed"));
			MetaData->SetValue(NewProp_MenuBackSound, TEXT("Category"), TEXT("Sound"));
			MetaData->SetValue(NewProp_MenuBackSound, TEXT("ModuleRelativePath"), TEXT("Public/GameMenuWidgetStyle.h"));
			MetaData->SetValue(NewProp_MenuBackSound, TEXT("ToolTip"), TEXT("The sound the menu should play when returning to a parent menu"));
			MetaData->SetValue(NewProp_MenuEnterSound, TEXT("Category"), TEXT("Sound"));
			MetaData->SetValue(NewProp_MenuEnterSound, TEXT("ModuleRelativePath"), TEXT("Public/GameMenuWidgetStyle.h"));
			MetaData->SetValue(NewProp_MenuEnterSound, TEXT("ToolTip"), TEXT("The sound the menu should play when entering a sub-menu"));
			MetaData->SetValue(NewProp_MenuSelectBrush, TEXT("Category"), TEXT("Brushes"));
			MetaData->SetValue(NewProp_MenuSelectBrush, TEXT("ModuleRelativePath"), TEXT("Public/GameMenuWidgetStyle.h"));
			MetaData->SetValue(NewProp_MenuSelectBrush, TEXT("ToolTip"), TEXT("The brush used to draw the selected menu item"));
			MetaData->SetValue(NewProp_MenuBackgroundBrush, TEXT("Category"), TEXT("Brushes"));
			MetaData->SetValue(NewProp_MenuBackgroundBrush, TEXT("ModuleRelativePath"), TEXT("Public/GameMenuWidgetStyle.h"));
			MetaData->SetValue(NewProp_MenuBackgroundBrush, TEXT("ToolTip"), TEXT("The brush used to draw the menu background"));
			MetaData->SetValue(NewProp_MenuFrameBrush, TEXT("Category"), TEXT("Brushes"));
			MetaData->SetValue(NewProp_MenuFrameBrush, TEXT("ModuleRelativePath"), TEXT("Public/GameMenuWidgetStyle.h"));
			MetaData->SetValue(NewProp_MenuFrameBrush, TEXT("ToolTip"), TEXT("The brush used to draw the menu border"));
			MetaData->SetValue(NewProp_MenuTopBrush, TEXT("Category"), TEXT("Brushes"));
			MetaData->SetValue(NewProp_MenuTopBrush, TEXT("ModuleRelativePath"), TEXT("Public/GameMenuWidgetStyle.h"));
			MetaData->SetValue(NewProp_MenuTopBrush, TEXT("ToolTip"), TEXT("The brush used to draw the top of the menu"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameMenuStyle_CRC() { return 3209238441U; }
	UClass* Z_Construct_UClass_UGameMenuWidgetStyle_NoRegister()
	{
		return UGameMenuWidgetStyle::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameMenuWidgetStyle()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USlateWidgetStyleContainerBase();
			Z_Construct_UPackage_GameMenuBuilder();
			OuterClass = UGameMenuWidgetStyle::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20080080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_MenuStyle = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MenuStyle"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(MenuStyle, UGameMenuWidgetStyle), 0x0000000000000001, Z_Construct_UScriptStruct_FGameMenuStyle());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GameMenuWidgetStyle.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/GameMenuWidgetStyle.h"));
				MetaData->SetValue(NewProp_MenuStyle, TEXT("Category"), TEXT("Appearance"));
				MetaData->SetValue(NewProp_MenuStyle, TEXT("ModuleRelativePath"), TEXT("Public/GameMenuWidgetStyle.h"));
				MetaData->SetValue(NewProp_MenuStyle, TEXT("ShowOnlyInnerProperties"), TEXT(""));
				MetaData->SetValue(NewProp_MenuStyle, TEXT("ToolTip"), TEXT("The actual data describing the menu's appearance."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameMenuWidgetStyle(Z_Construct_UClass_UGameMenuWidgetStyle, TEXT("UGameMenuWidgetStyle"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameMenuWidgetStyle);
	UPackage* Z_Construct_UPackage_GameMenuBuilder()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/GameMenuBuilder")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x0F0F3565;
			Guid.B = 0x8DAF2953;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS