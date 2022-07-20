// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "simVillage/Public/EntityTrait_Collision.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEntityTrait_Collision() {}
// Cross Module References
	SIMVILLAGE_API UClass* Z_Construct_UClass_UEntityTrait_Collision_NoRegister();
	SIMVILLAGE_API UClass* Z_Construct_UClass_UEntityTrait_Collision();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	UPackage* Z_Construct_UPackage__Script_simVillage();
// End Cross Module References
	void UEntityTrait_Collision::StaticRegisterNativesUEntityTrait_Collision()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEntityTrait_Collision);
	UClass* Z_Construct_UClass_UEntityTrait_Collision_NoRegister()
	{
		return UEntityTrait_Collision::StaticClass();
	}
	struct Z_Construct_UClass_UEntityTrait_Collision_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEntityTrait_Collision_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_simVillage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntityTrait_Collision_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EntityTrait_Collision.h" },
		{ "ModuleRelativePath", "Public/EntityTrait_Collision.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEntityTrait_Collision_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEntityTrait_Collision>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEntityTrait_Collision_Statics::ClassParams = {
		&UEntityTrait_Collision::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEntityTrait_Collision_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEntityTrait_Collision_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEntityTrait_Collision()
	{
		if (!Z_Registration_Info_UClass_UEntityTrait_Collision.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEntityTrait_Collision.OuterSingleton, Z_Construct_UClass_UEntityTrait_Collision_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEntityTrait_Collision.OuterSingleton;
	}
	template<> SIMVILLAGE_API UClass* StaticClass<UEntityTrait_Collision>()
	{
		return UEntityTrait_Collision::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEntityTrait_Collision);
	struct Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_EntityTrait_Collision_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_EntityTrait_Collision_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEntityTrait_Collision, UEntityTrait_Collision::StaticClass, TEXT("UEntityTrait_Collision"), &Z_Registration_Info_UClass_UEntityTrait_Collision, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEntityTrait_Collision), 4156278943U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_EntityTrait_Collision_h_2762049736(TEXT("/Script/simVillage"),
		Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_EntityTrait_Collision_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_EntityTrait_Collision_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
