// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBSERVER_Escudo_generated_h
#error "Escudo.generated.h already included, missing '#pragma once' in Escudo.h"
#endif
#define OBSERVER_Escudo_generated_h

#define Observer_Source_Observer_Escudo_h_12_SPARSE_DATA
#define Observer_Source_Observer_Escudo_h_12_RPC_WRAPPERS
#define Observer_Source_Observer_Escudo_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Observer_Source_Observer_Escudo_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEscudo(); \
	friend struct Z_Construct_UClass_AEscudo_Statics; \
public: \
	DECLARE_CLASS(AEscudo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Observer"), NO_API) \
	DECLARE_SERIALIZER(AEscudo)


#define Observer_Source_Observer_Escudo_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEscudo(); \
	friend struct Z_Construct_UClass_AEscudo_Statics; \
public: \
	DECLARE_CLASS(AEscudo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Observer"), NO_API) \
	DECLARE_SERIALIZER(AEscudo)


#define Observer_Source_Observer_Escudo_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEscudo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEscudo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEscudo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEscudo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEscudo(AEscudo&&); \
	NO_API AEscudo(const AEscudo&); \
public:


#define Observer_Source_Observer_Escudo_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEscudo(AEscudo&&); \
	NO_API AEscudo(const AEscudo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEscudo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEscudo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEscudo)


#define Observer_Source_Observer_Escudo_h_12_PRIVATE_PROPERTY_OFFSET
#define Observer_Source_Observer_Escudo_h_9_PROLOG
#define Observer_Source_Observer_Escudo_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Observer_Source_Observer_Escudo_h_12_PRIVATE_PROPERTY_OFFSET \
	Observer_Source_Observer_Escudo_h_12_SPARSE_DATA \
	Observer_Source_Observer_Escudo_h_12_RPC_WRAPPERS \
	Observer_Source_Observer_Escudo_h_12_INCLASS \
	Observer_Source_Observer_Escudo_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Observer_Source_Observer_Escudo_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Observer_Source_Observer_Escudo_h_12_PRIVATE_PROPERTY_OFFSET \
	Observer_Source_Observer_Escudo_h_12_SPARSE_DATA \
	Observer_Source_Observer_Escudo_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Observer_Source_Observer_Escudo_h_12_INCLASS_NO_PURE_DECLS \
	Observer_Source_Observer_Escudo_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSERVER_API UClass* StaticClass<class AEscudo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Observer_Source_Observer_Escudo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
