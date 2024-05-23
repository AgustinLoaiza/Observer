// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBSERVER_Radar_generated_h
#error "Radar.generated.h already included, missing '#pragma once' in Radar.h"
#endif
#define OBSERVER_Radar_generated_h

#define Observer_Source_Observer_Radar_h_15_SPARSE_DATA
#define Observer_Source_Observer_Radar_h_15_RPC_WRAPPERS
#define Observer_Source_Observer_Radar_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Observer_Source_Observer_Radar_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARadar(); \
	friend struct Z_Construct_UClass_ARadar_Statics; \
public: \
	DECLARE_CLASS(ARadar, APublicador, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Observer"), NO_API) \
	DECLARE_SERIALIZER(ARadar)


#define Observer_Source_Observer_Radar_h_15_INCLASS \
private: \
	static void StaticRegisterNativesARadar(); \
	friend struct Z_Construct_UClass_ARadar_Statics; \
public: \
	DECLARE_CLASS(ARadar, APublicador, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Observer"), NO_API) \
	DECLARE_SERIALIZER(ARadar)


#define Observer_Source_Observer_Radar_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARadar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARadar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARadar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARadar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARadar(ARadar&&); \
	NO_API ARadar(const ARadar&); \
public:


#define Observer_Source_Observer_Radar_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARadar() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARadar(ARadar&&); \
	NO_API ARadar(const ARadar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARadar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARadar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARadar)


#define Observer_Source_Observer_Radar_h_15_PRIVATE_PROPERTY_OFFSET
#define Observer_Source_Observer_Radar_h_12_PROLOG
#define Observer_Source_Observer_Radar_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Observer_Source_Observer_Radar_h_15_PRIVATE_PROPERTY_OFFSET \
	Observer_Source_Observer_Radar_h_15_SPARSE_DATA \
	Observer_Source_Observer_Radar_h_15_RPC_WRAPPERS \
	Observer_Source_Observer_Radar_h_15_INCLASS \
	Observer_Source_Observer_Radar_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Observer_Source_Observer_Radar_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Observer_Source_Observer_Radar_h_15_PRIVATE_PROPERTY_OFFSET \
	Observer_Source_Observer_Radar_h_15_SPARSE_DATA \
	Observer_Source_Observer_Radar_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Observer_Source_Observer_Radar_h_15_INCLASS_NO_PURE_DECLS \
	Observer_Source_Observer_Radar_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSERVER_API UClass* StaticClass<class ARadar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Observer_Source_Observer_Radar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
