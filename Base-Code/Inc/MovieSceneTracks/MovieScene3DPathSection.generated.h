// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieScene3DPathSection_generated_h
#error "MovieScene3DPathSection.generated.h already included, missing '#pragma once' in MovieScene3DPathSection.h"
#endif
#define MOVIESCENETRACKS_MovieScene3DPathSection_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_28_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_28_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUMovieScene3DPathSection(); \
	friend MOVIESCENETRACKS_API class UClass* Z_Construct_UClass_UMovieScene3DPathSection(); \
	public: \
	DECLARE_CLASS(UMovieScene3DPathSection, UMovieScene3DConstraintSection, COMPILED_IN_FLAGS(0), 0, MovieSceneTracks, MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieScene3DPathSection) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMovieScene3DPathSection*>(this); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_28_INCLASS \
	private: \
	static void StaticRegisterNativesUMovieScene3DPathSection(); \
	friend MOVIESCENETRACKS_API class UClass* Z_Construct_UClass_UMovieScene3DPathSection(); \
	public: \
	DECLARE_CLASS(UMovieScene3DPathSection, UMovieScene3DConstraintSection, COMPILED_IN_FLAGS(0), 0, MovieSceneTracks, MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieScene3DPathSection) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMovieScene3DPathSection*>(this); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieScene3DPathSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScene3DPathSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieScene3DPathSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScene3DPathSection); \
private: \
	/** Private copy-constructor, should never be used */ \
	MOVIESCENETRACKS_API UMovieScene3DPathSection(const UMovieScene3DPathSection& InCopy); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieScene3DPathSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	MOVIESCENETRACKS_API UMovieScene3DPathSection(const UMovieScene3DPathSection& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieScene3DPathSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScene3DPathSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScene3DPathSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_24_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_28_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_28_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_28_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieScene3DPathSection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h


#define FOREACH_ENUM_MOVIESCENE3DPATHSECTION_AXIS(op) \
	op(MovieScene3DPathSection_Axis::X) \
	op(MovieScene3DPathSection_Axis::Y) \
	op(MovieScene3DPathSection_Axis::Z) \
	op(MovieScene3DPathSection_Axis::NEG_X) \
	op(MovieScene3DPathSection_Axis::NEG_Y) \
	op(MovieScene3DPathSection_Axis::NEG_Z) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
