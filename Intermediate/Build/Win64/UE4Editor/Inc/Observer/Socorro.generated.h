// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBSERVER_Socorro_generated_h
#error "Socorro.generated.h already included, missing '#pragma once' in Socorro.h"
#endif
#define OBSERVER_Socorro_generated_h

#define Observer_Source_Observer_Socorro_h_13_SPARSE_DATA
#define Observer_Source_Observer_Socorro_h_13_RPC_WRAPPERS
#define Observer_Source_Observer_Socorro_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Observer_Source_Observer_Socorro_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OBSERVER_API USocorro(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USocorro) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OBSERVER_API, USocorro); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocorro); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OBSERVER_API USocorro(USocorro&&); \
	OBSERVER_API USocorro(const USocorro&); \
public:


#define Observer_Source_Observer_Socorro_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OBSERVER_API USocorro(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OBSERVER_API USocorro(USocorro&&); \
	OBSERVER_API USocorro(const USocorro&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OBSERVER_API, USocorro); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocorro); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USocorro)


#define Observer_Source_Observer_Socorro_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSocorro(); \
	friend struct Z_Construct_UClass_USocorro_Statics; \
public: \
	DECLARE_CLASS(USocorro, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Observer"), OBSERVER_API) \
	DECLARE_SERIALIZER(USocorro)


#define Observer_Source_Observer_Socorro_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Observer_Source_Observer_Socorro_h_13_GENERATED_UINTERFACE_BODY() \
	Observer_Source_Observer_Socorro_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Observer_Source_Observer_Socorro_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Observer_Source_Observer_Socorro_h_13_GENERATED_UINTERFACE_BODY() \
	Observer_Source_Observer_Socorro_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Observer_Source_Observer_Socorro_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISocorro() {} \
public: \
	typedef USocorro UClassType; \
	typedef ISocorro ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Observer_Source_Observer_Socorro_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ISocorro() {} \
public: \
	typedef USocorro UClassType; \
	typedef ISocorro ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Observer_Source_Observer_Socorro_h_10_PROLOG
#define Observer_Source_Observer_Socorro_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Observer_Source_Observer_Socorro_h_13_SPARSE_DATA \
	Observer_Source_Observer_Socorro_h_13_RPC_WRAPPERS \
	Observer_Source_Observer_Socorro_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Observer_Source_Observer_Socorro_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Observer_Source_Observer_Socorro_h_13_SPARSE_DATA \
	Observer_Source_Observer_Socorro_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Observer_Source_Observer_Socorro_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSERVER_API UClass* StaticClass<class USocorro>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Observer_Source_Observer_Socorro_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
