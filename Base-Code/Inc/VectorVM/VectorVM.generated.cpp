// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Private/VectorVMPrivate.h"
#include "VectorVM.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVectorVM() {}
	void UNiagaraDataObject::StaticRegisterNativesUNiagaraDataObject()
	{
	}
	IMPLEMENT_CLASS(UNiagaraDataObject, 2212037176);
	void UNiagaraCurveDataObject::StaticRegisterNativesUNiagaraCurveDataObject()
	{
	}
	IMPLEMENT_CLASS(UNiagaraCurveDataObject, 1367275122);
	void UNiagaraSparseVolumeDataObject::StaticRegisterNativesUNiagaraSparseVolumeDataObject()
	{
	}
	IMPLEMENT_CLASS(UNiagaraSparseVolumeDataObject, 3651836144);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();
	ENGINE_API class UClass* Z_Construct_UClass_UCurveVector_NoRegister();

	VECTORVM_API class UClass* Z_Construct_UClass_UNiagaraDataObject_NoRegister();
	VECTORVM_API class UClass* Z_Construct_UClass_UNiagaraDataObject();
	VECTORVM_API class UClass* Z_Construct_UClass_UNiagaraCurveDataObject_NoRegister();
	VECTORVM_API class UClass* Z_Construct_UClass_UNiagaraCurveDataObject();
	VECTORVM_API class UClass* Z_Construct_UClass_UNiagaraSparseVolumeDataObject_NoRegister();
	VECTORVM_API class UClass* Z_Construct_UClass_UNiagaraSparseVolumeDataObject();
	VECTORVM_API class UPackage* Z_Construct_UPackage_VectorVM();
	UClass* Z_Construct_UClass_UNiagaraDataObject_NoRegister()
	{
		return UNiagaraDataObject::StaticClass();
	}
	UClass* Z_Construct_UClass_UNiagaraDataObject()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage_VectorVM();
			OuterClass = UNiagaraDataObject::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20081080;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("VectorVMDataObject.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/VectorVMDataObject.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Vector VM data object; encapsulates buffers, curves and other data in its derivatives\n*  for access by VectorVM kernels;"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataObject(Z_Construct_UClass_UNiagaraDataObject, TEXT("UNiagaraDataObject"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataObject);
	UClass* Z_Construct_UClass_UNiagaraCurveDataObject_NoRegister()
	{
		return UNiagaraCurveDataObject::StaticClass();
	}
	UClass* Z_Construct_UClass_UNiagaraCurveDataObject()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UNiagaraDataObject();
			Z_Construct_UPackage_VectorVM();
			OuterClass = UNiagaraCurveDataObject::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20081080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_CurveObj = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurveObj"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(CurveObj, UNiagaraCurveDataObject), 0x0000000000000001, Z_Construct_UClass_UCurveVector_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("VectorVMDataObject.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/VectorVMDataObject.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Curve object; encapsulates a curve for the VectorVM"));
				MetaData->SetValue(NewProp_CurveObj, TEXT("Category"), TEXT("Curve"));
				MetaData->SetValue(NewProp_CurveObj, TEXT("ModuleRelativePath"), TEXT("Public/VectorVMDataObject.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraCurveDataObject(Z_Construct_UClass_UNiagaraCurveDataObject, TEXT("UNiagaraCurveDataObject"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraCurveDataObject);
	UClass* Z_Construct_UClass_UNiagaraSparseVolumeDataObject_NoRegister()
	{
		return UNiagaraSparseVolumeDataObject::StaticClass();
	}
	UClass* Z_Construct_UClass_UNiagaraSparseVolumeDataObject()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UNiagaraDataObject();
			Z_Construct_UPackage_VectorVM();
			OuterClass = UNiagaraSparseVolumeDataObject::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20081088;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("VectorVMDataObject.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/VectorVMDataObject.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Volume data object; encapsulates volumetric data for VectorVM"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraSparseVolumeDataObject(Z_Construct_UClass_UNiagaraSparseVolumeDataObject, TEXT("UNiagaraSparseVolumeDataObject"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraSparseVolumeDataObject);
	UPackage* Z_Construct_UPackage_VectorVM()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/VectorVM")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x0411FCD9;
			Guid.B = 0x1C13BB63;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
