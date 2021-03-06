// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_SubMovieSceneSection_generated_h
#error "SubMovieSceneSection.generated.h already included, missing '#pragma once' in SubMovieSceneSection.h"
#endif
#define MOVIESCENETRACKS_SubMovieSceneSection_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_SubMovieSceneSection_h_15_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_SubMovieSceneSection_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_SubMovieSceneSection_h_15_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUSubMovieSceneSection(); \
	friend MOVIESCENETRACKS_API class UClass* Z_Construct_UClass_USubMovieSceneSection(); \
	public: \
	DECLARE_CLASS(USubMovieSceneSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), 0, MovieSceneTracks, NO_API) \
	DECLARE_SERIALIZER(USubMovieSceneSection) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<USubMovieSceneSection*>(this); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_SubMovieSceneSection_h_15_INCLASS \
	private: \
	static void StaticRegisterNativesUSubMovieSceneSection(); \
	friend MOVIESCENETRACKS_API class UClass* Z_Construct_UClass_USubMovieSceneSection(); \
	public: \
	DECLARE_CLASS(USubMovieSceneSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), 0, MovieSceneTracks, NO_API) \
	DECLARE_SERIALIZER(USubMovieSceneSection) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<USubMovieSceneSection*>(this); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_SubMovieSceneSection_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubMovieSceneSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubMovieSceneSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubMovieSceneSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubMovieSceneSection); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API USubMovieSceneSection(const USubMovieSceneSection& InCopy); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_SubMovieSceneSection_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubMovieSceneSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API USubMovieSceneSection(const USubMovieSceneSection& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubMovieSceneSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubMovieSceneSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubMovieSceneSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_SubMovieSceneSection_h_12_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_SubMovieSceneSection_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_SubMovieSceneSection_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_SubMovieSceneSection_h_15_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_SubMovieSceneSection_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_SubMovieSceneSection_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_SubMovieSceneSection_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_SubMovieSceneSection_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_SubMovieSceneSection_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SubMovieSceneSection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Sections_SubMovieSceneSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
