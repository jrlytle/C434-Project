// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DialogueWave_generated_h
#error "DialogueWave.generated.h already included, missing '#pragma once' in DialogueWave.h"
#endif
#define ENGINE_DialogueWave_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_19_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FDialogueContextMapping(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_42_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_42_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_42_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUDialogueWave(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UDialogueWave(); \
	public: \
	DECLARE_CLASS(UDialogueWave, UObject, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UDialogueWave) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UDialogueWave*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_42_INCLASS \
	private: \
	static void StaticRegisterNativesUDialogueWave(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UDialogueWave(); \
	public: \
	DECLARE_CLASS(UDialogueWave, UObject, COMPILED_IN_FLAGS(0), 0, Engine, ENGINE_API) \
	DECLARE_SERIALIZER(UDialogueWave) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UDialogueWave*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDialogueWave(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueWave) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDialogueWave); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueWave); \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UDialogueWave(const UDialogueWave& InCopy); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDialogueWave(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	ENGINE_API UDialogueWave(const UDialogueWave& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDialogueWave); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueWave); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueWave)


#define Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_39_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_42_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_42_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_42_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_42_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DialogueWave."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
