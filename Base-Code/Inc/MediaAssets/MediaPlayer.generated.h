// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTimespan;
#ifdef MEDIAASSETS_MediaPlayer_generated_h
#error "MediaPlayer.generated.h already included, missing '#pragma once' in MediaPlayer.h"
#endif
#define MEDIAASSETS_MediaPlayer_generated_h

#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_15_DELEGATE \
struct _Script_MediaAssets_eventOnMediaPlayerMediaOpened_Parms \
{ \
	FString OpenedUrl; \
}; \
static inline void FOnMediaPlayerMediaOpened_DelegateWrapper(const FMulticastScriptDelegate& OnMediaPlayerMediaOpened, const FString& OpenedUrl) \
{ \
	_Script_MediaAssets_eventOnMediaPlayerMediaOpened_Parms Parms; \
	Parms.OpenedUrl=OpenedUrl; \
	OnMediaPlayerMediaOpened.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_12_DELEGATE \
static inline void FOnMediaPlayerMediaClosed_DelegateWrapper(const FMulticastScriptDelegate& OnMediaPlayerMediaClosed) \
{ \
	OnMediaPlayerMediaClosed.ProcessMulticastDelegate<UObject>(NULL); \
}




#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSupportsSeeking) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->SupportsSeeking(); \
	} \
 \
	DECLARE_FUNCTION(execSupportsScrubbing) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->SupportsScrubbing(); \
	} \
 \
	DECLARE_FUNCTION(execSupportsRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_GET_UBOOL(Z_Param_Unthinned); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->SupportsRate(Z_Param_Rate,Z_Param_Unthinned); \
	} \
 \
	DECLARE_FUNCTION(execSetRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->SetRate(Z_Param_Rate); \
	} \
 \
	DECLARE_FUNCTION(execSetLooping) \
	{ \
		P_GET_UBOOL(Z_Param_InLooping); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->SetLooping(Z_Param_InLooping); \
	} \
 \
	DECLARE_FUNCTION(execSeek) \
	{ \
		P_GET_STRUCT_REF(FTimespan,Z_Param_Out_InTime); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->Seek(Z_Param_Out_InTime); \
	} \
 \
	DECLARE_FUNCTION(execRewind) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->Rewind(); \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->Play(); \
	} \
 \
	DECLARE_FUNCTION(execPause) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->Pause(); \
	} \
 \
	DECLARE_FUNCTION(execOpenUrl) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewUrl); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->OpenUrl(Z_Param_NewUrl); \
	} \
 \
	DECLARE_FUNCTION(execIsStopped) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsStopped(); \
	} \
 \
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsPlaying(); \
	} \
 \
	DECLARE_FUNCTION(execIsPaused) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsPaused(); \
	} \
 \
	DECLARE_FUNCTION(execIsLooping) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsLooping(); \
	} \
 \
	DECLARE_FUNCTION(execGetUrl) \
	{ \
		P_FINISH; \
		*(FString*)Z_Param__Result=this->GetUrl(); \
	} \
 \
	DECLARE_FUNCTION(execGetTime) \
	{ \
		P_FINISH; \
		*(FTimespan*)Z_Param__Result=this->GetTime(); \
	} \
 \
	DECLARE_FUNCTION(execGetRate) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetRate(); \
	} \
 \
	DECLARE_FUNCTION(execGetDuration) \
	{ \
		P_FINISH; \
		*(FTimespan*)Z_Param__Result=this->GetDuration(); \
	} \
 \
	DECLARE_FUNCTION(execClose) \
	{ \
		P_FINISH; \
		this->Close(); \
	} \
 \
	DECLARE_FUNCTION(execCanPlay) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->CanPlay(); \
	} \
 \
	DECLARE_FUNCTION(execCanPause) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->CanPause(); \
	}


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSupportsSeeking) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->SupportsSeeking(); \
	} \
 \
	DECLARE_FUNCTION(execSupportsScrubbing) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->SupportsScrubbing(); \
	} \
 \
	DECLARE_FUNCTION(execSupportsRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_GET_UBOOL(Z_Param_Unthinned); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->SupportsRate(Z_Param_Rate,Z_Param_Unthinned); \
	} \
 \
	DECLARE_FUNCTION(execSetRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->SetRate(Z_Param_Rate); \
	} \
 \
	DECLARE_FUNCTION(execSetLooping) \
	{ \
		P_GET_UBOOL(Z_Param_InLooping); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->SetLooping(Z_Param_InLooping); \
	} \
 \
	DECLARE_FUNCTION(execSeek) \
	{ \
		P_GET_STRUCT_REF(FTimespan,Z_Param_Out_InTime); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->Seek(Z_Param_Out_InTime); \
	} \
 \
	DECLARE_FUNCTION(execRewind) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->Rewind(); \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->Play(); \
	} \
 \
	DECLARE_FUNCTION(execPause) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->Pause(); \
	} \
 \
	DECLARE_FUNCTION(execOpenUrl) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewUrl); \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->OpenUrl(Z_Param_NewUrl); \
	} \
 \
	DECLARE_FUNCTION(execIsStopped) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsStopped(); \
	} \
 \
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsPlaying(); \
	} \
 \
	DECLARE_FUNCTION(execIsPaused) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsPaused(); \
	} \
 \
	DECLARE_FUNCTION(execIsLooping) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->IsLooping(); \
	} \
 \
	DECLARE_FUNCTION(execGetUrl) \
	{ \
		P_FINISH; \
		*(FString*)Z_Param__Result=this->GetUrl(); \
	} \
 \
	DECLARE_FUNCTION(execGetTime) \
	{ \
		P_FINISH; \
		*(FTimespan*)Z_Param__Result=this->GetTime(); \
	} \
 \
	DECLARE_FUNCTION(execGetRate) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetRate(); \
	} \
 \
	DECLARE_FUNCTION(execGetDuration) \
	{ \
		P_FINISH; \
		*(FTimespan*)Z_Param__Result=this->GetDuration(); \
	} \
 \
	DECLARE_FUNCTION(execClose) \
	{ \
		P_FINISH; \
		this->Close(); \
	} \
 \
	DECLARE_FUNCTION(execCanPlay) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->CanPlay(); \
	} \
 \
	DECLARE_FUNCTION(execCanPause) \
	{ \
		P_FINISH; \
		*(bool*)Z_Param__Result=this->CanPause(); \
	}


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_28_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUMediaPlayer(); \
	friend MEDIAASSETS_API class UClass* Z_Construct_UClass_UMediaPlayer(); \
	public: \
	DECLARE_CLASS(UMediaPlayer, UObject, COMPILED_IN_FLAGS(0), 0, MediaAssets, NO_API) \
	DECLARE_SERIALIZER(UMediaPlayer) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UMediaPlayer*>(this); }


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_28_INCLASS \
	private: \
	static void StaticRegisterNativesUMediaPlayer(); \
	friend MEDIAASSETS_API class UClass* Z_Construct_UClass_UMediaPlayer(); \
	public: \
	DECLARE_CLASS(UMediaPlayer, UObject, COMPILED_IN_FLAGS(0), 0, MediaAssets, NO_API) \
	DECLARE_SERIALIZER(UMediaPlayer) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<UMediaPlayer*>(this); }


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaPlayer); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMediaPlayer(const UMediaPlayer& InCopy); \
public:


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UMediaPlayer(const UMediaPlayer& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaPlayer)


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_24_PROLOG
#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_28_RPC_WRAPPERS \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_28_INCLASS \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_28_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MediaPlayer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MediaAssets_Public_MediaPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS