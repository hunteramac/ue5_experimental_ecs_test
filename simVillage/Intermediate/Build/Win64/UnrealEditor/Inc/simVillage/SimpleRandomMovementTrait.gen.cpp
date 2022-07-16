// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "simVillage/SimpleRandomMovementTrait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleRandomMovementTrait() {}
// Cross Module References
	SIMVILLAGE_API UClass* Z_Construct_UClass_USimpleRandomMovementTrait_NoRegister();
	SIMVILLAGE_API UClass* Z_Construct_UClass_USimpleRandomMovementTrait();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	UPackage* Z_Construct_UPackage__Script_simVillage();
	SIMVILLAGE_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleMovementFragment();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
	SIMVILLAGE_API UClass* Z_Construct_UClass_USimpleRandomMovementProcessor_NoRegister();
	SIMVILLAGE_API UClass* Z_Construct_UClass_USimpleRandomMovementProcessor();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	SIMVILLAGE_API UClass* Z_Construct_UClass_UMySimpleProcessor_NoRegister();
	SIMVILLAGE_API UClass* Z_Construct_UClass_UMySimpleProcessor();
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
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "SimpleRandomMovementTrait.h" },
		{ "ModuleRelativePath", "SimpleRandomMovementTrait.h" },
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
		{ "ModuleRelativePath", "SimpleRandomMovementTrait.h" },
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
	void USimpleRandomMovementProcessor::StaticRegisterNativesUSimpleRandomMovementProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleRandomMovementProcessor);
	UClass* Z_Construct_UClass_USimpleRandomMovementProcessor_NoRegister()
	{
		return USimpleRandomMovementProcessor::StaticClass();
	}
	struct Z_Construct_UClass_USimpleRandomMovementProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleRandomMovementProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_simVillage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleRandomMovementProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SimpleRandomMovementTrait.h" },
		{ "ModuleRelativePath", "SimpleRandomMovementTrait.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleRandomMovementProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleRandomMovementProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleRandomMovementProcessor_Statics::ClassParams = {
		&USimpleRandomMovementProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USimpleRandomMovementProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleRandomMovementProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleRandomMovementProcessor()
	{
		if (!Z_Registration_Info_UClass_USimpleRandomMovementProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleRandomMovementProcessor.OuterSingleton, Z_Construct_UClass_USimpleRandomMovementProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleRandomMovementProcessor.OuterSingleton;
	}
	template<> SIMVILLAGE_API UClass* StaticClass<USimpleRandomMovementProcessor>()
	{
		return USimpleRandomMovementProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleRandomMovementProcessor);
	void UMySimpleProcessor::StaticRegisterNativesUMySimpleProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMySimpleProcessor);
	UClass* Z_Construct_UClass_UMySimpleProcessor_NoRegister()
	{
		return UMySimpleProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMySimpleProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMySimpleProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_simVillage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySimpleProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SimpleRandomMovementTrait.h" },
		{ "ModuleRelativePath", "SimpleRandomMovementTrait.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMySimpleProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMySimpleProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMySimpleProcessor_Statics::ClassParams = {
		&UMySimpleProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMySimpleProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMySimpleProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMySimpleProcessor()
	{
		if (!Z_Registration_Info_UClass_UMySimpleProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMySimpleProcessor.OuterSingleton, Z_Construct_UClass_UMySimpleProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMySimpleProcessor.OuterSingleton;
	}
	template<> SIMVILLAGE_API UClass* StaticClass<UMySimpleProcessor>()
	{
		return UMySimpleProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMySimpleProcessor);
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
		{ "ModuleRelativePath", "SimpleRandomMovementTrait.h" },
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
	struct Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_SimpleRandomMovementTrait_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_SimpleRandomMovementTrait_h_Statics::ScriptStructInfo[] = {
		{ FSimpleMovementFragment::StaticStruct, Z_Construct_UScriptStruct_FSimpleMovementFragment_Statics::NewStructOps, TEXT("SimpleMovementFragment"), &Z_Registration_Info_UScriptStruct_SimpleMovementFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleMovementFragment), 2452635822U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_SimpleRandomMovementTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleRandomMovementTrait, USimpleRandomMovementTrait::StaticClass, TEXT("USimpleRandomMovementTrait"), &Z_Registration_Info_UClass_USimpleRandomMovementTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleRandomMovementTrait), 12853854U) },
		{ Z_Construct_UClass_USimpleRandomMovementProcessor, USimpleRandomMovementProcessor::StaticClass, TEXT("USimpleRandomMovementProcessor"), &Z_Registration_Info_UClass_USimpleRandomMovementProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleRandomMovementProcessor), 3248123141U) },
		{ Z_Construct_UClass_UMySimpleProcessor, UMySimpleProcessor::StaticClass, TEXT("UMySimpleProcessor"), &Z_Registration_Info_UClass_UMySimpleProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMySimpleProcessor), 1332997709U) },
		{ Z_Construct_UClass_UInitProcessor_randomInitialTarget, UInitProcessor_randomInitialTarget::StaticClass, TEXT("UInitProcessor_randomInitialTarget"), &Z_Registration_Info_UClass_UInitProcessor_randomInitialTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInitProcessor_randomInitialTarget), 2142719405U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_SimpleRandomMovementTrait_h_427502623(TEXT("/Script/simVillage"),
		Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_SimpleRandomMovementTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_SimpleRandomMovementTrait_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_SimpleRandomMovementTrait_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_simVillage_Source_simVillage_SimpleRandomMovementTrait_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
