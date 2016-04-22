// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
class AActor;
class APawn;
#ifdef ENGINE_CheatManager_generated_h
#error "CheatManager.generated.h already included, missing '#pragma once' in CheatManager.h"
#endif
#define ENGINE_CheatManager_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_60_RPC_WRAPPERS \
	virtual bool ServerToggleAILogging_Validate(); \
	virtual void ServerToggleAILogging_Implementation(); \
 \
	DECLARE_FUNCTION(execInvertMouse) \
	{ \
		P_FINISH; \
		this->InvertMouse(); \
	} \
 \
	DECLARE_FUNCTION(execSetMouseSensitivityToDefault) \
	{ \
		P_FINISH; \
		this->SetMouseSensitivityToDefault(); \
	} \
 \
	DECLARE_FUNCTION(execSetWorldOrigin) \
	{ \
		P_FINISH; \
		this->SetWorldOrigin(); \
	} \
 \
	DECLARE_FUNCTION(execLogLoc) \
	{ \
		P_FINISH; \
		this->LogLoc(); \
	} \
 \
	DECLARE_FUNCTION(execFlushLog) \
	{ \
		P_FINISH; \
		this->FlushLog(); \
	} \
 \
	DECLARE_FUNCTION(execBugItStringCreator) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_ViewLocation); \
		P_GET_STRUCT(FRotator,Z_Param_ViewRotation); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_GoString); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_LocString); \
		P_FINISH; \
		this->BugItStringCreator(Z_Param_ViewLocation,Z_Param_ViewRotation,Z_Param_Out_GoString,Z_Param_Out_LocString); \
	} \
 \
	DECLARE_FUNCTION(execBugIt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ScreenShotDescription); \
		P_FINISH; \
		this->BugIt(Z_Param_ScreenShotDescription); \
	} \
 \
	DECLARE_FUNCTION(execBugItGo) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Z); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Pitch); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Yaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Roll); \
		P_FINISH; \
		this->BugItGo(Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_Pitch,Z_Param_Yaw,Z_Param_Roll); \
	} \
 \
	DECLARE_FUNCTION(execDumpVoiceMutingState) \
	{ \
		P_FINISH; \
		this->DumpVoiceMutingState(); \
	} \
 \
	DECLARE_FUNCTION(execDumpPartyState) \
	{ \
		P_FINISH; \
		this->DumpPartyState(); \
	} \
 \
	DECLARE_FUNCTION(execDumpOnlineSessionState) \
	{ \
		P_FINISH; \
		this->DumpOnlineSessionState(); \
	} \
 \
	DECLARE_FUNCTION(execSetNavDrawDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawDistance); \
		P_FINISH; \
		this->SetNavDrawDistance(Z_Param_DrawDistance); \
	} \
 \
	DECLARE_FUNCTION(execRebuildNavigation) \
	{ \
		P_FINISH; \
		this->RebuildNavigation(); \
	} \
 \
	DECLARE_FUNCTION(execFontAtlasVisualizer) \
	{ \
		P_FINISH; \
		this->FontAtlasVisualizer(); \
	} \
 \
	DECLARE_FUNCTION(execTextureAtlasVisualizer) \
	{ \
		P_FINISH; \
		this->TextureAtlasVisualizer(); \
	} \
 \
	DECLARE_FUNCTION(execWidgetReflector) \
	{ \
		P_FINISH; \
		this->WidgetReflector(); \
	} \
 \
	DECLARE_FUNCTION(execTestCollisionDistance) \
	{ \
		P_FINISH; \
		this->TestCollisionDistance(); \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepClear) \
	{ \
		P_FINISH; \
		this->DebugCapsuleSweepClear(); \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepPawn) \
	{ \
		P_FINISH; \
		this->DebugCapsuleSweepPawn(); \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepCapture) \
	{ \
		P_FINISH; \
		this->DebugCapsuleSweepCapture(); \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepComplex) \
	{ \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_FINISH; \
		this->DebugCapsuleSweepComplex(Z_Param_bTraceComplex); \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepChannel) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Channel); \
		P_FINISH; \
		this->DebugCapsuleSweepChannel(ECollisionChannel(Z_Param_Channel)); \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepSize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_FINISH; \
		this->DebugCapsuleSweepSize(Z_Param_HalfHeight,Z_Param_Radius); \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweep) \
	{ \
		P_FINISH; \
		this->DebugCapsuleSweep(); \
	} \
 \
	DECLARE_FUNCTION(execServerToggleAILogging) \
	{ \
		P_FINISH; \
		if (!this->ServerToggleAILogging_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerToggleAILogging_Validate")); \
			return; \
		} \
		this->ServerToggleAILogging_Implementation(); \
	} \
 \
	DECLARE_FUNCTION(execToggleAILogging) \
	{ \
		P_FINISH; \
		this->ToggleAILogging(); \
	} \
 \
	DECLARE_FUNCTION(execToggleDebugCamera) \
	{ \
		P_FINISH; \
		this->ToggleDebugCamera(); \
	} \
 \
	DECLARE_FUNCTION(execStreamLevelOut) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PackageName); \
		P_FINISH; \
		this->StreamLevelOut(Z_Param_PackageName); \
	} \
 \
	DECLARE_FUNCTION(execOnlyLoadLevel) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PackageName); \
		P_FINISH; \
		this->OnlyLoadLevel(Z_Param_PackageName); \
	} \
 \
	DECLARE_FUNCTION(execStreamLevelIn) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PackageName); \
		P_FINISH; \
		this->StreamLevelIn(Z_Param_PackageName); \
	} \
 \
	DECLARE_FUNCTION(execViewClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_DesiredClass); \
		P_FINISH; \
		this->ViewClass(Z_Param_DesiredClass); \
	} \
 \
	DECLARE_FUNCTION(execViewActor) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ActorName); \
		P_FINISH; \
		this->ViewActor(Z_Param_ActorName); \
	} \
 \
	DECLARE_FUNCTION(execViewPlayer) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_S); \
		P_FINISH; \
		this->ViewPlayer(Z_Param_S); \
	} \
 \
	DECLARE_FUNCTION(execViewSelf) \
	{ \
		P_FINISH; \
		this->ViewSelf(); \
	} \
 \
	DECLARE_FUNCTION(execPlayersOnly) \
	{ \
		P_FINISH; \
		this->PlayersOnly(); \
	} \
 \
	DECLARE_FUNCTION(execSummon) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ClassName); \
		P_FINISH; \
		this->Summon(Z_Param_ClassName); \
	} \
 \
	DECLARE_FUNCTION(execDestroyPawns) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_aClass); \
		P_FINISH; \
		this->DestroyPawns(Z_Param_aClass); \
	} \
 \
	DECLARE_FUNCTION(execDestroyAllPawnsExceptTarget) \
	{ \
		P_FINISH; \
		this->DestroyAllPawnsExceptTarget(); \
	} \
 \
	DECLARE_FUNCTION(execDestroyAll) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_aClass); \
		P_FINISH; \
		this->DestroyAll(Z_Param_aClass); \
	} \
 \
	DECLARE_FUNCTION(execDestroyTarget) \
	{ \
		P_FINISH; \
		this->DestroyTarget(); \
	} \
 \
	DECLARE_FUNCTION(execDamageTarget) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageAmount); \
		P_FINISH; \
		this->DamageTarget(Z_Param_DamageAmount); \
	} \
 \
	DECLARE_FUNCTION(execSlomo) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_T); \
		P_FINISH; \
		this->Slomo(Z_Param_T); \
	} \
 \
	DECLARE_FUNCTION(execGod) \
	{ \
		P_FINISH; \
		this->God(); \
	} \
 \
	DECLARE_FUNCTION(execGhost) \
	{ \
		P_FINISH; \
		this->Ghost(); \
	} \
 \
	DECLARE_FUNCTION(execWalk) \
	{ \
		P_FINISH; \
		this->Walk(); \
	} \
 \
	DECLARE_FUNCTION(execFly) \
	{ \
		P_FINISH; \
		this->Fly(); \
	} \
 \
	DECLARE_FUNCTION(execChangeSize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_F); \
		P_FINISH; \
		this->ChangeSize(Z_Param_F); \
	} \
 \
	DECLARE_FUNCTION(execTeleport) \
	{ \
		P_FINISH; \
		this->Teleport(); \
	} \
 \
	DECLARE_FUNCTION(execFreezeFrame) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Delay); \
		P_FINISH; \
		this->FreezeFrame(Z_Param_Delay); \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerToggleAILogging_Validate(); \
	virtual void ServerToggleAILogging_Implementation(); \
 \
	DECLARE_FUNCTION(execInvertMouse) \
	{ \
		P_FINISH; \
		this->InvertMouse(); \
	} \
 \
	DECLARE_FUNCTION(execSetMouseSensitivityToDefault) \
	{ \
		P_FINISH; \
		this->SetMouseSensitivityToDefault(); \
	} \
 \
	DECLARE_FUNCTION(execSetWorldOrigin) \
	{ \
		P_FINISH; \
		this->SetWorldOrigin(); \
	} \
 \
	DECLARE_FUNCTION(execLogLoc) \
	{ \
		P_FINISH; \
		this->LogLoc(); \
	} \
 \
	DECLARE_FUNCTION(execFlushLog) \
	{ \
		P_FINISH; \
		this->FlushLog(); \
	} \
 \
	DECLARE_FUNCTION(execBugItStringCreator) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_ViewLocation); \
		P_GET_STRUCT(FRotator,Z_Param_ViewRotation); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_GoString); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_LocString); \
		P_FINISH; \
		this->BugItStringCreator(Z_Param_ViewLocation,Z_Param_ViewRotation,Z_Param_Out_GoString,Z_Param_Out_LocString); \
	} \
 \
	DECLARE_FUNCTION(execBugIt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ScreenShotDescription); \
		P_FINISH; \
		this->BugIt(Z_Param_ScreenShotDescription); \
	} \
 \
	DECLARE_FUNCTION(execBugItGo) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Z); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Pitch); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Yaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Roll); \
		P_FINISH; \
		this->BugItGo(Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_Pitch,Z_Param_Yaw,Z_Param_Roll); \
	} \
 \
	DECLARE_FUNCTION(execDumpVoiceMutingState) \
	{ \
		P_FINISH; \
		this->DumpVoiceMutingState(); \
	} \
 \
	DECLARE_FUNCTION(execDumpPartyState) \
	{ \
		P_FINISH; \
		this->DumpPartyState(); \
	} \
 \
	DECLARE_FUNCTION(execDumpOnlineSessionState) \
	{ \
		P_FINISH; \
		this->DumpOnlineSessionState(); \
	} \
 \
	DECLARE_FUNCTION(execSetNavDrawDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawDistance); \
		P_FINISH; \
		this->SetNavDrawDistance(Z_Param_DrawDistance); \
	} \
 \
	DECLARE_FUNCTION(execRebuildNavigation) \
	{ \
		P_FINISH; \
		this->RebuildNavigation(); \
	} \
 \
	DECLARE_FUNCTION(execFontAtlasVisualizer) \
	{ \
		P_FINISH; \
		this->FontAtlasVisualizer(); \
	} \
 \
	DECLARE_FUNCTION(execTextureAtlasVisualizer) \
	{ \
		P_FINISH; \
		this->TextureAtlasVisualizer(); \
	} \
 \
	DECLARE_FUNCTION(execWidgetReflector) \
	{ \
		P_FINISH; \
		this->WidgetReflector(); \
	} \
 \
	DECLARE_FUNCTION(execTestCollisionDistance) \
	{ \
		P_FINISH; \
		this->TestCollisionDistance(); \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepClear) \
	{ \
		P_FINISH; \
		this->DebugCapsuleSweepClear(); \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepPawn) \
	{ \
		P_FINISH; \
		this->DebugCapsuleSweepPawn(); \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepCapture) \
	{ \
		P_FINISH; \
		this->DebugCapsuleSweepCapture(); \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepComplex) \
	{ \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_FINISH; \
		this->DebugCapsuleSweepComplex(Z_Param_bTraceComplex); \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepChannel) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Channel); \
		P_FINISH; \
		this->DebugCapsuleSweepChannel(ECollisionChannel(Z_Param_Channel)); \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepSize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_FINISH; \
		this->DebugCapsuleSweepSize(Z_Param_HalfHeight,Z_Param_Radius); \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweep) \
	{ \
		P_FINISH; \
		this->DebugCapsuleSweep(); \
	} \
 \
	DECLARE_FUNCTION(execServerToggleAILogging) \
	{ \
		P_FINISH; \
		if (!this->ServerToggleAILogging_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerToggleAILogging_Validate")); \
			return; \
		} \
		this->ServerToggleAILogging_Implementation(); \
	} \
 \
	DECLARE_FUNCTION(execToggleAILogging) \
	{ \
		P_FINISH; \
		this->ToggleAILogging(); \
	} \
 \
	DECLARE_FUNCTION(execToggleDebugCamera) \
	{ \
		P_FINISH; \
		this->ToggleDebugCamera(); \
	} \
 \
	DECLARE_FUNCTION(execStreamLevelOut) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PackageName); \
		P_FINISH; \
		this->StreamLevelOut(Z_Param_PackageName); \
	} \
 \
	DECLARE_FUNCTION(execOnlyLoadLevel) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PackageName); \
		P_FINISH; \
		this->OnlyLoadLevel(Z_Param_PackageName); \
	} \
 \
	DECLARE_FUNCTION(execStreamLevelIn) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PackageName); \
		P_FINISH; \
		this->StreamLevelIn(Z_Param_PackageName); \
	} \
 \
	DECLARE_FUNCTION(execViewClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_DesiredClass); \
		P_FINISH; \
		this->ViewClass(Z_Param_DesiredClass); \
	} \
 \
	DECLARE_FUNCTION(execViewActor) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ActorName); \
		P_FINISH; \
		this->ViewActor(Z_Param_ActorName); \
	} \
 \
	DECLARE_FUNCTION(execViewPlayer) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_S); \
		P_FINISH; \
		this->ViewPlayer(Z_Param_S); \
	} \
 \
	DECLARE_FUNCTION(execViewSelf) \
	{ \
		P_FINISH; \
		this->ViewSelf(); \
	} \
 \
	DECLARE_FUNCTION(execPlayersOnly) \
	{ \
		P_FINISH; \
		this->PlayersOnly(); \
	} \
 \
	DECLARE_FUNCTION(execSummon) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ClassName); \
		P_FINISH; \
		this->Summon(Z_Param_ClassName); \
	} \
 \
	DECLARE_FUNCTION(execDestroyPawns) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_aClass); \
		P_FINISH; \
		this->DestroyPawns(Z_Param_aClass); \
	} \
 \
	DECLARE_FUNCTION(execDestroyAllPawnsExceptTarget) \
	{ \
		P_FINISH; \
		this->DestroyAllPawnsExceptTarget(); \
	} \
 \
	DECLARE_FUNCTION(execDestroyAll) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_aClass); \
		P_FINISH; \
		this->DestroyAll(Z_Param_aClass); \
	} \
 \
	DECLARE_FUNCTION(execDestroyTarget) \
	{ \
		P_FINISH; \
		this->DestroyTarget(); \
	} \
 \
	DECLARE_FUNCTION(execDamageTarget) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageAmount); \
		P_FINISH; \
		this->DamageTarget(Z_Param_DamageAmount); \
	} \
 \
	DECLARE_FUNCTION(execSlomo) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_T); \
		P_FINISH; \
		this->Slomo(Z_Param_T); \
	} \
 \
	DECLARE_FUNCTION(execGod) \
	{ \
		P_FINISH; \
		this->God(); \
	} \
 \
	DECLARE_FUNCTION(execGhost) \
	{ \
		P_FINISH; \
		this->Ghost(); \
	} \
 \
	DECLARE_FUNCTION(execWalk) \
	{ \
		P_FINISH; \
		this->Walk(); \
	} \
 \
	DECLARE_FUNCTION(execFly) \
	{ \
		P_FINISH; \
		this->Fly(); \
	} \
 \
	DECLARE_FUNCTION(execChangeSize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_F); \
		P_FINISH; \
		this->ChangeSize(Z_Param_F); \
	} \
 \
	DECLARE_FUNCTION(execTeleport) \
	{ \
		P_FINISH; \
		this->Teleport(); \
	} \
 \
	DECLARE_FUNCTION(execFreezeFrame) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Delay); \
		P_FINISH; \
		this->FreezeFrame(Z_Param_Delay); \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_60_EVENT_PARMS
extern ENGINE_API  FName ENGINE_ServerToggleAILogging;
#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_60_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_60_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUCheatManager(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UCheatManager(); \
	public: \
	DECLARE_CLASS(UCheatManager, UObject, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UCheatManager) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	DECLARE_WITHIN(APlayerController) \
	virtual UObject* _getUObject() const { return const_cast<UCheatManager*>(this); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_60_INCLASS \
	private: \
	static void StaticRegisterNativesUCheatManager(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UCheatManager(); \
	public: \
	DECLARE_CLASS(UCheatManager, UObject, COMPILED_IN_FLAGS(0), 0, Engine, NO_API) \
	DECLARE_SERIALIZER(UCheatManager) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	DECLARE_WITHIN(APlayerController) \
	virtual UObject* _getUObject() const { return const_cast<UCheatManager*>(this); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCheatManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCheatManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheatManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheatManager); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UCheatManager(const UCheatManager& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCheatManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UCheatManager(const UCheatManager& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheatManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheatManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCheatManager)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_57_PROLOG \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_60_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_60_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_60_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_60_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_60_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_60_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_60_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CheatManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
