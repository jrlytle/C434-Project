// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "EditorLiveStreamingModule.h"
#include "EditorLiveStreaming.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorLiveStreaming() {}
static class UEnum* EEditorLiveStreamingWebCamResolution_StaticEnum()
{
	static class UEnum* Singleton = NULL;
	if (!Singleton)
	{
		extern EDITORLIVESTREAMING_API class UEnum* Z_Construct_UEnum_EditorLiveStreaming_EEditorLiveStreamingWebCamResolution();
		extern EDITORLIVESTREAMING_API class UPackage* Z_Construct_UPackage_EditorLiveStreaming();
		Singleton = GetStaticEnum(Z_Construct_UEnum_EditorLiveStreaming_EEditorLiveStreamingWebCamResolution, Z_Construct_UPackage_EditorLiveStreaming(), TEXT("EEditorLiveStreamingWebCamResolution"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEditorLiveStreamingWebCamResolution(EEditorLiveStreamingWebCamResolution_StaticEnum, TEXT("/Script/EditorLiveStreaming"));
	void UEditorLiveStreamingSettings::StaticRegisterNativesUEditorLiveStreamingSettings()
	{
	}
	IMPLEMENT_CLASS(UEditorLiveStreamingSettings, 2646615668);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();

	EDITORLIVESTREAMING_API class UEnum* Z_Construct_UEnum_EditorLiveStreaming_EEditorLiveStreamingWebCamResolution();
	EDITORLIVESTREAMING_API class UClass* Z_Construct_UClass_UEditorLiveStreamingSettings_NoRegister();
	EDITORLIVESTREAMING_API class UClass* Z_Construct_UClass_UEditorLiveStreamingSettings();
	EDITORLIVESTREAMING_API class UPackage* Z_Construct_UPackage_EditorLiveStreaming();
	UEnum* Z_Construct_UEnum_EditorLiveStreaming_EEditorLiveStreamingWebCamResolution()
	{
		UPackage* Outer=Z_Construct_UPackage_EditorLiveStreaming();
		extern uint32 Get_Z_Construct_UEnum_EditorLiveStreaming_EEditorLiveStreamingWebCamResolution_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReload(Outer, TEXT("EEditorLiveStreamingWebCamResolution"), 0, Get_Z_Construct_UEnum_EditorLiveStreaming_EEditorLiveStreamingWebCamResolution_CRC());
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EEditorLiveStreamingWebCamResolution"), RF_Public|RF_Transient|RF_Native) UEnum(FObjectInitializer());
			TArray<TPair<FName, uint8>> EnumNames;
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EEditorLiveStreamingWebCamResolution::Normal_320x240")), 0));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EEditorLiveStreamingWebCamResolution::Wide_320x180")), 1));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EEditorLiveStreamingWebCamResolution::Normal_640x480")), 2));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EEditorLiveStreamingWebCamResolution::Wide_640x360")), 3));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EEditorLiveStreamingWebCamResolution::Normal_800x600")), 4));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EEditorLiveStreamingWebCamResolution::Wide_800x450")), 5));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EEditorLiveStreamingWebCamResolution::Normal_1024x768")), 6));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EEditorLiveStreamingWebCamResolution::Wide_1024x576")), 7));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EEditorLiveStreamingWebCamResolution::Normal_1080x810")), 8));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EEditorLiveStreamingWebCamResolution::Wide_1080x720")), 9));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EEditorLiveStreamingWebCamResolution::Normal_1280x960")), 10));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EEditorLiveStreamingWebCamResolution::Wide_1280x720")), 11));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EEditorLiveStreamingWebCamResolution::Normal_1920x1440")), 12));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EEditorLiveStreamingWebCamResolution::Wide_1920x1080")), 13));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EEditorLiveStreamingWebCamResolution::EEditorLiveStreamingWebCamResolution_MAX")), 14));
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("EditorLiveStreamingSettings.h"));
			MetaData->SetValue(ReturnEnum, TEXT("Normal_1024x768.DisplayName"), TEXT("1024 x 768 (4:3)"));
			MetaData->SetValue(ReturnEnum, TEXT("Normal_1080x810.DisplayName"), TEXT("1080 x 810 (4:3)"));
			MetaData->SetValue(ReturnEnum, TEXT("Normal_1280x960.DisplayName"), TEXT("1280 x 960 (4:3)"));
			MetaData->SetValue(ReturnEnum, TEXT("Normal_1920x1440.DisplayName"), TEXT("1920 x 1440 (4:3)"));
			MetaData->SetValue(ReturnEnum, TEXT("Normal_320x240.DisplayName"), TEXT("320 x 240 (4:3)"));
			MetaData->SetValue(ReturnEnum, TEXT("Normal_640x480.DisplayName"), TEXT("640 x 480 (4:3)"));
			MetaData->SetValue(ReturnEnum, TEXT("Normal_800x600.DisplayName"), TEXT("800 x 600 (4:3)"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Describes the available preset resolutions for web camera video with the editor's live streaming feature"));
			MetaData->SetValue(ReturnEnum, TEXT("Wide_1024x576.DisplayName"), TEXT("1024 x 576 (16:9)"));
			MetaData->SetValue(ReturnEnum, TEXT("Wide_1080x720.DisplayName"), TEXT("1080 x 720 (16:9)"));
			MetaData->SetValue(ReturnEnum, TEXT("Wide_1280x720.DisplayName"), TEXT("1280 x 720 (16:9, 720p)"));
			MetaData->SetValue(ReturnEnum, TEXT("Wide_1920x1080.DisplayName"), TEXT("1920 x 1080 (16:9, 1080p)"));
			MetaData->SetValue(ReturnEnum, TEXT("Wide_320x180.DisplayName"), TEXT("320 x 180 (16:9)"));
			MetaData->SetValue(ReturnEnum, TEXT("Wide_640x360.DisplayName"), TEXT("640 x 360 (16:9)"));
			MetaData->SetValue(ReturnEnum, TEXT("Wide_800x450.DisplayName"), TEXT("800 x 450 (16:9)"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_EditorLiveStreaming_EEditorLiveStreamingWebCamResolution_CRC() { return 2989471472U; }
	UClass* Z_Construct_UClass_UEditorLiveStreamingSettings_NoRegister()
	{
		return UEditorLiveStreamingSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UEditorLiveStreamingSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage_EditorLiveStreaming();
			OuterClass = UEditorLiveStreamingSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000084;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bCaptureAudioFromMicrophone, UEditorLiveStreamingSettings, bool);
				UProperty* NewProp_bCaptureAudioFromMicrophone = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bCaptureAudioFromMicrophone"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bCaptureAudioFromMicrophone, UEditorLiveStreamingSettings), 0x0000000000004001, CPP_BOOL_PROPERTY_BITMASK(bCaptureAudioFromMicrophone, UEditorLiveStreamingSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bCaptureAudioFromComputer, UEditorLiveStreamingSettings, bool);
				UProperty* NewProp_bCaptureAudioFromComputer = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bCaptureAudioFromComputer"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bCaptureAudioFromComputer, UEditorLiveStreamingSettings), 0x0000000000004001, CPP_BOOL_PROPERTY_BITMASK(bCaptureAudioFromComputer, UEditorLiveStreamingSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bMirrorWebCamImage, UEditorLiveStreamingSettings, bool);
				UProperty* NewProp_bMirrorWebCamImage = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bMirrorWebCamImage"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bMirrorWebCamImage, UEditorLiveStreamingSettings), 0x0000000000004001, CPP_BOOL_PROPERTY_BITMASK(bMirrorWebCamImage, UEditorLiveStreamingSettings), sizeof(bool), true);
				UProperty* NewProp_WebCamResolution = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WebCamResolution"), RF_Public|RF_Transient|RF_Native) UByteProperty(CPP_PROPERTY_BASE(WebCamResolution, UEditorLiveStreamingSettings), 0x0000000000004001, Z_Construct_UEnum_EditorLiveStreaming_EEditorLiveStreamingWebCamResolution());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnableWebCam, UEditorLiveStreamingSettings, bool);
				UProperty* NewProp_bEnableWebCam = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bEnableWebCam"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnableWebCam, UEditorLiveStreamingSettings), 0x0000000000004001, CPP_BOOL_PROPERTY_BITMASK(bEnableWebCam, UEditorLiveStreamingSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bPrimaryMonitorOnly, UEditorLiveStreamingSettings, bool);
				UProperty* NewProp_bPrimaryMonitorOnly = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bPrimaryMonitorOnly"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bPrimaryMonitorOnly, UEditorLiveStreamingSettings), 0x0000000000004001, CPP_BOOL_PROPERTY_BITMASK(bPrimaryMonitorOnly, UEditorLiveStreamingSettings), sizeof(bool), true);
				UProperty* NewProp_ScreenScaling = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ScreenScaling"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(ScreenScaling, UEditorLiveStreamingSettings), 0x0000000000004001);
				UProperty* NewProp_FrameRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FrameRate"), RF_Public|RF_Transient|RF_Native) UIntProperty(CPP_PROPERTY_BASE(FrameRate, UEditorLiveStreamingSettings), 0x0000000000004001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("EditorSettings"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("EditorLiveStreamingSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("EditorLiveStreamingSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Holds preferences for the editor live streaming features"));
				MetaData->SetValue(NewProp_bCaptureAudioFromMicrophone, TEXT("Category"), TEXT("EditorLiveStreaming"));
				MetaData->SetValue(NewProp_bCaptureAudioFromMicrophone, TEXT("ModuleRelativePath"), TEXT("EditorLiveStreamingSettings.h"));
				MetaData->SetValue(NewProp_bCaptureAudioFromMicrophone, TEXT("ToolTip"), TEXT("Enables broadcast of audio from your default microphone recording device"));
				MetaData->SetValue(NewProp_bCaptureAudioFromComputer, TEXT("Category"), TEXT("EditorLiveStreaming"));
				MetaData->SetValue(NewProp_bCaptureAudioFromComputer, TEXT("ModuleRelativePath"), TEXT("EditorLiveStreamingSettings.h"));
				MetaData->SetValue(NewProp_bCaptureAudioFromComputer, TEXT("ToolTip"), TEXT("Enables broadcast of audio being played by your computer, such as in-game sounds"));
				MetaData->SetValue(NewProp_bMirrorWebCamImage, TEXT("Category"), TEXT("EditorLiveStreaming"));
				MetaData->SetValue(NewProp_bMirrorWebCamImage, TEXT("ModuleRelativePath"), TEXT("EditorLiveStreamingSettings.h"));
				MetaData->SetValue(NewProp_bMirrorWebCamImage, TEXT("ToolTip"), TEXT("You can enable this to flip the web cam image horizontally so that it looks more like a mirror"));
				MetaData->SetValue(NewProp_WebCamResolution, TEXT("Category"), TEXT("EditorLiveStreaming"));
				MetaData->SetValue(NewProp_WebCamResolution, TEXT("EditCondition"), TEXT("bEnableWebCam"));
				MetaData->SetValue(NewProp_WebCamResolution, TEXT("ModuleRelativePath"), TEXT("EditorLiveStreamingSettings.h"));
				MetaData->SetValue(NewProp_WebCamResolution, TEXT("ToolTip"), TEXT("The camera video resolution that you'd prefer.  The camera may not support the exact resolution you specify, so we'll try to find the best match automatically"));
				MetaData->SetValue(NewProp_bEnableWebCam, TEXT("Category"), TEXT("EditorLiveStreaming"));
				MetaData->SetValue(NewProp_bEnableWebCam, TEXT("ModuleRelativePath"), TEXT("EditorLiveStreamingSettings.h"));
				MetaData->SetValue(NewProp_bEnableWebCam, TEXT("ToolTip"), TEXT("If enabled, video from your web camera will be captured and displayed in the editor while broadcasting, so that your viewers can see your presence."));
				MetaData->SetValue(NewProp_bPrimaryMonitorOnly, TEXT("Category"), TEXT("EditorLiveStreaming"));
				MetaData->SetValue(NewProp_bPrimaryMonitorOnly, TEXT("ModuleRelativePath"), TEXT("EditorLiveStreamingSettings.h"));
				MetaData->SetValue(NewProp_bPrimaryMonitorOnly, TEXT("ToolTip"), TEXT("By default, we only broadcast video from your primary monitor's work area (excludes the task bar area.)  Turning off this feature enables broadcasting from all monitors, covering your entire usable desktop area.  This may greatly increase the video resolution of your stream, so we recommend leaving this option turned off."));
				MetaData->SetValue(NewProp_ScreenScaling, TEXT("Category"), TEXT("EditorLiveStreaming"));
				MetaData->SetValue(NewProp_ScreenScaling, TEXT("ClampMax"), TEXT("1.000000"));
				MetaData->SetValue(NewProp_ScreenScaling, TEXT("ClampMin"), TEXT("0.100000"));
				MetaData->SetValue(NewProp_ScreenScaling, TEXT("ModuleRelativePath"), TEXT("EditorLiveStreamingSettings.h"));
				MetaData->SetValue(NewProp_ScreenScaling, TEXT("ToolTip"), TEXT("How much to scale the broadcast video resolution down to reduce streaming bandwidth.  We recommend broadcasting at resolutions of 1280x720 or lower.  Some live streaming providers will not be able to transcode your video to a lower resolution, so using a high resolution stream may prevent low-bandwidth users from having a good viewing experience."));
				MetaData->SetValue(NewProp_FrameRate, TEXT("Category"), TEXT("EditorLiveStreaming"));
				MetaData->SetValue(NewProp_FrameRate, TEXT("ClampMin"), TEXT("1"));
				MetaData->SetValue(NewProp_FrameRate, TEXT("ModuleRelativePath"), TEXT("EditorLiveStreamingSettings.h"));
				MetaData->SetValue(NewProp_FrameRate, TEXT("ToolTip"), TEXT("Frame rate to stream video from the editor at when broadcasting to services like Twitch."));
				MetaData->SetValue(NewProp_FrameRate, TEXT("UIMax"), TEXT("60"));
				MetaData->SetValue(NewProp_FrameRate, TEXT("UIMin"), TEXT("5"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorLiveStreamingSettings(Z_Construct_UClass_UEditorLiveStreamingSettings, TEXT("UEditorLiveStreamingSettings"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorLiveStreamingSettings);
	UPackage* Z_Construct_UPackage_EditorLiveStreaming()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/EditorLiveStreaming")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xCD00D075;
			Guid.B = 0xBCAA27B3;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
