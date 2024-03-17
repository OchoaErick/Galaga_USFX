// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/TRANSPOR_01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTRANSPOR_01() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ATRANSPOR_01_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ATRANSPOR_01();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ATRANSPOR_NAV();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void ATRANSPOR_01::StaticRegisterNativesATRANSPOR_01()
	{
	}
	UClass* Z_Construct_UClass_ATRANSPOR_01_NoRegister()
	{
		return ATRANSPOR_01::StaticClass();
	}
	struct Z_Construct_UClass_ATRANSPOR_01_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATRANSPOR_01_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATRANSPOR_NAV,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATRANSPOR_01_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TRANSPOR_01.h" },
		{ "ModuleRelativePath", "TRANSPOR_01.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATRANSPOR_01_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATRANSPOR_01>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATRANSPOR_01_Statics::ClassParams = {
		&ATRANSPOR_01::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATRANSPOR_01_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATRANSPOR_01_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATRANSPOR_01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATRANSPOR_01_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATRANSPOR_01, 4223228011);
	template<> GALAGA_USFX_API UClass* StaticClass<ATRANSPOR_01>()
	{
		return ATRANSPOR_01::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATRANSPOR_01(Z_Construct_UClass_ATRANSPOR_01, &ATRANSPOR_01::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ATRANSPOR_01"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATRANSPOR_01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
