// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "simVillage/Public/EntityTrait_destroyOnCollision.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEntityTrait_destroyOnCollision() {}
// Cross Module References
	SIMVILLAGE_API UClass* Z_Construct_UClass_UEntityTrait_destroyOnCollision_NoRegister();
	SIMVILLAGE_API UClass* Z_Construct_UClass_UEntityTrait_destroyOnCollision();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	UPackage* Z_Construct_UPackage__Script_simVillage();
// End Cross Module References
	void UEntityTrait_destroyOnCollision::StaticRegisterNativesUEntityTrait_destroyOnCollision()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEntityTrait_destroyOnCollision);
	UClass* Z_Construct_UClass_UEntityTrait_destroyOnCollision_NoRegister()
	{
		return UEntityTrait_destroyOnCollision::StaticClass();
	}
	struct Z_Construct_UClass_UEntityTrait_destroyOnCollision_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEntityTrait_destroyOnCollision_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_simVillage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntityTrait_destroyOnCollision_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EntityTrait_destroyOnCollision.h" },
		{ "ModuleRelativePath", "Public/EntityTrait_destroyOnCollision.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEntityTrait_destroyOnCollision_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEntityTrait_destroyOnCollision>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEntityTrait_destroyOnCollision_Statics::ClassParams = {
		&UEntityTrait_destroyOnCollision::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEntityTrait_destroyOnCollision_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEntityTrait_destroyOnCollision_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEntityTrait_destroyOnCollision()
	{
		if (!Z_Registration_Info_UClass_UEntityTrait_destroyOnCollision.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEntityTrait_destroyOnCollision.OuterSingleton, Z_Construct_UClass_UEntityTrait_destroyOnCollision_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEntityTrait_destroyOnCollision.OuterSingleton;
	}
	template<> SIMVILLAGE_API UClass* StaticClass<UEntityTrait_destroyOnCollision>()
	{
		return UEntityTrait_destroyOnCollision::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEntityTrait_destroyOnCollision);
	struct Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_EntityTrait_destroyOnCollision_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_EntityTrait_destroyOnCollision_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEntityTrait_destroyOnCollision, UEntityTrait_destroyOnCollision::StaticClass, TEXT("UEntityTrait_destroyOnCollision"), &Z_Registration_Info_UClass_UEntityTrait_destroyOnCollision, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEntityTrait_destroyOnCollision), 2611366264U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_EntityTrait_destroyOnCollision_h_1841515688(TEXT("/Script/simVillage"),
		Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_EntityTrait_destroyOnCollision_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_EntityTrait_destroyOnCollision_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
