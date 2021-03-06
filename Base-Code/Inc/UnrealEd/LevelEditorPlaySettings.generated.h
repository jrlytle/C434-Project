// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_LevelEditorPlaySettings_generated_h
#error "LevelEditorPlaySettings.generated.h already included, missing '#pragma once' in LevelEditorPlaySettings.h"
#endif
#define UNREALED_LevelEditorPlaySettings_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_116_GENERATED_BODY \
	friend UNREALED_API class UScriptStruct* Z_Construct_UScriptStruct_FPlayScreenResolution(); \
	UNREALED_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_144_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_144_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_144_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesULevelEditorPlaySettings(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_ULevelEditorPlaySettings(); \
	public: \
	DECLARE_CLASS(ULevelEditorPlaySettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(ULevelEditorPlaySettings) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \
 \
	virtual UObject* _getUObject() const { return const_cast<ULevelEditorPlaySettings*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_144_INCLASS \
	private: \
	static void StaticRegisterNativesULevelEditorPlaySettings(); \
	friend UNREALED_API class UClass* Z_Construct_UClass_ULevelEditorPlaySettings(); \
	public: \
	DECLARE_CLASS(ULevelEditorPlaySettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, UnrealEd, NO_API) \
	DECLARE_SERIALIZER(ULevelEditorPlaySettings) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \
 \
	virtual UObject* _getUObject() const { return const_cast<ULevelEditorPlaySettings*>(this); }


#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_144_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelEditorPlaySettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelEditorPlaySettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelEditorPlaySettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelEditorPlaySettings); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULevelEditorPlaySettings(const ULevelEditorPlaySettings& InCopy); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_144_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelEditorPlaySettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULevelEditorPlaySettings(const ULevelEditorPlaySettings& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelEditorPlaySettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelEditorPlaySettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelEditorPlaySettings)


#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_140_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_144_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_144_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_144_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_144_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_144_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_144_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_144_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_144_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LevelEditorPlaySettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h


#define FOREACH_ENUM_EPLAYONLAUNCHCONFIGURATION(op) \
	op(LaunchConfig_Default) \
	op(LaunchConfig_Debug) \
	op(LaunchConfig_Development) \
	op(LaunchConfig_Test) \
	op(LaunchConfig_Shipping) 
#define FOREACH_ENUM_EPLAYONBUILDMODE(op) \
	op(PlayOnBuild_Always) \
	op(PlayOnBuild_Never) \
	op(PlayOnBuild_Default) 
#define FOREACH_ENUM_EPLAYNETMODE(op) \
	op(PIE_Standalone) \
	op(PIE_ListenServer) \
	op(PIE_Client) 
#define FOREACH_ENUM_EPLAYMODETYPE(op) \
	op(PlayMode_InViewPort) \
	op(PlayMode_InEditorFloating) \
	op(PlayMode_InMobilePreview) \
	op(PlayMode_InNewProcess) \
	op(PlayMode_InVR) \
	op(PlayMode_Simulate) \
	op(PlayMode_Count) 
#define FOREACH_ENUM_EPLAYMODELOCATIONS(op) \
	op(PlayLocation_CurrentCameraLocation) \
	op(PlayLocation_DefaultPlayerStart) 
#define FOREACH_ENUM_ELAUNCHMODETYPE(op) \
	op(LaunchMode_OnDevice) 
#define FOREACH_ENUM_ELABELANCHORMODE(op) \
	op(LabelAnchorMode_TopLeft) \
	op(LabelAnchorMode_TopCenter) \
	op(LabelAnchorMode_TopRight) \
	op(LabelAnchorMode_CenterLeft) \
	op(LabelAnchorMode_Centered) \
	op(LabelAnchorMode_CenterRight) \
	op(LabelAnchorMode_BottomLeft) \
	op(LabelAnchorMode_BottomCenter) \
	op(LabelAnchorMode_BottomRight) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
