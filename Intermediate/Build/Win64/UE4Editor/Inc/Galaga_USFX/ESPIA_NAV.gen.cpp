// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/ESPIA_NAV.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESPIA_NAV() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AESPIA_NAV_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AESPIA_NAV();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AENEMY_NAV();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void AESPIA_NAV::StaticRegisterNativesAESPIA_NAV()
	{
	}
	UClass* Z_Construct_UClass_AESPIA_NAV_NoRegister()
	{
		return AESPIA_NAV::StaticClass();
	}
	struct Z_Construct_UClass_AESPIA_NAV_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AESPIA_NAV_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AENEMY_NAV,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESPIA_NAV_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ESPIA_NAV.h" },
		{ "ModuleRelativePath", "ESPIA_NAV.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AESPIA_NAV_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AESPIA_NAV>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AESPIA_NAV_Statics::ClassParams = {
		&AESPIA_NAV::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AESPIA_NAV_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AESPIA_NAV_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AESPIA_NAV()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AESPIA_NAV_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AESPIA_NAV, 150165358);
	template<> GALAGA_USFX_API UClass* StaticClass<AESPIA_NAV>()
	{
		return AESPIA_NAV::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AESPIA_NAV(Z_Construct_UClass_AESPIA_NAV, &AESPIA_NAV::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AESPIA_NAV"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AESPIA_NAV);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
