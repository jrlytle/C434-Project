// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Private/LogVisualizer.h"
#include "LogVisualizer.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLogVisualizer() {}
	void ULogVisualizerSessionSettings::StaticRegisterNativesULogVisualizerSessionSettings()
	{
	}
	IMPLEMENT_CLASS(ULogVisualizerSessionSettings, 447082533);
class UScriptStruct* FVisualLoggerFilters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOGVISUALIZER_API class UScriptStruct* Z_Construct_UScriptStruct_FVisualLoggerFilters();
		extern LOGVISUALIZER_API uint32 Get_Z_Construct_UScriptStruct_FVisualLoggerFilters_CRC();
		extern LOGVISUALIZER_API class UPackage* Z_Construct_UPackage_LogVisualizer();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVisualLoggerFilters, Z_Construct_UPackage_LogVisualizer(), TEXT("VisualLoggerFilters"), sizeof(FVisualLoggerFilters), Get_Z_Construct_UScriptStruct_FVisualLoggerFilters_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVisualLoggerFilters(FVisualLoggerFilters::StaticStruct, TEXT("/Script/LogVisualizer"));
static struct FScriptStruct_LogVisualizer_StaticRegisterNativesFVisualLoggerFilters
{
	FScriptStruct_LogVisualizer_StaticRegisterNativesFVisualLoggerFilters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VisualLoggerFilters")),new UScriptStruct::TCppStructOps<FVisualLoggerFilters>);
	}
} ScriptStruct_LogVisualizer_StaticRegisterNativesFVisualLoggerFilters;
class UScriptStruct* FCategoryFilter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOGVISUALIZER_API class UScriptStruct* Z_Construct_UScriptStruct_FCategoryFilter();
		extern LOGVISUALIZER_API uint32 Get_Z_Construct_UScriptStruct_FCategoryFilter_CRC();
		extern LOGVISUALIZER_API class UPackage* Z_Construct_UPackage_LogVisualizer();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCategoryFilter, Z_Construct_UPackage_LogVisualizer(), TEXT("CategoryFilter"), sizeof(FCategoryFilter), Get_Z_Construct_UScriptStruct_FCategoryFilter_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCategoryFilter(FCategoryFilter::StaticStruct, TEXT("/Script/LogVisualizer"));
static struct FScriptStruct_LogVisualizer_StaticRegisterNativesFCategoryFilter
{
	FScriptStruct_LogVisualizer_StaticRegisterNativesFCategoryFilter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CategoryFilter")),new UScriptStruct::TCppStructOps<FCategoryFilter>);
	}
} ScriptStruct_LogVisualizer_StaticRegisterNativesFCategoryFilter;
	void ULogVisualizerSettings::StaticRegisterNativesULogVisualizerSettings()
	{
	}
	IMPLEMENT_CLASS(ULogVisualizerSettings, 3289010114);
	void AVisualLoggerCameraController::StaticRegisterNativesAVisualLoggerCameraController()
	{
	}
	IMPLEMENT_CLASS(AVisualLoggerCameraController, 2820470539);
	void AVisualLoggerHUD::StaticRegisterNativesAVisualLoggerHUD()
	{
	}
	IMPLEMENT_CLASS(AVisualLoggerHUD, 4081605877);
	void AVisualLoggerRenderingActor::StaticRegisterNativesAVisualLoggerRenderingActor()
	{
	}
	IMPLEMENT_CLASS(AVisualLoggerRenderingActor, 2751264388);
	void UVisualLoggerRenderingComponent::StaticRegisterNativesUVisualLoggerRenderingComponent()
	{
	}
	IMPLEMENT_CLASS(UVisualLoggerRenderingComponent, 3048570100);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();
	ENGINE_API class UClass* Z_Construct_UClass_UMaterial_NoRegister();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API class UClass* Z_Construct_UClass_ADebugCameraController();
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_ADebugCameraHUD();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_UPrimitiveComponent();

	LOGVISUALIZER_API class UClass* Z_Construct_UClass_ULogVisualizerSessionSettings_NoRegister();
	LOGVISUALIZER_API class UClass* Z_Construct_UClass_ULogVisualizerSessionSettings();
	LOGVISUALIZER_API class UScriptStruct* Z_Construct_UScriptStruct_FVisualLoggerFilters();
	LOGVISUALIZER_API class UScriptStruct* Z_Construct_UScriptStruct_FCategoryFilter();
	LOGVISUALIZER_API class UClass* Z_Construct_UClass_ULogVisualizerSettings_NoRegister();
	LOGVISUALIZER_API class UClass* Z_Construct_UClass_ULogVisualizerSettings();
	LOGVISUALIZER_API class UClass* Z_Construct_UClass_AVisualLoggerCameraController_NoRegister();
	LOGVISUALIZER_API class UClass* Z_Construct_UClass_AVisualLoggerCameraController();
	LOGVISUALIZER_API class UClass* Z_Construct_UClass_AVisualLoggerHUD_NoRegister();
	LOGVISUALIZER_API class UClass* Z_Construct_UClass_AVisualLoggerHUD();
	LOGVISUALIZER_API class UClass* Z_Construct_UClass_AVisualLoggerRenderingActor_NoRegister();
	LOGVISUALIZER_API class UClass* Z_Construct_UClass_AVisualLoggerRenderingActor();
	LOGVISUALIZER_API class UClass* Z_Construct_UClass_UVisualLoggerRenderingComponent_NoRegister();
	LOGVISUALIZER_API class UClass* Z_Construct_UClass_UVisualLoggerRenderingComponent();
	LOGVISUALIZER_API class UPackage* Z_Construct_UPackage_LogVisualizer();
	UClass* Z_Construct_UClass_ULogVisualizerSessionSettings_NoRegister()
	{
		return ULogVisualizerSessionSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_ULogVisualizerSessionSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage_LogVisualizer();
			OuterClass = ULogVisualizerSessionSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnableGraphsVisualization, ULogVisualizerSessionSettings, bool);
				UProperty* NewProp_bEnableGraphsVisualization = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bEnableGraphsVisualization"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnableGraphsVisualization, ULogVisualizerSessionSettings), 0x0000000000000001, CPP_BOOL_PROPERTY_BITMASK(bEnableGraphsVisualization, ULogVisualizerSessionSettings), sizeof(bool), true);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LogVisualizerSessionSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LogVisualizerSessionSettings.h"));
				MetaData->SetValue(NewProp_bEnableGraphsVisualization, TEXT("Category"), TEXT("VisualLogger"));
				MetaData->SetValue(NewProp_bEnableGraphsVisualization, TEXT("ModuleRelativePath"), TEXT("Public/LogVisualizerSessionSettings.h"));
				MetaData->SetValue(NewProp_bEnableGraphsVisualization, TEXT("ToolTip"), TEXT("Whether to show trivial logs, i.e. the ones with only one entry."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULogVisualizerSessionSettings(Z_Construct_UClass_ULogVisualizerSessionSettings, TEXT("ULogVisualizerSessionSettings"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULogVisualizerSessionSettings);
	UScriptStruct* Z_Construct_UScriptStruct_FVisualLoggerFilters()
	{
		UPackage* Outer=Z_Construct_UPackage_LogVisualizer();
		extern uint32 Get_Z_Construct_UScriptStruct_FVisualLoggerFilters_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReload(Outer, TEXT("VisualLoggerFilters"), sizeof(FVisualLoggerFilters), Get_Z_Construct_UScriptStruct_FVisualLoggerFilters_CRC());
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("VisualLoggerFilters"), RF_Public|RF_Transient|RF_Native) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FVisualLoggerFilters>, EStructFlags(0x00000001));
			UProperty* NewProp_SelectedClasses = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SelectedClasses"), RF_Public|RF_Transient|RF_Native) UArrayProperty(CPP_PROPERTY_BASE(SelectedClasses, FVisualLoggerFilters), 0x0000000000004000);
			UProperty* NewProp_SelectedClasses_Inner = new(EC_InternalUseOnlyConstructor, NewProp_SelectedClasses, TEXT("SelectedClasses"), RF_Public|RF_Transient|RF_Native) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000);
			UProperty* NewProp_Categories = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Categories"), RF_Public|RF_Transient|RF_Native) UArrayProperty(CPP_PROPERTY_BASE(Categories, FVisualLoggerFilters), 0x0000000000004000);
			UProperty* NewProp_Categories_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Categories, TEXT("Categories"), RF_Public|RF_Transient|RF_Native) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000, Z_Construct_UScriptStruct_FCategoryFilter());
			UProperty* NewProp_ObjectNameFilter = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ObjectNameFilter"), RF_Public|RF_Transient|RF_Native) UStrProperty(CPP_PROPERTY_BASE(ObjectNameFilter, FVisualLoggerFilters), 0x0000000000004000);
			UProperty* NewProp_SearchBoxFilter = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SearchBoxFilter"), RF_Public|RF_Transient|RF_Native) UStrProperty(CPP_PROPERTY_BASE(SearchBoxFilter, FVisualLoggerFilters), 0x0000000000004000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/LogVisualizerSettings.h"));
			MetaData->SetValue(NewProp_SelectedClasses, TEXT("ModuleRelativePath"), TEXT("Public/LogVisualizerSettings.h"));
			MetaData->SetValue(NewProp_Categories, TEXT("ModuleRelativePath"), TEXT("Public/LogVisualizerSettings.h"));
			MetaData->SetValue(NewProp_ObjectNameFilter, TEXT("ModuleRelativePath"), TEXT("Public/LogVisualizerSettings.h"));
			MetaData->SetValue(NewProp_SearchBoxFilter, TEXT("ModuleRelativePath"), TEXT("Public/LogVisualizerSettings.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVisualLoggerFilters_CRC() { return 3151374366U; }
	UScriptStruct* Z_Construct_UScriptStruct_FCategoryFilter()
	{
		UPackage* Outer=Z_Construct_UPackage_LogVisualizer();
		extern uint32 Get_Z_Construct_UScriptStruct_FCategoryFilter_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReload(Outer, TEXT("CategoryFilter"), sizeof(FCategoryFilter), Get_Z_Construct_UScriptStruct_FCategoryFilter_CRC());
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CategoryFilter"), RF_Public|RF_Transient|RF_Native) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FCategoryFilter>, EStructFlags(0x00000001));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(Enabled, FCategoryFilter, bool);
			UProperty* NewProp_Enabled = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Enabled"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(Enabled, FCategoryFilter), 0x0000000000004000, CPP_BOOL_PROPERTY_BITMASK(Enabled, FCategoryFilter), sizeof(bool), true);
			UProperty* NewProp_LogVerbosity = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("LogVerbosity"), RF_Public|RF_Transient|RF_Native) UIntProperty(CPP_PROPERTY_BASE(LogVerbosity, FCategoryFilter), 0x0000000000004000);
			UProperty* NewProp_CategoryName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("CategoryName"), RF_Public|RF_Transient|RF_Native) UStrProperty(CPP_PROPERTY_BASE(CategoryName, FCategoryFilter), 0x0000000000004000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/LogVisualizerSettings.h"));
			MetaData->SetValue(NewProp_Enabled, TEXT("ModuleRelativePath"), TEXT("Public/LogVisualizerSettings.h"));
			MetaData->SetValue(NewProp_LogVerbosity, TEXT("ModuleRelativePath"), TEXT("Public/LogVisualizerSettings.h"));
			MetaData->SetValue(NewProp_CategoryName, TEXT("ModuleRelativePath"), TEXT("Public/LogVisualizerSettings.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCategoryFilter_CRC() { return 3659120884U; }
	UClass* Z_Construct_UClass_ULogVisualizerSettings_NoRegister()
	{
		return ULogVisualizerSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_ULogVisualizerSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage_LogVisualizer();
			OuterClass = ULogVisualizerSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100084;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_DebugMeshMaterialFakeLightName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DebugMeshMaterialFakeLightName"), RF_Public|RF_Transient|RF_Native) UStrProperty(CPP_PROPERTY_BASE(DebugMeshMaterialFakeLightName, ULogVisualizerSettings), 0x0000080000004000);
				UProperty* NewProp_DebugMeshMaterialFakeLight = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DebugMeshMaterialFakeLight"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(DebugMeshMaterialFakeLight, ULogVisualizerSettings), 0x0000080000000000, Z_Construct_UClass_UMaterial_NoRegister());
				UProperty* NewProp_PresistentFilters = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PresistentFilters"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(PresistentFilters, ULogVisualizerSettings), 0x0000080000004000, Z_Construct_UScriptStruct_FVisualLoggerFilters());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bLogNavOctreeOnStop, ULogVisualizerSettings, bool);
				UProperty* NewProp_bLogNavOctreeOnStop = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bLogNavOctreeOnStop"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bLogNavOctreeOnStop, ULogVisualizerSettings), 0x0000000000004001, CPP_BOOL_PROPERTY_BITMASK(bLogNavOctreeOnStop, ULogVisualizerSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUsePlayersOnlyForPause, ULogVisualizerSettings, bool);
				UProperty* NewProp_bUsePlayersOnlyForPause = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUsePlayersOnlyForPause"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUsePlayersOnlyForPause, ULogVisualizerSettings), 0x0000000000004001, CPP_BOOL_PROPERTY_BITMASK(bUsePlayersOnlyForPause, ULogVisualizerSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDrawExtremesOnGraphs, ULogVisualizerSettings, bool);
				UProperty* NewProp_bDrawExtremesOnGraphs = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bDrawExtremesOnGraphs"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDrawExtremesOnGraphs, ULogVisualizerSettings), 0x0000000000004001, CPP_BOOL_PROPERTY_BITMASK(bDrawExtremesOnGraphs, ULogVisualizerSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bPresistentFilters, ULogVisualizerSettings, bool);
				UProperty* NewProp_bPresistentFilters = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bPresistentFilters"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bPresistentFilters, ULogVisualizerSettings), 0x0000000000004001, CPP_BOOL_PROPERTY_BITMASK(bPresistentFilters, ULogVisualizerSettings), sizeof(bool), true);
				UProperty* NewProp_GraphsBackgroundColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GraphsBackgroundColor"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(GraphsBackgroundColor, ULogVisualizerSettings), 0x0000000000004001, Z_Construct_UScriptStruct_FColor());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSearchInsideLogs, ULogVisualizerSettings, bool);
				UProperty* NewProp_bSearchInsideLogs = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bSearchInsideLogs"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSearchInsideLogs, ULogVisualizerSettings), 0x0000000000004001, CPP_BOOL_PROPERTY_BITMASK(bSearchInsideLogs, ULogVisualizerSettings), sizeof(bool), true);
				UProperty* NewProp_DefaultCameraDistance = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DefaultCameraDistance"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(DefaultCameraDistance, ULogVisualizerSettings), 0x0000000000004001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bShowHistogramLabelsOutside, ULogVisualizerSettings, bool);
				UProperty* NewProp_bShowHistogramLabelsOutside = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bShowHistogramLabelsOutside"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bShowHistogramLabelsOutside, ULogVisualizerSettings), 0x0000000000024001, CPP_BOOL_PROPERTY_BITMASK(bShowHistogramLabelsOutside, ULogVisualizerSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bResetDataWithNewSession, ULogVisualizerSettings, bool);
				UProperty* NewProp_bResetDataWithNewSession = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bResetDataWithNewSession"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bResetDataWithNewSession, ULogVisualizerSettings), 0x0000000000004001, CPP_BOOL_PROPERTY_BITMASK(bResetDataWithNewSession, ULogVisualizerSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bStickToRecentData, ULogVisualizerSettings, bool);
				UProperty* NewProp_bStickToRecentData = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bStickToRecentData"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bStickToRecentData, ULogVisualizerSettings), 0x0000000000004001, CPP_BOOL_PROPERTY_BITMASK(bStickToRecentData, ULogVisualizerSettings), sizeof(bool), true);
				UProperty* NewProp_TrivialLogsThreshold = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TrivialLogsThreshold"), RF_Public|RF_Transient|RF_Native) UIntProperty(CPP_PROPERTY_BASE(TrivialLogsThreshold, ULogVisualizerSettings), 0x0000000000004001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIgnoreTrivialLogs, ULogVisualizerSettings, bool);
				UProperty* NewProp_bIgnoreTrivialLogs = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIgnoreTrivialLogs"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIgnoreTrivialLogs, ULogVisualizerSettings), 0x0000000000004001, CPP_BOOL_PROPERTY_BITMASK(bIgnoreTrivialLogs, ULogVisualizerSettings), sizeof(bool), true);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("EditorPerProjectUserSettings"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LogVisualizerSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LogVisualizerSettings.h"));
				MetaData->SetValue(NewProp_DebugMeshMaterialFakeLightName, TEXT("ModuleRelativePath"), TEXT("Public/LogVisualizerSettings.h"));
				MetaData->SetValue(NewProp_DebugMeshMaterialFakeLightName, TEXT("ToolTip"), TEXT("@todo document"));
				MetaData->SetValue(NewProp_DebugMeshMaterialFakeLight, TEXT("ModuleRelativePath"), TEXT("Public/LogVisualizerSettings.h"));
				MetaData->SetValue(NewProp_DebugMeshMaterialFakeLight, TEXT("ToolTip"), TEXT("A material used to render debug meshes with kind of flat shading, mostly used by Visual Logger tool."));
				MetaData->SetValue(NewProp_PresistentFilters, TEXT("ModuleRelativePath"), TEXT("Public/LogVisualizerSettings.h"));
				MetaData->SetValue(NewProp_bLogNavOctreeOnStop, TEXT("Category"), TEXT("VisualLogger"));
				MetaData->SetValue(NewProp_bLogNavOctreeOnStop, TEXT("ModuleRelativePath"), TEXT("Public/LogVisualizerSettings.h"));
				MetaData->SetValue(NewProp_bLogNavOctreeOnStop, TEXT("ToolTip"), TEXT("Whether to dump Navigation Octree on Stop recording or not"));
				MetaData->SetValue(NewProp_bUsePlayersOnlyForPause, TEXT("Category"), TEXT("VisualLogger"));
				MetaData->SetValue(NewProp_bUsePlayersOnlyForPause, TEXT("ModuleRelativePath"), TEXT("Public/LogVisualizerSettings.h"));
				MetaData->SetValue(NewProp_bUsePlayersOnlyForPause, TEXT("ToolTip"), TEXT("Whether to use PlayersOnly during Pause or not"));
				MetaData->SetValue(NewProp_bDrawExtremesOnGraphs, TEXT("Category"), TEXT("VisualLogger"));
				MetaData->SetValue(NewProp_bDrawExtremesOnGraphs, TEXT("ModuleRelativePath"), TEXT("Public/LogVisualizerSettings.h"));
				MetaData->SetValue(NewProp_bDrawExtremesOnGraphs, TEXT("ToolTip"), TEXT("Whether to extreme values on graph (data has to be provided for extreme values)"));
				MetaData->SetValue(NewProp_bPresistentFilters, TEXT("Category"), TEXT("VisualLogger"));
				MetaData->SetValue(NewProp_bPresistentFilters, TEXT("ModuleRelativePath"), TEXT("Public/LogVisualizerSettings.h"));
				MetaData->SetValue(NewProp_bPresistentFilters, TEXT("ToolTip"), TEXT("Whether to store all filter settings on exit"));
				MetaData->SetValue(NewProp_GraphsBackgroundColor, TEXT("Category"), TEXT("VisualLogger"));
				MetaData->SetValue(NewProp_GraphsBackgroundColor, TEXT("ModuleRelativePath"), TEXT("Public/LogVisualizerSettings.h"));
				MetaData->SetValue(NewProp_GraphsBackgroundColor, TEXT("ToolTip"), TEXT("Background color for 2d graphs visualization"));
				MetaData->SetValue(NewProp_bSearchInsideLogs, TEXT("Category"), TEXT("VisualLogger"));
				MetaData->SetValue(NewProp_bSearchInsideLogs, TEXT("ModuleRelativePath"), TEXT("Public/LogVisualizerSettings.h"));
				MetaData->SetValue(NewProp_bSearchInsideLogs, TEXT("ToolTip"), TEXT("Whether to search/filter categories or to get text vlogs into account too"));
				MetaData->SetValue(NewProp_DefaultCameraDistance, TEXT("Category"), TEXT("VisualLogger"));
				MetaData->SetValue(NewProp_DefaultCameraDistance, TEXT("ClampMax"), TEXT("1000"));
				MetaData->SetValue(NewProp_DefaultCameraDistance, TEXT("ClampMin"), TEXT("10"));
				MetaData->SetValue(NewProp_DefaultCameraDistance, TEXT("ModuleRelativePath"), TEXT("Public/LogVisualizerSettings.h"));
				MetaData->SetValue(NewProp_DefaultCameraDistance, TEXT("ToolTip"), TEXT("Camera distance used to setup location during reaction on log item double click"));
				MetaData->SetValue(NewProp_DefaultCameraDistance, TEXT("UIMax"), TEXT("1000"));
				MetaData->SetValue(NewProp_DefaultCameraDistance, TEXT("UIMin"), TEXT("10"));
				MetaData->SetValue(NewProp_bShowHistogramLabelsOutside, TEXT("Category"), TEXT("VisualLogger"));
				MetaData->SetValue(NewProp_bShowHistogramLabelsOutside, TEXT("ModuleRelativePath"), TEXT("Public/LogVisualizerSettings.h"));
				MetaData->SetValue(NewProp_bShowHistogramLabelsOutside, TEXT("ToolTip"), TEXT("Whether to show histogram labels inside graph or outside. Property disabled for now."));
				MetaData->SetValue(NewProp_bResetDataWithNewSession, TEXT("Category"), TEXT("VisualLogger"));
				MetaData->SetValue(NewProp_bResetDataWithNewSession, TEXT("ModuleRelativePath"), TEXT("Public/LogVisualizerSettings.h"));
				MetaData->SetValue(NewProp_bResetDataWithNewSession, TEXT("ToolTip"), TEXT("Whether to reset current data or not for each new session."));
				MetaData->SetValue(NewProp_bStickToRecentData, TEXT("Category"), TEXT("VisualLogger"));
				MetaData->SetValue(NewProp_bStickToRecentData, TEXT("ModuleRelativePath"), TEXT("Public/LogVisualizerSettings.h"));
				MetaData->SetValue(NewProp_bStickToRecentData, TEXT("ToolTip"), TEXT("Whether to show the recent data or not. Property disabled for now."));
				MetaData->SetValue(NewProp_TrivialLogsThreshold, TEXT("Category"), TEXT("VisualLogger"));
				MetaData->SetValue(NewProp_TrivialLogsThreshold, TEXT("ClampMax"), TEXT("10"));
				MetaData->SetValue(NewProp_TrivialLogsThreshold, TEXT("ClampMin"), TEXT("0"));
				MetaData->SetValue(NewProp_TrivialLogsThreshold, TEXT("EditCondition"), TEXT("bIgnoreTrivialLogs"));
				MetaData->SetValue(NewProp_TrivialLogsThreshold, TEXT("ModuleRelativePath"), TEXT("Public/LogVisualizerSettings.h"));
				MetaData->SetValue(NewProp_TrivialLogsThreshold, TEXT("ToolTip"), TEXT("Threshold for trivial Logs"));
				MetaData->SetValue(NewProp_TrivialLogsThreshold, TEXT("UIMax"), TEXT("10"));
				MetaData->SetValue(NewProp_TrivialLogsThreshold, TEXT("UIMin"), TEXT("0"));
				MetaData->SetValue(NewProp_bIgnoreTrivialLogs, TEXT("Category"), TEXT("VisualLogger"));
				MetaData->SetValue(NewProp_bIgnoreTrivialLogs, TEXT("ModuleRelativePath"), TEXT("Public/LogVisualizerSettings.h"));
				MetaData->SetValue(NewProp_bIgnoreTrivialLogs, TEXT("ToolTip"), TEXT("Whether to show trivial logs, i.e. the ones with only one entry."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULogVisualizerSettings(Z_Construct_UClass_ULogVisualizerSettings, TEXT("ULogVisualizerSettings"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULogVisualizerSettings);
	UClass* Z_Construct_UClass_AVisualLoggerCameraController_NoRegister()
	{
		return AVisualLoggerCameraController::StaticClass();
	}
	UClass* Z_Construct_UClass_AVisualLoggerCameraController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ADebugCameraController();
			Z_Construct_UPackage_LogVisualizer();
			OuterClass = AVisualLoggerCameraController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x24800284;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_PickedActor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PickedActor"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(PickedActor, AVisualLoggerCameraController), 0x0000000000000000, Z_Construct_UClass_AActor_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Input"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("VisualLoggerCameraController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Private/VisualLoggerCameraController.h"));
				MetaData->SetValue(NewProp_PickedActor, TEXT("ModuleRelativePath"), TEXT("Private/VisualLoggerCameraController.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVisualLoggerCameraController(Z_Construct_UClass_AVisualLoggerCameraController, TEXT("AVisualLoggerCameraController"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVisualLoggerCameraController);
	UClass* Z_Construct_UClass_AVisualLoggerHUD_NoRegister()
	{
		return AVisualLoggerHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AVisualLoggerHUD()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ADebugCameraHUD();
			Z_Construct_UPackage_LogVisualizer();
			OuterClass = AVisualLoggerHUD::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2080028C;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Rendering Actor Input Replication"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("VisualLoggerHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Private/VisualLoggerHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVisualLoggerHUD(Z_Construct_UClass_AVisualLoggerHUD, TEXT("AVisualLoggerHUD"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVisualLoggerHUD);
	UClass* Z_Construct_UClass_AVisualLoggerRenderingActor_NoRegister()
	{
		return AVisualLoggerRenderingActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AVisualLoggerRenderingActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage_LogVisualizer();
			OuterClass = AVisualLoggerRenderingActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900088;


				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("VisualLoggerRenderingActor.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("false"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Private/VisualLoggerRenderingActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVisualLoggerRenderingActor(Z_Construct_UClass_AVisualLoggerRenderingActor, TEXT("AVisualLoggerRenderingActor"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVisualLoggerRenderingActor);
	UClass* Z_Construct_UClass_UVisualLoggerRenderingComponent_NoRegister()
	{
		return UVisualLoggerRenderingComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UVisualLoggerRenderingComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UPrimitiveComponent();
			Z_Construct_UPackage_LogVisualizer();
			OuterClass = UVisualLoggerRenderingComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20A00080;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Mobility Trigger ComponentReplication"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("VisualLoggerRenderingComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Private/VisualLoggerRenderingComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Transient actor used to draw visual logger data on level"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVisualLoggerRenderingComponent(Z_Construct_UClass_UVisualLoggerRenderingComponent, TEXT("UVisualLoggerRenderingComponent"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVisualLoggerRenderingComponent);
	UPackage* Z_Construct_UPackage_LogVisualizer()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/LogVisualizer")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xCFECFB11;
			Guid.B = 0xE922393A;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
