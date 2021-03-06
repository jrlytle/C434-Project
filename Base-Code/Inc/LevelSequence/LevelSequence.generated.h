// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEVELSEQUENCE_LevelSequence_generated_h
#error "LevelSequence.generated.h already included, missing '#pragma once' in LevelSequence.h"
#endif
#define LEVELSEQUENCE_LevelSequence_generated_h

#define Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_18_RPC_WRAPPERS
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_18_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesULevelSequence(); \
	friend LEVELSEQUENCE_API class UClass* Z_Construct_UClass_ULevelSequence(); \
	public: \
	DECLARE_CLASS(ULevelSequence, UObject, COMPILED_IN_FLAGS(0), 0, LevelSequence, NO_API) \
	DECLARE_SERIALIZER(ULevelSequence) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<ULevelSequence*>(this); }


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_18_INCLASS \
	private: \
	static void StaticRegisterNativesULevelSequence(); \
	friend LEVELSEQUENCE_API class UClass* Z_Construct_UClass_ULevelSequence(); \
	public: \
	DECLARE_CLASS(ULevelSequence, UObject, COMPILED_IN_FLAGS(0), 0, LevelSequence, NO_API) \
	DECLARE_SERIALIZER(ULevelSequence) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<ULevelSequence*>(this); }


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequence) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSequence); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequence); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULevelSequence(const ULevelSequence& InCopy); \
public:


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULevelSequence(const ULevelSequence& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSequence); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequence); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequence)


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_14_PROLOG
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_18_INCLASS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LevelSequence."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_55_RPC_WRAPPERS
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_55_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_55_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesULevelSequenceInstance(); \
	friend LEVELSEQUENCE_API class UClass* Z_Construct_UClass_ULevelSequenceInstance(); \
	public: \
	DECLARE_CLASS(ULevelSequenceInstance, UMovieSceneSequence, COMPILED_IN_FLAGS(0), 0, LevelSequence, NO_API) \
	DECLARE_SERIALIZER(ULevelSequenceInstance) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ULevelSequenceInstance*>(this); }


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_55_INCLASS \
	private: \
	static void StaticRegisterNativesULevelSequenceInstance(); \
	friend LEVELSEQUENCE_API class UClass* Z_Construct_UClass_ULevelSequenceInstance(); \
	public: \
	DECLARE_CLASS(ULevelSequenceInstance, UMovieSceneSequence, COMPILED_IN_FLAGS(0), 0, LevelSequence, NO_API) \
	DECLARE_SERIALIZER(ULevelSequenceInstance) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ULevelSequenceInstance*>(this); }


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSequenceInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequenceInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSequenceInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceInstance); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULevelSequenceInstance(const ULevelSequenceInstance& InCopy); \
public:


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSequenceInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULevelSequenceInstance(const ULevelSequenceInstance& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSequenceInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequenceInstance)


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_49_PROLOG
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_55_RPC_WRAPPERS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_55_INCLASS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_55_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_55_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
