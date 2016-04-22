// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMediaPlayer;
#ifdef MEDIAASSETS_MediaSoundWave_generated_h
#error "MediaSoundWave.generated.h already included, missing '#pragma once' in MediaSoundWave.h"
#endif
#define MEDIAASSETS_MediaSoundWave_generated_h

#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMediaPlayer) \
	{ \
		P_GET_OBJECT(UMediaPlayer,Z_Param_InMediaPlayer); \
		P_FINISH; \
		this->SetMediaPlayer(Z_Param_InMediaPlayer); \
	}


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMediaPlayer) \
	{ \
		P_GET_OBJECT(UMediaPlayer,Z_Param_InMediaPlayer); \
		P_FINISH; \
		this->SetMediaPlayer(Z_Param_InMediaPlayer); \
	}


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_23_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUMediaSoundWave(); \
	friend MEDIAASSETS_API class UClass* Z_Construct_UClass_UMediaSoundWave(); \
	public: \
	DECLARE_CLASS(UMediaSoundWave, USoundWave, COMPILED_IN_FLAGS(0), 0, MediaAssets, NO_API) \
	DECLARE_SERIALIZER(UMediaSoundWave) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMediaSoundWave*>(this); }


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_23_INCLASS \
	private: \
	static void StaticRegisterNativesUMediaSoundWave(); \
	friend MEDIAASSETS_API class UClass* Z_Construct_UClass_UMediaSoundWave(); \
	public: \
	DECLARE_CLASS(UMediaSoundWave, USoundWave, COMPILED_IN_FLAGS(0), 0, MediaAssets, NO_API) \
	DECLARE_SERIALIZER(UMediaSoundWave) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMediaSoundWave*>(this); }


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaSoundWave(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaSoundWave) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaSoundWave); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaSoundWave); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMediaSoundWave(const UMediaSoundWave& InCopy); \
public:


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaSoundWave(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMediaSoundWave(const UMediaSoundWave& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaSoundWave); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaSoundWave); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaSoundWave)


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_19_PROLOG
#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_23_INCLASS \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MediaSoundWave."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MediaAssets_Public_MediaSoundWave_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
