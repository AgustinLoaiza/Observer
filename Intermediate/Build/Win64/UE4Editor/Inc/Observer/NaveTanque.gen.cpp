// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observer/NaveTanque.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveTanque() {}
// Cross Module References
	OBSERVER_API UClass* Z_Construct_UClass_ANaveTanque_NoRegister();
	OBSERVER_API UClass* Z_Construct_UClass_ANaveTanque();
	OBSERVER_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_Observer();
// End Cross Module References
	void ANaveTanque::StaticRegisterNativesANaveTanque()
	{
	}
	UClass* Z_Construct_UClass_ANaveTanque_NoRegister()
	{
		return ANaveTanque::StaticClass();
	}
	struct Z_Construct_UClass_ANaveTanque_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveTanque_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_Observer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveTanque_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveTanque.h" },
		{ "ModuleRelativePath", "NaveTanque.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveTanque_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveTanque>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveTanque_Statics::ClassParams = {
		&ANaveTanque::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveTanque_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveTanque_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveTanque()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveTanque_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveTanque, 1553098402);
	template<> OBSERVER_API UClass* StaticClass<ANaveTanque>()
	{
		return ANaveTanque::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveTanque(Z_Construct_UClass_ANaveTanque, &ANaveTanque::StaticClass, TEXT("/Script/Observer"), TEXT("ANaveTanque"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveTanque);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
