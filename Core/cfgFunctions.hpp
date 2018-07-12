class UO_CoreFunctions
{
	file = "x\UO_FW\addons\main\Core\cfgFunctions\common";
	class addTeam {};
	class alive {};
	class areaCount {};
	class casualtyCount {};
	class casualtyPercentage {};
	class countTeam {};
	class createRespawnMarker {};
	class endMission {};
	class eventDisconnect {};
	class eventKilled {};
	class eventPlayerSpawned {};
	class eventRespawned {};
	class eventSpawned {};
	class forceTerrainGrid {};
	class getDamagedAssets {};
	class getTeamVariable {};
	class hasEmptyPositions {};
	class hasExtracted {};
	class inArea {};
	class inVehicle {};
	class makeUnitsList {};
	class notTrackUnit {};
	class randomRange {};
	class registerModule {};
	class setTeamVariable {};
	class spawnAI {};
	class spawnVehicle {};
	class spectateCheck {};
	class spectatePrep {};
	class stackNames {};
	class startingCount {};
	class trackAsset {};
	class trackUnit {};
	class untrackUnit {};
	class arrayFindAll {};
};

class UO_GearFunctions
{
	file = "x\UO_FW\addons\main\Core\cfgFunctions\gear";
	class addItemOrg {};
	class addItemRandomOrg {};
	class addItemVehicleOrg {};
	class addItemVehicleRandomOrg {};
	class canAttachItem {};
	class canLinkItem {};
	class checkClassname {};
	class removeAllGear {};
	class removeAllVehicleGear {};
};

class UO_InitFunctions
{
	file = "x\UO_FW\addons\main\Core\cfgFunctions\init";
	class init {postinit = 1;};
	class briefingFrameworkEntry {};
	class postChecks {};
	class spectate {};
	class teamsInit {};
};

class UO_DebugFunctions
{
	file = "x\UO_FW\addons\main\Core\cfgFunctions\debug";
	class debugMessage {};
	class debugMessageMacro {};
	class refreshDebug {};
	//class debugInit {postinit = 1;};
};

class UO_EndscreenFunctions
{
	file = "x\UO_FW\addons\main\Core\cfgFunctions\endscreen";
	class dia_endscreen {};
};
