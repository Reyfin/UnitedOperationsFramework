class UO_Framework_AI
{
	tag = "UO_AI";
	class UO_AI_Common {
		file = "x\UO_FW\addons\main\HeadlessAIModule\cfgFunctions\AI\common";
		class init { scope = 1; preInit = 1; };							
		class deleteVehicles {scope = 1;};
		class enableZones {scope = 1;};
		class monitor {scope = 1; postinit = 1;};
		class NCMonitor {scope = 1;};
		class playAnimation {scope = 1;};
		class removeKit {scope = 1;};		
		class setup {scope = 1;};
	};
	class UO_AI_Check {
		file = "x\UO_FW\addons\main\HeadlessAIModule\cfgFunctions\AI\check";				
		class checkManualPos {scope = 1;};
		class checkNearbyAll {scope = 1;};
		class checkNearbyPlayer {scope = 1;};
		class checkStance {scope = 1;};
		class checkifHC { scope = 1; preInit = 1; };
	};
	class UO_AI_Create {
		file = "x\UO_FW\addons\main\HeadlessAIModule\cfgFunctions\AI\create";
		class createAction {scope = 1;};
		class createAirDrop {scope = 1;};
		class createAmmoDrop {scope = 1;};
		class createAmmoDropLocation {scope = 1;};
		class createFastAirStrike {scope = 1;};
		class createAirstrikeFixedWing {scope = 1;};
		class createAirstrikeLocation {scope = 1;};
		class createArtillery {scope = 1;};			
		class createFunctions {scope = 1;};
		class createGroup {scope = 1;};
		class createGroupInit {scope = 1;};
		class createHeloInsert {scope = 1;};
		class createOccupyGroup {scope = 1;};
		class createOccupyGroupInit {scope = 1;};
		class createParaGroup {scope = 1;};
		class createParaGroupInit {scope = 1;};
		class createUnit {scope = 1;};
		class createVehicle {scope = 1;};
		class createWaypoint {scope = 1;};
		class createWaypointModified {scope = 1;};
		class createWaypoints {scope = 1;};			
		class createZone {scope = 1;};				
		class createZoneInit {scope = 1;};				
	};
	class UO_AI_Debug {
		file = "x\UO_FW\addons\main\HeadlessAIModule\cfgFunctions\AI\debug";
		class debugSyncedModules {scope = 1;};
		class debugCreateMarker {scope = 1;};			
	};
	class UO_AI_Functions {
		file = "x\UO_FW\addons\main\HeadlessAIModule\cfgFunctions\AI\functions";
		class artyFire {scope = 1;};
		class artyRepeat {scope = 1;};
		class respawnQRF {scope = 1;};
	};
	class UO_AI_Para {
		file = "x\UO_FW\addons\main\HeadlessAIModule\cfgFunctions\AI\para";						
		class backpackLoad {scope = 1;};
		class backpackSave {scope = 1;};
		class paraBackpackLoad {scope = 1;};
		class paraBackpackSave {scope = 1;};
		class paraCreateAircraft {scope = 1;};
		class paraDrop {scope = 1;};
		class paraGear {scope = 1;};
		class paraResupply {scope = 1;};
		class paraSetDirection {scope = 1;};
		class paraSetHeight {scope = 1;};
		class paraSetLocation {scope = 1;};
		class paraSetSmoke {scope = 1;};
		class paraGetMarkerName {scope = 1;};
		class paraStart {scope = 1;};
		class paraVehicle {scope = 1;};
	};
	class UO_AI_Get {
		file = "x\UO_FW\addons\main\HeadlessAIModule\cfgFunctions\AI\get";
		class getBuildingList {scope = 1;};
		class getBuildings {scope = 1;};
		class getGroupVariables {scope = 1;};
		class getInjuredSound {scope = 1;};
		class getKnockDownAnimation {scope = 1;};
		class getNearestBuilding {scope = 1;};
		class getNearestBuildings {scope = 1;};
		class getNearestGroupBuildings {scope = 1;};
		class getNewPos {scope = 1;};
		class getRandomBuilding {scope = 1;};
		class getRandomBuildings {scope = 1;};
		class getRandomGroupBuildings {scope = 1;};
		class getDetails {scope = 1;};
		class getDetailsArray {scope = 1;};
		class getDetailsGroup {scope = 1;};
		class getDetailsThing {scope = 1;};
		class getDetailsVehicle {scope = 1;};
		class getDetailsVehicleEmpty {scope = 1;};
		class getDetailsUnit {scope = 1;};
		class getParaPos {scope = 1;};			
		class getRandomPositionCircle {scope = 1;};
		class getSafePos {scope = 1;};
		class getSide {scope = 1;};
		class getStartBuilding {scope = 1;};
		class getSynced {scope = 1;};
		class getSyncedGroups {scope = 1;};
		class getSyncedModules {scope = 1;};
		class getSyncedObjects {scope = 1;};
		class getSyncedObjectsTemplate {scope = 1;};
		class getSyncedRespawns {scope = 1;};
		class getTasks {scope = 1;};
		class getTaskParams {scope = 1;};
		class getTurrets {scope = 1;};
		class getWaypointDetails {scope = 1;};
		class getVehicleRoles {scope = 1;};
	};
	class UO_AI_IED {
		file = "x\UO_FW\addons\main\HeadlessAIModule\cfgFunctions\AI\ied";		
		class iedAction {scope = 1;};
		class iedActionAnimation {scope=1; };
		class iedActionConditions {scope = 1;};
		class iedActionStates {scope=1; };
		class iedActionTimeAndSkill { scope=1; };
		class iedActionUpdate { scope=1; };
		class iedCheckStance {scope = 1;};
		class iedCreate {scope = 1;};
		class iedCreateVBIED {scope = 1;};
		class iedDeleteIEDandPPs {scope = 1;};
		class iedDetonate {scope = 1;};
		class iedFind {scope = 1;};
		class iedInspectVehicle {scope = 1;};
		class iedMarkerSetup {scope = 1;};
		class iedMarkerPlaceApprove {scope = 1;};
		class iedMarkerPlaceCancel {scope = 1;};	
		class iedMonitor {scope = 1;};
		class iedRemovePP {scope = 1;};
		class iedReveal {scope = 1;};			
		class iedVehicleDetonate {scope = 1;};
	};
	class UO_AI_IED_Effects {
		file = "x\UO_FW\addons\main\HeadlessAIModule\cfgFunctions\AI\ied\effects";		
		class iedBlastAudioVisual {scope = 1;};
		class iedBlastSmall {scope = 1;};
		class iedBlastMedium {scope = 1;};
		class iedBlastLarge {scope = 1;};
		class iedBlastEffects {scope = 1;};
		class iedBlastShockwave {scope = 1;};
		class iedBlastRocks {scope = 1;};
		class iedBlastFragments {scope = 1;};
		class iedBlastKnockdown {scope = 1;};
		class iedPlayPPSound {scope = 1;};
		class iedPlaySwitchSound {scope = 1;};
	};
	class UO_AI_Modules {
		file = "x\UO_FW\addons\main\HeadlessAIModule\cfgFunctions\AI\modules";
		class airdrop {scope = 1;};
		class art {scope = 1;};
		class control {scope = 1;};
		class fas {scope = 1;};
		class heli {scope = 1;};
		class enablezone {scope = 1;};
		class ied {scope = 1;};
		class iedp {scope = 1;};
		class module {scope = 1;};
		class nc {scope = 1;};
		class position {scope = 1;};
		class respawn {scope = 1;};
		class task {scope = 1;};
		class temp {scope = 1;};
		class zone {scope = 1;};				
	};
	class UO_AI_NC {
		file = "x\UO_FW\addons\main\HeadlessAIModule\cfgFunctions\AI\nc";
		class fuckedAttributesWorkaround {scope = 1; postinit=1;};
		class IsInRestrictedArea {scope = 1;};
		class IsNearRestrictedArea {scope = 1;};
		class nearRestrictedArea {scope = 1;};
		class handleNC {scope = 1; postinit = 1;};
	};
	class UO_AI_Rearm {
		file = "x\UO_FW\addons\main\HeadlessAIModule\cfgFunctions\AI\rearm";
		class vehicleAmmo {scope = 1;};
		class vehicleAmmoMenu {scope = 1;};
		class vehicleFuel {scope = 1;};
		class vehicleFuelMenu {scope = 1;};			
		class vehiclePrepareRearm {scope = 1;};
		class vehicleRearm {scope = 1;};
		class vehicleRearmAllow {scope = 1;};			
		class vehiclePrepareRefuel {scope = 1;};
		class vehicleRefuel {scope = 1;};
		class vehicleRefuelAllow {scope = 1;};		
		class vehicleRepair {scope = 1;};
		class vehicleRepairAction {scope = 1;};
		class vehiclePrepareRepair {scope = 1;};
		class vehicleRepairAllow {scope = 1;};
	};
	class UO_AI_Set {
		file = "x\UO_FW\addons\main\HeadlessAIModule\cfgFunctions\AI\set";
		class setAssignedVehicle {scope = 1;};				
		class setBuildingPos {scope = 1;};
		class setCaptive {scope = 1;};
		class setCombatant {scope = 1;};
		class setCompletedTasks {scope = 1;};
		class setFlashlights {scope = 1;};
		class setGroupBehaviour {scope = 1;};			
		class setGroupVariables {scope = 1;};
		class setMarkerPos {scope = 1;};
		class setMultiOccupy {scope = 1;};
		class setPersistent {scope = 1;};
		class setQRFPosition {scope = 1;};			
		class setRadial {scope = 1;};
		class setRespawn {scope = 1;};			
		class setStance {scope = 1;};
		class setSurrender {scope = 1;};
		class setTracker {scope = 1;};
		class setVehicle {scope = 1;};
		class setZone {scope = 1;};
	};
	class UO_AI_Task {
		file = "x\UO_FW\addons\main\HeadlessAIModule\cfgFunctions\AI\task";
		class taskActivate {scope = 1;};
		class taskAssign {scope = 1;};
		class taskCheck {scope = 1;};
		class taskComplete {scope = 1;};
		class taskForceFire {scope = 1;};
		class taskForceHold {scope = 1;};
		class taskGroup {scope = 1;};
		class taskHoldUntil {scope = 1;};
		class taskInit {scope = 1;};
		class taskBuildingPatrol {scope = 1;};
		class taskBuildingDefend {scope = 1;};
		class taskMonitor {scope = 1;};
		class taskMoveBuilding {scope = 1;};
		class taskMoveBuildings {scope = 1;};
		class taskMoveGroupBuildingsDefend {scope = 1;};
		class taskMoveGroupBuildingsPatrol {scope = 1;};
		class taskMoveMultipleBuildingsDefend {scope = 1;};
		class taskMoveMultipleBuildingsPatrol {scope = 1;};
		class taskMoveNearestBuildingDefend {scope = 1;};
		class taskMoveNearestBuildingPatrol {scope = 1;};
		class taskMoveRandomBuildingDefend {scope = 1;};
		class taskMoveRandomBuildingPatrol {scope = 1;};
		class taskMoveRandomGroupBuildingsDefend {scope = 1;};
		class taskMoveRandomGroupBuildingsPatrol {scope = 1;};
		class taskMoveRandomMultipleBuildingsDefend {scope = 1;};
		class taskMoveRandomMultipleBuildingsPatrol {scope = 1;};
		class taskRegister {scope = 1;};
		class taskRemoveZoneActivated {scope = 1;};
		class taskReset {scope = 1;};
		class taskSearchNearby {scope = 1;};
		class taskSet {scope = 1;};
		class taskSentry {scope = 1;};
		class taskPlacement {scope = 1;};
		class taskPatrol {scope = 1;};
		class taskPatrolPerimeter {scope = 1;};									
	};
};