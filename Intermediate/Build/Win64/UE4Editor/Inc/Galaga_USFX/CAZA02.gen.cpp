// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/CAZA02.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAZA02() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ACAZA02_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ACAZA02();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ACAZA_NAV();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void ACAZA02::StaticRegisterNativesACAZA02()
	{
	}
	UClass* Z_Construct_UClass_ACAZA02_NoRegister()
	{
		return ACAZA02::StaticClass();
	}
	struct Z_Construct_UClass_ACAZA02_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACAZA02_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACAZA_NAV,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACAZA02_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CAZA02.h" },
		{ "ModuleRelativePath", "CAZA02.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACAZA02_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACAZA02>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACAZA02_Statics::ClassParams = {
		&ACAZA02::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACAZA02_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACAZA02_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACAZA02()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACAZA02_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACAZA02, 2233088650);
	template<> GALAGA_USFX_API UClass* StaticClass<ACAZA02>()
	{
		return ACAZA02::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACAZA02(Z_Construct_UClass_ACAZA02, &ACAZA02::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ACAZA02"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACAZA02);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
