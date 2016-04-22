// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AlphaBlend_generated_h
#error "AlphaBlend.generated.h already included, missing '#pragma once' in AlphaBlend.h"
#endif
#define ENGINE_AlphaBlend_generated_h

#define Engine_Source_Runtime_Engine_Public_AlphaBlend_h_50_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlend(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_AlphaBlend_h


#define FOREACH_ENUM_EALPHABLENDOPTION(op) \
	op(EAlphaBlendOption::Linear) \
	op(EAlphaBlendOption::Cubic) \
	op(EAlphaBlendOption::HermiteCubic) \
	op(EAlphaBlendOption::Sinusoidal) \
	op(EAlphaBlendOption::QuadraticInOut) \
	op(EAlphaBlendOption::CubicInOut) \
	op(EAlphaBlendOption::QuarticInOut) \
	op(EAlphaBlendOption::QuinticInOut) \
	op(EAlphaBlendOption::CircularIn) \
	op(EAlphaBlendOption::CircularOut) \
	op(EAlphaBlendOption::CircularInOut) \
	op(EAlphaBlendOption::ExpIn) \
	op(EAlphaBlendOption::ExpOut) \
	op(EAlphaBlendOption::ExpInOut) \
	op(EAlphaBlendOption::Custom) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS