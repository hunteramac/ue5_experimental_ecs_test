// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "simVillage/simVillageGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodesimVillageGameModeBase() {}
// Cross Module References
	SIMVILLAGE_API UClass* Z_Construct_UClass_AsimVillageGameModeBase_NoRegister();
	SIMVILLAGE_API UClass* Z_Construct_UClass_AsimVillageGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_simVillage();
// End Cross Module References
	void AsimVillageGameModeBase::StaticRegisterNativesAsimVillageGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AsimVillageGameModeBase);
	UClass* Z_Construct_UClass_AsimVillageGameModeBase_NoRegister()
	{
		return AsimVillageGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AsimVillageGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AsimVillageGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_simVillage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AsimVillageGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "simVillageGameModeBase.h" },
		{ "ModuleRelativePath", "simVillageGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AsimVillageGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AsimVillageGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AsimVillageGameModeBase_Statics::ClassParams = {
		&AsimVillageGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AsimVillageGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AsimVillageGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AsimVillageGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AsimVillageGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AsimVillageGameModeBase.OuterSingleton, Z_Construct_UClass_AsimVillageGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AsimVillageGameModeBase.OuterSingleton;
	}
	template<> SIMVILLAGE_API UClass* StaticClass<AsimVillageGameModeBase>()
	{
		return AsimVillageGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AsimVillageGameModeBase);
	struct Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_simVillageGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_simVillageGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AsimVillageGameModeBase, AsimVillageGameModeBase::StaticClass, TEXT("AsimVillageGameModeBase"), &Z_Registration_Info_UClass_AsimVillageGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AsimVillageGameModeBase), 365306747U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_simVillageGameModeBase_h_2309989107(TEXT("/Script/simVillage"),
		Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_simVillageGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_simVillageGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
