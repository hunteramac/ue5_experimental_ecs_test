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
	SIMVILLAGE_API UScriptStruct* Z_Construct_UScriptStruct_FColliderFragment();
	UPackage* Z_Construct_UPackage__Script_simVillage();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassSharedFragment();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	SIMVILLAGE_API UClass* Z_Construct_UClass_UEntityTrait_destroyOnCollision_NoRegister();
	SIMVILLAGE_API UClass* Z_Construct_UClass_UEntityTrait_destroyOnCollision();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
// End Cross Module References

static_assert(std::is_polymorphic<FColliderFragment>() == std::is_polymorphic<FMassSharedFragment>(), "USTRUCT FColliderFragment cannot be polymorphic unless super FMassSharedFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ColliderFragment;
class UScriptStruct* FColliderFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ColliderFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ColliderFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FColliderFragment, Z_Construct_UPackage__Script_simVillage(), TEXT("ColliderFragment"));
	}
	return Z_Registration_Info_UScriptStruct_ColliderFragment.OuterSingleton;
}
template<> SIMVILLAGE_API UScriptStruct* StaticStruct<FColliderFragment>()
{
	return FColliderFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FColliderFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Collider;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColliderFragment_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EntityTrait_destroyOnCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FColliderFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FColliderFragment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColliderFragment_Statics::NewProp_Collider_MetaData[] = {
		{ "Category", "ColliderFragment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EntityTrait_destroyOnCollision.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FColliderFragment_Statics::NewProp_Collider = { "Collider", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColliderFragment, Collider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FColliderFragment_Statics::NewProp_Collider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColliderFragment_Statics::NewProp_Collider_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColliderFragment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColliderFragment_Statics::NewProp_Collider,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColliderFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_simVillage,
		Z_Construct_UScriptStruct_FMassSharedFragment,
		&NewStructOps,
		"ColliderFragment",
		sizeof(FColliderFragment),
		alignof(FColliderFragment),
		Z_Construct_UScriptStruct_FColliderFragment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColliderFragment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FColliderFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColliderFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FColliderFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_ColliderFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ColliderFragment.InnerSingleton, Z_Construct_UScriptStruct_FColliderFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ColliderFragment.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collider_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collider;
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
		{ "IncludePath", "EntityTrait_destroyOnCollision.h" },
		{ "ModuleRelativePath", "Public/EntityTrait_destroyOnCollision.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntityTrait_destroyOnCollision_Statics::NewProp_Collider_MetaData[] = {
		{ "Category", "Collider" },
		{ "ModuleRelativePath", "Public/EntityTrait_destroyOnCollision.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEntityTrait_destroyOnCollision_Statics::NewProp_Collider = { "Collider", nullptr, (EPropertyFlags)0x0040008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEntityTrait_destroyOnCollision, Collider), Z_Construct_UScriptStruct_FColliderFragment, METADATA_PARAMS(Z_Construct_UClass_UEntityTrait_destroyOnCollision_Statics::NewProp_Collider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEntityTrait_destroyOnCollision_Statics::NewProp_Collider_MetaData)) }; // 2494835462
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEntityTrait_destroyOnCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityTrait_destroyOnCollision_Statics::NewProp_Collider,
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
		0x009030A0u,
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
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_EntityTrait_destroyOnCollision_h_Statics::ScriptStructInfo[] = {
		{ FColliderFragment::StaticStruct, Z_Construct_UScriptStruct_FColliderFragment_Statics::NewStructOps, TEXT("ColliderFragment"), &Z_Registration_Info_UScriptStruct_ColliderFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FColliderFragment), 2494835462U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_EntityTrait_destroyOnCollision_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEntityTrait_destroyOnCollision, UEntityTrait_destroyOnCollision::StaticClass, TEXT("UEntityTrait_destroyOnCollision"), &Z_Registration_Info_UClass_UEntityTrait_destroyOnCollision, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEntityTrait_destroyOnCollision), 1135827172U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_EntityTrait_destroyOnCollision_h_1385060132(TEXT("/Script/simVillage"),
		Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_EntityTrait_destroyOnCollision_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_EntityTrait_destroyOnCollision_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_EntityTrait_destroyOnCollision_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_EntityTrait_destroyOnCollision_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
