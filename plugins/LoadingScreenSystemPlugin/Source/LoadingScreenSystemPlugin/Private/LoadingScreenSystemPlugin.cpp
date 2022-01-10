// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "LoadingScreenSystemPlugin.h"
#include "ILoadingScreenSystemPlugin.h"

ULoadingScreenSystemPlugin::ULoadingScreenSystemPlugin(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float ULoadingScreenSystemPlugin::LSS_Plugin_GetAsyncLoadPercentage(FName PackageName)
{
	return GetAsyncLoadPercentage(PackageName);
}


int ULoadingScreenSystemPlugin::LSS_Plugin_GetNumOfStreamingLevelsLoading(UObject* WorldContext)
{
	int iNum = 0;

	//Get World
	UWorld* TheWorld = WorldContext->GetWorld();
	if (!TheWorld) return -1;
	
	#if ENGINE_MINOR_VERSION > 19
	const TArray<ULevelStreaming*>& StreamedLevels = TheWorld->GetStreamingLevels();
	#else
	const TArray<ULevelStreaming*>& StreamedLevels = TheWorld->StreamingLevels;
	#endif

	for (const ULevelStreaming* EachLevelStreaming : StreamedLevels)
	{
		#if ENGINE_MINOR_VERSION > 19
		if (!EachLevelStreaming || !EachLevelStreaming->HasLoadRequestPending())
		#else
		if (!EachLevelStreaming || !EachLevelStreaming->bHasLoadRequestPending)
		#endif
		{
			continue;
		}

		iNum++;
		


		/*
		ULevel* EachLevel = EachLevelStreaming->GetLoadedLevel();		
		if (EachLevel) 
		{
			//continue;
		}

		float fProgress = GetAsyncLoadPercentage( EachLevelStreaming->GetWorldAssetPackageFName() );
		if (fProgress >= 0 && fProgress < 100) iLoading++;

		//iLoading = fProgress;

		if (GEngine)
		{ 
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("%f"), fProgress);
		}
		*/
	}

	return iNum;
}

int ULoadingScreenSystemPlugin::LSS_Plugin_GetNumStreamingLevelsTotal(UObject* WorldContext)
{
	int iLoading = 0;

	//Get World
	UWorld* TheWorld = WorldContext->GetWorld();
	if (!TheWorld) return -1;

	#if ENGINE_MINOR_VERSION > 19
	const TArray<ULevelStreaming*>& StreamedLevels = TheWorld->GetStreamingLevels();
	#else
	const TArray<ULevelStreaming*>& StreamedLevels = TheWorld->StreamingLevels;
	#endif

	return StreamedLevels.Num();
}


int ULoadingScreenSystemPlugin::LSS_Plugin_GetNumOfStreamingLevelsLoaded(UObject* WorldContext)
{
	int iNum = 0;

	//Get World
	UWorld* TheWorld = WorldContext->GetWorld();
	if (!TheWorld) return -1;

	#if ENGINE_MINOR_VERSION > 19
	const TArray<ULevelStreaming*>& StreamedLevels = TheWorld->GetStreamingLevels();
	#else
	const TArray<ULevelStreaming*>& StreamedLevels = TheWorld->StreamingLevels;
	#endif

	for (const ULevelStreaming* EachLevelStreaming : StreamedLevels)
	{
		if (EachLevelStreaming && EachLevelStreaming->HasLoadedLevel())
		{
			iNum++;
		}
	}
	return iNum;
}

int ULoadingScreenSystemPlugin::LSS_Plugin_GetNumOfStreamingLevelsUnloaded(UObject* WorldContext)
{
	int iNum = 0;

	//Get World
	UWorld* TheWorld = WorldContext->GetWorld();
	if (!TheWorld) return -1;

#if ENGINE_MINOR_VERSION > 19
	const TArray<ULevelStreaming*>& StreamedLevels = TheWorld->GetStreamingLevels();
	#else
	const TArray<ULevelStreaming*>& StreamedLevels = TheWorld->StreamingLevels;
	#endif

	for (const ULevelStreaming* EachLevelStreaming : StreamedLevels)
	{
	#if ENGINE_MINOR_VERSION > 19
		if (EachLevelStreaming && !EachLevelStreaming->HasLoadedLevel() && !EachLevelStreaming->HasLoadRequestPending())
		#else
		if (EachLevelStreaming && !EachLevelStreaming->HasLoadedLevel() && !EachLevelStreaming->bHasLoadRequestPending)
		#endif		
		{
			iNum++;
		}
	}
	return iNum;
}

void ULoadingScreenSystemPlugin::LSS_Plugin_GetStreamingLevelsInfo(UObject* WorldContext, TArray<FName>& AllLevels, TArray<FName>& Loading, TArray<FName>& Loaded, TArray<FName>& Unloaded)
{
	if (!WorldContext) return;
	UWorld* TheWorld = WorldContext->GetWorld();
	if (!TheWorld) return;

#if ENGINE_MINOR_VERSION > 19
	const TArray<ULevelStreaming*>& StreamedLevels = TheWorld->GetStreamingLevels();
#else
	const TArray<ULevelStreaming*>& StreamedLevels = TheWorld->StreamingLevels;
#endif

	for (const ULevelStreaming* EachLevelStreaming : StreamedLevels)
	{
		if (!EachLevelStreaming) {
			continue;
		}
		else {
			AllLevels.Add(FPackageName::GetShortFName(EachLevelStreaming->GetWorldAssetPackageFName()));
			if (EachLevelStreaming->HasLoadedLevel()) Loaded.Add(FPackageName::GetShortFName(EachLevelStreaming->GetWorldAssetPackageFName()));
#if ENGINE_MINOR_VERSION > 19
			if (EachLevelStreaming->HasLoadRequestPending()) Loading.Add(FPackageName::GetShortFName(EachLevelStreaming->GetWorldAssetPackageFName()));
			if (!EachLevelStreaming->HasLoadedLevel() && !EachLevelStreaming->HasLoadRequestPending()) Unloaded.Add(FPackageName::GetShortFName(EachLevelStreaming->GetWorldAssetPackageFName()));
#else 
			if (EachLevelStreaming->bHasLoadRequestPending) Loading.Add(FPackageName::GetShortFName(EachLevelStreaming->GetWorldAssetPackageFName()));
				if (!EachLevelStreaming->HasLoadedLevel() && !EachLevelStreaming->bHasLoadRequestPending) Unloaded.Add(FPackageName::GetShortFName(EachLevelStreaming->GetWorldAssetPackageFName()));
#endif 
		}
	}
}
