// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observer/Cometa.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCometa() {}
// Cross Module References
	OBSERVER_API UClass* Z_Construct_UClass_ACometa_NoRegister();
	OBSERVER_API UClass* Z_Construct_UClass_ACometa();
	OBSERVER_API UClass* Z_Construct_UClass_AObstaculos();
	UPackage* Z_Construct_UPackage__Script_Observer();
// End Cross Module References
	void ACometa::StaticRegisterNativesACometa()
	{
	}
	UClass* Z_Construct_UClass_ACometa_NoRegister()
	{
		return ACometa::StaticClass();
	}
	struct Z_Construct_UClass_ACometa_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACometa_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculos,
		(UObject* (*)())Z_Construct_UPackage__Script_Observer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACometa_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Cometa.h" },
		{ "ModuleRelativePath", "Cometa.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACometa_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACometa>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACometa_Statics::ClassParams = {
		&ACometa::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACometa_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACometa_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACometa()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACometa_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACometa, 1304460676);
	template<> OBSERVER_API UClass* StaticClass<ACometa>()
	{
		return ACometa::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACometa(Z_Construct_UClass_ACometa, &ACometa::StaticClass, TEXT("/Script/Observer"), TEXT("ACometa"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACometa);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
