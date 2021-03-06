// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Private/NewsFeedPrivatePCH.h"
#include "NewsFeed.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewsFeed() {}
static class UEnum* ENewsFeedSource_StaticEnum()
{
	static class UEnum* Singleton = NULL;
	if (!Singleton)
	{
		extern NEWSFEED_API class UEnum* Z_Construct_UEnum_NewsFeed_ENewsFeedSource();
		extern NEWSFEED_API class UPackage* Z_Construct_UPackage_NewsFeed();
		Singleton = GetStaticEnum(Z_Construct_UEnum_NewsFeed_ENewsFeedSource, Z_Construct_UPackage_NewsFeed(), TEXT("ENewsFeedSource"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENewsFeedSource(ENewsFeedSource_StaticEnum, TEXT("/Script/NewsFeed"));
	void UNewsFeedSettings::StaticRegisterNativesUNewsFeedSettings()
	{
	}
	IMPLEMENT_CLASS(UNewsFeedSettings, 1724783743);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FGuid();

	NEWSFEED_API class UEnum* Z_Construct_UEnum_NewsFeed_ENewsFeedSource();
	NEWSFEED_API class UClass* Z_Construct_UClass_UNewsFeedSettings_NoRegister();
	NEWSFEED_API class UClass* Z_Construct_UClass_UNewsFeedSettings();
	NEWSFEED_API class UPackage* Z_Construct_UPackage_NewsFeed();
	UEnum* Z_Construct_UEnum_NewsFeed_ENewsFeedSource()
	{
		UPackage* Outer=Z_Construct_UPackage_NewsFeed();
		extern uint32 Get_Z_Construct_UEnum_NewsFeed_ENewsFeedSource_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReload(Outer, TEXT("ENewsFeedSource"), 0, Get_Z_Construct_UEnum_NewsFeed_ENewsFeedSource_CRC());
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ENewsFeedSource"), RF_Public|RF_Transient|RF_Native) UEnum(FObjectInitializer());
			TArray<TPair<FName, uint8>> EnumNames;
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("NEWSFEED_Cdn")), 0));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("NEWSFEED_Local")), 1));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("NEWSFEED_Mcp")), 2));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("NEWSFEED_MAX")), 3));
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Regular);
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Private/Implementation/NewsFeedSettings.h"));
			MetaData->SetValue(ReturnEnum, TEXT("NEWSFEED_Cdn.ToolTip"), TEXT("Fetch the news feed from the CDN."));
			MetaData->SetValue(ReturnEnum, TEXT("NEWSFEED_Local.ToolTip"), TEXT("Fetch the news feed from the local file system (for testing purposes only)."));
			MetaData->SetValue(ReturnEnum, TEXT("NEWSFEED_Mcp.ToolTip"), TEXT("Fetch the news feed with MCP (not implemented yet)."));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Enumerates sources for news feed data."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_NewsFeed_ENewsFeedSource_CRC() { return 2802856132U; }
	UClass* Z_Construct_UClass_UNewsFeedSettings_NoRegister()
	{
		return UNewsFeedSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UNewsFeedSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage_NewsFeed();
			OuterClass = UNewsFeedSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000084;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(ShowOnlyUnreadItems, UNewsFeedSettings, bool);
				UProperty* NewProp_ShowOnlyUnreadItems = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ShowOnlyUnreadItems"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ShowOnlyUnreadItems, UNewsFeedSettings), 0x0000000000004001, CPP_BOOL_PROPERTY_BITMASK(ShowOnlyUnreadItems, UNewsFeedSettings), sizeof(bool), true);
				UProperty* NewProp_ReadItems = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ReadItems"), RF_Public|RF_Transient|RF_Native) UArrayProperty(CPP_PROPERTY_BASE(ReadItems, UNewsFeedSettings), 0x0000000000004000);
				UProperty* NewProp_ReadItems_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ReadItems, TEXT("ReadItems"), RF_Public|RF_Transient|RF_Native) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000, Z_Construct_UScriptStruct_FGuid());
				UProperty* NewProp_MaxItemsToShow = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxItemsToShow"), RF_Public|RF_Transient|RF_Native) UIntProperty(CPP_PROPERTY_BASE(MaxItemsToShow, UNewsFeedSettings), 0x0000000000004001);
				UProperty* NewProp_Source = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Source"), RF_Public|RF_Transient|RF_Native) UByteProperty(CPP_PROPERTY_BASE(Source, UNewsFeedSettings), 0x0000000000004000, Z_Construct_UEnum_NewsFeed_ENewsFeedSource());
				UProperty* NewProp_LocalSourcePath = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LocalSourcePath"), RF_Public|RF_Transient|RF_Native) UStrProperty(CPP_PROPERTY_BASE(LocalSourcePath, UNewsFeedSettings), 0x0000000000004000);
				UProperty* NewProp_CdnSourceUrl = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CdnSourceUrl"), RF_Public|RF_Transient|RF_Native) UStrProperty(CPP_PROPERTY_BASE(CdnSourceUrl, UNewsFeedSettings), 0x0000000000004000);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("EditorSettings"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Implementation/NewsFeedSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Private/Implementation/NewsFeedSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Holds the settings for the news feed."));
				MetaData->SetValue(NewProp_ShowOnlyUnreadItems, TEXT("Category"), TEXT("Display"));
				MetaData->SetValue(NewProp_ShowOnlyUnreadItems, TEXT("ModuleRelativePath"), TEXT("Private/Implementation/NewsFeedSettings.h"));
				MetaData->SetValue(NewProp_ShowOnlyUnreadItems, TEXT("ToolTip"), TEXT("Whether to show only unread news feed items."));
				MetaData->SetValue(NewProp_ReadItems, TEXT("ModuleRelativePath"), TEXT("Private/Implementation/NewsFeedSettings.h"));
				MetaData->SetValue(NewProp_ReadItems, TEXT("ToolTip"), TEXT("List of news feed items that have been marked as read."));
				MetaData->SetValue(NewProp_MaxItemsToShow, TEXT("Category"), TEXT("Display"));
				MetaData->SetValue(NewProp_MaxItemsToShow, TEXT("DisplayName"), TEXT("Most Recent Items To Show"));
				MetaData->SetValue(NewProp_MaxItemsToShow, TEXT("ModuleRelativePath"), TEXT("Private/Implementation/NewsFeedSettings.h"));
				MetaData->SetValue(NewProp_MaxItemsToShow, TEXT("ToolTip"), TEXT("The maximum number of news items to show."));
				MetaData->SetValue(NewProp_Source, TEXT("ModuleRelativePath"), TEXT("Private/Implementation/NewsFeedSettings.h"));
				MetaData->SetValue(NewProp_Source, TEXT("ToolTip"), TEXT("The source from which to fetch the news feed data.\n\nUse Local for testing, NEWSFEED_Cdn for production."));
				MetaData->SetValue(NewProp_LocalSourcePath, TEXT("ModuleRelativePath"), TEXT("Private/Implementation/NewsFeedSettings.h"));
				MetaData->SetValue(NewProp_LocalSourcePath, TEXT("ToolTip"), TEXT("The path to the local data files when using Source=Local."));
				MetaData->SetValue(NewProp_CdnSourceUrl, TEXT("ModuleRelativePath"), TEXT("Private/Implementation/NewsFeedSettings.h"));
				MetaData->SetValue(NewProp_CdnSourceUrl, TEXT("ToolTip"), TEXT("The URL at which the news feed data files are located when using the Source=Cdn."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNewsFeedSettings(Z_Construct_UClass_UNewsFeedSettings, TEXT("UNewsFeedSettings"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNewsFeedSettings);
	UPackage* Z_Construct_UPackage_NewsFeed()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/NewsFeed")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x7B622079;
			Guid.B = 0xB2C670F6;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
