// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneShotTrack_generated_h
#error "MovieSceneShotTrack.generated.h already included, missing '#pragma once' in MovieSceneShotTrack.h"
#endif
#define MOVIESCENETRACKS_MovieSceneShotTrack_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneShotTrack_h_16_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneShotTrack_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneShotTrack_h_16_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUMovieSceneShotTrack(); \
	friend MOVIESCENETRACKS_API class UClass* Z_Construct_UClass_UMovieSceneShotTrack(); \
	public: \
	DECLARE_CLASS(UMovieSceneShotTrack, USubMovieSceneTrack, COMPILED_IN_FLAGS(0), 0, MovieSceneTracks, MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneShotTrack) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneShotTrack*>(this); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneShotTrack_h_16_INCLASS \
	private: \
	static void StaticRegisterNativesUMovieSceneShotTrack(); \
	friend MOVIESCENETRACKS_API class UClass* Z_Construct_UClass_UMovieSceneShotTrack(); \
	public: \
	DECLARE_CLASS(UMovieSceneShotTrack, USubMovieSceneTrack, COMPILED_IN_FLAGS(0), 0, MovieSceneTracks, MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneShotTrack) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneShotTrack*>(this); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneShotTrack_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneShotTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneShotTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneShotTrack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneShotTrack); \
private: \
	/** Private copy-constructor, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneShotTrack(const UMovieSceneShotTrack& InCopy); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneShotTrack_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneShotTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneShotTrack(const UMovieSceneShotTrack& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneShotTrack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneShotTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneShotTrack)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneShotTrack_h_13_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneShotTrack_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneShotTrack_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneShotTrack_h_16_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneShotTrack_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneShotTrack_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneShotTrack_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneShotTrack_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneShotTrack_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieSceneShotTrack."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneShotTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS