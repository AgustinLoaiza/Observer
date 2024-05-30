// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observer/Estrategia.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategia() {}
// Cross Module References
	OBSERVER_API UClass* Z_Construct_UClass_UEstrategia_NoRegister();
	OBSERVER_API UClass* Z_Construct_UClass_UEstrategia();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Observer();
// End Cross Module References
	void UEstrategia::StaticRegisterNativesUEstrategia()
	{
	}
	UClass* Z_Construct_UClass_UEstrategia_NoRegister()
	{
		return UEstrategia::StaticClass();
	}
	struct Z_Construct_UClass_UEstrategia_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEstrategia_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Observer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEstrategia_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Estrategia.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEstrategia_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEstrategia>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEstrategia_Statics::ClassParams = {
		&UEstrategia::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEstrategia_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEstrategia_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEstrategia()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEstrategia_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEstrategia, 830534179);
	template<> OBSERVER_API UClass* StaticClass<UEstrategia>()
	{
		return UEstrategia::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEstrategia(Z_Construct_UClass_UEstrategia, &UEstrategia::StaticClass, TEXT("/Script/Observer"), TEXT("UEstrategia"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEstrategia);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
