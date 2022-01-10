// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LoadingScreenSystemPlugin/Public/LoadingScreenSystemPlugin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadingScreenSystemPlugin() {}
// Cross Module References
	LOADINGSCREENSYSTEMPLUGIN_API UClass* Z_Construct_UClass_ULoadingScreenSystemPlugin_NoRegister();
	LOADINGSCREENSYSTEMPLUGIN_API UClass* Z_Construct_UClass_ULoadingScreenSystemPlugin();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_LoadingScreenSystemPlugin();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULoadingScreenSystemPlugin::execLSS_Plugin_GetStreamingLevelsInfo)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_GET_TARRAY_REF(FName,Z_Param_Out_AllLevels);
		P_GET_TARRAY_REF(FName,Z_Param_Out_Loading);
		P_GET_TARRAY_REF(FName,Z_Param_Out_Loaded);
		P_GET_TARRAY_REF(FName,Z_Param_Out_Unloaded);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULoadingScreenSystemPlugin::LSS_Plugin_GetStreamingLevelsInfo(Z_Param_WorldContext,Z_Param_Out_AllLevels,Z_Param_Out_Loading,Z_Param_Out_Loaded,Z_Param_Out_Unloaded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadingScreenSystemPlugin::execLSS_Plugin_GetNumOfStreamingLevelsUnloaded)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=ULoadingScreenSystemPlugin::LSS_Plugin_GetNumOfStreamingLevelsUnloaded(Z_Param_WorldContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadingScreenSystemPlugin::execLSS_Plugin_GetNumOfStreamingLevelsLoaded)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=ULoadingScreenSystemPlugin::LSS_Plugin_GetNumOfStreamingLevelsLoaded(Z_Param_WorldContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadingScreenSystemPlugin::execLSS_Plugin_GetNumStreamingLevelsTotal)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=ULoadingScreenSystemPlugin::LSS_Plugin_GetNumStreamingLevelsTotal(Z_Param_WorldContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadingScreenSystemPlugin::execLSS_Plugin_GetNumOfStreamingLevelsLoading)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=ULoadingScreenSystemPlugin::LSS_Plugin_GetNumOfStreamingLevelsLoading(Z_Param_WorldContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadingScreenSystemPlugin::execLSS_Plugin_GetAsyncLoadPercentage)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PackageName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=ULoadingScreenSystemPlugin::LSS_Plugin_GetAsyncLoadPercentage(Z_Param_PackageName);
		P_NATIVE_END;
	}
	void ULoadingScreenSystemPlugin::StaticRegisterNativesULoadingScreenSystemPlugin()
	{
		UClass* Class = ULoadingScreenSystemPlugin::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LSS_Plugin_GetAsyncLoadPercentage", &ULoadingScreenSystemPlugin::execLSS_Plugin_GetAsyncLoadPercentage },
			{ "LSS_Plugin_GetNumOfStreamingLevelsLoaded", &ULoadingScreenSystemPlugin::execLSS_Plugin_GetNumOfStreamingLevelsLoaded },
			{ "LSS_Plugin_GetNumOfStreamingLevelsLoading", &ULoadingScreenSystemPlugin::execLSS_Plugin_GetNumOfStreamingLevelsLoading },
			{ "LSS_Plugin_GetNumOfStreamingLevelsUnloaded", &ULoadingScreenSystemPlugin::execLSS_Plugin_GetNumOfStreamingLevelsUnloaded },
			{ "LSS_Plugin_GetNumStreamingLevelsTotal", &ULoadingScreenSystemPlugin::execLSS_Plugin_GetNumStreamingLevelsTotal },
			{ "LSS_Plugin_GetStreamingLevelsInfo", &ULoadingScreenSystemPlugin::execLSS_Plugin_GetStreamingLevelsInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetAsyncLoadPercentage_Statics
	{
		struct LoadingScreenSystemPlugin_eventLSS_Plugin_GetAsyncLoadPercentage_Parms
		{
			FName PackageName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackageName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetAsyncLoadPercentage_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadingScreenSystemPlugin_eventLSS_Plugin_GetAsyncLoadPercentage_Parms, PackageName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetAsyncLoadPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadingScreenSystemPlugin_eventLSS_Plugin_GetAsyncLoadPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetAsyncLoadPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetAsyncLoadPercentage_Statics::NewProp_PackageName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetAsyncLoadPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetAsyncLoadPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "LSS Utility Plugin" },
		{ "ModuleRelativePath", "Public/LoadingScreenSystemPlugin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetAsyncLoadPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadingScreenSystemPlugin, nullptr, "LSS_Plugin_GetAsyncLoadPercentage", nullptr, nullptr, sizeof(LoadingScreenSystemPlugin_eventLSS_Plugin_GetAsyncLoadPercentage_Parms), Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetAsyncLoadPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetAsyncLoadPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetAsyncLoadPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetAsyncLoadPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetAsyncLoadPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetAsyncLoadPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsLoaded_Statics
	{
		struct LoadingScreenSystemPlugin_eventLSS_Plugin_GetNumOfStreamingLevelsLoaded_Parms
		{
			UObject* WorldContext;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsLoaded_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadingScreenSystemPlugin_eventLSS_Plugin_GetNumOfStreamingLevelsLoaded_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadingScreenSystemPlugin_eventLSS_Plugin_GetNumOfStreamingLevelsLoaded_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsLoaded_Statics::NewProp_WorldContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsLoaded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "LSS Utility Plugin" },
		{ "ModuleRelativePath", "Public/LoadingScreenSystemPlugin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadingScreenSystemPlugin, nullptr, "LSS_Plugin_GetNumOfStreamingLevelsLoaded", nullptr, nullptr, sizeof(LoadingScreenSystemPlugin_eventLSS_Plugin_GetNumOfStreamingLevelsLoaded_Parms), Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsLoading_Statics
	{
		struct LoadingScreenSystemPlugin_eventLSS_Plugin_GetNumOfStreamingLevelsLoading_Parms
		{
			UObject* WorldContext;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsLoading_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadingScreenSystemPlugin_eventLSS_Plugin_GetNumOfStreamingLevelsLoading_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsLoading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadingScreenSystemPlugin_eventLSS_Plugin_GetNumOfStreamingLevelsLoading_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsLoading_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsLoading_Statics::NewProp_WorldContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsLoading_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsLoading_Statics::Function_MetaDataParams[] = {
		{ "Category", "LSS Utility Plugin" },
		{ "ModuleRelativePath", "Public/LoadingScreenSystemPlugin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadingScreenSystemPlugin, nullptr, "LSS_Plugin_GetNumOfStreamingLevelsLoading", nullptr, nullptr, sizeof(LoadingScreenSystemPlugin_eventLSS_Plugin_GetNumOfStreamingLevelsLoading_Parms), Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsLoading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsLoading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsLoading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsUnloaded_Statics
	{
		struct LoadingScreenSystemPlugin_eventLSS_Plugin_GetNumOfStreamingLevelsUnloaded_Parms
		{
			UObject* WorldContext;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsUnloaded_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadingScreenSystemPlugin_eventLSS_Plugin_GetNumOfStreamingLevelsUnloaded_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsUnloaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadingScreenSystemPlugin_eventLSS_Plugin_GetNumOfStreamingLevelsUnloaded_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsUnloaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsUnloaded_Statics::NewProp_WorldContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsUnloaded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsUnloaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "LSS Utility Plugin" },
		{ "ModuleRelativePath", "Public/LoadingScreenSystemPlugin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsUnloaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadingScreenSystemPlugin, nullptr, "LSS_Plugin_GetNumOfStreamingLevelsUnloaded", nullptr, nullptr, sizeof(LoadingScreenSystemPlugin_eventLSS_Plugin_GetNumOfStreamingLevelsUnloaded_Parms), Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsUnloaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsUnloaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsUnloaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsUnloaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsUnloaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsUnloaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumStreamingLevelsTotal_Statics
	{
		struct LoadingScreenSystemPlugin_eventLSS_Plugin_GetNumStreamingLevelsTotal_Parms
		{
			UObject* WorldContext;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumStreamingLevelsTotal_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadingScreenSystemPlugin_eventLSS_Plugin_GetNumStreamingLevelsTotal_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumStreamingLevelsTotal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadingScreenSystemPlugin_eventLSS_Plugin_GetNumStreamingLevelsTotal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumStreamingLevelsTotal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumStreamingLevelsTotal_Statics::NewProp_WorldContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumStreamingLevelsTotal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumStreamingLevelsTotal_Statics::Function_MetaDataParams[] = {
		{ "Category", "LSS Utility Plugin" },
		{ "ModuleRelativePath", "Public/LoadingScreenSystemPlugin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumStreamingLevelsTotal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadingScreenSystemPlugin, nullptr, "LSS_Plugin_GetNumStreamingLevelsTotal", nullptr, nullptr, sizeof(LoadingScreenSystemPlugin_eventLSS_Plugin_GetNumStreamingLevelsTotal_Parms), Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumStreamingLevelsTotal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumStreamingLevelsTotal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumStreamingLevelsTotal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumStreamingLevelsTotal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumStreamingLevelsTotal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumStreamingLevelsTotal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetStreamingLevelsInfo_Statics
	{
		struct LoadingScreenSystemPlugin_eventLSS_Plugin_GetStreamingLevelsInfo_Parms
		{
			UObject* WorldContext;
			TArray<FName> AllLevels;
			TArray<FName> Loading;
			TArray<FName> Loaded;
			TArray<FName> Unloaded;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AllLevels_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllLevels;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Loading_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Loading;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Loaded_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Loaded;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Unloaded_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Unloaded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetStreamingLevelsInfo_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadingScreenSystemPlugin_eventLSS_Plugin_GetStreamingLevelsInfo_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetStreamingLevelsInfo_Statics::NewProp_AllLevels_Inner = { "AllLevels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetStreamingLevelsInfo_Statics::NewProp_AllLevels = { "AllLevels", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadingScreenSystemPlugin_eventLSS_Plugin_GetStreamingLevelsInfo_Parms, AllLevels), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetStreamingLevelsInfo_Statics::NewProp_Loading_Inner = { "Loading", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetStreamingLevelsInfo_Statics::NewProp_Loading = { "Loading", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadingScreenSystemPlugin_eventLSS_Plugin_GetStreamingLevelsInfo_Parms, Loading), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetStreamingLevelsInfo_Statics::NewProp_Loaded_Inner = { "Loaded", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetStreamingLevelsInfo_Statics::NewProp_Loaded = { "Loaded", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadingScreenSystemPlugin_eventLSS_Plugin_GetStreamingLevelsInfo_Parms, Loaded), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetStreamingLevelsInfo_Statics::NewProp_Unloaded_Inner = { "Unloaded", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetStreamingLevelsInfo_Statics::NewProp_Unloaded = { "Unloaded", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadingScreenSystemPlugin_eventLSS_Plugin_GetStreamingLevelsInfo_Parms, Unloaded), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetStreamingLevelsInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetStreamingLevelsInfo_Statics::NewProp_WorldContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetStreamingLevelsInfo_Statics::NewProp_AllLevels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetStreamingLevelsInfo_Statics::NewProp_AllLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetStreamingLevelsInfo_Statics::NewProp_Loading_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetStreamingLevelsInfo_Statics::NewProp_Loading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetStreamingLevelsInfo_Statics::NewProp_Loaded_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetStreamingLevelsInfo_Statics::NewProp_Loaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetStreamingLevelsInfo_Statics::NewProp_Unloaded_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetStreamingLevelsInfo_Statics::NewProp_Unloaded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetStreamingLevelsInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "LSS Utility Plugin" },
		{ "ModuleRelativePath", "Public/LoadingScreenSystemPlugin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetStreamingLevelsInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadingScreenSystemPlugin, nullptr, "LSS_Plugin_GetStreamingLevelsInfo", nullptr, nullptr, sizeof(LoadingScreenSystemPlugin_eventLSS_Plugin_GetStreamingLevelsInfo_Parms), Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetStreamingLevelsInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetStreamingLevelsInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetStreamingLevelsInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetStreamingLevelsInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetStreamingLevelsInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetStreamingLevelsInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULoadingScreenSystemPlugin_NoRegister()
	{
		return ULoadingScreenSystemPlugin::StaticClass();
	}
	struct Z_Construct_UClass_ULoadingScreenSystemPlugin_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadingScreenSystemPlugin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LoadingScreenSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULoadingScreenSystemPlugin_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetAsyncLoadPercentage, "LSS_Plugin_GetAsyncLoadPercentage" }, // 207458070
		{ &Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsLoaded, "LSS_Plugin_GetNumOfStreamingLevelsLoaded" }, // 1872093911
		{ &Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsLoading, "LSS_Plugin_GetNumOfStreamingLevelsLoading" }, // 3330802779
		{ &Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumOfStreamingLevelsUnloaded, "LSS_Plugin_GetNumOfStreamingLevelsUnloaded" }, // 1313206765
		{ &Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetNumStreamingLevelsTotal, "LSS_Plugin_GetNumStreamingLevelsTotal" }, // 1579104162
		{ &Z_Construct_UFunction_ULoadingScreenSystemPlugin_LSS_Plugin_GetStreamingLevelsInfo, "LSS_Plugin_GetStreamingLevelsInfo" }, // 765051070
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenSystemPlugin_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "LoadingScreenSystemPlugin.h" },
		{ "ModuleRelativePath", "Public/LoadingScreenSystemPlugin.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadingScreenSystemPlugin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadingScreenSystemPlugin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoadingScreenSystemPlugin_Statics::ClassParams = {
		&ULoadingScreenSystemPlugin::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULoadingScreenSystemPlugin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSystemPlugin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoadingScreenSystemPlugin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoadingScreenSystemPlugin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoadingScreenSystemPlugin, 593348289);
	template<> LOADINGSCREENSYSTEMPLUGIN_API UClass* StaticClass<ULoadingScreenSystemPlugin>()
	{
		return ULoadingScreenSystemPlugin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoadingScreenSystemPlugin(Z_Construct_UClass_ULoadingScreenSystemPlugin, &ULoadingScreenSystemPlugin::StaticClass, TEXT("/Script/LoadingScreenSystemPlugin"), TEXT("ULoadingScreenSystemPlugin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadingScreenSystemPlugin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
