// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/OSO_NAV.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSO_NAV() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AOSO_NAV_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AOSO_NAV();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AENEMY_NAV();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void AOSO_NAV::StaticRegisterNativesAOSO_NAV()
	{
	}
	UClass* Z_Construct_UClass_AOSO_NAV_NoRegister()
	{
		return AOSO_NAV::StaticClass();
	}
	struct Z_Construct_UClass_AOSO_NAV_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOSO_NAV_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AENEMY_NAV,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOSO_NAV_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "OSO_NAV.h" },
		{ "ModuleRelativePath", "OSO_NAV.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOSO_NAV_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOSO_NAV>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOSO_NAV_Statics::ClassParams = {
		&AOSO_NAV::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AOSO_NAV_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOSO_NAV_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOSO_NAV()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOSO_NAV_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOSO_NAV, 423936211);
	template<> GALAGA_USFX_API UClass* StaticClass<AOSO_NAV>()
	{
		return AOSO_NAV::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOSO_NAV(Z_Construct_UClass_AOSO_NAV, &AOSO_NAV::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AOSO_NAV"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOSO_NAV);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
