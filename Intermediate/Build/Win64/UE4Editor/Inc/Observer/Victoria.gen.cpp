// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observer/Victoria.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVictoria() {}
// Cross Module References
	OBSERVER_API UClass* Z_Construct_UClass_AVictoria_NoRegister();
	OBSERVER_API UClass* Z_Construct_UClass_AVictoria();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Observer();
// End Cross Module References
	void AVictoria::StaticRegisterNativesAVictoria()
	{
	}
	UClass* Z_Construct_UClass_AVictoria_NoRegister()
	{
		return AVictoria::StaticClass();
	}
	struct Z_Construct_UClass_AVictoria_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVictoria_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Observer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVictoria_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Victoria.h" },
		{ "ModuleRelativePath", "Victoria.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVictoria_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVictoria>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVictoria_Statics::ClassParams = {
		&AVictoria::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AVictoria_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVictoria_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVictoria()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVictoria_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVictoria, 2298023558);
	template<> OBSERVER_API UClass* StaticClass<AVictoria>()
	{
		return AVictoria::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVictoria(Z_Construct_UClass_AVictoria, &AVictoria::StaticClass, TEXT("/Script/Observer"), TEXT("AVictoria"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVictoria);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
