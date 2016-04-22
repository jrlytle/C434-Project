// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
#ifdef GAMEPLAYTAGSEDITOR_GameplayTagsK2Node_SwitchGameplayTag_generated_h
#error "GameplayTagsK2Node_SwitchGameplayTag.generated.h already included, missing '#pragma once' in GameplayTagsK2Node_SwitchGameplayTag.h"
#endif
#define GAMEPLAYTAGSEDITOR_GameplayTagsK2Node_SwitchGameplayTag_generated_h

#define Engine_Source_Editor_GameplayTagsEditor_Classes_GameplayTagsK2Node_SwitchGameplayTag_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNotEqual_TagTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_A); \
		P_GET_PROPERTY(UStrProperty,Z_Param_B); \
		P_FINISH; \
		*(bool*)Z_Param__Result=UGameplayTagsK2Node_SwitchGameplayTag::NotEqual_TagTag(Z_Param_A,Z_Param_B); \
	}


#define Engine_Source_Editor_GameplayTagsEditor_Classes_GameplayTagsK2Node_SwitchGameplayTag_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNotEqual_TagTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_A); \
		P_GET_PROPERTY(UStrProperty,Z_Param_B); \
		P_FINISH; \
		*(bool*)Z_Param__Result=UGameplayTagsK2Node_SwitchGameplayTag::NotEqual_TagTag(Z_Param_A,Z_Param_B); \
	}


#define Engine_Source_Editor_GameplayTagsEditor_Classes_GameplayTagsK2Node_SwitchGameplayTag_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUGameplayTagsK2Node_SwitchGameplayTag(); \
	friend GAMEPLAYTAGSEDITOR_API class UClass* Z_Construct_UClass_UGameplayTagsK2Node_SwitchGameplayTag(); \
	public: \
	DECLARE_CLASS(UGameplayTagsK2Node_SwitchGameplayTag, UK2Node_Switch, COMPILED_IN_FLAGS(0), 0, GameplayTagsEditor, GAMEPLAYTAGSEDITOR_API) \
	DECLARE_SERIALIZER(UGameplayTagsK2Node_SwitchGameplayTag) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayTagsK2Node_SwitchGameplayTag*>(this); }


#define Engine_Source_Editor_GameplayTagsEditor_Classes_GameplayTagsK2Node_SwitchGameplayTag_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesUGameplayTagsK2Node_SwitchGameplayTag(); \
	friend GAMEPLAYTAGSEDITOR_API class UClass* Z_Construct_UClass_UGameplayTagsK2Node_SwitchGameplayTag(); \
	public: \
	DECLARE_CLASS(UGameplayTagsK2Node_SwitchGameplayTag, UK2Node_Switch, COMPILED_IN_FLAGS(0), 0, GameplayTagsEditor, GAMEPLAYTAGSEDITOR_API) \
	DECLARE_SERIALIZER(UGameplayTagsK2Node_SwitchGameplayTag) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayTagsK2Node_SwitchGameplayTag*>(this); }


#define Engine_Source_Editor_GameplayTagsEditor_Classes_GameplayTagsK2Node_SwitchGameplayTag_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYTAGSEDITOR_API UGameplayTagsK2Node_SwitchGameplayTag(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagsK2Node_SwitchGameplayTag) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTAGSEDITOR_API, UGameplayTagsK2Node_SwitchGameplayTag); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagsK2Node_SwitchGameplayTag); \
private: \
	/** Private copy-constructor, should never be used */ \
	GAMEPLAYTAGSEDITOR_API UGameplayTagsK2Node_SwitchGameplayTag(const UGameplayTagsK2Node_SwitchGameplayTag& InCopy); \
public:


#define Engine_Source_Editor_GameplayTagsEditor_Classes_GameplayTagsK2Node_SwitchGameplayTag_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYTAGSEDITOR_API UGameplayTagsK2Node_SwitchGameplayTag(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	GAMEPLAYTAGSEDITOR_API UGameplayTagsK2Node_SwitchGameplayTag(const UGameplayTagsK2Node_SwitchGameplayTag& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTAGSEDITOR_API, UGameplayTagsK2Node_SwitchGameplayTag); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagsK2Node_SwitchGameplayTag); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagsK2Node_SwitchGameplayTag)


#define Engine_Source_Editor_GameplayTagsEditor_Classes_GameplayTagsK2Node_SwitchGameplayTag_h_11_PROLOG
#define Engine_Source_Editor_GameplayTagsEditor_Classes_GameplayTagsK2Node_SwitchGameplayTag_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_GameplayTagsEditor_Classes_GameplayTagsK2Node_SwitchGameplayTag_h_14_RPC_WRAPPERS \
	Engine_Source_Editor_GameplayTagsEditor_Classes_GameplayTagsK2Node_SwitchGameplayTag_h_14_INCLASS \
	Engine_Source_Editor_GameplayTagsEditor_Classes_GameplayTagsK2Node_SwitchGameplayTag_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_GameplayTagsEditor_Classes_GameplayTagsK2Node_SwitchGameplayTag_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_GameplayTagsEditor_Classes_GameplayTagsK2Node_SwitchGameplayTag_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_GameplayTagsEditor_Classes_GameplayTagsK2Node_SwitchGameplayTag_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_GameplayTagsEditor_Classes_GameplayTagsK2Node_SwitchGameplayTag_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameplayTagsK2Node_SwitchGameplayTag."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_GameplayTagsEditor_Classes_GameplayTagsK2Node_SwitchGameplayTag_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
