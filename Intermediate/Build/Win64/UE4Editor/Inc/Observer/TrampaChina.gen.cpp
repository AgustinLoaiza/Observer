// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observer/TrampaChina.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrampaChina() {}
// Cross Module References
	OBSERVER_API UClass* Z_Construct_UClass_ATrampaChina_NoRegister();
	OBSERVER_API UClass* Z_Construct_UClass_ATrampaChina();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_Observer();
// End Cross Module References
	void ATrampaChina::StaticRegisterNativesATrampaChina()
	{
	}
	UClass* Z_Construct_UClass_ATrampaChina_NoRegister()
	{
		return ATrampaChina::StaticClass();
	}
	struct Z_Construct_UClass_ATrampaChina_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATrampaChina_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Observer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrampaChina_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "TrampaChina.h" },
		{ "ModuleRelativePath", "TrampaChina.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATrampaChina_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrampaChina>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATrampaChina_Statics::ClassParams = {
		&ATrampaChina::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATrampaChina_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATrampaChina_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATrampaChina()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATrampaChina_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATrampaChina, 3254162611);
	template<> OBSERVER_API UClass* StaticClass<ATrampaChina>()
	{
		return ATrampaChina::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATrampaChina(Z_Construct_UClass_ATrampaChina, &ATrampaChina::StaticClass, TEXT("/Script/Observer"), TEXT("ATrampaChina"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrampaChina);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
