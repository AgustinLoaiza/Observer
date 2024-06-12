// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observer/PlanosDeAsedio.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanosDeAsedio() {}
// Cross Module References
	OBSERVER_API UClass* Z_Construct_UClass_UPlanosDeAsedio_NoRegister();
	OBSERVER_API UClass* Z_Construct_UClass_UPlanosDeAsedio();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Observer();
// End Cross Module References
	void UPlanosDeAsedio::StaticRegisterNativesUPlanosDeAsedio()
	{
	}
	UClass* Z_Construct_UClass_UPlanosDeAsedio_NoRegister()
	{
		return UPlanosDeAsedio::StaticClass();
	}
	struct Z_Construct_UClass_UPlanosDeAsedio_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlanosDeAsedio_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Observer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanosDeAsedio_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlanosDeAsedio.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlanosDeAsedio_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPlanosDeAsedio>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlanosDeAsedio_Statics::ClassParams = {
		&UPlanosDeAsedio::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPlanosDeAsedio_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanosDeAsedio_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlanosDeAsedio()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlanosDeAsedio_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlanosDeAsedio, 2748793466);
	template<> OBSERVER_API UClass* StaticClass<UPlanosDeAsedio>()
	{
		return UPlanosDeAsedio::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlanosDeAsedio(Z_Construct_UClass_UPlanosDeAsedio, &UPlanosDeAsedio::StaticClass, TEXT("/Script/Observer"), TEXT("UPlanosDeAsedio"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlanosDeAsedio);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
