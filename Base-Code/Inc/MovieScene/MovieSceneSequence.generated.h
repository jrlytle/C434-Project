// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneSequence_generated_h
#error "MovieSceneSequence.generated.h already included, missing '#pragma once' in MovieSceneSequence.h"
#endif
#define MOVIESCENE_MovieSceneSequence_generated_h

#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_20_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_20_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUMovieSceneSequence(); \
	friend MOVIESCENE_API class UClass* Z_Construct_UClass_UMovieSceneSequence(); \
	public: \
	DECLARE_CLASS(UMovieSceneSequence, UObject, COMPILED_IN_FLAGS(0), 0, MovieScene, MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneSequence) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UMovieSceneSequence*>(this); }


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_20_INCLASS \
	private: \
	static void StaticRegisterNativesUMovieSceneSequence(); \
	friend MOVIESCENE_API class UClass* Z_Construct_UClass_UMovieSceneSequence(); \
	public: \
	DECLARE_CLASS(UMovieSceneSequence, UObject, COMPILED_IN_FLAGS(0), 0, MovieScene, MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneSequence) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UMovieSceneSequence*>(this); }


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSequence) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneSequence); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSequence); \
private: \
	/** Private copy-constructor, should never be used */ \
	MOVIESCENE_API UMovieSceneSequence(const UMovieSceneSequence& InCopy); \
public:


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	MOVIESCENE_API UMovieSceneSequence(const UMovieSceneSequence& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneSequence); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSequence); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSequence)


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_16_PROLOG
#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_20_INCLASS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
