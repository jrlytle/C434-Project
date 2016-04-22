// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimTypes_generated_h
#error "AnimTypes.generated.h already included, missing '#pragma once' in AnimTypes.h"
#endif
#define ENGINE_AnimTypes_generated_h

#define Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_211_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyTrack(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_54_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEvent(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h


#define FOREACH_ENUM_ECURVEBLENDOPTION(op) \
	op(ECurveBlendOption::MaxWeight) \
	op(ECurveBlendOption::NormalizeByWeight) \
	op(ECurveBlendOption::BlendByWeight) 
#define FOREACH_ENUM_EADDITIVEANIMATIONTYPE(op) \
	op(AAT_None) \
	op(AAT_LocalSpaceBase) \
	op(AAT_RotationOffsetMeshSpace) 
#define FOREACH_ENUM_ENOTIFYFILTERTYPE(op) \
	op(ENotifyFilterType::NoFiltering) \
	op(ENotifyFilterType::LOD) 
#define FOREACH_ENUM_EMONTAGENOTIFYTICKTYPE(op) \
	op(EMontageNotifyTickType::Queued) \
	op(EMontageNotifyTickType::BranchingPoint) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
