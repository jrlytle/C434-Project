// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneEventSection_generated_h
#error "MovieSceneEventSection.generated.h already included, missing '#pragma once' in MovieSceneEventSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneEventSection_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_17_GENERATED_BODY \
	friend MOVIESCENETRACKS_API class UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventSectionKey(); \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_54_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_54_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_54_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUMovieSceneEventSection(); \
	friend MOVIESCENETRACKS_API class UClass* Z_Construct_UClass_UMovieSceneEventSection(); \
	public: \
	DECLARE_CLASS(UMovieSceneEventSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), 0, MovieSceneTracks, MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneEventSection) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneEventSection*>(this); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_54_INCLASS \
	private: \
	static void StaticRegisterNativesUMovieSceneEventSection(); \
	friend MOVIESCENETRACKS_API class UClass* Z_Construct_UClass_UMovieSceneEventSection(); \
	public: \
	DECLARE_CLASS(UMovieSceneEventSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), 0, MovieSceneTracks, MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneEventSection) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneEventSection*>(this); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneEventSection(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEventSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneEventSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEventSection); \
private: \
	/** Private copy-constructor, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneEventSection(const UMovieSceneEventSection& InCopy); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_54_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneEventSection(const UMovieSceneEventSection& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneEventSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEventSection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneEventSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_50_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_54_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_54_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_54_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
