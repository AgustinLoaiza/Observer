// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observer/EstrategiaMultiple.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategiaMultiple() {}
// Cross Module References
	OBSERVER_API UClass* Z_Construct_UClass_AEstrategiaMultiple_NoRegister();
	OBSERVER_API UClass* Z_Construct_UClass_AEstrategiaMultiple();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Observer();
// End Cross Module References
	void AEstrategiaMultiple::StaticRegisterNativesAEstrategiaMultiple()
	{
	}
	UClass* Z_Construct_UClass_AEstrategiaMultiple_NoRegister()
	{
		return AEstrategiaMultiple::StaticClass();
	}
	struct Z_Construct_UClass_AEstrategiaMultiple_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstrategiaMultiple_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Observer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstrategiaMultiple_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstrategiaMultiple.h" },
		{ "ModuleRelativePath", "EstrategiaMultiple.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstrategiaMultiple_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstrategiaMultiple>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstrategiaMultiple_Statics::ClassParams = {
		&AEstrategiaMultiple::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstrategiaMultiple_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstrategiaMultiple_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstrategiaMultiple()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstrategiaMultiple_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstrategiaMultiple, 257310952);
	template<> OBSERVER_API UClass* StaticClass<AEstrategiaMultiple>()
	{
		return AEstrategiaMultiple::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstrategiaMultiple(Z_Construct_UClass_AEstrategiaMultiple, &AEstrategiaMultiple::StaticClass, TEXT("/Script/Observer"), TEXT("AEstrategiaMultiple"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstrategiaMultiple);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
