#include "BlueprintProvider.hpp"

#include "Async/Async.h"
#include "AssetData.h"
#include "AssetEditorMessages.h"
#include "BlueprintEditor.h"
#include "MessageEndpointBuilder.h"
#include "MessageEndpoint.h"
#include "Kismet2/KismetEditorUtilities.h"
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION <= 23
#include "Toolkits/AssetEditorManager.h"
#endif
#include "Kismet2/BlueprintEditorUtils.h"
#include "Model/RdEditorProtocol/RdEditorModel/RdEditorModel.Generated.h"

#include "Runtime/Launch/Resources/Version.h"

void BluePrintProvider::AddAsset(FAssetData const& AssetData) {
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION <= 23
    UObject* cls = AssetData.GetAsset();
#else
    UObject* cls = AssetData.FastGetAsset();
#endif
    if (cls) {
        UBlueprint* Blueprint = Cast<UBlueprint>(cls);
        if (Blueprint && Blueprint->IsValidLowLevel()) {

        }
    }
}

bool BluePrintProvider::IsBlueprint(FString const& pathName) {
    return FPackageName::IsValidObjectPath(pathName);
}

void BluePrintProvider::OpenBlueprint(JetBrains::EditorPlugin::BlueprintReference const& BlueprintReference, TSharedPtr<FMessageEndpoint, ESPMode::ThreadSafe> const& messageEndpoint) {
    // Just to create asset manager if it wasn't created already
    const FString AssetPathName = BlueprintReference.get_pathName();
    FGuid AssetGuid;
    bool bIsValidGuid = FGuid::Parse(BlueprintReference.get_guid(), AssetGuid);
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION <= 23
    FAssetEditorManager::Get();
    messageEndpoint->Publish(new FAssetEditorRequestOpenAsset(AssetPathName), EMessageScope::Process);
#else
    AsyncTask(ENamedThreads::GameThread, [AssetPathName, AssetGuid, bIsValidGuid]()
    {
        // An asset needs loading
        UPackage* Package = LoadPackage(nullptr, *AssetPathName, LOAD_NoRedirects);

        if (Package)
        {
            Package->FullyLoad();

            const FString AssetName = FPaths::GetBaseFilename(AssetPathName);
            UObject* Object = FindObject<UObject>(Package, *AssetName);
            const UBlueprint* Blueprint = Cast<UBlueprint>(Object);
            if(bIsValidGuid && Blueprint != nullptr)
            {
                Object = FBlueprintEditorUtils::GetNodeByGUID(Blueprint, AssetGuid);   
            }
            if(Object != nullptr)
            {
                FKismetEditorUtilities::BringKismetToFocusAttentionOnObject(Blueprint);                
            }
        }
    });
#endif
}
