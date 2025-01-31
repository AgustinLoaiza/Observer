// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observer/EstadoOfensivo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoOfensivo() {}
// Cross Module References
	OBSERVER_API UClass* Z_Construct_UClass_AEstadoOfensivo_NoRegister();
	OBSERVER_API UClass* Z_Construct_UClass_AEstadoOfensivo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Observer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	OBSERVER_API UClass* Z_Construct_UClass_UEstadosNaveNodriza_NoRegister();
// End Cross Module References
	void AEstadoOfensivo::StaticRegisterNativesAEstadoOfensivo()
	{
	}
	UClass* Z_Construct_UClass_AEstadoOfensivo_NoRegister()
	{
		return AEstadoOfensivo::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoOfensivo_Statics
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
	UObject* (*const Z_Construct_UClass_AEstadoOfensivo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Observer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoOfensivo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoOfensivo.h" },
		{ "ModuleRelativePath", "EstadoOfensivo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoOfensivo_Statics::NewProp_GunOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Offset from the ships location to spawn projectiles */" },
		{ "ModuleRelativePath", "EstadoOfensivo.h" },
		{ "ToolTip", "Offset from the ships location to spawn projectiles" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEstadoOfensivo_Statics::NewProp_GunOffset = { "GunOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEstadoOfensivo, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AEstadoOfensivo_Statics::NewProp_GunOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoOfensivo_Statics::NewProp_GunOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEstadoOfensivo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEstadoOfensivo_Statics::NewProp_GunOffset,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoOfensivo_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstadosNaveNodriza_NoRegister, (int32)VTABLE_OFFSET(AEstadoOfensivo, IEstadosNaveNodriza), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoOfensivo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoOfensivo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoOfensivo_Statics::ClassParams = {
		&AEstadoOfensivo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEstadoOfensivo_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoOfensivo_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstadoOfensivo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoOfensivo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoOfensivo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoOfensivo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoOfensivo, 2482890161);
	template<> OBSERVER_API UClass* StaticClass<AEstadoOfensivo>()
	{
		return AEstadoOfensivo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoOfensivo(Z_Construct_UClass_AEstadoOfensivo, &AEstadoOfensivo::StaticClass, TEXT("/Script/Observer"), TEXT("AEstadoOfensivo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoOfensivo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
