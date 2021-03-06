// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Private/SourceCodeAccessPrivatePCH.h"
#include "SourceCodeAccess.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceCodeAccess() {}
	void USourceCodeAccessSettings::StaticRegisterNativesUSourceCodeAccessSettings()
	{
	}
	IMPLEMENT_CLASS(USourceCodeAccessSettings, 288604169);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();

	SOURCECODEACCESS_API class UClass* Z_Construct_UClass_USourceCodeAccessSettings_NoRegister();
	SOURCECODEACCESS_API class UClass* Z_Construct_UClass_USourceCodeAccessSettings();
	SOURCECODEACCESS_API class UPackage* Z_Construct_UPackage_SourceCodeAccess();
	UClass* Z_Construct_UClass_USourceCodeAccessSettings_NoRegister()
	{
		return USourceCodeAccessSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_USourceCodeAccessSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage_SourceCodeAccess();
			OuterClass = USourceCodeAccessSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000084;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_PreferredAccessor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PreferredAccessor"), RF_Public|RF_Transient|RF_Native) UStrProperty(CPP_PROPERTY_BASE(PreferredAccessor, USourceCodeAccessSettings), 0x0000000000004001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("EditorPerProjectUserSettings"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SourceCodeAccessSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Private/SourceCodeAccessSettings.h"));
				MetaData->SetValue(NewProp_PreferredAccessor, TEXT("Category"), TEXT("Source Code Editor"));
				MetaData->SetValue(NewProp_PreferredAccessor, TEXT("DisplayName"), TEXT("Source Code Editor"));
				MetaData->SetValue(NewProp_PreferredAccessor, TEXT("ModuleRelativePath"), TEXT("Private/SourceCodeAccessSettings.h"));
				MetaData->SetValue(NewProp_PreferredAccessor, TEXT("ToolTip"), TEXT("The source code editor we prefer to use."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USourceCodeAccessSettings(Z_Construct_UClass_USourceCodeAccessSettings, TEXT("USourceCodeAccessSettings"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceCodeAccessSettings);
	UPackage* Z_Construct_UPackage_SourceCodeAccess()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/SourceCodeAccess")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xFBB37CDC;
			Guid.B = 0x664BB273;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
