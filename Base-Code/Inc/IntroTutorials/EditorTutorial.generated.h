// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UEditorTutorial;
class AActor;
#ifdef INTROTUTORIALS_EditorTutorial_generated_h
#error "EditorTutorial.generated.h already included, missing '#pragma once' in EditorTutorial.h"
#endif
#define INTROTUTORIALS_EditorTutorial_generated_h

#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_193_GENERATED_BODY \
	friend INTROTUTORIALS_API class UScriptStruct* Z_Construct_UScriptStruct_FTutorialStage(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_152_GENERATED_BODY \
	friend INTROTUTORIALS_API class UScriptStruct* Z_Construct_UScriptStruct_FTutorialWidgetContent(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_107_GENERATED_BODY \
	friend INTROTUTORIALS_API class UScriptStruct* Z_Construct_UScriptStruct_FTutorialContentAnchor(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_79_GENERATED_BODY \
	friend INTROTUTORIALS_API class UScriptStruct* Z_Construct_UScriptStruct_FTutorialContent(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_48_GENERATED_BODY \
	friend INTROTUTORIALS_API class UScriptStruct* Z_Construct_UScriptStruct_FTutorialCategory(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_228_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEngineFolderVisibilty) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=UEditorTutorial::GetEngineFolderVisibilty(); \
	} \
 \
	DECLARE_FUNCTION(execSetEngineFolderVisibilty) \
	{ \
		P_GET_UBOOL(Z_Param_bNewVisibility); \
		P_FINISH; \
		UEditorTutorial::SetEngineFolderVisibilty(Z_Param_bNewVisibility); \
	} \
 \
	DECLARE_FUNCTION(execOpenAsset) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Asset); \
		P_FINISH; \
		UEditorTutorial::OpenAsset(Z_Param_Asset); \
	} \
 \
	DECLARE_FUNCTION(execBeginTutorial) \
	{ \
		P_GET_OBJECT(UEditorTutorial,Z_Param_TutorialToStart); \
		P_GET_UBOOL(Z_Param_bRestart); \
		P_FINISH; \
		UEditorTutorial::BeginTutorial(Z_Param_TutorialToStart,Z_Param_bRestart); \
	} \
 \
	DECLARE_FUNCTION(execGoToPreviousTutorialStage) \
	{ \
		P_FINISH; \
		UEditorTutorial::GoToPreviousTutorialStage(); \
	} \
 \
	DECLARE_FUNCTION(execGoToNextTutorialStage) \
	{ \
		P_FINISH; \
		UEditorTutorial::GoToNextTutorialStage(); \
	} \
 \
	DECLARE_FUNCTION(execGetActorReference) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PathToActor); \
		P_FINISH; \
		*(AActor**)Z_Param__Result=this->GetActorReference(Z_Param_PathToActor); \
	}


#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_228_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEngineFolderVisibilty) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=UEditorTutorial::GetEngineFolderVisibilty(); \
	} \
 \
	DECLARE_FUNCTION(execSetEngineFolderVisibilty) \
	{ \
		P_GET_UBOOL(Z_Param_bNewVisibility); \
		P_FINISH; \
		UEditorTutorial::SetEngineFolderVisibilty(Z_Param_bNewVisibility); \
	} \
 \
	DECLARE_FUNCTION(execOpenAsset) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Asset); \
		P_FINISH; \
		UEditorTutorial::OpenAsset(Z_Param_Asset); \
	} \
 \
	DECLARE_FUNCTION(execBeginTutorial) \
	{ \
		P_GET_OBJECT(UEditorTutorial,Z_Param_TutorialToStart); \
		P_GET_UBOOL(Z_Param_bRestart); \
		P_FINISH; \
		UEditorTutorial::BeginTutorial(Z_Param_TutorialToStart,Z_Param_bRestart); \
	} \
 \
	DECLARE_FUNCTION(execGoToPreviousTutorialStage) \
	{ \
		P_FINISH; \
		UEditorTutorial::GoToPreviousTutorialStage(); \
	} \
 \
	DECLARE_FUNCTION(execGoToNextTutorialStage) \
	{ \
		P_FINISH; \
		UEditorTutorial::GoToNextTutorialStage(); \
	} \
 \
	DECLARE_FUNCTION(execGetActorReference) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PathToActor); \
		P_FINISH; \
		*(AActor**)Z_Param__Result=this->GetActorReference(Z_Param_PathToActor); \
	}


#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_228_EVENT_PARMS \
	struct EditorTutorial_eventOnTutorialStageEnded_Parms \
	{ \
		FName StageName; \
	}; \
	struct EditorTutorial_eventOnTutorialStageStarted_Parms \
	{ \
		FName StageName; \
	};


extern INTROTUTORIALS_API  FName INTROTUTORIALS_OnTutorialClosed;
extern INTROTUTORIALS_API  FName INTROTUTORIALS_OnTutorialLaunched;
extern INTROTUTORIALS_API  FName INTROTUTORIALS_OnTutorialStageEnded;
extern INTROTUTORIALS_API  FName INTROTUTORIALS_OnTutorialStageStarted;
#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_228_CALLBACK_WRAPPERS
#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_228_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUEditorTutorial(); \
	friend INTROTUTORIALS_API class UClass* Z_Construct_UClass_UEditorTutorial(); \
	public: \
	DECLARE_CLASS(UEditorTutorial, UObject, COMPILED_IN_FLAGS(0), 0, IntroTutorials, NO_API) \
	DECLARE_SERIALIZER(UEditorTutorial) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UEditorTutorial*>(this); }


#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_228_INCLASS \
	private: \
	static void StaticRegisterNativesUEditorTutorial(); \
	friend INTROTUTORIALS_API class UClass* Z_Construct_UClass_UEditorTutorial(); \
	public: \
	DECLARE_CLASS(UEditorTutorial, UObject, COMPILED_IN_FLAGS(0), 0, IntroTutorials, NO_API) \
	DECLARE_SERIALIZER(UEditorTutorial) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UEditorTutorial*>(this); }


#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_228_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorTutorial(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorTutorial) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorTutorial); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorTutorial); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UEditorTutorial(const UEditorTutorial& InCopy); \
public:


#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_228_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorTutorial(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UEditorTutorial(const UEditorTutorial& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorTutorial); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorTutorial); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorTutorial)


#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_225_PROLOG \
	Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_228_EVENT_PARMS


#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_228_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_228_RPC_WRAPPERS \
	Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_228_CALLBACK_WRAPPERS \
	Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_228_INCLASS \
	Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_228_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_228_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_228_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_228_CALLBACK_WRAPPERS \
	Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_228_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h_228_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EditorTutorial."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_IntroTutorials_Public_EditorTutorial_h


#define FOREACH_ENUM_ETUTORIALANCHORIDENTIFIER(op) \
	op(ETutorialAnchorIdentifier::None) \
	op(ETutorialAnchorIdentifier::NamedWidget) \
	op(ETutorialAnchorIdentifier::Asset) 
#define FOREACH_ENUM_ETUTORIALCONTENT(op) \
	op(ETutorialContent::None) \
	op(ETutorialContent::Text) \
	op(ETutorialContent::UDNExcerpt) \
	op(ETutorialContent::RichText) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS