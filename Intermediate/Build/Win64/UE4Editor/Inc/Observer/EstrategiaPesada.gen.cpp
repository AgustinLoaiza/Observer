// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observer/EstrategiaPesada.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategiaPesada() {}
// Cross Module References
	OBSERVER_API UClass* Z_Construct_UClass_AEstrategiaPesada_NoRegister();
	OBSERVER_API UClass* Z_Construct_UClass_AEstrategiaPesada();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Observer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	OBSERVER_API UClass* Z_Construct_UClass_UEstrategia_NoRegister();
// End Cross Module References
	void AEstrategiaPesada::StaticRegisterNativesAEstrategiaPesada()
	{
	}
	UClass* Z_Construct_UClass_AEstrategiaPesada_NoRegister()
	{
		return AEstrategiaPesada::StaticClass();
	}
	struct Z_Construct_UClass_AEstrategiaPesada_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstrategiaPesada_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Observer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstrategiaPesada_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstrategiaPesada.h" },
		{ "ModuleRelativePath", "EstrategiaPesada.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstrategiaPesada_Statics::NewProp_GunOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Offset from the ships location to spawn projectiles */" },
		{ "ModuleRelativePath", "EstrategiaPesada.h" },
		{ "ToolTip", "Offset from the ships location to spawn projectiles" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEstrategiaPesada_Statics::NewProp_GunOffset = { "GunOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEstrategiaPesada, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AEstrategiaPesada_Statics::NewProp_GunOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEstrategiaPesada_Statics::NewProp_GunOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEstrategiaPesada_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEstrategiaPesada_Statics::NewProp_GunOffset,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstrategiaPesada_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstrategia_NoRegister, (int32)VTABLE_OFFSET(AEstrategiaPesada, IEstrategia), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstrategiaPesada_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstrategiaPesada>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstrategiaPesada_Statics::ClassParams = {
		&AEstrategiaPesada::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEstrategiaPesada_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEstrategiaPesada_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstrategiaPesada_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstrategiaPesada_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstrategiaPesada()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstrategiaPesada_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstrategiaPesada, 3654882484);
	template<> OBSERVER_API UClass* StaticClass<AEstrategiaPesada>()
	{
		return AEstrategiaPesada::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstrategiaPesada(Z_Construct_UClass_AEstrategiaPesada, &AEstrategiaPesada::StaticClass, TEXT("/Script/Observer"), TEXT("AEstrategiaPesada"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstrategiaPesada);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
