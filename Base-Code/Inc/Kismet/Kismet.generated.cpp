// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Private/BlueprintEditorPrivatePCH.h"
#include "Kismet.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismet() {}
class UScriptStruct* FFavoritedBlueprintPaletteItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KISMET_API class UScriptStruct* Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem();
		extern KISMET_API uint32 Get_Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem_CRC();
		extern KISMET_API class UPackage* Z_Construct_UPackage_Kismet();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem, Z_Construct_UPackage_Kismet(), TEXT("FavoritedBlueprintPaletteItem"), sizeof(FFavoritedBlueprintPaletteItem), Get_Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFavoritedBlueprintPaletteItem(FFavoritedBlueprintPaletteItem::StaticStruct, TEXT("/Script/Kismet"));
static struct FScriptStruct_Kismet_StaticRegisterNativesFFavoritedBlueprintPaletteItem
{
	FScriptStruct_Kismet_StaticRegisterNativesFFavoritedBlueprintPaletteItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FavoritedBlueprintPaletteItem")),new UScriptStruct::TCppStructOps<FFavoritedBlueprintPaletteItem>);
	}
} ScriptStruct_Kismet_StaticRegisterNativesFFavoritedBlueprintPaletteItem;
	void UBlueprintPaletteFavorites::StaticRegisterNativesUBlueprintPaletteFavorites()
	{
	}
	IMPLEMENT_CLASS(UBlueprintPaletteFavorites, 864235872);
	void UK2Node_AsyncAction::StaticRegisterNativesUK2Node_AsyncAction()
	{
	}
	IMPLEMENT_CLASS(UK2Node_AsyncAction, 850019676);
class UScriptStruct* FBlueprintActionMenuItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KISMET_API class UScriptStruct* Z_Construct_UScriptStruct_FBlueprintActionMenuItem();
		extern KISMET_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintActionMenuItem_CRC();
		extern KISMET_API class UPackage* Z_Construct_UPackage_Kismet();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintActionMenuItem, Z_Construct_UPackage_Kismet(), TEXT("BlueprintActionMenuItem"), sizeof(FBlueprintActionMenuItem), Get_Z_Construct_UScriptStruct_FBlueprintActionMenuItem_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintActionMenuItem(FBlueprintActionMenuItem::StaticStruct, TEXT("/Script/Kismet"));
static struct FScriptStruct_Kismet_StaticRegisterNativesFBlueprintActionMenuItem
{
	FScriptStruct_Kismet_StaticRegisterNativesFBlueprintActionMenuItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlueprintActionMenuItem")),new UScriptStruct::TCppStructOps<FBlueprintActionMenuItem>);
	}
} ScriptStruct_Kismet_StaticRegisterNativesFBlueprintActionMenuItem;
static class UEnum* EContextTargetFlags_StaticEnum()
{
	static class UEnum* Singleton = NULL;
	if (!Singleton)
	{
		extern KISMET_API class UEnum* Z_Construct_UEnum_Kismet_EContextTargetFlags();
		extern KISMET_API class UPackage* Z_Construct_UPackage_Kismet();
		Singleton = GetStaticEnum(Z_Construct_UEnum_Kismet_EContextTargetFlags, Z_Construct_UPackage_Kismet(), TEXT("EContextTargetFlags"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EContextTargetFlags(EContextTargetFlags_StaticEnum, TEXT("/Script/Kismet"));
class UScriptStruct* FBlueprintDragDropMenuItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KISMET_API class UScriptStruct* Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem();
		extern KISMET_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem_CRC();
		extern KISMET_API class UPackage* Z_Construct_UPackage_Kismet();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem, Z_Construct_UPackage_Kismet(), TEXT("BlueprintDragDropMenuItem"), sizeof(FBlueprintDragDropMenuItem), Get_Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintDragDropMenuItem(FBlueprintDragDropMenuItem::StaticStruct, TEXT("/Script/Kismet"));
static struct FScriptStruct_Kismet_StaticRegisterNativesFBlueprintDragDropMenuItem
{
	FScriptStruct_Kismet_StaticRegisterNativesFBlueprintDragDropMenuItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlueprintDragDropMenuItem")),new UScriptStruct::TCppStructOps<FBlueprintDragDropMenuItem>);
	}
} ScriptStruct_Kismet_StaticRegisterNativesFBlueprintDragDropMenuItem;
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();
	BLUEPRINTGRAPH_API class UClass* Z_Construct_UClass_UK2Node_BaseAsyncTask();
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();

	KISMET_API class UScriptStruct* Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem();
	KISMET_API class UClass* Z_Construct_UClass_UBlueprintPaletteFavorites_NoRegister();
	KISMET_API class UClass* Z_Construct_UClass_UBlueprintPaletteFavorites();
	KISMET_API class UClass* Z_Construct_UClass_UK2Node_AsyncAction_NoRegister();
	KISMET_API class UClass* Z_Construct_UClass_UK2Node_AsyncAction();
	KISMET_API class UScriptStruct* Z_Construct_UScriptStruct_FBlueprintActionMenuItem();
	KISMET_API class UEnum* Z_Construct_UEnum_Kismet_EContextTargetFlags();
	KISMET_API class UScriptStruct* Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem();
	KISMET_API class UPackage* Z_Construct_UPackage_Kismet();
	UScriptStruct* Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem()
	{
		UPackage* Outer=Z_Construct_UPackage_Kismet();
		extern uint32 Get_Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReload(Outer, TEXT("FavoritedBlueprintPaletteItem"), sizeof(FFavoritedBlueprintPaletteItem), Get_Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem_CRC());
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FavoritedBlueprintPaletteItem"), RF_Public|RF_Transient|RF_Native) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FFavoritedBlueprintPaletteItem>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintPaletteFavorites.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("FFavoritedPaletteItem"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem_CRC() { return 3696561948U; }
	UClass* Z_Construct_UClass_UBlueprintPaletteFavorites_NoRegister()
	{
		return UBlueprintPaletteFavorites::StaticClass();
	}
	UClass* Z_Construct_UClass_UBlueprintPaletteFavorites()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage_Kismet();
			OuterClass = UBlueprintPaletteFavorites::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100084;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_CurrentProfile = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentProfile"), RF_Public|RF_Transient|RF_Native) UStrProperty(CPP_PROPERTY_BASE(CurrentProfile, UBlueprintPaletteFavorites), 0x0000000000004000);
				UProperty* NewProp_CurrentFavorites = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentFavorites"), RF_Public|RF_Transient|RF_Native) UArrayProperty(CPP_PROPERTY_BASE(CurrentFavorites, UBlueprintPaletteFavorites), 0x0000000000002000);
				UProperty* NewProp_CurrentFavorites_Inner = new(EC_InternalUseOnlyConstructor, NewProp_CurrentFavorites, TEXT("CurrentFavorites"), RF_Public|RF_Transient|RF_Native) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem());
				UProperty* NewProp_CustomFavorites = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CustomFavorites"), RF_Public|RF_Transient|RF_Native) UArrayProperty(CPP_PROPERTY_BASE(CustomFavorites, UBlueprintPaletteFavorites), 0x0000000000004000);
				UProperty* NewProp_CustomFavorites_Inner = new(EC_InternalUseOnlyConstructor, NewProp_CustomFavorites, TEXT("CustomFavorites"), RF_Public|RF_Transient|RF_Native) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("EditorPerProjectUserSettings"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BlueprintPaletteFavorites.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintPaletteFavorites.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("FBlueprintPaletteFavorites"));
				MetaData->SetValue(NewProp_CurrentProfile, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintPaletteFavorites.h"));
				MetaData->SetValue(NewProp_CurrentProfile, TEXT("ToolTip"), TEXT("Users could load pre-existing profiles (intended to share favorites, and\nhook into tutorials). If empty, the default profile will be loaded; if\nthe user has customized a pre-existing profile, then this will be \"CustomProfile\"."));
				MetaData->SetValue(NewProp_CurrentFavorites, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintPaletteFavorites.h"));
				MetaData->SetValue(NewProp_CurrentFavorites, TEXT("ToolTip"), TEXT("A list of favorites that is constructed in PostLoad() (either from a\nprofile or the user's set of CustomFavorites). This list is up to date\nand maintained at runtime."));
				MetaData->SetValue(NewProp_CustomFavorites, TEXT("ModuleRelativePath"), TEXT("Classes/BlueprintPaletteFavorites.h"));
				MetaData->SetValue(NewProp_CustomFavorites, TEXT("ToolTip"), TEXT("A list of strings that are used to identify specific palette actions.\nThis is what gets saved out when the user has customized their own set,\nand is not updated until PreSave()."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintPaletteFavorites(Z_Construct_UClass_UBlueprintPaletteFavorites, TEXT("UBlueprintPaletteFavorites"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintPaletteFavorites);
	UClass* Z_Construct_UClass_UK2Node_AsyncAction_NoRegister()
	{
		return UK2Node_AsyncAction::StaticClass();
	}
	UClass* Z_Construct_UClass_UK2Node_AsyncAction()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UK2Node_BaseAsyncTask();
			Z_Construct_UPackage_Kismet();
			OuterClass = UK2Node_AsyncAction::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Nodes/K2Node_AsyncAction.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Nodes/K2Node_AsyncAction.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("!!! The proxy object should have RF_StrongRefOnFrame flag. !!!"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_AsyncAction(Z_Construct_UClass_UK2Node_AsyncAction, TEXT("UK2Node_AsyncAction"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_AsyncAction);
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintActionMenuItem()
	{
		UPackage* Outer=Z_Construct_UPackage_Kismet();
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintActionMenuItem_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReload(Outer, TEXT("BlueprintActionMenuItem"), sizeof(FBlueprintActionMenuItem), Get_Z_Construct_UScriptStruct_FBlueprintActionMenuItem_CRC());
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BlueprintActionMenuItem"), RF_Public|RF_Transient|RF_Native) UScriptStruct(FObjectInitializer(), Z_Construct_UScriptStruct_FEdGraphSchemaAction(), new UScriptStruct::TCppStructOps<FBlueprintActionMenuItem>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintActionMenuItem.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Wrapper around a UBlueprintNodeSpawner, which takes care of specialized\nnode spawning. This class should not be sub-classed, any special handling\nshould be done inside a UBlueprintNodeSpawner subclass, which will be\ninvoked from this class (separated to divide ui and node-spawning)."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintActionMenuItem_CRC() { return 3341157373U; }
	UEnum* Z_Construct_UEnum_Kismet_EContextTargetFlags()
	{
		UPackage* Outer=Z_Construct_UPackage_Kismet();
		extern uint32 Get_Z_Construct_UEnum_Kismet_EContextTargetFlags_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReload(Outer, TEXT("EContextTargetFlags"), 0, Get_Z_Construct_UEnum_Kismet_EContextTargetFlags_CRC());
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EContextTargetFlags"), RF_Public|RF_Transient|RF_Native) UEnum(FObjectInitializer());
			TArray<TPair<FName, uint8>> EnumNames;
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EContextTargetFlags::TARGET_Blueprint")), 1));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EContextTargetFlags::TARGET_SubComponents")), 2));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EContextTargetFlags::TARGET_NodeTarget")), 4));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EContextTargetFlags::TARGET_PinObject")), 8));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EContextTargetFlags::TARGET_SiblingPinObjects")), 16));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EContextTargetFlags::TARGET_BlueprintLibraries")), 32));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EContextTargetFlags::ContextTargetFlagsEnd")), 33));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EContextTargetFlags::EContextTargetFlags_MAX")), 34));
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ContextTargetFlagsEnd.Hidden"), TEXT(""));
			MetaData->SetValue(ReturnEnum, TEXT("ContextTargetFlagsEnd.ToolTip"), TEXT("+1 to the last flag (so we can easily iterate these flags)"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintActionMenuUtils.h"));
			MetaData->SetValue(ReturnEnum, TEXT("TARGET_Blueprint.DisplayName"), TEXT("This Blueprint"));
			MetaData->SetValue(ReturnEnum, TEXT("TARGET_Blueprint.ToolTip"), TEXT("Include functions and variables that belong to this Blueprint."));
			MetaData->SetValue(ReturnEnum, TEXT("TARGET_BlueprintLibraries.DisplayName"), TEXT("Libraries"));
			MetaData->SetValue(ReturnEnum, TEXT("TARGET_BlueprintLibraries.ToolTip"), TEXT("Include static functions that are globally accessible (belonging to function/macro libraries, etc.)."));
			MetaData->SetValue(ReturnEnum, TEXT("TARGET_NodeTarget.DisplayName"), TEXT("Node Target"));
			MetaData->SetValue(ReturnEnum, TEXT("TARGET_NodeTarget.ToolTip"), TEXT("Include functions and variables that belong to the same class that the pin's node does."));
			MetaData->SetValue(ReturnEnum, TEXT("TARGET_PinObject.DisplayName"), TEXT("Pin Type Class"));
			MetaData->SetValue(ReturnEnum, TEXT("TARGET_PinObject.ToolTip"), TEXT("Include functions and variables that belong to this pin type."));
			MetaData->SetValue(ReturnEnum, TEXT("TARGET_SiblingPinObjects.DisplayName"), TEXT("Other Object Outputs"));
			MetaData->SetValue(ReturnEnum, TEXT("TARGET_SiblingPinObjects.ToolTip"), TEXT("Include functions and variables that belong to any of this node's output types."));
			MetaData->SetValue(ReturnEnum, TEXT("TARGET_SubComponents.DisplayName"), TEXT("Components"));
			MetaData->SetValue(ReturnEnum, TEXT("TARGET_SubComponents.ToolTip"), TEXT("Include functions that belong to components of this Blueprint and/or the other target classes."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_Kismet_EContextTargetFlags_CRC() { return 3717068387U; }
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem()
	{
		UPackage* Outer=Z_Construct_UPackage_Kismet();
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReload(Outer, TEXT("BlueprintDragDropMenuItem"), sizeof(FBlueprintDragDropMenuItem), Get_Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem_CRC());
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BlueprintDragDropMenuItem"), RF_Public|RF_Transient|RF_Native) UScriptStruct(FObjectInitializer(), Z_Construct_UScriptStruct_FEdGraphSchemaAction(), new UScriptStruct::TCppStructOps<FBlueprintDragDropMenuItem>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/BlueprintDragDropMenuItem.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("At certain times we want a single menu entry that represents a set of\nUBlueprintNodeSpawners (generally when all those UBlueprintNodeSpawners wrap\nthe same UField). We do this to keep the menu less jumbled, and instead\nuse the drag/drop action to present a sub-menu to the user (so they can pick\nthe the node type that they want). We do this with both delegates and\nvariable nodes (where the user can pick a getter vs. a setter, etc.).\n\nThis class represents those \"consolidated\" actions, and essentially serves\nas a FDragDropOperation spawner. It wraps a single UBlueprintNodeSpawner (any\none of the set that it is supposed to represent), that it uses to determine\nthe proper FDragDropOperation."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem_CRC() { return 66713665U; }
	UPackage* Z_Construct_UPackage_Kismet()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/Kismet")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xDC9137D7;
			Guid.B = 0x1EDBD26C;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS