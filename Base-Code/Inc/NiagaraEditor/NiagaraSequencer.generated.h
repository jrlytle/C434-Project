// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARAEDITOR_NiagaraSequencer_generated_h
#error "NiagaraSequencer.generated.h already included, missing '#pragma once' in NiagaraSequencer.h"
#endif
#define NIAGARAEDITOR_NiagaraSequencer_generated_h

#define Engine_Source_Editor_NiagaraEditor_Private_NiagaraSequencer_h_20_RPC_WRAPPERS
#define Engine_Source_Editor_NiagaraEditor_Private_NiagaraSequencer_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_NiagaraEditor_Private_NiagaraSequencer_h_20_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUNiagaraMovieSceneSection(); \
	friend NIAGARAEDITOR_API class UClass* Z_Construct_UClass_UNiagaraMovieSceneSection(); \
	public: \
	DECLARE_CLASS(UNiagaraMovieSceneSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), 0, NiagaraEditor, NO_API) \
	DECLARE_SERIALIZER(UNiagaraMovieSceneSection) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UNiagaraMovieSceneSection*>(this); }


#define Engine_Source_Editor_NiagaraEditor_Private_NiagaraSequencer_h_20_INCLASS \
	private: \
	static void StaticRegisterNativesUNiagaraMovieSceneSection(); \
	friend NIAGARAEDITOR_API class UClass* Z_Construct_UClass_UNiagaraMovieSceneSection(); \
	public: \
	DECLARE_CLASS(UNiagaraMovieSceneSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), 0, NiagaraEditor, NO_API) \
	DECLARE_SERIALIZER(UNiagaraMovieSceneSection) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UNiagaraMovieSceneSection*>(this); }


#define Engine_Source_Editor_NiagaraEditor_Private_NiagaraSequencer_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraMovieSceneSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraMovieSceneSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraMovieSceneSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraMovieSceneSection); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UNiagaraMovieSceneSection(const UNiagaraMovieSceneSection& InCopy); \
public:


#define Engine_Source_Editor_NiagaraEditor_Private_NiagaraSequencer_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraMovieSceneSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UNiagaraMovieSceneSection(const UNiagaraMovieSceneSection& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraMovieSceneSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraMovieSceneSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraMovieSceneSection)


#define Engine_Source_Editor_NiagaraEditor_Private_NiagaraSequencer_h_17_PROLOG
#define Engine_Source_Editor_NiagaraEditor_Private_NiagaraSequencer_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_NiagaraEditor_Private_NiagaraSequencer_h_20_RPC_WRAPPERS \
	Engine_Source_Editor_NiagaraEditor_Private_NiagaraSequencer_h_20_INCLASS \
	Engine_Source_Editor_NiagaraEditor_Private_NiagaraSequencer_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_NiagaraEditor_Private_NiagaraSequencer_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_NiagaraEditor_Private_NiagaraSequencer_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_NiagaraEditor_Private_NiagaraSequencer_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_NiagaraEditor_Private_NiagaraSequencer_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NiagaraMovieSceneSection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_NiagaraEditor_Private_NiagaraSequencer_h_143_RPC_WRAPPERS
#define Engine_Source_Editor_NiagaraEditor_Private_NiagaraSequencer_h_143_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_NiagaraEditor_Private_NiagaraSequencer_h_143_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUEmitterMovieSceneTrack(); \
	friend NIAGARAEDITOR_API class UClass* Z_Construct_UClass_UEmitterMovieSceneTrack(); \
	public: \
	DECLARE_CLASS(UEmitterMovieSceneTrack, UMovieSceneTrack, COMPILED_IN_FLAGS(0), 0, NiagaraEditor, NIAGARAEDITOR_API) \
	DECLARE_SERIALIZER(UEmitterMovieSceneTrack) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UEmitterMovieSceneTrack*>(this); }


#define Engine_Source_Editor_NiagaraEditor_Private_NiagaraSequencer_h_143_INCLASS \
	private: \
	static void StaticRegisterNativesUEmitterMovieSceneTrack(); \
	friend NIAGARAEDITOR_API class UClass* Z_Construct_UClass_UEmitterMovieSceneTrack(); \
	public: \
	DECLARE_CLASS(UEmitterMovieSceneTrack, UMovieSceneTrack, COMPILED_IN_FLAGS(0), 0, NiagaraEditor, NIAGARAEDITOR_API) \
	DECLARE_SERIALIZER(UEmitterMovieSceneTrack) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UEmitterMovieSceneTrack*>(this); }


#define Engine_Source_Editor_NiagaraEditor_Private_NiagaraSequencer_h_143_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UEmitterMovieSceneTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEmitterMovieSceneTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UEmitterMovieSceneTrack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEmitterMovieSceneTrack); \
private: \
	/** Private copy-constructor, should never be used */ \
	NIAGARAEDITOR_API UEmitterMovieSceneTrack(const UEmitterMovieSceneTrack& InCopy); \
public:


#define Engine_Source_Editor_NiagaraEditor_Private_NiagaraSequencer_h_143_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UEmitterMovieSceneTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NIAGARAEDITOR_API UEmitterMovieSceneTrack(const UEmitterMovieSceneTrack& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UEmitterMovieSceneTrack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEmitterMovieSceneTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEmitterMovieSceneTrack)


#define Engine_Source_Editor_NiagaraEditor_Private_NiagaraSequencer_h_140_PROLOG
#define Engine_Source_Editor_NiagaraEditor_Private_NiagaraSequencer_h_143_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_NiagaraEditor_Private_NiagaraSequencer_h_143_RPC_WRAPPERS \
	Engine_Source_Editor_NiagaraEditor_Private_NiagaraSequencer_h_143_INCLASS \
	Engine_Source_Editor_NiagaraEditor_Private_NiagaraSequencer_h_143_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_NiagaraEditor_Private_NiagaraSequencer_h_143_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_NiagaraEditor_Private_NiagaraSequencer_h_143_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_NiagaraEditor_Private_NiagaraSequencer_h_143_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_NiagaraEditor_Private_NiagaraSequencer_h_143_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EmitterMovieSceneTrack."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_NiagaraEditor_Private_NiagaraSequencer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
