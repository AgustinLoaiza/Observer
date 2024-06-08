// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBSERVER_Cuidador_generated_h
#error "Cuidador.generated.h already included, missing '#pragma once' in Cuidador.h"
#endif
#define OBSERVER_Cuidador_generated_h

#define Observer_Source_Observer_Cuidador_h_12_SPARSE_DATA
#define Observer_Source_Observer_Cuidador_h_12_RPC_WRAPPERS
#define Observer_Source_Observer_Cuidador_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Observer_Source_Observer_Cuidador_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACuidador(); \
	friend struct Z_Construct_UClass_ACuidador_Statics; \
public: \
	DECLARE_CLASS(ACuidador, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Observer"), NO_API) \
	DECLARE_SERIALIZER(ACuidador)


#define Observer_Source_Observer_Cuidador_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACuidador(); \
	friend struct Z_Construct_UClass_ACuidador_Statics; \
public: \
	DECLARE_CLASS(ACuidador, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Observer"), NO_API) \
	DECLARE_SERIALIZER(ACuidador)


#define Observer_Source_Observer_Cuidador_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACuidador(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACuidador) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACuidador); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACuidador); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACuidador(ACuidador&&); \
	NO_API ACuidador(const ACuidador&); \
public:


#define Observer_Source_Observer_Cuidador_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACuidador(ACuidador&&); \
	NO_API ACuidador(const ACuidador&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACuidador); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACuidador); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACuidador)


#define Observer_Source_Observer_Cuidador_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MementoVivere() { return STRUCT_OFFSET(ACuidador, MementoVivere); } \
	FORCEINLINE static uint32 __PPO__Pawn() { return STRUCT_OFFSET(ACuidador, Pawn); }


#define Observer_Source_Observer_Cuidador_h_9_PROLOG
#define Observer_Source_Observer_Cuidador_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Observer_Source_Observer_Cuidador_h_12_PRIVATE_PROPERTY_OFFSET \
	Observer_Source_Observer_Cuidador_h_12_SPARSE_DATA \
	Observer_Source_Observer_Cuidador_h_12_RPC_WRAPPERS \
	Observer_Source_Observer_Cuidador_h_12_INCLASS \
	Observer_Source_Observer_Cuidador_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Observer_Source_Observer_Cuidador_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Observer_Source_Observer_Cuidador_h_12_PRIVATE_PROPERTY_OFFSET \
	Observer_Source_Observer_Cuidador_h_12_SPARSE_DATA \
	Observer_Source_Observer_Cuidador_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Observer_Source_Observer_Cuidador_h_12_INCLASS_NO_PURE_DECLS \
	Observer_Source_Observer_Cuidador_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSERVER_API UClass* StaticClass<class ACuidador>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Observer_Source_Observer_Cuidador_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
