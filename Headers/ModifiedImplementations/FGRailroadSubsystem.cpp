// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGRailroadSubsystem.h"

void UFGRailroadRemoteCallObject::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void UFGRailroadRemoteCallObject::Server_RerailTrain_Implementation( AFGTrain* train){ }
bool UFGRailroadRemoteCallObject::Server_RerailTrain_Validate( AFGTrain* train){ return bool(); }
FTrackGraph::FTrackGraph(){ }
AFGRailroadSubsystem::AFGRailroadSubsystem(){ }
void AFGRailroadSubsystem::Init(){ }
void AFGRailroadSubsystem::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGRailroadSubsystem::Serialize(FArchive& ar){ Super::Serialize(ar); }
void AFGRailroadSubsystem::BeginPlay(){ }
void AFGRailroadSubsystem::EndPlay(const EEndPlayReason::Type endPlayReason){ }
void AFGRailroadSubsystem::Tick(float dt){ }
void AFGRailroadSubsystem::DisplayDebug( UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos){ }
void AFGRailroadSubsystem::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGRailroadSubsystem::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGRailroadSubsystem::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGRailroadSubsystem::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGRailroadSubsystem::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGRailroadSubsystem::NeedTransform_Implementation(){ return bool(); }
bool AFGRailroadSubsystem::ShouldSave_Implementation() const{ return bool(); }
AFGRailroadSubsystem* AFGRailroadSubsystem::Get(UWorld* world){ return nullptr; }
AFGRailroadSubsystem* AFGRailroadSubsystem::Get(UObject* worldContext){ return nullptr; }
void AFGRailroadSubsystem::AddRailroadVehicle(AFGRailroadVehicle* vehicle){ }
void AFGRailroadSubsystem::RemoveRailroadVehicle(AFGRailroadVehicle* vehicle){ }
void AFGRailroadSubsystem::CoupleTrains(AFGRailroadVehicle* parentVehicle, AFGRailroadVehicle* otherVehicle){ }
void AFGRailroadSubsystem::DecoupleTrains(AFGRailroadVehicle* firstVehicle, AFGRailroadVehicle* secondVehicle, EDecouplingPolicy decouplePolicy){ }
void AFGRailroadSubsystem::GetTrains(int32 trackID, TArray<  AFGTrain* >& out_trains) const{ }
void AFGRailroadSubsystem::GetAllTrains(TArray<  AFGTrain* >& out_trains) const{ }
FText AFGRailroadSubsystem::GenerateTrainStationName() const{ return FText(); }
bool AFGRailroadSubsystem::IsTrainStationNameAvailable(const FString& name) const{ return bool(); }
void AFGRailroadSubsystem::AddTrainStation( AFGBuildableRailroadStation* station){ }
void AFGRailroadSubsystem::UpdateTrainStation( AFGBuildableRailroadStation* station){ }
void AFGRailroadSubsystem::RemoveTrainStation( AFGBuildableRailroadStation* station){ }
void AFGRailroadSubsystem::GetTrainStations(int32 trackID, TArray<  AFGTrainStationIdentifier* >& out_stations) const{ }
void AFGRailroadSubsystem::GetAllTrainStations(TArray<  AFGTrainStationIdentifier* >& out_stations) const{ }
void AFGRailroadSubsystem::UpdateCargoPlatformPowerConnection(int32 trackGraphID,  AFGBuildableTrainPlatformCargo* cargoPlatform){ }
bool AFGRailroadSubsystem::MoveTrackPosition( FRailroadTrackPosition& position, float delta, float& out_movedDelta, float endStopDistance){ return bool(); }
void AFGRailroadSubsystem::AddTrack( AFGBuildableRailroadTrack* track){ }
void AFGRailroadSubsystem::RemoveTrack( AFGBuildableRailroadTrack* track){ }
UFGPowerConnectionComponent* AFGRailroadSubsystem::GetThirdRailForTrack(const  AFGBuildableRailroadTrack* track) const{ return nullptr; }
UFGPowerConnectionComponent* AFGRailroadSubsystem::GetThirdRailForTrackGraph(int32 trackGraphID) const{ return nullptr; }
void AFGRailroadSubsystem::AddSignal( AFGBuildableRailroadSignal* signal){ }
void AFGRailroadSubsystem::RemoveSignal( AFGBuildableRailroadSignal* signal){ }
AFGTrainScheduler* AFGRailroadSubsystem::GetTrainScheduler() const{ return nullptr; }
void AFGRailroadSubsystem::ToggleBlockVisualization(bool enabled){ }
void AFGRailroadSubsystem::ToggleBlockVisualizationAlways(bool enabled){ }
FLinearColor AFGRailroadSubsystem::GetBlockVisualizationColor(int32 forSignalBlockID){ return FLinearColor(); }
void AFGRailroadSubsystem::Debug_MarkAllGraphsAsChanged(){ }
void AFGRailroadSubsystem::Debug_MarkAllGraphsForFullRebuild(){ }
void AFGRailroadSubsystem::TickTrackGraphs(float dt){ }
void AFGRailroadSubsystem::TickPendingCollisions(float dt){ }
void AFGRailroadSubsystem::TickBlockVisualization(){ }
void AFGRailroadSubsystem::PurgeInvalidStationsFromTimeTables(){ }
AFGRailroadSubsystem::FRailroadHitResult AFGRailroadSubsystem::SolveVehicleCollisions( AFGTrain* forTrain,
		 AFGRailroadVehicle* forVehicle,
		FRailroadTrackPosition oldTrackPosition,
		FRailroadTrackPosition newTrackPosition,
		float moveDelta){ return FRailroadHitResult(); }
float AFGRailroadSubsystem::SweepRailroadPositions(FVector2D capsuleSize,
		FRailroadTrackPosition startPos,
		float startOrientation,
		FRailroadTrackPosition endPos,
		FVector2D otherCapsuleSize,
		FRailroadTrackPosition otherPos){ return float(); }
void AFGRailroadSubsystem::RebuildTrackGraph(int32 graphID){ }
void AFGRailroadSubsystem::RebuildSignalBlocks(int32 graphID){ }
void AFGRailroadSubsystem::RefreshPlatformPowerConnectionsFromStation( AFGBuildableRailroadStation* station,  UFGCircuitConnectionComponent* connectTo){ }
void AFGRailroadSubsystem::InitializeStationNames(){ }
AFGTrain* AFGRailroadSubsystem::CreateTrain(AFGRailroadVehicle* vehicle) const{ return nullptr; }
void AFGRailroadSubsystem::RemoveTrain( AFGTrain* train){ }
void AFGRailroadSubsystem::ReconnectTrainToThirdRail(AFGTrain* train){ }
void AFGRailroadSubsystem::PreTickPhysics(FPhysScene* physScene, float dt){ }
void AFGRailroadSubsystem::UpdatePhysics(FPhysScene* physScene, float dt){ }
void AFGRailroadSubsystem::UpdateSimulationData( AFGTrain* train,  FTrainSimulationData& simData){ }
void AFGRailroadSubsystem::MergeTrackGraphs(int32 first, int32 second){ }
int32 AFGRailroadSubsystem::CreateTrackGraph(){ return int32(); }
void AFGRailroadSubsystem::RemoveTrackGraph(int32 graphID){ }
void AFGRailroadSubsystem::AddTrackToGraph( AFGBuildableRailroadTrack* track, int32 graphID){ }
void AFGRailroadSubsystem::RemoveTrackFromGraph( AFGBuildableRailroadTrack* track){ }
void AFGRailroadSubsystem::MarkGraphAsChanged(int32 graphID){ }
void AFGRailroadSubsystem::MarkGraphForFullRebuild(int32 graphID){ }
int32 AFGRailroadSubsystem::GenerateUniqueTrackGraphID(){ return int32(); }
