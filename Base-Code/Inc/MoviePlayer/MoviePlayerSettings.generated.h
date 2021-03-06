// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIEPLAYER_MoviePlayerSettings_generated_h
#error "MoviePlayerSettings.generated.h already included, missing '#pragma once' in MoviePlayerSettings.h"
#endif
#define MOVIEPLAYER_MoviePlayerSettings_generated_h

#define Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_17_RPC_WRAPPERS
#define Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_17_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUMoviePlayerSettings(); \
	friend MOVIEPLAYER_API class UClass* Z_Construct_UClass_UMoviePlayerSettings(); \
	public: \
	DECLARE_CLASS(UMoviePlayerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, MoviePlayer, NO_API) \
	DECLARE_SERIALIZER(UMoviePlayerSettings) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UMoviePlayerSettings*>(this); }


#define Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_17_INCLASS \
	private: \
	static void StaticRegisterNativesUMoviePlayerSettings(); \
	friend MOVIEPLAYER_API class UClass* Z_Construct_UClass_UMoviePlayerSettings(); \
	public: \
	DECLARE_CLASS(UMoviePlayerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, MoviePlayer, NO_API) \
	DECLARE_SERIALIZER(UMoviePlayerSettings) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const { return const_cast<UMoviePlayerSettings*>(this); }


#define Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePlayerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePlayerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePlayerSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePlayerSettings); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMoviePlayerSettings(const UMoviePlayerSettings& InCopy); \
public:


#define Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePlayerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMoviePlayerSettings(const UMoviePlayerSettings& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePlayerSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePlayerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePlayerSettings)


#define Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_11_PROLOG
#define Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_17_INCLASS \
	Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MoviePlayerSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
