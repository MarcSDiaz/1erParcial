// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/MovimientoNaves.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovimientoNaves() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UMovimientoNaves();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UMovimientoNaves_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void UMovimientoNaves::StaticRegisterNativesUMovimientoNaves()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovimientoNaves);
	UClass* Z_Construct_UClass_UMovimientoNaves_NoRegister()
	{
		return UMovimientoNaves::StaticClass();
	}
	struct Z_Construct_UClass_UMovimientoNaves_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovimientoNaves_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovimientoNaves_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MovimientoNaves.h" },
		{ "ModuleRelativePath", "MovimientoNaves.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovimientoNaves_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovimientoNaves>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovimientoNaves_Statics::ClassParams = {
		&UMovimientoNaves::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovimientoNaves_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovimientoNaves_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovimientoNaves()
	{
		if (!Z_Registration_Info_UClass_UMovimientoNaves.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovimientoNaves.OuterSingleton, Z_Construct_UClass_UMovimientoNaves_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovimientoNaves.OuterSingleton;
	}
	template<> GALAGA_USFX_L01_API UClass* StaticClass<UMovimientoNaves>()
	{
		return UMovimientoNaves::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovimientoNaves);
	UMovimientoNaves::~UMovimientoNaves() {}
	struct Z_CompiledInDeferFile_FID_Users_marco_source_repos_Parcial_Source_Galaga_USFX_L01_MovimientoNaves_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_source_repos_Parcial_Source_Galaga_USFX_L01_MovimientoNaves_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovimientoNaves, UMovimientoNaves::StaticClass, TEXT("UMovimientoNaves"), &Z_Registration_Info_UClass_UMovimientoNaves, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovimientoNaves), 501043139U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_source_repos_Parcial_Source_Galaga_USFX_L01_MovimientoNaves_h_776748856(TEXT("/Script/Galaga_USFX_L01"),
		Z_CompiledInDeferFile_FID_Users_marco_source_repos_Parcial_Source_Galaga_USFX_L01_MovimientoNaves_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_source_repos_Parcial_Source_Galaga_USFX_L01_MovimientoNaves_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
