// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "simVillage/Public/SimpleColliderTrait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleColliderTrait() {}
// Cross Module References
	SIMVILLAGE_API UClass* Z_Construct_UClass_USimpleColliderTrait_NoRegister();
	SIMVILLAGE_API UClass* Z_Construct_UClass_USimpleColliderTrait();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	UPackage* Z_Construct_UPackage__Script_simVillage();
// End Cross Module References
	void USimpleColliderTrait::StaticRegisterNativesUSimpleColliderTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleColliderTrait);
	UClass* Z_Construct_UClass_USimpleColliderTrait_NoRegister()
	{
		return USimpleColliderTrait::StaticClass();
	}
	struct Z_Construct_UClass_USimpleColliderTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleColliderTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_simVillage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleColliderTrait_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SimpleColliderTrait.h" },
		{ "ModuleRelativePath", "Public/SimpleColliderTrait.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleColliderTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleColliderTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleColliderTrait_Statics::ClassParams = {
		&USimpleColliderTrait::StaticClass,
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
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_USimpleColliderTrait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleColliderTrait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleColliderTrait()
	{
		if (!Z_Registration_Info_UClass_USimpleColliderTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleColliderTrait.OuterSingleton, Z_Construct_UClass_USimpleColliderTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleColliderTrait.OuterSingleton;
	}
	template<> SIMVILLAGE_API UClass* StaticClass<USimpleColliderTrait>()
	{
		return USimpleColliderTrait::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleColliderTrait);
	struct Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_SimpleColliderTrait_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_SimpleColliderTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleColliderTrait, USimpleColliderTrait::StaticClass, TEXT("USimpleColliderTrait"), &Z_Registration_Info_UClass_USimpleColliderTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleColliderTrait), 2679954887U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_SimpleColliderTrait_h_3553369381(TEXT("/Script/simVillage"),
		Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_SimpleColliderTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_SimpleColliderTrait_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
