#include "UTextLoaderComponent.h"


UTextLoaderComponent::UTextLoaderComponent() {
	PrimaryComponentTick.bCanEverTick = false;
}

FString UTextLoaderComponent::ReadFile(FString filename) {
	FString path = FPaths::Combine(FPaths::Combine(FPaths::ProjectContentDir(), TEXT("Data")), filename);
	UE_LOG(LogTemp, Warning, TEXT("got path %s"), *path);
	FString out;
	bool result = FFileHelper::LoadFileToString(out, *path);
	if (!result) {
		UE_LOG(LogTemp, Warning, TEXT("well what the fuck"));
	} else {
		UE_LOG(LogTemp, Warning, TEXT("loaded successfully"));
	}
	return out;
	/*FString directory = FPaths::Combine(FPaths::ProjectContentDir(), "Data");
	FString result;
	IPlatformFile& file = FPlatformFileManager::Get().GetPlatformFile();
	if (file.CreateDirectory(*directory)) {
		FString myFile = directory + "/" + filename;
		FFileHelper::LoadFileToString(result, *myFile);
	}
	return result;*/
}
