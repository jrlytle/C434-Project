// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_AnimNode_ModifyBone_generated_h
#error "AnimNode_ModifyBone.generated.h already included, missing '#pragma once' in AnimNode_ModifyBone.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_ModifyBone_generated_h

#define Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ModifyBone_h_27_GENERATED_BODY \
	friend ANIMGRAPHRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyBone(); \
	static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ModifyBone_h


#define FOREACH_ENUM_EBONEMODIFICATIONMODE(op) \
	op(BMM_Ignore) \
	op(BMM_Replace) \
	op(BMM_Additive) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS