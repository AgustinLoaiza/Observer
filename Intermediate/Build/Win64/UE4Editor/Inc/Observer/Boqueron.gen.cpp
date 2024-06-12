// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observer/Boqueron.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoqueron() {}
// Cross Module References
	OBSERVER_API UClass* Z_Construct_UClass_ABoqueron_NoRegister();
	OBSERVER_API UClass* Z_Construct_UClass_ABoqueron();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Observer();
// End Cross Module References
	void ABoqueron::StaticRegisterNativesABoqueron()
	{
	}
	UClass* Z_Construct_UClass_ABoqueron_NoRegister()
	{
		return ABoqueron::StaticClass();
	}
	struct Z_Construct_UClass_ABoqueron_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoqueron_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Observer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoqueron_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Boqueron.h" },
		{ "ModuleRelativePath", "Boqueron.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoqueron_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoqueron>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoqueron_Statics::ClassParams = {
		&ABoqueron::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoqueron_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoqueron_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoqueron()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoqueron_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoqueron, 917701212);
	template<> OBSERVER_API UClass* StaticClass<ABoqueron>()
	{
		return ABoqueron::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoqueron(Z_Construct_UClass_ABoqueron, &ABoqueron::StaticClass, TEXT("/Script/Observer"), TEXT("ABoqueron"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoqueron);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
