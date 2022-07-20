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
	SIMVILLAGE_API UClass* Z_Construct_UClass_UProcessor_checkCollision_NoRegister();
	SIMVILLAGE_API UClass* Z_Construct_UClass_UProcessor_checkCollision();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	SIMVILLAGE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionFragment();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
	SIMVILLAGE_API UClass* Z_Construct_UClass_UInitProcessor_CollisionBox_NoRegister();
	SIMVILLAGE_API UClass* Z_Construct_UClass_UInitProcessor_CollisionBox();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverProcessor();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestNumber_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TestNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntityTrait_destroyOnCollision_Statics::NewProp_TestNumber_MetaData[] = {
		{ "Category", "EntityTrait_destroyOnCollision" },
		{ "ModuleRelativePath", "Public/EntityTrait_destroyOnCollision.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEntityTrait_destroyOnCollision_Statics::NewProp_TestNumber = { "TestNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEntityTrait_destroyOnCollision, TestNumber), METADATA_PARAMS(Z_Construct_UClass_UEntityTrait_destroyOnCollision_Statics::NewProp_TestNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEntityTrait_destroyOnCollision_Statics::NewProp_TestNumber_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEntityTrait_destroyOnCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityTrait_destroyOnCollision_Statics::NewProp_TestNumber,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEntityTrait_destroyOnCollision_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEntityTrait_destroyOnCollision>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEntityTrait_destroyOnCollision_Statics::ClassParams = {
		&UEntityTrait_destroyOnCollision::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEntityTrait_destroyOnCollision_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEntityTrait_destroyOnCollision_Statics::PropPointers),
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
	void UProcessor_checkCollision::StaticRegisterNativesUProcessor_checkCollision()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProcessor_checkCollision);
	UClass* Z_Construct_UClass_UProcessor_checkCollision_NoRegister()
	{
		return UProcessor_checkCollision::StaticClass();
	}
	struct Z_Construct_UClass_UProcessor_checkCollision_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProcessor_checkCollision_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_simVillage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProcessor_checkCollision_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EntityTrait_destroyOnCollision.h" },
		{ "ModuleRelativePath", "Public/EntityTrait_destroyOnCollision.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProcessor_checkCollision_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProcessor_checkCollision>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProcessor_checkCollision_Statics::ClassParams = {
		&UProcessor_checkCollision::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UProcessor_checkCollision_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProcessor_checkCollision_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProcessor_checkCollision()
	{
		if (!Z_Registration_Info_UClass_UProcessor_checkCollision.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProcessor_checkCollision.OuterSingleton, Z_Construct_UClass_UProcessor_checkCollision_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProcessor_checkCollision.OuterSingleton;
	}
	template<> SIMVILLAGE_API UClass* StaticClass<UProcessor_checkCollision>()
	{
		return UProcessor_checkCollision::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProcessor_checkCollision);

static_assert(std::is_polymorphic<FCollisionFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FCollisionFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollisionFragment;
class UScriptStruct* FCollisionFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollisionFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionFragment, Z_Construct_UPackage__Script_simVillage(), TEXT("CollisionFragment"));
	}
	return Z_Registration_Info_UScriptStruct_CollisionFragment.OuterSingleton;
}
template<> SIMVILLAGE_API UScriptStruct* StaticStruct<FCollisionFragment>()
{
	return FCollisionFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollisionFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntityTrait_destroyOnCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollisionFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_simVillage,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"CollisionFragment",
		sizeof(FCollisionFragment),
		alignof(FCollisionFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollisionFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_CollisionFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollisionFragment.InnerSingleton, Z_Construct_UScriptStruct_FCollisionFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollisionFragment.InnerSingleton;
	}
	void UInitProcessor_CollisionBox::StaticRegisterNativesUInitProcessor_CollisionBox()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInitProcessor_CollisionBox);
	UClass* Z_Construct_UClass_UInitProcessor_CollisionBox_NoRegister()
	{
		return UInitProcessor_CollisionBox::StaticClass();
	}
	struct Z_Construct_UClass_UInitProcessor_CollisionBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInitProcessor_CollisionBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassObserverProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_simVillage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInitProcessor_CollisionBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EntityTrait_destroyOnCollision.h" },
		{ "ModuleRelativePath", "Public/EntityTrait_destroyOnCollision.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInitProcessor_CollisionBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInitProcessor_CollisionBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInitProcessor_CollisionBox_Statics::ClassParams = {
		&UInitProcessor_CollisionBox::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UInitProcessor_CollisionBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInitProcessor_CollisionBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInitProcessor_CollisionBox()
	{
		if (!Z_Registration_Info_UClass_UInitProcessor_CollisionBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInitProcessor_CollisionBox.OuterSingleton, Z_Construct_UClass_UInitProcessor_CollisionBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInitProcessor_CollisionBox.OuterSingleton;
	}
	template<> SIMVILLAGE_API UClass* StaticClass<UInitProcessor_CollisionBox>()
	{
		return UInitProcessor_CollisionBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInitProcessor_CollisionBox);
	struct Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_EntityTrait_destroyOnCollision_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_EntityTrait_destroyOnCollision_h_Statics::ScriptStructInfo[] = {
		{ FCollisionFragment::StaticStruct, Z_Construct_UScriptStruct_FCollisionFragment_Statics::NewStructOps, TEXT("CollisionFragment"), &Z_Registration_Info_UScriptStruct_CollisionFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollisionFragment), 5990058U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_EntityTrait_destroyOnCollision_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEntityTrait_destroyOnCollision, UEntityTrait_destroyOnCollision::StaticClass, TEXT("UEntityTrait_destroyOnCollision"), &Z_Registration_Info_UClass_UEntityTrait_destroyOnCollision, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEntityTrait_destroyOnCollision), 3089269882U) },
		{ Z_Construct_UClass_UProcessor_checkCollision, UProcessor_checkCollision::StaticClass, TEXT("UProcessor_checkCollision"), &Z_Registration_Info_UClass_UProcessor_checkCollision, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProcessor_checkCollision), 674075340U) },
		{ Z_Construct_UClass_UInitProcessor_CollisionBox, UInitProcessor_CollisionBox::StaticClass, TEXT("UInitProcessor_CollisionBox"), &Z_Registration_Info_UClass_UInitProcessor_CollisionBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInitProcessor_CollisionBox), 3221134277U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_EntityTrait_destroyOnCollision_h_1513996040(TEXT("/Script/simVillage"),
		Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_EntityTrait_destroyOnCollision_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_EntityTrait_destroyOnCollision_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_EntityTrait_destroyOnCollision_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_EntityTrait_destroyOnCollision_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
