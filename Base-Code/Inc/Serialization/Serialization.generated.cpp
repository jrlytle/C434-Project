// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Private/SerializationPrivatePCH.h"
#include "Serialization.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSerialization() {}
class UScriptStruct* FStructSerializerTestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerTestStruct();
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerTestStruct_CRC();
		extern SERIALIZATION_API class UPackage* Z_Construct_UPackage_Serialization();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerTestStruct, Z_Construct_UPackage_Serialization(), TEXT("StructSerializerTestStruct"), sizeof(FStructSerializerTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerTestStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerTestStruct(FStructSerializerTestStruct::StaticStruct, TEXT("/Script/Serialization"));
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerTestStruct;
class UScriptStruct* FStructSerializerArrayTestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct();
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_CRC();
		extern SERIALIZATION_API class UPackage* Z_Construct_UPackage_Serialization();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct, Z_Construct_UPackage_Serialization(), TEXT("StructSerializerArrayTestStruct"), sizeof(FStructSerializerArrayTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerArrayTestStruct(FStructSerializerArrayTestStruct::StaticStruct, TEXT("/Script/Serialization"));
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerArrayTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerArrayTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerArrayTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerArrayTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerArrayTestStruct;
class UScriptStruct* FStructSerializerBuiltinTestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct();
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_CRC();
		extern SERIALIZATION_API class UPackage* Z_Construct_UPackage_Serialization();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct, Z_Construct_UPackage_Serialization(), TEXT("StructSerializerBuiltinTestStruct"), sizeof(FStructSerializerBuiltinTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerBuiltinTestStruct(FStructSerializerBuiltinTestStruct::StaticStruct, TEXT("/Script/Serialization"));
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerBuiltinTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerBuiltinTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerBuiltinTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerBuiltinTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerBuiltinTestStruct;
class UScriptStruct* FStructSerializerObjectTestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct();
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_CRC();
		extern SERIALIZATION_API class UPackage* Z_Construct_UPackage_Serialization();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct, Z_Construct_UPackage_Serialization(), TEXT("StructSerializerObjectTestStruct"), sizeof(FStructSerializerObjectTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerObjectTestStruct(FStructSerializerObjectTestStruct::StaticStruct, TEXT("/Script/Serialization"));
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerObjectTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerObjectTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerObjectTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerObjectTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerObjectTestStruct;
class UScriptStruct* FStructSerializerBooleanTestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct();
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_CRC();
		extern SERIALIZATION_API class UPackage* Z_Construct_UPackage_Serialization();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct, Z_Construct_UPackage_Serialization(), TEXT("StructSerializerBooleanTestStruct"), sizeof(FStructSerializerBooleanTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerBooleanTestStruct(FStructSerializerBooleanTestStruct::StaticStruct, TEXT("/Script/Serialization"));
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerBooleanTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerBooleanTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerBooleanTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerBooleanTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerBooleanTestStruct;
class UScriptStruct* FStructSerializerNumericTestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct();
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_CRC();
		extern SERIALIZATION_API class UPackage* Z_Construct_UPackage_Serialization();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct, Z_Construct_UPackage_Serialization(), TEXT("StructSerializerNumericTestStruct"), sizeof(FStructSerializerNumericTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerNumericTestStruct(FStructSerializerNumericTestStruct::StaticStruct, TEXT("/Script/Serialization"));
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerNumericTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerNumericTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerNumericTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerNumericTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerNumericTestStruct;
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject_NoRegister();

	SERIALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerTestStruct();
	SERIALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct();
	SERIALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct();
	SERIALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct();
	SERIALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct();
	SERIALIZATION_API class UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct();
	SERIALIZATION_API class UPackage* Z_Construct_UPackage_Serialization();
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerTestStruct()
	{
		UPackage* Outer=Z_Construct_UPackage_Serialization();
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerTestStruct_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReload(Outer, TEXT("StructSerializerTestStruct"), sizeof(FStructSerializerTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerTestStruct_CRC());
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StructSerializerTestStruct"), RF_Public|RF_Transient|RF_Native) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FStructSerializerTestStruct>, EStructFlags(0x00000001));
			UProperty* NewProp_Arrays = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Arrays"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(Arrays, FStructSerializerTestStruct), 0x0000000000000000, Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct());
			UProperty* NewProp_Builtins = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Builtins"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(Builtins, FStructSerializerTestStruct), 0x0000000000000000, Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct());
			UProperty* NewProp_Objects = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Objects"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(Objects, FStructSerializerTestStruct), 0x0000000000000000, Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct());
			UProperty* NewProp_Booleans = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Booleans"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(Booleans, FStructSerializerTestStruct), 0x0000000000000000, Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct());
			UProperty* NewProp_Numerics = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Numerics"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(Numerics, FStructSerializerTestStruct), 0x0000000000000000, Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Test structure for all supported types."));
			MetaData->SetValue(NewProp_Arrays, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_Builtins, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_Objects, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_Booleans, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_Numerics, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerTestStruct_CRC() { return 3869672093U; }
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct()
	{
		UPackage* Outer=Z_Construct_UPackage_Serialization();
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReload(Outer, TEXT("StructSerializerArrayTestStruct"), sizeof(FStructSerializerArrayTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_CRC());
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StructSerializerArrayTestStruct"), RF_Public|RF_Transient|RF_Native) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FStructSerializerArrayTestStruct>, EStructFlags(0x00000001));
			UProperty* NewProp_VectorArray = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("VectorArray"), RF_Public|RF_Transient|RF_Native) UArrayProperty(CPP_PROPERTY_BASE(VectorArray, FStructSerializerArrayTestStruct), 0x0000000000000000);
			UProperty* NewProp_VectorArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_VectorArray, TEXT("VectorArray"), RF_Public|RF_Transient|RF_Native) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_StaticFloatArray = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("StaticFloatArray"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(StaticFloatArray, FStructSerializerArrayTestStruct), 0x0000000000000000);
			NewProp_StaticFloatArray->ArrayDim = CPP_ARRAY_DIM(StaticFloatArray, FStructSerializerArrayTestStruct);
			UProperty* NewProp_StaticInt32Array = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("StaticInt32Array"), RF_Public|RF_Transient|RF_Native) UIntProperty(CPP_PROPERTY_BASE(StaticInt32Array, FStructSerializerArrayTestStruct), 0x0000000000000000);
			NewProp_StaticInt32Array->ArrayDim = CPP_ARRAY_DIM(StaticInt32Array, FStructSerializerArrayTestStruct);
			UProperty* NewProp_StaticSingleElement = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("StaticSingleElement"), RF_Public|RF_Transient|RF_Native) UIntProperty(CPP_PROPERTY_BASE(StaticSingleElement, FStructSerializerArrayTestStruct), 0x0000000000000000);
			NewProp_StaticSingleElement->ArrayDim = CPP_ARRAY_DIM(StaticSingleElement, FStructSerializerArrayTestStruct);
			UProperty* NewProp_Int32Array = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Int32Array"), RF_Public|RF_Transient|RF_Native) UArrayProperty(CPP_PROPERTY_BASE(Int32Array, FStructSerializerArrayTestStruct), 0x0000000000000000);
			UProperty* NewProp_Int32Array_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Int32Array, TEXT("Int32Array"), RF_Public|RF_Transient|RF_Native) UIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Test structure for array properties."));
			MetaData->SetValue(NewProp_VectorArray, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_StaticFloatArray, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_StaticInt32Array, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_StaticSingleElement, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_Int32Array, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_CRC() { return 2742628795U; }
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct()
	{
		UPackage* Outer=Z_Construct_UPackage_Serialization();
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReload(Outer, TEXT("StructSerializerBuiltinTestStruct"), sizeof(FStructSerializerBuiltinTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_CRC());
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StructSerializerBuiltinTestStruct"), RF_Public|RF_Transient|RF_Native) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FStructSerializerBuiltinTestStruct>, EStructFlags(0x00000001));
			UProperty* NewProp_Vector = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Vector"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(Vector, FStructSerializerBuiltinTestStruct), 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Rotator = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Rotator"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(Rotator, FStructSerializerBuiltinTestStruct), 0x0000000000000000, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_String = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("String"), RF_Public|RF_Transient|RF_Native) UStrProperty(CPP_PROPERTY_BASE(String, FStructSerializerBuiltinTestStruct), 0x0000000000000000);
			UProperty* NewProp_Name = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Name"), RF_Public|RF_Transient|RF_Native) UNameProperty(CPP_PROPERTY_BASE(Name, FStructSerializerBuiltinTestStruct), 0x0000000000000000);
			UProperty* NewProp_Guid = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Guid"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(Guid, FStructSerializerBuiltinTestStruct), 0x0000000000000000, Z_Construct_UScriptStruct_FGuid());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Test structure for properties of various built-in types."));
			MetaData->SetValue(NewProp_Vector, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_Rotator, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_String, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_Name, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_Guid, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_CRC() { return 433918823U; }
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct()
	{
		UPackage* Outer=Z_Construct_UPackage_Serialization();
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReload(Outer, TEXT("StructSerializerObjectTestStruct"), sizeof(FStructSerializerObjectTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_CRC());
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StructSerializerObjectTestStruct"), RF_Public|RF_Transient|RF_Native) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FStructSerializerObjectTestStruct>, EStructFlags(0x00000001));
			UProperty* NewProp_ObjectPtr = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ObjectPtr"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(ObjectPtr, FStructSerializerObjectTestStruct), 0x0000000000000000, Z_Construct_UClass_UObject_NoRegister());
			UProperty* NewProp_Class = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Class"), RF_Public|RF_Transient|RF_Native) UClassProperty(CPP_PROPERTY_BASE(Class, FStructSerializerObjectTestStruct), 0x0004000000000000, Z_Construct_UClass_UObject_NoRegister());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Test structure for UObject properties."));
			MetaData->SetValue(NewProp_ObjectPtr, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_Class, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_CRC() { return 2039871708U; }
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct()
	{
		UPackage* Outer=Z_Construct_UPackage_Serialization();
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReload(Outer, TEXT("StructSerializerBooleanTestStruct"), sizeof(FStructSerializerBooleanTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_CRC());
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StructSerializerBooleanTestStruct"), RF_Public|RF_Transient|RF_Native) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FStructSerializerBooleanTestStruct>, EStructFlags(0x00000001));
			UProperty* NewProp_Bitfield = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Bitfield"), RF_Public|RF_Transient|RF_Native) UUInt32Property(CPP_PROPERTY_BASE(Bitfield, FStructSerializerBooleanTestStruct), 0x0000000000000000);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(BoolTrue, FStructSerializerBooleanTestStruct, bool);
			UProperty* NewProp_BoolTrue = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BoolTrue"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(BoolTrue, FStructSerializerBooleanTestStruct), 0x0000000000000000, CPP_BOOL_PROPERTY_BITMASK(BoolTrue, FStructSerializerBooleanTestStruct), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(BoolFalse, FStructSerializerBooleanTestStruct, bool);
			UProperty* NewProp_BoolFalse = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BoolFalse"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(BoolFalse, FStructSerializerBooleanTestStruct), 0x0000000000000000, CPP_BOOL_PROPERTY_BITMASK(BoolFalse, FStructSerializerBooleanTestStruct), sizeof(bool), true);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Test structure for boolean properties."));
			MetaData->SetValue(NewProp_Bitfield, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_BoolTrue, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_BoolFalse, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_CRC() { return 2925665521U; }
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct()
	{
		UPackage* Outer=Z_Construct_UPackage_Serialization();
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReload(Outer, TEXT("StructSerializerNumericTestStruct"), sizeof(FStructSerializerNumericTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_CRC());
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StructSerializerNumericTestStruct"), RF_Public|RF_Transient|RF_Native) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FStructSerializerNumericTestStruct>, EStructFlags(0x00000001));
			UProperty* NewProp_Double = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Double"), RF_Public|RF_Transient|RF_Native) UDoubleProperty(CPP_PROPERTY_BASE(Double, FStructSerializerNumericTestStruct), 0x0000000000000000);
			UProperty* NewProp_Float = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Float"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(Float, FStructSerializerNumericTestStruct), 0x0000000000000000);
			UProperty* NewProp_UInt64 = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("UInt64"), RF_Public|RF_Transient|RF_Native) UUInt64Property(CPP_PROPERTY_BASE(UInt64, FStructSerializerNumericTestStruct), 0x0000000000000000);
			UProperty* NewProp_UInt32 = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("UInt32"), RF_Public|RF_Transient|RF_Native) UUInt32Property(CPP_PROPERTY_BASE(UInt32, FStructSerializerNumericTestStruct), 0x0000000000000000);
			UProperty* NewProp_UInt16 = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("UInt16"), RF_Public|RF_Transient|RF_Native) UUInt16Property(CPP_PROPERTY_BASE(UInt16, FStructSerializerNumericTestStruct), 0x0000000000000000);
			UProperty* NewProp_UInt8 = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("UInt8"), RF_Public|RF_Transient|RF_Native) UByteProperty(CPP_PROPERTY_BASE(UInt8, FStructSerializerNumericTestStruct), 0x0000000000000000);
			UProperty* NewProp_Int64 = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Int64"), RF_Public|RF_Transient|RF_Native) UInt64Property(CPP_PROPERTY_BASE(Int64, FStructSerializerNumericTestStruct), 0x0000000000000000);
			UProperty* NewProp_Int32 = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Int32"), RF_Public|RF_Transient|RF_Native) UIntProperty(CPP_PROPERTY_BASE(Int32, FStructSerializerNumericTestStruct), 0x0000000000000000);
			UProperty* NewProp_Int16 = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Int16"), RF_Public|RF_Transient|RF_Native) UInt16Property(CPP_PROPERTY_BASE(Int16, FStructSerializerNumericTestStruct), 0x0000000000000000);
			UProperty* NewProp_Int8 = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Int8"), RF_Public|RF_Transient|RF_Native) UInt8Property(CPP_PROPERTY_BASE(Int8, FStructSerializerNumericTestStruct), 0x0000000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Test structure for numeric properties."));
			MetaData->SetValue(NewProp_Double, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_Float, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_UInt64, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_UInt32, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_UInt16, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_UInt8, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_Int64, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_Int32, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_Int16, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
			MetaData->SetValue(NewProp_Int8, TEXT("ModuleRelativePath"), TEXT("Private/Tests/StructSerializerTestTypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_CRC() { return 3615112540U; }
	UPackage* Z_Construct_UPackage_Serialization()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/Serialization")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x44A537B1;
			Guid.B = 0xD1F00275;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
