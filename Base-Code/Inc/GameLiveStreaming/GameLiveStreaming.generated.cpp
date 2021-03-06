// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GameLiveStreamingModule.h"
#include "GameLiveStreaming.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameLiveStreaming() {}
	void UGameLiveStreamingFunctionLibrary::StaticRegisterNativesUGameLiveStreamingFunctionLibrary()
	{
		FNativeFunctionRegistrar::RegisterFunction(UGameLiveStreamingFunctionLibrary::StaticClass(),"IsBroadcastingGame",(Native)&UGameLiveStreamingFunctionLibrary::execIsBroadcastingGame);
		FNativeFunctionRegistrar::RegisterFunction(UGameLiveStreamingFunctionLibrary::StaticClass(),"StartBroadcastingGame",(Native)&UGameLiveStreamingFunctionLibrary::execStartBroadcastingGame);
		FNativeFunctionRegistrar::RegisterFunction(UGameLiveStreamingFunctionLibrary::StaticClass(),"StopBroadcastingGame",(Native)&UGameLiveStreamingFunctionLibrary::execStopBroadcastingGame);
	}
	IMPLEMENT_CLASS(UGameLiveStreamingFunctionLibrary, 139153881);
class UScriptStruct* FBlueprintLiveStreamInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMELIVESTREAMING_API class UScriptStruct* Z_Construct_UScriptStruct_FBlueprintLiveStreamInfo();
		extern GAMELIVESTREAMING_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintLiveStreamInfo_CRC();
		extern GAMELIVESTREAMING_API class UPackage* Z_Construct_UPackage_GameLiveStreaming();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintLiveStreamInfo, Z_Construct_UPackage_GameLiveStreaming(), TEXT("BlueprintLiveStreamInfo"), sizeof(FBlueprintLiveStreamInfo), Get_Z_Construct_UScriptStruct_FBlueprintLiveStreamInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintLiveStreamInfo(FBlueprintLiveStreamInfo::StaticStruct, TEXT("/Script/GameLiveStreaming"));
static struct FScriptStruct_GameLiveStreaming_StaticRegisterNativesFBlueprintLiveStreamInfo
{
	FScriptStruct_GameLiveStreaming_StaticRegisterNativesFBlueprintLiveStreamInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlueprintLiveStreamInfo")),new UScriptStruct::TCppStructOps<FBlueprintLiveStreamInfo>);
	}
} ScriptStruct_GameLiveStreaming_StaticRegisterNativesFBlueprintLiveStreamInfo;
	void UQueryLiveStreamsCallbackProxy::StaticRegisterNativesUQueryLiveStreamsCallbackProxy()
	{
		FNativeFunctionRegistrar::RegisterFunction(UQueryLiveStreamsCallbackProxy::StaticClass(),"QueryLiveStreams",(Native)&UQueryLiveStreamsCallbackProxy::execQueryLiveStreams);
	}
	IMPLEMENT_CLASS(UQueryLiveStreamsCallbackProxy, 1126655050);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ONLINESUBSYSTEMUTILS_API class UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();

	GAMELIVESTREAMING_API class UFunction* Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_IsBroadcastingGame();
	GAMELIVESTREAMING_API class UFunction* Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_StartBroadcastingGame();
	GAMELIVESTREAMING_API class UFunction* Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_StopBroadcastingGame();
	GAMELIVESTREAMING_API class UClass* Z_Construct_UClass_UGameLiveStreamingFunctionLibrary_NoRegister();
	GAMELIVESTREAMING_API class UClass* Z_Construct_UClass_UGameLiveStreamingFunctionLibrary();
	GAMELIVESTREAMING_API class UFunction* Z_Construct_UDelegateFunction_GameLiveStreaming_OnQueryLiveStreamsCompleted__DelegateSignature();
	GAMELIVESTREAMING_API class UScriptStruct* Z_Construct_UScriptStruct_FBlueprintLiveStreamInfo();
	GAMELIVESTREAMING_API class UFunction* Z_Construct_UFunction_UQueryLiveStreamsCallbackProxy_QueryLiveStreams();
	GAMELIVESTREAMING_API class UClass* Z_Construct_UClass_UQueryLiveStreamsCallbackProxy_NoRegister();
	GAMELIVESTREAMING_API class UClass* Z_Construct_UClass_UQueryLiveStreamsCallbackProxy();
	GAMELIVESTREAMING_API class UPackage* Z_Construct_UPackage_GameLiveStreaming();
	UFunction* Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_IsBroadcastingGame()
	{
		struct GameLiveStreamingFunctionLibrary_eventIsBroadcastingGame_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UGameLiveStreamingFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsBroadcastingGame"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x14022401, 65535, sizeof(GameLiveStreamingFunctionLibrary_eventIsBroadcastingGame_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, GameLiveStreamingFunctionLibrary_eventIsBroadcastingGame_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, GameLiveStreamingFunctionLibrary_eventIsBroadcastingGame_Parms), 0x0000000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, GameLiveStreamingFunctionLibrary_eventIsBroadcastingGame_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("LiveStreaming"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("GameLiveStreamingFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Checks to see if we are currently broadcasting live video (and possibly audio) from the game's viewport\n\n@return      True if we are currently transmitting"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_StartBroadcastingGame()
	{
		struct GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms
		{
			int32 FrameRate;
			float ScreenScaling;
			bool bEnableWebCam;
			int32 DesiredWebCamWidth;
			int32 DesiredWebCamHeight;
			bool bMirrorWebCamImage;
			bool bCaptureAudioFromComputer;
			bool bCaptureAudioFromMicrophone;
			bool bDrawSimpleWebCamVideo;
		};
		UObject* Outer=Z_Construct_UClass_UGameLiveStreamingFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StartBroadcastingGame"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDrawSimpleWebCamVideo, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms, bool);
			UProperty* NewProp_bDrawSimpleWebCamVideo = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bDrawSimpleWebCamVideo"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDrawSimpleWebCamVideo, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms), 0x0000000000000080, CPP_BOOL_PROPERTY_BITMASK(bDrawSimpleWebCamVideo, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bCaptureAudioFromMicrophone, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms, bool);
			UProperty* NewProp_bCaptureAudioFromMicrophone = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bCaptureAudioFromMicrophone"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bCaptureAudioFromMicrophone, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms), 0x0000000000000080, CPP_BOOL_PROPERTY_BITMASK(bCaptureAudioFromMicrophone, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bCaptureAudioFromComputer, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms, bool);
			UProperty* NewProp_bCaptureAudioFromComputer = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bCaptureAudioFromComputer"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bCaptureAudioFromComputer, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms), 0x0000000000000080, CPP_BOOL_PROPERTY_BITMASK(bCaptureAudioFromComputer, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bMirrorWebCamImage, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms, bool);
			UProperty* NewProp_bMirrorWebCamImage = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bMirrorWebCamImage"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bMirrorWebCamImage, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms), 0x0000000000000080, CPP_BOOL_PROPERTY_BITMASK(bMirrorWebCamImage, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms), sizeof(bool), true);
			UProperty* NewProp_DesiredWebCamHeight = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DesiredWebCamHeight"), RF_Public|RF_Transient|RF_Native) UIntProperty(CPP_PROPERTY_BASE(DesiredWebCamHeight, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms), 0x0000000000000080);
			UProperty* NewProp_DesiredWebCamWidth = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DesiredWebCamWidth"), RF_Public|RF_Transient|RF_Native) UIntProperty(CPP_PROPERTY_BASE(DesiredWebCamWidth, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms), 0x0000000000000080);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnableWebCam, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms, bool);
			UProperty* NewProp_bEnableWebCam = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bEnableWebCam"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnableWebCam, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms), 0x0000000000000080, CPP_BOOL_PROPERTY_BITMASK(bEnableWebCam, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms), sizeof(bool), true);
			UProperty* NewProp_ScreenScaling = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ScreenScaling"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(ScreenScaling, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms), 0x0000000000000080);
			UProperty* NewProp_FrameRate = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FrameRate"), RF_Public|RF_Transient|RF_Native) UIntProperty(CPP_PROPERTY_BASE(FrameRate, GameLiveStreamingFunctionLibrary_eventStartBroadcastingGame_Parms), 0x0000000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("LiveStreaming"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bCaptureAudioFromComputer"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bCaptureAudioFromMicrophone"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bDrawSimpleWebCamVideo"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bEnableWebCam"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bMirrorWebCamImage"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_DesiredWebCamHeight"), TEXT("240"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_DesiredWebCamWidth"), TEXT("320"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_FrameRate"), TEXT("30"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_ScreenScaling"), TEXT("1.000000"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("GameLiveStreamingFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Starts broadcasting the game's video (and optionally audio) using an internet streaming service, if one is available\n\n@param       FrameRate                                       Frame rate to stream video from when broadcasting to services like Twitch.\n@param       ScreenScaling                           How much to scale the broadcast video resolution down to reduce streaming bandwidth.  We recommend broadcasting at resolutions of 1280x720 or lower.  Some live streaming providers will not be able to transcode your video to a lower resolution, so using a high resolution stream may prevent low-bandwidth users from having a good viewing experience.\n@param       bEnableWebCam                           If enabled, video from your web camera will be captured and displayed while broadcasting, so that your viewers can see your presence.\n@param       DesiredWebCamWidth                      Desired web cam capture resolution width.  The web cam may only support a limited number of resolutions, so we'll choose one that matches as closely to this as possible\n@param       DesiredWebCamHeight                     Desired web cam capture resolution height.\n@param       bMirrorWebCamImage                      You can enable this to flip the web camera image horizontally, so that it looks like a mirror\n@param       bCaptureAudioFromComputer       Enables broadcast of audio being played by your computer, such as in-game sounds\n@param       bCaptureAudioFromMicrophone     Enables broadcast of audio from your default microphone recording device\n@param       bDrawSimpleWebCamVideo          If enabled, the engine will draw a simple web cam image on top of the game viewport.  If you turn this off, it's up to you to draw the web cam image yourself.  You can access the web cam texture by calling IGameLiveStreaming::Get().GetWebCamTexture()."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_StopBroadcastingGame()
	{
		UObject* Outer=Z_Construct_UClass_UGameLiveStreamingFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StopBroadcastingGame"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("LiveStreaming"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("GameLiveStreamingFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Stops broadcasting the game"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameLiveStreamingFunctionLibrary_NoRegister()
	{
		return UGameLiveStreamingFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameLiveStreamingFunctionLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage_GameLiveStreaming();
			OuterClass = UGameLiveStreamingFunctionLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000080;

				OuterClass->LinkChild(Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_IsBroadcastingGame());
				OuterClass->LinkChild(Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_StartBroadcastingGame());
				OuterClass->LinkChild(Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_StopBroadcastingGame());

				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_IsBroadcastingGame()); // 3088058890
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_StartBroadcastingGame()); // 712642020
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_UGameLiveStreamingFunctionLibrary_StopBroadcastingGame()); // 437762384
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GameLiveStreamingFunctionLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("GameLiveStreamingFunctionLibrary.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameLiveStreamingFunctionLibrary(Z_Construct_UClass_UGameLiveStreamingFunctionLibrary, TEXT("UGameLiveStreamingFunctionLibrary"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameLiveStreamingFunctionLibrary);
	UFunction* Z_Construct_UDelegateFunction_GameLiveStreaming_OnQueryLiveStreamsCompleted__DelegateSignature()
	{
		struct _Script_GameLiveStreaming_eventOnQueryLiveStreamsCompleted_Parms
		{
			TArray<FBlueprintLiveStreamInfo> LiveStreams;
			bool bWasSuccessful;
		};
		UObject* Outer=Z_Construct_UPackage_GameLiveStreaming();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnQueryLiveStreamsCompleted__DelegateSignature"), RF_Public|RF_Transient|RF_Native) UDelegateFunction(FObjectInitializer(), NULL, 0x00130000, 65535, sizeof(_Script_GameLiveStreaming_eventOnQueryLiveStreamsCompleted_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bWasSuccessful, _Script_GameLiveStreaming_eventOnQueryLiveStreamsCompleted_Parms, bool);
			UProperty* NewProp_bWasSuccessful = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bWasSuccessful"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bWasSuccessful, _Script_GameLiveStreaming_eventOnQueryLiveStreamsCompleted_Parms), 0x0000000000000080, CPP_BOOL_PROPERTY_BITMASK(bWasSuccessful, _Script_GameLiveStreaming_eventOnQueryLiveStreamsCompleted_Parms), sizeof(bool), true);
			UProperty* NewProp_LiveStreams = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LiveStreams"), RF_Public|RF_Transient|RF_Native) UArrayProperty(CPP_PROPERTY_BASE(LiveStreams, _Script_GameLiveStreaming_eventOnQueryLiveStreamsCompleted_Parms), 0x0000000008000182);
			UProperty* NewProp_LiveStreams_Inner = new(EC_InternalUseOnlyConstructor, NewProp_LiveStreams, TEXT("LiveStreams"), RF_Public|RF_Transient|RF_Native) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FBlueprintLiveStreamInfo());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("QueryLiveStreamsCallbackProxy.h"));
#endif
		}
		return ReturnFunction;
	}
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintLiveStreamInfo()
	{
		UPackage* Outer=Z_Construct_UPackage_GameLiveStreaming();
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintLiveStreamInfo_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReload(Outer, TEXT("BlueprintLiveStreamInfo"), sizeof(FBlueprintLiveStreamInfo), Get_Z_Construct_UScriptStruct_FBlueprintLiveStreamInfo_CRC());
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BlueprintLiveStreamInfo"), RF_Public|RF_Transient|RF_Native) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FBlueprintLiveStreamInfo>, EStructFlags(0x00000001));
			UProperty* NewProp_URL = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("URL"), RF_Public|RF_Transient|RF_Native) UStrProperty(CPP_PROPERTY_BASE(URL, FBlueprintLiveStreamInfo), 0x0000000000000001);
			UProperty* NewProp_StreamName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("StreamName"), RF_Public|RF_Transient|RF_Native) UStrProperty(CPP_PROPERTY_BASE(StreamName, FBlueprintLiveStreamInfo), 0x0000000000000001);
			UProperty* NewProp_GameName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("GameName"), RF_Public|RF_Transient|RF_Native) UStrProperty(CPP_PROPERTY_BASE(GameName, FBlueprintLiveStreamInfo), 0x0000000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("QueryLiveStreamsCallbackProxy.h"));
			MetaData->SetValue(NewProp_URL, TEXT("Category"), TEXT("LiveStreaming"));
			MetaData->SetValue(NewProp_URL, TEXT("ModuleRelativePath"), TEXT("QueryLiveStreamsCallbackProxy.h"));
			MetaData->SetValue(NewProp_URL, TEXT("ToolTip"), TEXT("URL for the stream"));
			MetaData->SetValue(NewProp_StreamName, TEXT("Category"), TEXT("LiveStreaming"));
			MetaData->SetValue(NewProp_StreamName, TEXT("ModuleRelativePath"), TEXT("QueryLiveStreamsCallbackProxy.h"));
			MetaData->SetValue(NewProp_StreamName, TEXT("ToolTip"), TEXT("The title of the stream itself"));
			MetaData->SetValue(NewProp_GameName, TEXT("Category"), TEXT("LiveStreaming"));
			MetaData->SetValue(NewProp_GameName, TEXT("ModuleRelativePath"), TEXT("QueryLiveStreamsCallbackProxy.h"));
			MetaData->SetValue(NewProp_GameName, TEXT("ToolTip"), TEXT("Name of the game that is streaming"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintLiveStreamInfo_CRC() { return 2850987358U; }
	UFunction* Z_Construct_UFunction_UQueryLiveStreamsCallbackProxy_QueryLiveStreams()
	{
		struct QueryLiveStreamsCallbackProxy_eventQueryLiveStreams_Parms
		{
			FString GameName;
			UQueryLiveStreamsCallbackProxy* ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UQueryLiveStreamsCallbackProxy();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("QueryLiveStreams"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(QueryLiveStreamsCallbackProxy_eventQueryLiveStreams_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, QueryLiveStreamsCallbackProxy_eventQueryLiveStreams_Parms), 0x0000000000000580, Z_Construct_UClass_UQueryLiveStreamsCallbackProxy_NoRegister());
			UProperty* NewProp_GameName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("GameName"), RF_Public|RF_Transient|RF_Native) UStrProperty(CPP_PROPERTY_BASE(GameName, QueryLiveStreamsCallbackProxy_eventQueryLiveStreams_Parms), 0x0000000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("BlueprintInternalUseOnly"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("LiveStreaming"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("QueryLiveStreamsCallbackProxy.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Requests a list of live internet streams for the specified game name.  This will usually hit the internet so it could take a second or two."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQueryLiveStreamsCallbackProxy_NoRegister()
	{
		return UQueryLiveStreamsCallbackProxy::StaticClass();
	}
	UClass* Z_Construct_UClass_UQueryLiveStreamsCallbackProxy()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
			Z_Construct_UPackage_GameLiveStreaming();
			OuterClass = UQueryLiveStreamsCallbackProxy::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;

				OuterClass->LinkChild(Z_Construct_UFunction_UQueryLiveStreamsCallbackProxy_QueryLiveStreams());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_OnQueriedLiveStreams = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnQueriedLiveStreams"), RF_Public|RF_Transient|RF_Native) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnQueriedLiveStreams, UQueryLiveStreamsCallbackProxy), 0x0000000010080000, Z_Construct_UDelegateFunction_GameLiveStreaming_OnQueryLiveStreamsCompleted__DelegateSignature());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_UQueryLiveStreamsCallbackProxy_QueryLiveStreams()); // 2396453299
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("QueryLiveStreamsCallbackProxy.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("QueryLiveStreamsCallbackProxy.h"));
				MetaData->SetValue(NewProp_OnQueriedLiveStreams, TEXT("ModuleRelativePath"), TEXT("QueryLiveStreamsCallbackProxy.h"));
				MetaData->SetValue(NewProp_OnQueriedLiveStreams, TEXT("ToolTip"), TEXT("Called when the asynchronous request for live streams completes, passing along the list of live streams currently active, along with a boolean value that indicates whether the request was successful at all"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQueryLiveStreamsCallbackProxy(Z_Construct_UClass_UQueryLiveStreamsCallbackProxy, TEXT("UQueryLiveStreamsCallbackProxy"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQueryLiveStreamsCallbackProxy);
	UPackage* Z_Construct_UPackage_GameLiveStreaming()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/GameLiveStreaming")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x1AC30B4E;
			Guid.B = 0xC80364BF;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

			Z_Construct_UDelegateFunction_GameLiveStreaming_OnQueryLiveStreamsCompleted__DelegateSignature();
		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
