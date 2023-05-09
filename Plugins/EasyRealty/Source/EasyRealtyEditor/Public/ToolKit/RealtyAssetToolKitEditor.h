// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <UObject/GCObject.h>
#include <Toolkits/AssetEditorToolkit.h>
#include <Tickable.h>

/**
 * 
 */
class EASYREALTYEDITOR_API FRealtyAssetToolKitEditor : public FAssetEditorToolkit, public FEditorUndoClient, public FTickableGameObject, public FGCObject
{
public:

	FRealtyAssetToolKitEditor();

	virtual ~FRealtyAssetToolKitEditor();

	virtual void RegisterTabSpawners(const TSharedRef<FTabManager>& _TabManager) override;

	virtual void UnregisterTabSpawners(const TSharedRef<FTabManager>& _TabManager) override;

	virtual FName GetToolkitFName() const override;

	virtual FText GetBaseToolkitName() const override;

	virtual FString GetWorldCentricTabPrefix() const override;

	virtual FLinearColor GetWorldCentricTabColorScale() const override;

	virtual void AddReferencedObjects(FReferenceCollector& Collector) override;
	virtual FString GetReferencerName() const override;


	virtual bool IsTickableInEditor() const override;
	virtual void Tick(float DeltaTime) override;
	virtual bool IsTickable() const override;
	virtual TStatId GetStatId() const override;

	void InitEditor(EToolkitMode::Type type, TSharedPtr<class IToolkitHost> EditWithinLevelEditor, class URealtyAsset* _EditObject);

	void BindCommand();
	void ExtentToolBar();

	void Complier();
	void ShowBugList();

	class URealtyEdGraph* GetGraphObject() const { return GraphObject; }
private:

	TSharedRef<SDockTab> OnSpawnerBlueprintGraph(const FSpawnTabArgs&);
	TSharedRef<SDockTab> OnSpawnerNodeDetail(const FSpawnTabArgs&);
	TSharedRef<SDockTab> OnSpawnerConsole(const FSpawnTabArgs&);

	void OnGraphSelectChanged(const TSet<class UObject*>& SelectionNode);

	void OnGraphChanged(const FEdGraphEditAction& Action);
	uint8 bGraphChanged : 1;
	FDelegateHandle OnGraphChangedHandle;

	class URealtyAsset* EditBPObject;
	class URealtyEdGraph* GraphObject;

	TSharedPtr<class SGraphEditor> BlueprintEditorWidget;
	TSharedPtr<class IDetailsView> DetailsWidget;

	FString WarString;
	FString MessageString;

private:


	TSharedPtr<class SCheckBox> DebugCheckBox;
	void OnCheckStateChangedEvent(ECheckBoxState state);

public:
	//~ Begin FEditorUndoClient Interface
	virtual void PostUndo(bool bSuccess) override;
	virtual void PostRedo(bool bSuccess) override;
	// End of FEditorUndoClient
	FGraphPanelSelectionSet GetSelectedNodes() const;
	void OnNodeTitleCommitted(const FText& NewText, ETextCommit::Type CommitInfo, UEdGraphNode* NodeBeingChanged);

	void CreateCommandList();
	TSharedPtr<class FUICommandList> uicommand;
	void PasteNodesHere(const FVector2D& Location);

	bool CanCreateComment() const;
	void OnCreateComment();

	bool CanPasteNodes() const;
	void PasteNodes();

	void Delete();
	bool CanDelete() const;

	void CopySelected();
	bool CanCopy() const;

	void DuplicateNode();
	bool CanDuplicate() const;

	void CutSelectedNodes();
	bool CanCutNodes() const;
	void DeleteSelectedDuplicatableNodes();
	void OnNodeDoubleClicked(class UEdGraphNode* Node);
};
