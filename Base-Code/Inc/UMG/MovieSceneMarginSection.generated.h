// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_MovieSceneMarginSection_generated_h
#error "MovieSceneMarginSection.generated.h already included, missing '#pragma once' in MovieSceneMarginSection.h"
#endif
#define UMG_MovieSceneMarginSection_generated_h

#define Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h_17_RPC_WRAPPERS
#define Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h_17_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUMovieSceneMarginSection(); \
	friend UMG_API class UClass* Z_Construct_UClass_UMovieSceneMarginSection(); \
	public: \
	DECLARE_CLASS(UMovieSceneMarginSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), 0, UMG, UMG_API) \
	DECLARE_SERIALIZER(UMovieSceneMarginSection) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneMarginSection*>(this); }


#define Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h_17_INCLASS \
	private: \
	static void StaticRegisterNativesUMovieSceneMarginSection(); \
	friend UMG_API class UClass* Z_Construct_UClass_UMovieSceneMarginSection(); \
	public: \
	DECLARE_CLASS(UMovieSceneMarginSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), 0, UMG, UMG_API) \
	DECLARE_SERIALIZER(UMovieSceneMarginSection) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneMarginSection*>(this); }


#define Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UMovieSceneMarginSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneMarginSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UMovieSceneMarginSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneMarginSection); \
private: \
	/** Private copy-constructor, should never be used */ \
	UMG_API UMovieSceneMarginSection(const UMovieSceneMarginSection& InCopy); \
public:


#define Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UMovieSceneMarginSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	UMG_API UMovieSceneMarginSection(const UMovieSceneMarginSection& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UMovieSceneMarginSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneMarginSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneMarginSection)


#define Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h_14_PROLOG
#define Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h_17_INCLASS \
	Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieSceneMarginSection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
