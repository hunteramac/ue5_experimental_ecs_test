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
	SIMVILLAGE_API UScriptStruct* Z_Construct_UScriptStruct_FColliderFragment();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	SIMVILLAGE_API UClass* Z_Construct_UClass_UInitializeColliderProccessor_NoRegister();
	SIMVILLAGE_API UClass* Z_Construct_UClass_UInitializeColliderProccessor();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverProcessor();
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

static_assert(std::is_polymorphic<FColliderFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FColliderFragment cannot be polymorphic unless super FMassFragment is polymorphic");

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
		{ "ModuleRelativePath", "Public/SimpleColliderTrait.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FColliderFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FColliderFragment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColliderFragment_Statics::NewProp_Collider_MetaData[] = {
		{ "Category", "ColliderFragment" },
		{ "Comment", "/** The render mesh for a boid */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SimpleColliderTrait.h" },
		{ "ToolTip", "The render mesh for a boid" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FColliderFragment_Statics::NewProp_Collider = { "Collider", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColliderFragment, Collider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FColliderFragment_Statics::NewProp_Collider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColliderFragment_Statics::NewProp_Collider_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColliderFragment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColliderFragment_Statics::NewProp_Collider,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColliderFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_simVillage,
		Z_Construct_UScriptStruct_FMassFragment,
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
	void UInitializeColliderProccessor::StaticRegisterNativesUInitializeColliderProccessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInitializeColliderProccessor);
	UClass* Z_Construct_UClass_UInitializeColliderProccessor_NoRegister()
	{
		return UInitializeColliderProccessor::StaticClass();
	}
	struct Z_Construct_UClass_UInitializeColliderProccessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInitializeColliderProccessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassObserverProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_simVillage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInitializeColliderProccessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SimpleColliderTrait.h" },
		{ "ModuleRelativePath", "Public/SimpleColliderTrait.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInitializeColliderProccessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInitializeColliderProccessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInitializeColliderProccessor_Statics::ClassParams = {
		&UInitializeColliderProccessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInitializeColliderProccessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInitializeColliderProccessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInitializeColliderProccessor()
	{
		if (!Z_Registration_Info_UClass_UInitializeColliderProccessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInitializeColliderProccessor.OuterSingleton, Z_Construct_UClass_UInitializeColliderProccessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInitializeColliderProccessor.OuterSingleton;
	}
	template<> SIMVILLAGE_API UClass* StaticClass<UInitializeColliderProccessor>()
	{
		return UInitializeColliderProccessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInitializeColliderProccessor);
	struct Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_SimpleColliderTrait_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_SimpleColliderTrait_h_Statics::ScriptStructInfo[] = {
		{ FColliderFragment::StaticStruct, Z_Construct_UScriptStruct_FColliderFragment_Statics::NewStructOps, TEXT("ColliderFragment"), &Z_Registration_Info_UScriptStruct_ColliderFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FColliderFragment), 984668652U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_SimpleColliderTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleColliderTrait, USimpleColliderTrait::StaticClass, TEXT("USimpleColliderTrait"), &Z_Registration_Info_UClass_USimpleColliderTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleColliderTrait), 4067774918U) },
		{ Z_Construct_UClass_UInitializeColliderProccessor, UInitializeColliderProccessor::StaticClass, TEXT("UInitializeColliderProccessor"), &Z_Registration_Info_UClass_UInitializeColliderProccessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInitializeColliderProccessor), 17671652U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_SimpleColliderTrait_h_616764678(TEXT("/Script/simVillage"),
		Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_SimpleColliderTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_SimpleColliderTrait_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_SimpleColliderTrait_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_SimpleColliderTrait_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
