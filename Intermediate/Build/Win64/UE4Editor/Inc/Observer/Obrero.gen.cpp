// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observer/Obrero.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObrero() {}
// Cross Module References
	OBSERVER_API UClass* Z_Construct_UClass_UObrero_NoRegister();
	OBSERVER_API UClass* Z_Construct_UClass_UObrero();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Observer();
// End Cross Module References
	void UObrero::StaticRegisterNativesUObrero()
	{
	}
	UClass* Z_Construct_UClass_UObrero_NoRegister()
	{
		return UObrero::StaticClass();
	}
	struct Z_Construct_UClass_UObrero_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObrero_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Observer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObrero_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Obrero.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObrero_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IObrero>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObrero_Statics::ClassParams = {
		&UObrero::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UObrero_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObrero_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObrero()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObrero_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObrero, 3816859699);
	template<> OBSERVER_API UClass* StaticClass<UObrero>()
	{
		return UObrero::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObrero(Z_Construct_UClass_UObrero, &UObrero::StaticClass, TEXT("/Script/Observer"), TEXT("UObrero"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObrero);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
