// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBSERVER_Cometa_generated_h
#error "Cometa.generated.h already included, missing '#pragma once' in Cometa.h"
#endif
#define OBSERVER_Cometa_generated_h

#define Observer_Source_Observer_Cometa_h_15_SPARSE_DATA
#define Observer_Source_Observer_Cometa_h_15_RPC_WRAPPERS
#define Observer_Source_Observer_Cometa_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Observer_Source_Observer_Cometa_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACometa(); \
	friend struct Z_Construct_UClass_ACometa_Statics; \
public: \
	DECLARE_CLASS(ACometa, AObstaculos, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Observer"), NO_API) \
	DECLARE_SERIALIZER(ACometa)


#define Observer_Source_Observer_Cometa_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACometa(); \
	friend struct Z_Construct_UClass_ACometa_Statics; \
public: \
	DECLARE_CLASS(ACometa, AObstaculos, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Observer"), NO_API) \
	DECLARE_SERIALIZER(ACometa)


#define Observer_Source_Observer_Cometa_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACometa(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACometa) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACometa); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACometa); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACometa(ACometa&&); \
	NO_API ACometa(const ACometa&); \
public:


#define Observer_Source_Observer_Cometa_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACometa() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACometa(ACometa&&); \
	NO_API ACometa(const ACometa&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACometa); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACometa); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACometa)


#define Observer_Source_Observer_Cometa_h_15_PRIVATE_PROPERTY_OFFSET
#define Observer_Source_Observer_Cometa_h_12_PROLOG
#define Observer_Source_Observer_Cometa_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Observer_Source_Observer_Cometa_h_15_PRIVATE_PROPERTY_OFFSET \
	Observer_Source_Observer_Cometa_h_15_SPARSE_DATA \
	Observer_Source_Observer_Cometa_h_15_RPC_WRAPPERS \
	Observer_Source_Observer_Cometa_h_15_INCLASS \
	Observer_Source_Observer_Cometa_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Observer_Source_Observer_Cometa_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Observer_Source_Observer_Cometa_h_15_PRIVATE_PROPERTY_OFFSET \
	Observer_Source_Observer_Cometa_h_15_SPARSE_DATA \
	Observer_Source_Observer_Cometa_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Observer_Source_Observer_Cometa_h_15_INCLASS_NO_PURE_DECLS \
	Observer_Source_Observer_Cometa_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSERVER_API UClass* StaticClass<class ACometa>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Observer_Source_Observer_Cometa_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
