// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/ESPIA01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESPIA01() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AESPIA01_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AESPIA01();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AESPIA_NAV();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void AESPIA01::StaticRegisterNativesAESPIA01()
	{
	}
	UClass* Z_Construct_UClass_AESPIA01_NoRegister()
	{
		return AESPIA01::StaticClass();
	}
	struct Z_Construct_UClass_AESPIA01_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AESPIA01_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AESPIA_NAV,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESPIA01_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ESPIA01.h" },
		{ "ModuleRelativePath", "ESPIA01.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AESPIA01_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AESPIA01>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AESPIA01_Statics::ClassParams = {
		&AESPIA01::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AESPIA01_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AESPIA01_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AESPIA01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AESPIA01_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AESPIA01, 3120993192);
	template<> GALAGA_USFX_API UClass* StaticClass<AESPIA01>()
	{
		return AESPIA01::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AESPIA01(Z_Construct_UClass_AESPIA01, &AESPIA01::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AESPIA01"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AESPIA01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
