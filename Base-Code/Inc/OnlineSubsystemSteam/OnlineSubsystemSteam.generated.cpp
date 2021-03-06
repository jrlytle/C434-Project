// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Private/OnlineSubsystemSteamPrivatePCH.h"
#include "OnlineSubsystemSteam.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineSubsystemSteam() {}
	void USteamNetConnection::StaticRegisterNativesUSteamNetConnection()
	{
	}
	IMPLEMENT_CLASS(USteamNetConnection, 3100593522);
	void USteamNetDriver::StaticRegisterNativesUSteamNetDriver()
	{
	}
	IMPLEMENT_CLASS(USteamNetDriver, 54576584);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ONLINESUBSYSTEMUTILS_API class UClass* Z_Construct_UClass_UIpConnection();
	ONLINESUBSYSTEMUTILS_API class UClass* Z_Construct_UClass_UIpNetDriver();

	ONLINESUBSYSTEMSTEAM_API class UClass* Z_Construct_UClass_USteamNetConnection_NoRegister();
	ONLINESUBSYSTEMSTEAM_API class UClass* Z_Construct_UClass_USteamNetConnection();
	ONLINESUBSYSTEMSTEAM_API class UClass* Z_Construct_UClass_USteamNetDriver_NoRegister();
	ONLINESUBSYSTEMSTEAM_API class UClass* Z_Construct_UClass_USteamNetDriver();
	ONLINESUBSYSTEMSTEAM_API class UPackage* Z_Construct_UPackage_OnlineSubsystemSteam();
	UClass* Z_Construct_UClass_USteamNetConnection_NoRegister()
	{
		return USteamNetConnection::StaticClass();
	}
	UClass* Z_Construct_UClass_USteamNetConnection()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UIpConnection();
			Z_Construct_UPackage_OnlineSubsystemSteam();
			OuterClass = USteamNetConnection::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2000008C;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsPassthrough, USteamNetConnection, bool);
				UProperty* NewProp_bIsPassthrough = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIsPassthrough"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsPassthrough, USteamNetConnection), 0x0000000000000000, CPP_BOOL_PROPERTY_BITMASK(bIsPassthrough, USteamNetConnection), sizeof(bool), true);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SteamNetConnection.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/SteamNetConnection.h"));
				MetaData->SetValue(NewProp_bIsPassthrough, TEXT("ModuleRelativePath"), TEXT("Classes/SteamNetConnection.h"));
				MetaData->SetValue(NewProp_bIsPassthrough, TEXT("ToolTip"), TEXT("Is this net connection passthrough to IpConnection"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamNetConnection(Z_Construct_UClass_USteamNetConnection, TEXT("USteamNetConnection"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamNetConnection);
	UClass* Z_Construct_UClass_USteamNetDriver_NoRegister()
	{
		return USteamNetDriver::StaticClass();
	}
	UClass* Z_Construct_UClass_USteamNetDriver()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UIpNetDriver();
			Z_Construct_UPackage_OnlineSubsystemSteam();
			OuterClass = USteamNetDriver::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2000008C;


				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SteamNetDriver.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/SteamNetDriver.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamNetDriver(Z_Construct_UClass_USteamNetDriver, TEXT("USteamNetDriver"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamNetDriver);
	UPackage* Z_Construct_UPackage_OnlineSubsystemSteam()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/OnlineSubsystemSteam")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x9F6AF28D;
			Guid.B = 0x9F31813E;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
