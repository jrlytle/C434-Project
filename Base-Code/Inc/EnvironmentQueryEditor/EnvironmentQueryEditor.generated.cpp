// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Private/EnvironmentQueryEditorPrivatePCH.h"
#include "EnvironmentQueryEditor.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvironmentQueryEditor() {}
	void UEdGraphSchema_EnvironmentQuery::StaticRegisterNativesUEdGraphSchema_EnvironmentQuery()
	{
	}
	IMPLEMENT_CLASS(UEdGraphSchema_EnvironmentQuery, 350086005);
	void UEnvironmentQueryFactory::StaticRegisterNativesUEnvironmentQueryFactory()
	{
	}
	IMPLEMENT_CLASS(UEnvironmentQueryFactory, 3332212585);
	void UEnvironmentQueryGraph::StaticRegisterNativesUEnvironmentQueryGraph()
	{
	}
	IMPLEMENT_CLASS(UEnvironmentQueryGraph, 2987901081);
	void UEnvironmentQueryGraphNode::StaticRegisterNativesUEnvironmentQueryGraphNode()
	{
	}
	IMPLEMENT_CLASS(UEnvironmentQueryGraphNode, 2016214826);
	void UEnvironmentQueryGraphNode_Option::StaticRegisterNativesUEnvironmentQueryGraphNode_Option()
	{
	}
	IMPLEMENT_CLASS(UEnvironmentQueryGraphNode_Option, 1213197237);
	void UEnvironmentQueryGraphNode_Root::StaticRegisterNativesUEnvironmentQueryGraphNode_Root()
	{
	}
	IMPLEMENT_CLASS(UEnvironmentQueryGraphNode_Root, 3879231758);
	void UEnvironmentQueryGraphNode_Test::StaticRegisterNativesUEnvironmentQueryGraphNode_Test()
	{
	}
	IMPLEMENT_CLASS(UEnvironmentQueryGraphNode_Test, 3001319429);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	AIGRAPH_API class UClass* Z_Construct_UClass_UAIGraphSchema();
	UNREALED_API class UClass* Z_Construct_UClass_UFactory();
	AIGRAPH_API class UClass* Z_Construct_UClass_UAIGraph();
	AIGRAPH_API class UClass* Z_Construct_UClass_UAIGraphNode();

	ENVIRONMENTQUERYEDITOR_API class UClass* Z_Construct_UClass_UEdGraphSchema_EnvironmentQuery_NoRegister();
	ENVIRONMENTQUERYEDITOR_API class UClass* Z_Construct_UClass_UEdGraphSchema_EnvironmentQuery();
	ENVIRONMENTQUERYEDITOR_API class UClass* Z_Construct_UClass_UEnvironmentQueryFactory_NoRegister();
	ENVIRONMENTQUERYEDITOR_API class UClass* Z_Construct_UClass_UEnvironmentQueryFactory();
	ENVIRONMENTQUERYEDITOR_API class UClass* Z_Construct_UClass_UEnvironmentQueryGraph_NoRegister();
	ENVIRONMENTQUERYEDITOR_API class UClass* Z_Construct_UClass_UEnvironmentQueryGraph();
	ENVIRONMENTQUERYEDITOR_API class UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_NoRegister();
	ENVIRONMENTQUERYEDITOR_API class UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode();
	ENVIRONMENTQUERYEDITOR_API class UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_Option_NoRegister();
	ENVIRONMENTQUERYEDITOR_API class UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_Option();
	ENVIRONMENTQUERYEDITOR_API class UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_NoRegister();
	ENVIRONMENTQUERYEDITOR_API class UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_Root();
	ENVIRONMENTQUERYEDITOR_API class UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_NoRegister();
	ENVIRONMENTQUERYEDITOR_API class UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_Test();
	ENVIRONMENTQUERYEDITOR_API class UPackage* Z_Construct_UPackage_EnvironmentQueryEditor();
	UClass* Z_Construct_UClass_UEdGraphSchema_EnvironmentQuery_NoRegister()
	{
		return UEdGraphSchema_EnvironmentQuery::StaticClass();
	}
	UClass* Z_Construct_UClass_UEdGraphSchema_EnvironmentQuery()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UAIGraphSchema();
			Z_Construct_UPackage_EnvironmentQueryEditor();
			OuterClass = UEdGraphSchema_EnvironmentQuery::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20080080;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("EdGraphSchema_EnvironmentQuery.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/EdGraphSchema_EnvironmentQuery.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEdGraphSchema_EnvironmentQuery(Z_Construct_UClass_UEdGraphSchema_EnvironmentQuery, TEXT("UEdGraphSchema_EnvironmentQuery"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphSchema_EnvironmentQuery);
	UClass* Z_Construct_UClass_UEnvironmentQueryFactory_NoRegister()
	{
		return UEnvironmentQueryFactory::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvironmentQueryFactory()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UFactory();
			Z_Construct_UPackage_EnvironmentQueryEditor();
			OuterClass = UEnvironmentQueryFactory::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000080;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("EnvironmentQueryFactory.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/EnvironmentQueryFactory.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvironmentQueryFactory(Z_Construct_UClass_UEnvironmentQueryFactory, TEXT("UEnvironmentQueryFactory"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvironmentQueryFactory);
	UClass* Z_Construct_UClass_UEnvironmentQueryGraph_NoRegister()
	{
		return UEnvironmentQueryGraph::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvironmentQueryGraph()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UAIGraph();
			Z_Construct_UPackage_EnvironmentQueryEditor();
			OuterClass = UEnvironmentQueryGraph::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000080;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("EnvironmentQueryGraph.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/EnvironmentQueryGraph.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvironmentQueryGraph(Z_Construct_UClass_UEnvironmentQueryGraph, TEXT("UEnvironmentQueryGraph"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvironmentQueryGraph);
	UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_NoRegister()
	{
		return UEnvironmentQueryGraphNode::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UAIGraphNode();
			Z_Construct_UPackage_EnvironmentQueryEditor();
			OuterClass = UEnvironmentQueryGraphNode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000080;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("EnvironmentQueryGraphNode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/EnvironmentQueryGraphNode.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvironmentQueryGraphNode(Z_Construct_UClass_UEnvironmentQueryGraphNode, TEXT("UEnvironmentQueryGraphNode"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvironmentQueryGraphNode);
	UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_Option_NoRegister()
	{
		return UEnvironmentQueryGraphNode_Option::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_Option()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UEnvironmentQueryGraphNode();
			Z_Construct_UPackage_EnvironmentQueryEditor();
			OuterClass = UEnvironmentQueryGraphNode_Option::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000080;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("EnvironmentQueryGraphNode_Option.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/EnvironmentQueryGraphNode_Option.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvironmentQueryGraphNode_Option(Z_Construct_UClass_UEnvironmentQueryGraphNode_Option, TEXT("UEnvironmentQueryGraphNode_Option"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvironmentQueryGraphNode_Option);
	UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_NoRegister()
	{
		return UEnvironmentQueryGraphNode_Root::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_Root()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UEnvironmentQueryGraphNode();
			Z_Construct_UPackage_EnvironmentQueryEditor();
			OuterClass = UEnvironmentQueryGraphNode_Root::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000080;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("EnvironmentQueryGraphNode_Root.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/EnvironmentQueryGraphNode_Root.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvironmentQueryGraphNode_Root(Z_Construct_UClass_UEnvironmentQueryGraphNode_Root, TEXT("UEnvironmentQueryGraphNode_Root"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvironmentQueryGraphNode_Root);
	UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_NoRegister()
	{
		return UEnvironmentQueryGraphNode_Test::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_Test()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UEnvironmentQueryGraphNode();
			Z_Construct_UPackage_EnvironmentQueryEditor();
			OuterClass = UEnvironmentQueryGraphNode_Test::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bTestEnabled, UEnvironmentQueryGraphNode_Test, uint8);
				UProperty* NewProp_bTestEnabled = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bTestEnabled"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bTestEnabled, UEnvironmentQueryGraphNode_Test), 0x0000000000000000, CPP_BOOL_PROPERTY_BITMASK(bTestEnabled, UEnvironmentQueryGraphNode_Test), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bHasNamedWeight, UEnvironmentQueryGraphNode_Test, uint8);
				UProperty* NewProp_bHasNamedWeight = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bHasNamedWeight"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bHasNamedWeight, UEnvironmentQueryGraphNode_Test), 0x0000000000000000, CPP_BOOL_PROPERTY_BITMASK(bHasNamedWeight, UEnvironmentQueryGraphNode_Test), sizeof(uint8), false);
				UProperty* NewProp_TestWeightPct = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TestWeightPct"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(TestWeightPct, UEnvironmentQueryGraphNode_Test), 0x0000000000000000);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("EnvironmentQueryGraphNode_Test.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/EnvironmentQueryGraphNode_Test.h"));
				MetaData->SetValue(NewProp_bTestEnabled, TEXT("ModuleRelativePath"), TEXT("Classes/EnvironmentQueryGraphNode_Test.h"));
				MetaData->SetValue(NewProp_bTestEnabled, TEXT("ToolTip"), TEXT("toggles test"));
				MetaData->SetValue(NewProp_bHasNamedWeight, TEXT("ModuleRelativePath"), TEXT("Classes/EnvironmentQueryGraphNode_Test.h"));
				MetaData->SetValue(NewProp_bHasNamedWeight, TEXT("ToolTip"), TEXT("weight is passed as named param"));
				MetaData->SetValue(NewProp_TestWeightPct, TEXT("ModuleRelativePath"), TEXT("Classes/EnvironmentQueryGraphNode_Test.h"));
				MetaData->SetValue(NewProp_TestWeightPct, TEXT("ToolTip"), TEXT("weight percent for display"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvironmentQueryGraphNode_Test(Z_Construct_UClass_UEnvironmentQueryGraphNode_Test, TEXT("UEnvironmentQueryGraphNode_Test"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvironmentQueryGraphNode_Test);
	UPackage* Z_Construct_UPackage_EnvironmentQueryEditor()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/EnvironmentQueryEditor")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x300D00B0;
			Guid.B = 0xDE779A49;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS