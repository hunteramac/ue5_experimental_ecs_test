// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "simVillage/Public/SimpleRandomMovementTrait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleRandomMovementTrait() {}
// Cross Module References
	SIMVILLAGE_API UClass* Z_Construct_UClass_USimpleRandomMovementTrait_NoRegister();
	SIMVILLAGE_API UClass* Z_Construct_UClass_USimpleRandomMovementTrait();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	UPackage* Z_Construct_UPackage__Script_simVillage();
	SIMVILLAGE_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleMovementFragment();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
	SIMVILLAGE_API UClass* Z_Construct_UClass_UProcessor_SimpleMovement_NoRegister();
	SIMVILLAGE_API UClass* Z_Construct_UClass_UProcessor_SimpleMovement();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	SIMVILLAGE_API UClass* Z_Construct_UClass_UProcessor_RandomTarget_NoRegister();
	SIMVILLAGE_API UClass* Z_Construct_UClass_UProcessor_RandomTarget();
	SIMVILLAGE_API UClass* Z_Construct_UClass_UInitProcessor_randomInitialTarget_NoRegister();
	SIMVILLAGE_API UClass* Z_Construct_UClass_UInitProcessor_randomInitialTarget();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverProcessor();
// End Cross Module References
	void USimpleRandomMovementTrait::StaticRegisterNativesUSimpleRandomMovementTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleRandomMovementTrait);
	UClass* Z_Construct_UClass_USimpleRandomMovementTrait_NoRegister()
	{
		return USimpleRandomMovementTrait::StaticClass();
	}
	struct Z_Construct_UClass_USimpleRandomMovementTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleRandomMovementTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_simVillage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleRandomMovementTrait_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SimpleRandomMovementTrait.h" },
		{ "ModuleRelativePath", "Public/SimpleRandomMovementTrait.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleRandomMovementTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleRandomMovementTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleRandomMovementTrait_Statics::ClassParams = {
		&USimpleRandomMovementTrait::StaticClass,
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
		0x000030A0u,
		METADATA_PARAMS(Z_Construct_UClass_USimpleRandomMovementTrait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleRandomMovementTrait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleRandomMovementTrait()
	{
		if (!Z_Registration_Info_UClass_USimpleRandomMovementTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleRandomMovementTrait.OuterSingleton, Z_Construct_UClass_USimpleRandomMovementTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleRandomMovementTrait.OuterSingleton;
	}
	template<> SIMVILLAGE_API UClass* StaticClass<USimpleRandomMovementTrait>()
	{
		return USimpleRandomMovementTrait::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleRandomMovementTrait);

static_assert(std::is_polymorphic<FSimpleMovementFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FSimpleMovementFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleMovementFragment;
class UScriptStruct* FSimpleMovementFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleMovementFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleMovementFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleMovementFragment, Z_Construct_UPackage__Script_simVillage(), TEXT("SimpleMovementFragment"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleMovementFragment.OuterSingleton;
}
template<> SIMVILLAGE_API UScriptStruct* StaticStruct<FSimpleMovementFragment>()
{
	return FSimpleMovementFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSimpleMovementFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleMovementFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleRandomMovementTrait.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleMovementFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleMovementFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleMovementFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_simVillage,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"SimpleMovementFragment",
		sizeof(FSimpleMovementFragment),
		alignof(FSimpleMovementFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleMovementFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleMovementFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleMovementFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_SimpleMovementFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleMovementFragment.InnerSingleton, Z_Construct_UScriptStruct_FSimpleMovementFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimpleMovementFragment.InnerSingleton;
	}
	void UProcessor_SimpleMovement::StaticRegisterNativesUProcessor_SimpleMovement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProcessor_SimpleMovement);
	UClass* Z_Construct_UClass_UProcessor_SimpleMovement_NoRegister()
	{
		return UProcessor_SimpleMovement::StaticClass();
	}
	struct Z_Construct_UClass_UProcessor_SimpleMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProcessor_SimpleMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_simVillage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProcessor_SimpleMovement_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SimpleRandomMovementTrait.h" },
		{ "ModuleRelativePath", "Public/SimpleRandomMovementTrait.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProcessor_SimpleMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProcessor_SimpleMovement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProcessor_SimpleMovement_Statics::ClassParams = {
		&UProcessor_SimpleMovement::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UProcessor_SimpleMovement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProcessor_SimpleMovement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProcessor_SimpleMovement()
	{
		if (!Z_Registration_Info_UClass_UProcessor_SimpleMovement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProcessor_SimpleMovement.OuterSingleton, Z_Construct_UClass_UProcessor_SimpleMovement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProcessor_SimpleMovement.OuterSingleton;
	}
	template<> SIMVILLAGE_API UClass* StaticClass<UProcessor_SimpleMovement>()
	{
		return UProcessor_SimpleMovement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProcessor_SimpleMovement);
	void UProcessor_RandomTarget::StaticRegisterNativesUProcessor_RandomTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProcessor_RandomTarget);
	UClass* Z_Construct_UClass_UProcessor_RandomTarget_NoRegister()
	{
		return UProcessor_RandomTarget::StaticClass();
	}
	struct Z_Construct_UClass_UProcessor_RandomTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProcessor_RandomTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_simVillage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProcessor_RandomTarget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SimpleRandomMovementTrait.h" },
		{ "ModuleRelativePath", "Public/SimpleRandomMovementTrait.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProcessor_RandomTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProcessor_RandomTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProcessor_RandomTarget_Statics::ClassParams = {
		&UProcessor_RandomTarget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UProcessor_RandomTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProcessor_RandomTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProcessor_RandomTarget()
	{
		if (!Z_Registration_Info_UClass_UProcessor_RandomTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProcessor_RandomTarget.OuterSingleton, Z_Construct_UClass_UProcessor_RandomTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProcessor_RandomTarget.OuterSingleton;
	}
	template<> SIMVILLAGE_API UClass* StaticClass<UProcessor_RandomTarget>()
	{
		return UProcessor_RandomTarget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProcessor_RandomTarget);
	void UInitProcessor_randomInitialTarget::StaticRegisterNativesUInitProcessor_randomInitialTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInitProcessor_randomInitialTarget);
	UClass* Z_Construct_UClass_UInitProcessor_randomInitialTarget_NoRegister()
	{
		return UInitProcessor_randomInitialTarget::StaticClass();
	}
	struct Z_Construct_UClass_UInitProcessor_randomInitialTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInitProcessor_randomInitialTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassObserverProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_simVillage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInitProcessor_randomInitialTarget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SimpleRandomMovementTrait.h" },
		{ "ModuleRelativePath", "Public/SimpleRandomMovementTrait.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInitProcessor_randomInitialTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInitProcessor_randomInitialTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInitProcessor_randomInitialTarget_Statics::ClassParams = {
		&UInitProcessor_randomInitialTarget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInitProcessor_randomInitialTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInitProcessor_randomInitialTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInitProcessor_randomInitialTarget()
	{
		if (!Z_Registration_Info_UClass_UInitProcessor_randomInitialTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInitProcessor_randomInitialTarget.OuterSingleton, Z_Construct_UClass_UInitProcessor_randomInitialTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInitProcessor_randomInitialTarget.OuterSingleton;
	}
	template<> SIMVILLAGE_API UClass* StaticClass<UInitProcessor_randomInitialTarget>()
	{
		return UInitProcessor_randomInitialTarget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInitProcessor_randomInitialTarget);
	struct Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_SimpleRandomMovementTrait_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_SimpleRandomMovementTrait_h_Statics::ScriptStructInfo[] = {
		{ FSimpleMovementFragment::StaticStruct, Z_Construct_UScriptStruct_FSimpleMovementFragment_Statics::NewStructOps, TEXT("SimpleMovementFragment"), &Z_Registration_Info_UScriptStruct_SimpleMovementFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleMovementFragment), 3925605297U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_SimpleRandomMovementTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleRandomMovementTrait, USimpleRandomMovementTrait::StaticClass, TEXT("USimpleRandomMovementTrait"), &Z_Registration_Info_UClass_USimpleRandomMovementTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleRandomMovementTrait), 2959907279U) },
		{ Z_Construct_UClass_UProcessor_SimpleMovement, UProcessor_SimpleMovement::StaticClass, TEXT("UProcessor_SimpleMovement"), &Z_Registration_Info_UClass_UProcessor_SimpleMovement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProcessor_SimpleMovement), 4016271044U) },
		{ Z_Construct_UClass_UProcessor_RandomTarget, UProcessor_RandomTarget::StaticClass, TEXT("UProcessor_RandomTarget"), &Z_Registration_Info_UClass_UProcessor_RandomTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProcessor_RandomTarget), 1797225684U) },
		{ Z_Construct_UClass_UInitProcessor_randomInitialTarget, UInitProcessor_randomInitialTarget::StaticClass, TEXT("UInitProcessor_randomInitialTarget"), &Z_Registration_Info_UClass_UInitProcessor_randomInitialTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInitProcessor_randomInitialTarget), 3776965951U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_SimpleRandomMovementTrait_h_3571538799(TEXT("/Script/simVillage"),
		Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_SimpleRandomMovementTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_SimpleRandomMovementTrait_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_SimpleRandomMovementTrait_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_Public_SimpleRandomMovementTrait_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
