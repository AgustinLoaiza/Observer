// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBSERVER_Ingeniero_generated_h
#error "Ingeniero.generated.h already included, missing '#pragma once' in Ingeniero.h"
#endif
#define OBSERVER_Ingeniero_generated_h

#define Observer_Source_Observer_Ingeniero_h_13_SPARSE_DATA
#define Observer_Source_Observer_Ingeniero_h_13_RPC_WRAPPERS
#define Observer_Source_Observer_Ingeniero_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Observer_Source_Observer_Ingeniero_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIngeniero(); \
	friend struct Z_Construct_UClass_AIngeniero_Statics; \
public: \
	DECLARE_CLASS(AIngeniero, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Observer"), NO_API) \
	DECLARE_SERIALIZER(AIngeniero) \
	virtual UObject* _getUObject() const override { return const_cast<AIngeniero*>(this); }


#define Observer_Source_Observer_Ingeniero_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAIngeniero(); \
	friend struct Z_Construct_UClass_AIngeniero_Statics; \
public: \
	DECLARE_CLASS(AIngeniero, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Observer"), NO_API) \
	DECLARE_SERIALIZER(AIngeniero) \
	virtual UObject* _getUObject() const override { return const_cast<AIngeniero*>(this); }


#define Observer_Source_Observer_Ingeniero_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AIngeniero(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AIngeniero) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIngeniero); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIngeniero); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIngeniero(AIngeniero&&); \
	NO_API AIngeniero(const AIngeniero&); \
public:


#define Observer_Source_Observer_Ingeniero_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIngeniero(AIngeniero&&); \
	NO_API AIngeniero(const AIngeniero&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIngeniero); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIngeniero); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIngeniero)


#define Observer_Source_Observer_Ingeniero_h_13_PRIVATE_PROPERTY_OFFSET
#define Observer_Source_Observer_Ingeniero_h_10_PROLOG
#define Observer_Source_Observer_Ingeniero_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Observer_Source_Observer_Ingeniero_h_13_PRIVATE_PROPERTY_OFFSET \
	Observer_Source_Observer_Ingeniero_h_13_SPARSE_DATA \
	Observer_Source_Observer_Ingeniero_h_13_RPC_WRAPPERS \
	Observer_Source_Observer_Ingeniero_h_13_INCLASS \
	Observer_Source_Observer_Ingeniero_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Observer_Source_Observer_Ingeniero_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Observer_Source_Observer_Ingeniero_h_13_PRIVATE_PROPERTY_OFFSET \
	Observer_Source_Observer_Ingeniero_h_13_SPARSE_DATA \
	Observer_Source_Observer_Ingeniero_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Observer_Source_Observer_Ingeniero_h_13_INCLASS_NO_PURE_DECLS \
	Observer_Source_Observer_Ingeniero_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSERVER_API UClass* StaticClass<class AIngeniero>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Observer_Source_Observer_Ingeniero_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
