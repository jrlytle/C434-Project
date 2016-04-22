// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneParticleSection_generated_h
#error "MovieSceneParticleSection.generated.h already included, missing '#pragma once' in MovieSceneParticleSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneParticleSection_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_30_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_30_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUMovieSceneParticleSection(); \
	friend MOVIESCENETRACKS_API class UClass* Z_Construct_UClass_UMovieSceneParticleSection(); \
	public: \
	DECLARE_CLASS(UMovieSceneParticleSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), 0, MovieSceneTracks, MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneParticleSection) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneParticleSection*>(this); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_30_INCLASS \
	private: \
	static void StaticRegisterNativesUMovieSceneParticleSection(); \
	friend MOVIESCENETRACKS_API class UClass* Z_Construct_UClass_UMovieSceneParticleSection(); \
	public: \
	DECLARE_CLASS(UMovieSceneParticleSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), 0, MovieSceneTracks, MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneParticleSection) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneParticleSection*>(this); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneParticleSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneParticleSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneParticleSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneParticleSection); \
private: \
	/** Private copy-constructor, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneParticleSection(const UMovieSceneParticleSection& InCopy); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneParticleSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneParticleSection(const UMovieSceneParticleSection& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneParticleSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneParticleSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneParticleSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_26_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_30_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_30_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_30_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieSceneParticleSection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h


#define FOREACH_ENUM_EPARTICLEKEY(op) \
	op(EParticleKey::Active) \
	op(EParticleKey::Inactive) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS