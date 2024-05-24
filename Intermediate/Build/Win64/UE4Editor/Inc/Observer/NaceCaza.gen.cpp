// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observer/NaceCaza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaceCaza() {}
// Cross Module References
	OBSERVER_API UClass* Z_Construct_UClass_ANaceCaza_NoRegister();
	OBSERVER_API UClass* Z_Construct_UClass_ANaceCaza();
	OBSERVER_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_Observer();
// End Cross Module References
	void ANaceCaza::StaticRegisterNativesANaceCaza()
	{
	}
	UClass* Z_Construct_UClass_ANaceCaza_NoRegister()
	{
		return ANaceCaza::StaticClass();
	}
	struct Z_Construct_UClass_ANaceCaza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaceCaza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_Observer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaceCaza_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaceCaza.h" },
		{ "ModuleRelativePath", "NaceCaza.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaceCaza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaceCaza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaceCaza_Statics::ClassParams = {
		&ANaceCaza::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaceCaza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaceCaza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaceCaza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaceCaza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaceCaza, 2036690266);
	template<> OBSERVER_API UClass* StaticClass<ANaceCaza>()
	{
		return ANaceCaza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaceCaza(Z_Construct_UClass_ANaceCaza, &ANaceCaza::StaticClass, TEXT("/Script/Observer"), TEXT("ANaceCaza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaceCaza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
