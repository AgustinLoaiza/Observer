// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWorld;
struct FVector;
struct FRotator;
class ANaveEnemiga;
#ifdef OBSERVER_FabricaDeNaves_generated_h
#error "FabricaDeNaves.generated.h already included, missing '#pragma once' in FabricaDeNaves.h"
#endif
#define OBSERVER_FabricaDeNaves_generated_h

#define Observer_Source_Observer_FabricaDeNaves_h_13_SPARSE_DATA
#define Observer_Source_Observer_FabricaDeNaves_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFabricarNave);


#define Observer_Source_Observer_FabricaDeNaves_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFabricarNave);


#define Observer_Source_Observer_FabricaDeNaves_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFabricaDeNaves(); \
	friend struct Z_Construct_UClass_AFabricaDeNaves_Statics; \
public: \
	DECLARE_CLASS(AFabricaDeNaves, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Observer"), NO_API) \
	DECLARE_SERIALIZER(AFabricaDeNaves)


#define Observer_Source_Observer_FabricaDeNaves_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAFabricaDeNaves(); \
	friend struct Z_Construct_UClass_AFabricaDeNaves_Statics; \
public: \
	DECLARE_CLASS(AFabricaDeNaves, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Observer"), NO_API) \
	DECLARE_SERIALIZER(AFabricaDeNaves)


#define Observer_Source_Observer_FabricaDeNaves_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFabricaDeNaves(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFabricaDeNaves) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFabricaDeNaves); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFabricaDeNaves); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFabricaDeNaves(AFabricaDeNaves&&); \
	NO_API AFabricaDeNaves(const AFabricaDeNaves&); \
public:


#define Observer_Source_Observer_FabricaDeNaves_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFabricaDeNaves(AFabricaDeNaves&&); \
	NO_API AFabricaDeNaves(const AFabricaDeNaves&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFabricaDeNaves); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFabricaDeNaves); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFabricaDeNaves)


#define Observer_Source_Observer_FabricaDeNaves_h_13_PRIVATE_PROPERTY_OFFSET
#define Observer_Source_Observer_FabricaDeNaves_h_10_PROLOG
#define Observer_Source_Observer_FabricaDeNaves_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Observer_Source_Observer_FabricaDeNaves_h_13_PRIVATE_PROPERTY_OFFSET \
	Observer_Source_Observer_FabricaDeNaves_h_13_SPARSE_DATA \
	Observer_Source_Observer_FabricaDeNaves_h_13_RPC_WRAPPERS \
	Observer_Source_Observer_FabricaDeNaves_h_13_INCLASS \
	Observer_Source_Observer_FabricaDeNaves_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Observer_Source_Observer_FabricaDeNaves_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Observer_Source_Observer_FabricaDeNaves_h_13_PRIVATE_PROPERTY_OFFSET \
	Observer_Source_Observer_FabricaDeNaves_h_13_SPARSE_DATA \
	Observer_Source_Observer_FabricaDeNaves_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Observer_Source_Observer_FabricaDeNaves_h_13_INCLASS_NO_PURE_DECLS \
	Observer_Source_Observer_FabricaDeNaves_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSERVER_API UClass* StaticClass<class AFabricaDeNaves>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Observer_Source_Observer_FabricaDeNaves_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
