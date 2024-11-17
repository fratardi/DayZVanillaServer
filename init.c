
#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\CustomScripts\\PlayerUtils.c"


///////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////
///		REF array 




ref array<string> HATS = {
 	"Ushanka_Black","Ushanka_Blue","Ushanka_Green",
	"ZmijovkaCap_Black","ZmijovkaCap_Blue", "ZmijovkaCap_Brown",
	"ZmijovkaCap_Green","ZmijovkaCap_Red",
	"PetushokHat_Black", "PetushokHat_Green",
	"SherpaHat_Black","SherpaHat_Blue","SherpaHat_Red",
	"DirtBikeHelmet_Black", "DirtBikeHelmet_Green"
};


ref array<string>  SHOES = {
	"CombatBoots_Beige", "CombatBoots_Black","CombatBoots_Brown",
	"CombatBoots_Green","CombatBoots_Grey",
	"HikingBoots_Black", "HikingBoots_Brown",
	"JungleBoots_Beige","JungleBoots_Black",
	"JungleBoots_Brown","JungleBoots_Green",
	"JungleBoots_Olive","MilitaryBoots_Beige",
	"MilitaryBoots_Black","MilitaryBoots_Bluerock",
	"MilitaryBoots_Brown","MilitaryBoots_Redpunk",
};


ref array<string>  FACECOVERS = {
	"Balaclava3Holes_Beige","Balaclava3Holes_Black", "Balaclava3Holes_Green", "Balaclava3Holes_Blue",
	"BalaclavaMask_Beige","BalaclavaMask_Green", "BalaclavaMask_Black"
};


ref array<string> COATS = {
	"BomberJacket_Black", "BomberJacket_Olive", "BomberJacket_Brown", 
	"QuiltedJacket_Green", "QuiltedJacket_Black",
	"WoolCoat_Green", "WoolCoat_Beige",
	"WoolCoat_Blue", "WoolCoat_BlackCheck", 
	"WoolCoat_BlueCheck", "WoolCoat_BrownCheck",
	"WoolCoat_GreyCheck", "WoolCoat_BlueCheck",
	"PoliceJacket", "RidersJacket_Black","FirefighterJacket_Beige",
	"FirefighterJacket_Black",
};

ref array<string> LIGHTBAGS = {
	"Slingbag_Black" ,"Slingbag_Brown","SlingBag_Gray",
	"ArmyPouch_Beige","ArmyPouch_Black","ArmyPouch_Camo","ArmyPouch_Green"
};

ref array<string> HIPBAG = {
	"HipPack_Green", "HipPack_Black"
};

ref array<string> PANTS={
	"CargoPants_Beige", "CargoPants_Black", "CargoPants_Blue", 
	"CargoPants_Green", "CargoPants_Grey",
	"Jeans_Black", "Jeans_Blue", "Jeans_Brown",
	"Jeans_BlueDark", "Jeans_Grey","PolicePants",
};

ref array<string> GLOVES = {
	"LeatherGloves_Beige", "LeatherGloves_Black", 
	"PaddedGloves_Beige","PaddedGloves_Brown", 
	"WoolGlovesFingerless_Black", "WoolGlovesFingerless_Tan",
	"WoolGloves_Black", "WoolGloves_Tan", 
	"WorkingGloves_Beige","WorkingGloves_Black","WorkingGloves_Brown",
};

ref array<string> ACCESSORIES = {
	"SewingKit", "Rope","WaterBottle",
};

ref array<string> MEDS = {
	"VitaminBottle", "BandageDressing", "BloodTestKit",
};

ref array<string> FOODS = {
	"Zagorky","ZagorkyChocolate", "ZagorkyPeanuts","SodaCan_Cola",
	"SodaCan_Kvass","SodaCan_Pipsi" , "SodaCan_Spite", "SodaCan_Fronta",
	"Honey", "Marmalade", "SardinesCan", "TunaCan", "DogFoodCan", "CatFoodCan",
	"PorkCan", "Lunchmeat","UnknownFoodCan", "Pajka", "Pate", "BrisketSpread", "Crackers",
	"BakedBeansCan", "PeachesCan", "SpaghettiCan",
};

ref array<string> MELEE_WEAPONS = {
	"Machete", "NailedBaseballBat", "BaseballBat",  "FirefighterAxe",
	"FirefighterAxe_Black","FirefighterAxe_Green",
	"SledgeHammer","BrassKnuckles_Shiny", "BrassKnuckles_Dull"
};

ref array<string> BLADES = {
	"HuntingKnife" ,"KukriKnife", "OrientalMachete" ,
	"CrudeMachete", "FangeKnife", "CombatKnife"
};


// Liste des armes de poing, y compris le Revolver et le Ruger
ref array<string> HANDGUNS = {
    "MakarovIJ70", "Glock19", "CZ75", "FNX45", "Magnum", "MKII"
};

// Liste des chargeurs ou barillets correspondants
ref array<string> HANDGUN_AMMO = {
    "Mag_IJ70_8Rnd", "Mag_Glock_15Rnd", "Mag_CR75_15Rnd", "Mag_FNX45_15Rnd", "Speedloader_357", "Mag_MKII_10Rnd"
};

// Liste des fusils à verrou ou break-action
ref array<string> RIFLES = {
    "Mosin9130", "Izh43Shotgun", "Winchester70", "CZ527"
};

// Liste des munitions ou chargeurs correspondants pour ces fusils
ref array<string> RIFLE_AMMO = {
    "AmmoBox_762x54Tracer_20Rnd", // Pour Mosin9130
    "Ammo_12gaPellets",           // Pour BK133Shotgun
    "Ammo_12gaPellets",           // Pour Izh43Shotgun
    "AmmoBox_308Win_20Rnd",       // Pour Winchester70
    "AmmoBox_762x39Tracer_20Rnd"  // Pour CZ527
};


///////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////


string TUNDRA_GUN[] = { 
	"Winchester70", "AmmoBox_308Win_20Rnd" 
};

string AMMO_22[] = {""};

string AMMO_308[] = {
	"AmmoBox_308Win_20Rnd","AmmoBox_308Win_20Rnd"
};

string AMMO_12GA[] = {
	"Ammo_12gaPellets", "AmmoBox_00buck_10rnd"
};

string AMMO_762[]= {""};


string ATTACHMENTS_OFFROAD[] = {
    "HatchbackTrunk",
    "HatchbackHood",
    "HatchbackDoors_CoDriver",
    "HatchbackDoors_Driver",
    "HatchbackWheel",
    "HatchbackWheel",
    "HatchbackWheel",
    "HatchbackWheel"
};

string ATTACHMENTS_OLGABLACK[] = {
    "CivSedanHood_Black",
    "CivSedanTrunk_Black",
    "CivSedanDoors_Driver_Black",
    "CivSedanDoors_CoDriver_Black",
    "CivSedanDoors_BackLeft_Black",
    "CivSedanDoors_BackRight_Black",
    "CivSedanWheel",
    "CivSedanWheel",
    "CivSedanWheel",
    "CivSedanWheel"
};

string ATTACHMENTS_SARKA[] = {
    "Sedan_02_Hood",
    "Sedan_02_Trunk",
    "Sedan_02_Door_1_1",
    "Sedan_02_Door_1_2",
    "Sedan_02_Door_2_1",
    "Sedan_02_Door_2_2",
    "Sedan_02_Wheel",
    "Sedan_02_Wheel",
    "Sedan_02_Wheel",
    "Sedan_02_Wheel"
};

string ATTACHMENTS_GUNTER[] = {
    "Hatchback_02_Hood",
    "Hatchback_02_Trunk",
    "Hatchback_02_Door_1_1",
    "Hatchback_02_Door_1_2",
    "Hatchback_02_Door_2_1",
    "Hatchback_02_Door_2_2",
    "Hatchback_02_Wheel",
    "Hatchback_02_Wheel",
    "Hatchback_02_Wheel",
    "Hatchback_02_Wheel"
};

string ATTACHMENTS_HUMVEE[] = {
    "GlowPlug",
    "HatchbackWheel",
    "HatchbackWheel",
    "HatchbackWheel",
    "HatchbackWheel"
};

string ATTACHMENTS_TRUCK[] = {
    "TruckBattery",           // Batterie du camion
    "HeadlightH7",            // Phare avant (première position)
    "HeadlightH7",            // Phare avant (deuxième position)
    "Truck_01_Wheel",         // Roue avant (première position)
    "Truck_01_Wheel",         // Roue avant (deuxième position)
    "Truck_01_Wheel",         // Roue avant (troisième position)
    "Truck_01_Wheel",         // Roue avant (quatrième position)
    "Truck_01_Door_1_1",      // Porte conducteur
    "Truck_01_Door_2_1",      // Porte passager
    "Truck_01_Hood",          // Capot du camion
    "Truck_01_Covered_Blue",  // Couverture du camion (si nécessaire)
    "Truck_01_WheelDouble",   // Roue double (première position)
    "Truck_01_WheelDouble",   // Roue double (deuxième position)
    "Truck_01_WheelDouble",   // Roue double (troisième position)
    "Truck_01_WheelDouble",   // Roue double (quatrième position)
    "Barrel_Blue",            // Baril (première position)
    "Barrel_Blue",            // Baril (deuxième position)
    "Barrel_Blue",            // Baril (troisième position)
    "Barrel_Blue",            // Baril (quatrième position)
    "WoodenCrate",            // Caisse en bois (première position)
    "WoodenCrate",            // Caisse en bois (deuxième position)
    "WoodenCrate",            // Caisse en bois (troisième position)
    "WoodenCrate"             // Caisse en bois (quatrième position)
};


string MIL_GEAR[] = {
    "Mich2001Helmet", "GP5GasMask", "SmershVest", "SmershBag", "TTsKOJacket_Camo",
    "TTSKOPants", "OMNOGloves_Gray", "MilitaryBelt", "Canteen", "PlateCarrierHolster",
    "NylonKnifeSheath", "CombatKnife", "MilitaryBoots_Black", "CombatKnife", "AliceBag_Camo"
};

string GHILLIE_GEAR[] = {
    "GhillieAtt_Woodland", "GhillieBushrag_Woodland", "GhillieHood_Woodland",
    "GhillieSuit_Woodland", "GhillieTop_Woodland"
};

string SVD_GEAR[] = {
    "SVD", "AK_Suppressor", "PSO1Optic", "Battery9V", "KazuarOptic", "Battery9V",
    "Mag_SVD_10Rnd", "Mag_SVD_10Rnd", "Mag_SVD_10Rnd", "Mag_SVD_10Rnd"
};

string M4_GEAR[] = {
    "M4A1", "M4_Suppressor", "M4_OEBttstck", "M4_RISHndgrd", "ReflexOptic", "Battery9V",
    "UniversalLight", "Battery9V", "Mag_STANAG_30Rnd", "Mag_STANAG_30Rnd", "Mag_STANAG_30Rnd",
    "ACOGOptic"
};

string AKM_GEAR[] = {
    "AKM", "AK_Suppressor", "AK_WoodBttstck", "AK_RailHndgrd", "KobraOptic", "Battery9V",
    "UniversalLight", "Battery9V", "PSO1Optic", "Battery9V", "Mag_AKM_30Rnd", "Mag_AKM_30Rnd",
    "Mag_AKM_Drum75Rnd"
};

string FX45_GEAR[] = {
    "FNX45", "PistolSuppressor", "FNP45_MRDSOptic", "Battery9V", "TLRLight", "Battery9V",
    "Mag_FNX45_15Rnd", "Mag_FNX45_15Rnd", "Mag_FNX45_15Rnd"
};

string NV_GEAR[] = { 
	"NVGHeadstrap", "NVGoggles", "Battery9V"
};

string MEDIC_GEAR[] = {
    "BandageDressing", "BandageDressing", "BandageDressing", "BandageDressing",
    "SalineBagIV", "Morphine", "Epinephrine"
};


string HUNTER_BK43_GEAR[]= {
    "Izh43Shotgun", "Ammo_12gaPellets", "AmmoBox_12gaSlug_10Rnd"
};

///////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////





///////////////////////////////////////////////////////////////////////////////////////////
//                                 INFECTION
///////////////////////////////////////////////////////////////////////////////////////////


// void InfectPlayerWithZombieVirus(PlayerBase player)
// {
//     // Vérifie si le modificateur n'est pas déjà actif pour éviter les doublons
//     if (!player.GetModifiersManager().IsModifierActive(eModifiers.MDF_FLIES))
//     {
//         player.GetModifiersManager().ActivateModifier(eModifiers.MDF_FLIES);
//     }
// }

//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////

void main()
{
	//INIT WEATHER BEFORE ECONOMY INIT------------------------
	Weather weather = g_Game.GetWeather();

	weather.MissionWeather(false);    // false = use weather controller from Weather.c

	weather.GetOvercast().Set( Math.RandomFloatInclusive(0.4, 0.6), 1, 0);
	weather.GetRain().Set( 0, 0, 1);
	weather.GetFog().Set( Math.RandomFloatInclusive(0.05, 0.1), 1, 0);

	//INIT ECONOMY--------------------------------------
	Hive ce = CreateHive();
	if ( ce )
		ce.InitOffline();

	//DATE RESET AFTER ECONOMY INIT-------------------------
	int year, month, day, hour, minute;
	int reset_month = 9, reset_day = 20;
	GetGame().GetWorld().GetDate(year, month, day, hour, minute);

	if ((month == reset_month) && (day < reset_day)){
		GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
	}
	else{
		if ((month == reset_month + 1) && (day > reset_day))
		{
			GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
		}
		else	{
			if ((month < reset_month) || (month > reset_month + 1))
			{
				GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
			}
		}
	}
}

class CustomMission: MissionServer
{
	// SteamIDs of all admin players stored here
	private ref TStringArray m_admins;
	
	// Players that have God Mode enabled, listed here
	private ref TIntArray m_gods;
	
	// Keep track of internal call queue limit to prevent overloads
	private int m_calls;
	
	// Limit the number of function calls
	// TODO: figure out proper limit when the performance starts to degrade
	// TODO make constant
	private int CALLS_LIMIT;
	
	override void OnInit(){
		super.OnInit();
		
		// Initialize needed class members here
		m_calls = 0;
		CALLS_LIMIT = 50;

		m_admins = new TStringArray;
		m_gods = new TIntArray;
		
		LoadAdmins();
	}
	
	void LoadAdmins(){
		string path = "$profile:admins.txt";
		
		FileHandle file = OpenFile(path, FileMode.READ);
		
		// If file doesnt exist, create it
		if ( file == 0 ) {
			file = OpenFile(path, FileMode.WRITE);
			
			FPrintln(file, "// This file contains SteamID64 of all server admins. Add them below.");
			FPrintln(file, "// Line starting with // means a comment line.");
			
			CloseFile(file);
			return;
		}
		
		string line;
		
		while ( FGets( file, line ) > 0 )	{
			if (line.Length() < 2) continue;
			if (line.Get(0) + line.Get(1) == "//") continue;
			
			m_admins.Insert(line);
		}
		
		CloseFile(file);
	}






	bool Command(PlayerBase player, string command){
		const string helpMsg = "Available commands: /help /car /warp /kill /give /gear /ammo /say /info /heal /god /suicide /here /there";

		// Split command message into args
		TStringArray args = new TStringArray;
		MySplit(command, " ", args);
		
		string arg;
		PlayerBase target;
		int dist;
		
		switch (args[0])
		{
			case "/car":
				if ( args.Count() != 2 ) {
					SendPlayerMessage(player, "Syntax: /car [TYPE] - Spawn a vehicle");
					SpawnCar(player, "help");
					return false;
				}
				SpawnCar(player, args[1]);
				break;
				
			case "/warp":
				if ( args.Count() < 3 ) {
				SendPlayerMessage(player, "Syntax: /warp [X] [Z] - Teleport to [X, Z]");
					return false;
				}
				string pos = args[1] + " " + "0" + " " + args[2];
				SafeSetPos(player, pos);
				SendPlayerMessage(player, "Teleported to: " + pos);
				break;
				
			case "/heal":
				if ( args.Count() != 1 ) {
					SendPlayerMessage(player, "Syntax: /heal - Set all health statuses to max");
					return false;
				}
				RestoreHealth(player);
				break;
				
			case "/gear":
				if ( args.Count() != 2 ) {
					SendPlayerMessage(player, "Syntax: /gear [TYPE] - Spawn item loadout to self");
					SpawnGear(player, "help");
					return false;
				}
				if (SpawnGear(player, args[1])) {
					SendPlayerMessage(player, "Gear spawned.");
				}
				break;
				

				case "/ammo":
				    // Args count: 2 <= x <= 3
				    if ( args.Count() < 2 || args.Count() > 3 ) {
				        SendPlayerMessage(player, "Syntax: /ammo [FOR_WEAPON] (AMOUNT) - Spawn mags and ammo for weapon");
				        SpawnAmmo(player, "help", 1); // Provide amount even for help
				        return false;
				    }
				    if ( args.Count() == 3 && SpawnAmmo(player, args[1], args[2].ToInt()) ) {
				        SendPlayerMessage(player, "Ammo spawned.");
				    }
				    else if ( args.Count() == 2 && SpawnAmmo(player, args[1], 1) ) { // Pass default amount
				        SendPlayerMessage(player, "Ammo spawned.");
				    }
				    break;

				
			case "/info":
				if ( args.Count() < 1 || args.Count() > 2 ) {
					SendPlayerMessage(player, "Syntax: /info (0/1) - Get information about players on the server or set continuous info on/off");
					return false;
				}
				if (args.Count() == 2) {
					arg = args[1];
					arg.ToLower();
					
					if (arg.ToInt() == 1) {
						GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(this.PlayerInfo, 20000, true, player);
						SendPlayerMessage(player, "Continuous info mode enabled.");
						break;
					}
					else if (arg.ToInt() == 0) {
						GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).Remove(this.PlayerInfo);
						SendPlayerMessage(player, "Continuous info mode disabled.");
					}
				}
				else {
					PlayerInfo(player);
				}
				break;
			case "/say":
				if ( args.Count() < 2 ) {
					SendPlayerMessage(player, "Syntax: /say [MESSAGE] - Global announcement to all players");
					return false;
				}
				
				// Form the message string from the command text and send to all players
				string msg = command.Substring( 5, command.Length() - 5 );
				
				SendGlobalMessage(msg);
				break;
			// spawn item whpuld take the name of the item and the quantity
			// case "/spawnitem":
			// 	if ()
			// 	return false;
			
			// case "/zombie":
			// 	InfectPlayerWithZombieVirus(player);

			case "/god":
				if ( args.Count() != 2 ) {
					SendPlayerMessage(player, "Syntax: /god [0-1] - Enable or disable semi god mode (BEWARE: huge damage in short timespan can still kill you!)");
					return false;
				}
				
				int setGod = args[1].ToInt();
				int pId = player.GetID();

				// Add player to gods, call godmode function every 1 sec
				if (setGod == 1) {
					
					if ( m_gods.Find(pId) != -1 ) {
						SendPlayerMessage(player, "You are already god.");
						return false;
					}

					// Here we only need to add the new call to queue
					// However make sure we are within safe limits
					// TODO: Figure out more robust system to ensure performance does not degrade over time
					if (m_calls < CALLS_LIMIT) {
						m_gods.Insert( pId );
						GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(this.GodMode, 1000, true, player);
						m_calls += 1;
						SendPlayerMessage(player, "God mode enabled.");
					} else {
						SendPlayerMessage(player, "ERROR: Call queue limit reached. Please try again later.");
					}
				}
				// Do vice versa except for other gods
				else if (setGod == 0) {
					// Remove player id from gods list if found
					int godIdx = m_gods.Find( pId );

					if (godIdx == -1) {
						SendPlayerMessage(player, "God mode not currently enabled for player.");
						return false;
					}
					else {
						m_gods.Remove(godIdx);
					}
					
					// The problem is we cant remove the interval function call for a specific player
					// We also dont want to check for all god players in a single fucntion call => too slow
					// Thus we need to re-queue the function call for each god player separately (serverside)
					// Remove godmode function from call queue but add again for remaining gods
					RefreshGodQueue();
					
					SendPlayerMessage(player, "Godmode disabled.");
				}
				else {
					SendPlayerMessage(player, "ERROR: Invalid argument given. Argument should be: 0-1");
					return false;
				}
				break;
				
			case "/give":
				if ( args.Count() < 2 || args.Count() > 3 ) {
					SendPlayerMessage(player, "Syntax: /give [ITEM_NAME] (AMOUNT) - Spawn item on ground, default amount is 1");
					return false;
				}
				
				EntityAI item = player.SpawnEntityOnGroundPos(args[1], player.GetPosition());
				
				if (!item) {
					SendPlayerMessage(player, "ERROR: Could not create item.");
					return false;
				}
				if ( args.Count() == 3 ) {
					
					int itemCount = args[2].ToInt();
					
					if (itemCount <= 0) {
						SendPlayerMessage(player, "ERROR: Invalid count.");
						return false;
					}
					
					// Spawn the rest of the items if count was specified and valid
					for (int i = 0; i < itemCount - 1; i++) {
						player.SpawnEntityOnGroundPos(args[1], player.GetPosition());
					}
				}
				SendPlayerMessage(player, "Item(s) spawned.");
				break;
				
			case "/here":
				if ( args.Count() < 2 ) {
					SendPlayerMessage(player, "Syntax: /here '[PLAYER IDENTITY]' (DISTANCE) - Moves a player to self, remember to use single quotes around identity");
					return false;
				}
				PrepareTeleport(command, args, target, dist);
				
				if (!target) {
					SendPlayerMessage(player, "Could not found target player.");
					return false;
				}				
				if (dist < 1) {
					SendPlayerMessage(player, "Invalid distance.");
					return false;
				}
				TeleportPlayer(target, player, dist);					
				break;
				
			case "/there":
				if ( args.Count() < 2 ) {
					SendPlayerMessage(player, "Syntax: /there '[PLAYER IDENTITY]' (DISTANCE) - Moves self to a player");
					return false;
				}
				
				PrepareTeleport(command, args, target, dist);
				
				if (!target) {
					SendPlayerMessage(player, "Could not found target player.");
					return false;
				}				
				if (dist < 1) {
					SendPlayerMessage(player, "Invalid distance.");
					return false;
				}
				TeleportPlayer(player, target, dist);					
				break;

			case "/suicide":
				if ( args.Count() != 1 ) {
					SendPlayerMessage(player, "Syntax: /suicide - Commit a suicide");
					return false;
				}
				
				// Use SteamID here for sake of certainty
				if (!KillPlayer( player.GetIdentity().GetPlainId() )) {
					SendPlayerMessage(player, "Could not commit suicide.");
				}
				break;

			case "/kill":
				if ( args.Count() < 2 ) {
					SendPlayerMessage(player, "Syntax: /kill '[PLAYER IDENTITY]' - Kills a player by given identity, use single quotes around");
					return false;
				}
				
				arg = MyTrim(command, "'");
				
				if (!KillPlayer(arg)) {
					SendPlayerMessage(player, "Error: Could not kill player.");
				}	
				break;

			case "/help":
				SendPlayerMessage(player, helpMsg);
				return false;

			default:
				SendPlayerMessage(player, "Unknown command!");
				SendPlayerMessage(player, helpMsg);
				return false;
		}
		
		return true;
	}
	
	void PrepareTeleport(string cmd, TStringArray args, out PlayerBase target, out int distance)
	{
		// Parse target player name: "...stuff 'input' stuff..." -> "input"
		string name = MyTrim(cmd, "'");
		
		distance = args[args.Count() - 1].ToInt();
		target = GetPlayer(name, Identity.ANY);
	}
	
	// Fonction pour faire apparaître les munitions
	bool SpawnAmmo(PlayerBase player, string ammoName, int amount)
	{
	    // Déclaration des ensembles de munitions pour chaque arme
	    ref array<string> SVD_AMMO = {"Mag_SVD_10Rnd", "AmmoBox_762x54Tracer_20Rnd"};
	    ref array<string> M4_AMMO = {"Mag_STANAG_30Rnd", "AmmoBox_556x45Tracer_20Rnd"};
	    ref array<string> AKM_AMMO = {"Mag_AKM_30Rnd", "AmmoBox_762x39Tracer_20Rnd"};
	    ref array<string> FX45_AMMO = {"Mag_FNX45_15Rnd", "AmmoBox_45ACP_25rnd"};

	    // Convertir le nom de la munition en minuscules (modifie la chaîne en place)
	    ammoName.ToLower();

	    const string helpMsg = "Available ammo types: svd, m4, akm, fx45";

	    // Position où les munitions apparaîtront
	    vector pos = player.GetPosition();
	    pos[0] = pos[0] + 1;
	    pos[1] = pos[1] + 1;
	    pos[2] = pos[2] + 1;

	    // Initialiser le tableau des munitions
	    ref array<string> ammoSet = new array<string>();

	    // Sélectionner le jeu de munitions approprié
	    switch (ammoName)
	    {
	        case "svd":
	            ammoSet.InsertAll(SVD_AMMO);
	            break;
	        case "m4":
	            ammoSet.InsertAll(M4_AMMO);
	            break;
	        case "akm":
	            ammoSet.InsertAll(AKM_AMMO);
	            break;
	        case "fx45":
	            ammoSet.InsertAll(FX45_AMMO);
	            break;
	        case "help":
	            SendPlayerMessage(player, helpMsg);
	            return false;
	        default:
	            SendPlayerMessage(player, "Invalid ammo type.");
	            SendPlayerMessage(player, helpMsg);
	            return false;
	    }

	    // Gérer la quantité par défaut
	    if (amount <= 0)
	    {
	        amount = 1;
	    }

	    // Faire apparaître les munitions
	    for (int i = 0; i < amount; i++)
	    {
	        foreach (string item : ammoSet)
	        {
	            player.SpawnEntityOnGroundPos(item, pos);
	        }
	    }

	    return true;
	}


	// Just keep track of the active calls, no boundary checks here
	void RefreshGodQueue()	{
		GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).Remove(this.GodMode);
		m_calls = 0;

		foreach (int pId : m_gods)
		{
			PlayerBase godPlayer = GetPlayer(pId.ToString(), Identity.PID);
			if (!godPlayer) {
				m_gods.Remove( pId );
				continue;
			}
			GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(this.GodMode, 1000, true, godPlayer);
			m_calls += 1;
		}
	}

	void GodMode(PlayerBase player)
	{
			//		// if we only had the PID
			//		PlayerBase player = GetPlayer(pId.ToString(), Identity.PID);
			// If invalid player
		if (!player) {
			// Make sure this function call gets removed from the queue
			// So the function call queue does not get overloaded
			// Refresh call takes care of removing invalid PIDs
			RefreshGodQueue();
			return;
		}
		int pId = player.GetID();
		// If player is not god, do nothing
		if (m_gods.Find( pId ) == -1) {
			// Refresh at this point to get the pid removed from the list
			RefreshGodQueue();
			return;
		}

		// If player already dead, make sure godmode gets disabled
		if (player.GetHealth("", "") <= 0.0) {
			// We have just checked pid is in the list, so manually remove the pid and refresh
			m_gods.Remove( pId );
			RefreshGodQueue();
			return;
		}
		
		// Set all health statuses to maximum
		RestoreHealth(player);
	}
	
	void RestoreHealth(PlayerBase player)
	{
		if (!player) return;
		
		player.SetHealth("GlobalHealth", "Blood", player.GetMaxHealth("GlobalHealth", "Blood"));
		player.SetHealth("GlobalHealth", "Health", player.GetMaxHealth("GlobalHealth", "Health"));
		player.SetHealth("GlobalHealth", "Shock", player.GetMaxHealth("GlobalHealth", "Shock"));
	}



	bool SpawnCar(PlayerBase player, string type){
	    // Convert the car type to lowercase for easier comparison
	    type.ToLower();
	    // Message d'aide pour le joueur
	    const string helpMsg = "Available types: offroad, olgablack, sarka, gunter, segfault";
	    // Définir la position de la voiture près du joueur
	    vector pos = player.GetPosition() + "3 3 3"; // Ajouter un décalage de 3 unités dans chaque direction
	    Car car;
	    // Sélectionner le type de voiture à créer
	    switch (type)
	    {
			case "player":
				PrintPlayerName(player);
				break;
	        case "basetruck":
	        //    SpawnBaseTruck(player , pos  );
			    car = CreateCar("Truck_01_Covered_Blue", pos, player);
		  		AttachParts(car, ATTACHMENTS_TRUCK);
	            break;
	        case "offroad":
	            car = CreateCar("OffroadHatchback", pos, player);
	            AttachParts(car, ATTACHMENTS_OFFROAD);
	            break;
	        case "olgablack":
	            car = CreateCar("CivilianSedan_Black", pos, player);
	            AttachParts(car, ATTACHMENTS_OLGABLACK);
	            break;
	        case "sarka":
	            car = CreateCar("Sedan_02", pos, player);
	            AttachParts(car, ATTACHMENTS_SARKA);
	            break;
	        case "gunter":
	            car = CreateCar("Hatchback_02", pos, player);
	            AttachParts(car, ATTACHMENTS_GUNTER);
	            break;
	        case "segfault":
	            car = CreateCar("Offroad_02", pos, player);
	            AttachParts(car, ATTACHMENTS_HUMVEE);
	            break;
	        case "help":
	            SendPlayerMessage(player, helpMsg);
	            return false;
	        default:
	            SendPlayerMessage(player, "ERROR: Car type invalid.");
	            SendPlayerMessage(player, helpMsg);
	            return false;
	    }

	    // Configurer la voiture (commun à toutes les voitures)
	    if (car)
	    {
	        ConfigureCommonCarParts(car);
	        FillCarFluids(car);
	        car.GetController().ShiftTo(CarGear.NEUTRAL);
	        return true;
	    }
	    return false;
	}

// Fonction utilitaire pour créer une voiture
	Car CreateCar(string carType, vector position, PlayerBase player)
	{
	    Car car = Car.Cast(GetGame().CreateObject(carType, position));
	    if (car)
	    {
	        SendPlayerMessage(player, carType + " spawned.");
	    }
	    return car;
	}

// Fonction utilitaire pour attacher des pièces à la voiture
	void AttachParts(Car car, string[] attachments)
	{
	    foreach (string attachment : attachments)
	    {
	        car.GetInventory().CreateAttachment(attachment);
	    }
	}

	// Configuration des pièces communes à toutes les voitures
	void ConfigureCommonCarParts(Car car)
	{
	    car.GetInventory().CreateAttachment("CarRadiator");
	    car.GetInventory().CreateAttachment("CarBattery");
	    car.GetInventory().CreateAttachment("SparkPlug");
	    car.GetInventory().CreateAttachment("HeadlightH7");
	    car.GetInventory().CreateAttachment("HeadlightH7");
	}

	// Remplir les fluides de la voiture
	void FillCarFluids(Car car)
	{
	    car.Fill(CarFluid.FUEL, car.GetFluidCapacity(CarFluid.FUEL));
	    car.Fill(CarFluid.OIL, car.GetFluidCapacity(CarFluid.OIL));
	    car.Fill(CarFluid.BRAKE, car.GetFluidCapacity(CarFluid.BRAKE));
	    car.Fill(CarFluid.COOLANT, car.GetFluidCapacity(CarFluid.COOLANT));
	}


	void SafeSetPos(PlayerBase player, string pos)
	{
		// Safe conversion
		vector p = pos.ToVector();
		
		// Check that position is a valid coordinate
		// 0 0 0 wont be accepted even though valid
		if (p) {
			// Get safe surface value for Y coordinate in that position
			p[1] = GetGame().SurfaceY(p[0], p[2]);
			player.SetPosition(p);
			return;
		}
		
		SendPlayerMessage(player, "Invalid coordinates.");
	}
	
	void PlayerInfo(PlayerBase player)
	{
		if (!player) {
			GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).Remove(this.PlayerInfo);
			return;
		}
		
		// Clear chat history first
		for (int x = 0; x < 15; x++) {
			SendPlayerMessage(player, " ");
		}
		
		ref array<Man> players = new array<Man>;
		GetGame().GetPlayers( players );

		// Send player count
		SendPlayerMessage(player, "Players on server: " + players.Count());
		
		// Maximum amount of single line entries that fit in the chat history: 12
		int max = 10;
		
		if ( players.Count() < max )
			max = players.Count();
		
		PlayerBase p;

		for ( int i = 0; i < max; ++i )
		{
			//if (i > 0)
			//	SendPlayerMessage(player, "*");
			
			Class.CastTo(p, players.Get(i));
			
			string info = "Player {" + string.ToString(i, false, false, false) + "}";
			info = info + "  " + "Name: " + p.GetIdentity().GetName();
			info = info + "  " + "Pos: " + p.GetPosition().ToString();
			info = info	+ "  " + "Health: " + p.GetHealth("GlobalHealth", "Health");
			info = info + "  " + "Blood: " + p.GetHealth("GlobalHealth", "Blood");
			info = info + "  " + "Shock: " + p.GetHealth("GlobalHealth", "Shock");
			info = info + "  " + "PlayerID: " + p.GetID();
			info = info + "  " + "SteamID64: " + p.GetIdentity().GetPlainId();

			SendPlayerMessage(player, info);
		}
		
		SendPlayerMessage(player, " ");
	}


	// attach_bk_loadout(PlayerBase player){
	// 	player.GetInventory().CreateAttachment(itemName);
	// 	player.GetInventory().CreateInInventory(itemName);
			 	// }

//ligne 956
// Fonction pour obtenir un élément aléatoire d'un tableau


string GetRandomItem(array<string> items)
{
    int index = Math.RandomInt(0, items.Count());
    return items.Get(index);
}

string GetMatchingAmmo(string handgun) {
    int index = HANDGUNS.Find(handgun);
    if (index != -1 && index < HANDGUN_AMMO.Count())
    {
        return HANDGUN_AMMO.Get(index);
    }
    return "";
}

// Fonction pour obtenir une boîte de munitions correspondant à l'arme
string GetAmmoBoxForWeapon(string weapon) {
    if (weapon == "Mosin9130") return "AmmoBox_762x54Tracer_20Rnd";
    if (weapon == "Izh43Shotgun") return "Ammo_12gaPellets";
    if (weapon == "Winchester70") return "AmmoBox_308Win_20Rnd";
    if (weapon == "CZ527") return "AmmoBox_762x39Tracer_20Rnd";
    if (weapon == "Magnum") return "AmmoBox_357_20Rnd";
    if (weapon == "MKII") return "AmmoBox_22_50Rnd";
	if (weapon == "MakarovIJ70") return "AmmoBox_380_35rnd";
    if (weapon == "Glock19") return "AmmoBox_9x19_25Rnd";
    if (weapon == "CR75") return "AmmoBox_9x19_25Rnd";
    if (weapon == "FNX45") return "AmmoBox_45ACP_25rnd";
    return "";
}

bool AttachRandomLoadout(PlayerBase player)
{

    if (HATS.Count() > 0) {
        string hat = GetRandomItem(HATS);
        player.GetInventory().CreateInInventory(hat);
    }

    if (FACECOVERS.Count() > 0)   {
        string faceCover = GetRandomItem(FACECOVERS);
        player.GetInventory().CreateInInventory(faceCover);
    }

    if (COATS.Count() > 0) {
        string coat = GetRandomItem(COATS);
        player.GetInventory().CreateInInventory(coat);
    }

    if (LIGHTBAGS.Count() > 0)  {
        string lightBag = GetRandomItem(LIGHTBAGS);
        player.GetInventory().CreateInInventory(lightBag);
    }

    if (HIPBAG.Count() > 0){
        string hipBag = GetRandomItem(HIPBAG);
        player.GetInventory().CreateInInventory(hipBag);
    }

    if (PANTS.Count() > 0) {
        string pants = GetRandomItem(PANTS);
        player.GetInventory().CreateInInventory(pants);
    }

    if (SHOES.Count() > 0)   {
        string shoes = GetRandomItem(SHOES);
        player.GetInventory().CreateInInventory(shoes);
    }

    if (GLOVES.Count() > 0)  {
        string gloves = GetRandomItem(GLOVES);
        player.GetInventory().CreateInInventory(gloves);
    }

    foreach (string accessoryItem : ACCESSORIES)  {
        player.GetInventory().CreateInInventory(accessoryItem);
    }
    foreach (string medItem : MEDS)
    {
        player.GetInventory().CreateInInventory(medItem);
    }

    if (FOODS.Count() > 0) {
        string food1 = GetRandomItem(FOODS);
        player.GetInventory().CreateInInventory(food1);

        string food2 = GetRandomItem(FOODS);
        player.GetInventory().CreateInInventory(food2);
    }

    if (MELEE_WEAPONS.Count() > 0) {
        string meleeWeapon = GetRandomItem(MELEE_WEAPONS);
        player.GetInventory().CreateInInventory(meleeWeapon);
    }

    if (BLADES.Count() > 0)  {
        string blade = GetRandomItem(BLADES);
        player.GetInventory().CreateInInventory(blade);
    }

    // Ajoute un fusil et ses munitions
    if (RIFLES.Count() > 0){
        string rifle = GetRandomItem(RIFLES);
        string rifleAmmoBox = GetAmmoBoxForWeapon(rifle);

        EntityAI rifleEntity = player.GetInventory().CreateInInventory(rifle);
        if (rifleEntity)
        {
            player.SetQuickBarEntityShortcut(rifleEntity, 0);
        }

        if (rifleAmmoBox != "")
        {
            player.GetInventory().CreateInInventory(rifleAmmoBox);
        }
    }

    // Ajoute un pistolet, un chargeur et ses munitions
    if (HANDGUNS.Count() > 0){
        string handgun = GetRandomItem(HANDGUNS);
        string handgunAmmoBox = GetAmmoBoxForWeapon(handgun);
        int handgunIndex = HANDGUNS.Find(handgun);
        string handgunMag = "";
        // Trouve le chargeur correspondant
        if (handgunIndex != -1 && handgunIndex < HANDGUN_AMMO.Count())  {
            handgunMag = HANDGUN_AMMO.Get(handgunIndex);
        }
        // Crée et équipe le pistolet
        EntityAI handgunEntity = player.GetInventory().CreateInInventory(handgun);
        if (handgunEntity) {
            player.SetQuickBarEntityShortcut(handgunEntity, 1);
        }
        // Crée le chargeur
        if (handgunMag != "")  {
            EntityAI magazine = player.GetInventory().CreateInInventory(handgunMag);
			
    		SendPlayerMessage(player, handgunMag);
        }
        // Ajoute la boîte de munitions
        if (handgunAmmoBox != "")  {
            player.GetInventory().CreateInInventory(handgunAmmoBox);
        }
    }

    SendPlayerMessage(player, "");
    return true;
}

	void ClearAllPlayerTouchedLootO()
	{
	    // Crée une liste pour stocker tous les objets dans le monde
	    ref array<Object> objects = new array<Object>;
	    GetGame().GetObjectsAtPosition3D("0 0 0", 100000, objects, null);

	    // Parcours de tous les objets trouvés
	    foreach (Object obj : objects)  {
	        // Vérifie que l'objet n'est ni un joueur, ni un véhicule, ni une base de construction
	        if (obj && !obj.IsInherited(PlayerBase) && !obj.IsInherited(CarScript) && !obj.IsInherited(BaseBuildingBase))  {
	            // Cast de l'objet en ItemBase pour vérifier s'il a été manipulé par un joueur
	            ItemBase item = ItemBase.Cast(obj);
	
	            if (item)    {
	                // Vérifie si l'objet a un ID réseau ou est attaché à un joueur
	                if (item.HasNetworkID() || item.GetHierarchyRootPlayer()) {
	                    GetGame().ObjectDelete(obj); // Supprime l'objet
	                    continue;
	                }
	            }
	            else {
	                // Supprime les objets qui ne sont pas des items (objets statiques)
	                GetGame().ObjectDelete(obj);
	            }
	        }
	    }

	    Print("Tous les objets au sol ou touchés par un joueur ont été supprimés, sauf les bases de construction !");
	}


void ClearAllPlayerTouchedLootN()
{
    // Crée une liste pour stocker tous les objets dans le monde
    ref array<Object> objects = new array<Object>;
    GetGame().GetObjectsAtPosition3D("0 0 0", 100000, objects, null);

    // Parcours de tous les objets trouvés
    foreach (Object obj : objects)  {
        // Vérifie que l'objet n'est ni un joueur, ni un véhicule, ni une base de construction
        if (obj && !obj.IsInherited(PlayerBase) && !obj.IsInherited(CarScript) && !obj.IsInherited(BaseBuildingBase)){
            // Cast de l'objet en ItemBase pour vérifier s'il a été manipulé par un joueur
            ItemBase item = ItemBase.Cast(obj);
            
            if (item) {
                // Vérifie si l'objet a un ID réseau ou est attaché à un joueur
                if (item.HasNetworkID() || item.GetHierarchyRootPlayer()){
                    GetGame().ObjectDelete(obj); // Supprime l'objet
                    continue;
                }
            }
            else {
                // Supprime les objets qui ne sont pas des items (objets statiques)
                GetGame().ObjectDelete(obj);
            }
        }
    }

    Print("Tous les objets au sol ou touchés par un joueur ont été supprimés, sauf les bases de construction !");
}

///////////////////////////////////////////////
///////////////////////////////////////////////

// Fonction pour contaminer un joueur avec la salmonelle
void contaminateLaughter(PlayerBase player)
{
    if (!player) return; // Vérifie que l'objet joueur existe

    // Message pour informer le joueur de l'infection
    const string LaughterMessage = ".";
    SendPlayerMessage(player, LaughterMessage);

    // Réduction de la santé pour simuler l'infection
    float currentHealth = player.GetHealth("GlobalHealth", "Health");
    player.SetHealth("GlobalHealth", "Health", currentHealth - 5.0); // Réduit la santé de 5 points

    // Utilisation du SymptomManager pour gérer les symptômes de manière avancée
    SymptomManager symptomManager = player.GetSymptomManager();
    if (symptomManager)
    {
        // Nettoie la file d'attente des symptômes précédents si nécessaire
        symptomManager.CleanUpPrimaryQueue();

        // Crée et insère le symptôme de vomissement
        int uniqueID = symptomManager.CreateUniqueID();
        SymptomBase vomitSymptom = symptomManager.SpawnSymptom(SymptomIDs.SYMPTOM_LAUGHTER, uniqueID);

        if (vomitSymptom)
        {
            vomitSymptom.Activate(); // Active le symptôme immédiatement
        }
    }
}

////////////////////////////////////////////////////
////////////////////////////////////////////////////

	// Fonction pour faire apparaître l'équipement
	bool SpawnGear(PlayerBase player, string type)
	{
	    type.ToLower();
	    const string helpMsg = "Available types: random, mil, ghillie, medic, nv, svd, m4, akm, fx45, 12ga , 308 tundra, bk clearn";
	    vector pos = player.GetPosition() + "1 1 1";

	    // DONT spawn a mag as attachment, is buggy ingame, spawn mags on ground instead
	    EntityAI item;
	    EntityAI subItem;
	    switch (type)
	    {
			case "clearo":
				ClearAllPlayerTouchedLootO();
				break;
			case "clearn":	
				ClearAllPlayerTouchedLootN();
				break;

			case "laughter":
				contaminateLaughter(player);
				break;
			case "random":
				AttachRandomLoadout(player);
				break;
			case "bk":
					SpawnItems(player, pos, HUNTER_BK43_GEAR);
					break;
			case "tundra":
					SpawnItems(player, pos, TUNDRA_GUN);
					break;
			 case "308":
			 		SpawnItems(player, pos, AMMO_308);
					break;
			case "12ga":
					SpawnItems(player, pos, AMMO_12GA);
					break;
	 		case "mil":
					SpawnItems(player, pos, MIL_GEAR);
					// Ajout d'attachements spécifiques pour MIL_GEAR
					AttachItemsToHelmet(player, pos, "Mich2001Helmet", "NVGoggles", "Battery9V", "UniversalLight", "Battery9V");
					AttachItemsToVest(player, pos, "SmershVest", "SmershBag");
					AttachItemsToBelt(player, pos, "MilitaryBelt", "Canteen", "PlateCarrierHolster", "NylonKnifeSheath", "CombatKnife");
					AttachItemsToBoots(player, pos, "MilitaryBoots_Black", "CombatKnife");
	            break;
	
	        case "ghillie":
	            SpawnItems(player, pos, GHILLIE_GEAR);
	            break;
	
	        case "svd":
	            SpawnItems(player, pos, SVD_GEAR);
	            break;
	
	        case "m4":
	            SpawnItems(player, pos, M4_GEAR);
	            break;
	
	        case "akm":
	            SpawnItems(player, pos, AKM_GEAR);
	            break;
	
	        case "fx45":
	            SpawnItems(player, pos, FX45_GEAR);
	            break;
	
	        case "nv":
	            SpawnItems(player, pos, NV_GEAR);
	            break;
	
	        case "medic":
	            SpawnItems(player, pos, MEDIC_GEAR);
	            break;
	
	        case "help":
	            SendPlayerMessage(player, helpMsg);
	            return false;
	
	        default:
	            SendPlayerMessage(player, "Invalid gear type.");
	            SendPlayerMessage(player, helpMsg);
	            return false;
	    }
	    return true;
	}

	// Fonction pour faire apparaître des objets
	void SpawnItems(PlayerBase player, vector pos, string[] items)
	{
	    foreach (string itemName : items)
	    {
	        player.SpawnEntityOnGroundPos(itemName, pos);
	    }
	}

	// Fonction pour ajouter des attachements spécifiques aux casques
	void AttachItemsToHelmet(PlayerBase player, vector pos, string helmet, string attachment1, string battery1, string attachment2, string battery2)
	{
	    EntityAI item = player.SpawnEntityOnGroundPos(helmet, pos);
	    EntityAI subItem = item.GetInventory().CreateAttachment(attachment1);
	    subItem.GetInventory().CreateAttachment(battery1);
	    subItem = item.GetInventory().CreateAttachment(attachment2);
	    subItem.GetInventory().CreateAttachment(battery2);
	}

	// Fonction pour attacher des objets spécifiques aux vestes
	void AttachItemsToVest(PlayerBase player, vector pos, string vest, string attachment)
	{
	    EntityAI item = player.SpawnEntityOnGroundPos(vest, pos);
	    item.GetInventory().CreateAttachment(attachment);
	}

	// Fonction pour attacher des objets spécifiques aux ceintures
	void AttachItemsToBelt(PlayerBase player, vector pos, string belt, string attachment1, string attachment2, string attachment3, string knife)
	{
	    EntityAI item = player.SpawnEntityOnGroundPos(belt, pos);
	    item.GetInventory().CreateAttachment(attachment1);
	    item.GetInventory().CreateAttachment(attachment2);
	    EntityAI subItem = item.GetInventory().CreateAttachment(attachment3);
	    subItem.GetInventory().CreateAttachment(knife);
	}

	// Fonction pour attacher des objets spécifiques aux bottes
	void AttachItemsToBoots(PlayerBase player, vector pos, string boots, string knife)
	{
	    EntityAI item = player.SpawnEntityOnGroundPos(boots, pos);
	    item.GetInventory().CreateAttachment(knife);
	}



	void TeleportPlayer(PlayerBase from, PlayerBase to, int distance)	{
		if (!from) return;
		if (!to) return;
		
		vector toPos = to.GetPosition();

		float pos_x = toPos[0] + distance;
		float pos_z = toPos[2] + distance;
		float pos_y = GetGame().SurfaceY(pos_x, pos_z);
		
		vector pos = Vector(pos_x, pos_y, pos_z);
		
		from.SetPosition(pos);
	}
	
	bool KillPlayer(string tag)
	{
		PlayerBase p = GetPlayer(tag, Identity.ANY);
		
		if (!p) return false;
		
		p.SetHealth("", "", -1);
		
		return true;
	}
	
	override void OnEvent(EventType eventTypeId, Param params)
	{
		switch(eventTypeId)
		{
			// Handle user command
			case ChatMessageEventTypeID:

				ChatMessageEventParams chatParams;
				Class.CastTo(chatParams, params);
				
				// Remove those stupid ' ' => Substring: x, false, false, quotes = false
				
				// Check that input was a command (contains forward slash)
				string cmd = string.ToString(chatParams.param3, false, false, false);

				// command format: /abc def ghi
				// if not command, is normal chat message
				if ( cmd.Get(0) != "/" ) break;
				
				// Get sender player name as string
				string senderName = string.ToString(chatParams.param2, false, false, false);
				
				// Get sender player object
				PlayerBase sender = GetPlayer(senderName, Identity.NAME);
				
				// If fails to get the message sender, stop
				if (!sender) {
					return;
				}
				
				// Check that player has sufficient privileges to execute commands
				if ( !IsAdmin(sender) ) {
					SendPlayerMessage(sender, "Sorry, you are not an admin!");
					return;
				}

				// Execute specified command
				Command(sender, cmd);
				
				// Return after execution instead of breaking to prevent normal event handling
				return;
		}
		
		// Unless chat command was executed, operate normally
		// Call super class event handler to handle other events
		super.OnEvent(eventTypeId, params);
	}
	
	bool IsAdmin(PlayerBase player){
		return m_admins.Find( player.GetIdentity().GetPlainId() ) != -1;
	}

	PlayerBase GetPlayer(string tag, Identity type){
		ref array<Man> players = new array<Man>;
		GetGame().GetPlayers( players );
		
		PlayerBase p;
		
		bool nameMatch;
		bool steamIdMatch;
		bool pidMatch;
		
		for ( int i = 0; i < players.Count(); ++i ){
			Class.CastTo(p, players.Get(i));
			
			// Store matches from different checks
			nameMatch = p.GetIdentity().GetName() == tag;
			steamIdMatch = p.GetIdentity().GetPlainId() == tag;
			pidMatch = p.GetID() == tag.ToInt();
			
			if ( type == Identity.ANY ) {
				if ( nameMatch || steamIdMatch || pidMatch )
					return p;
			}
			
			else if ( type == Identity.NAME ) {
				if ( nameMatch )
					return p;
			}
			
			else if ( type == Identity.STEAMID ) {
				if ( steamIdMatch )
					return p;
			}

			else if ( type == Identity.PID ) {
				if ( pidMatch )
					return p;
			}
		}
		
		// Player with given parameter not found
		return NULL;
	}
	
	void SendGlobalMessage(string message)	{
		ref array<Man> players = new array<Man>;
		GetGame().GetPlayers( players );
		
		for ( int i = 0; i < players.Count(); ++i ){
			Man player = players.Get(i);
			if ( player )
				SendPlayerMessage(player, message);
		}
	}
	
	void SendPlayerMessage(PlayerBase player, string message)	{
		Param1<string> Msgparam;
		Msgparam = new Param1<string>(message);
		GetGame().RPCSingleParam(player, ERPCs.RPC_USER_ACTION_MESSAGE, Msgparam, true, player.GetIdentity());
	}
	
	string MyTrim(string text, string c) {
		if (text.Length() < 3) return "";
		int count = 0;
		int start = 0;
		int end = 0;

		for (int i = 0; i < text.Length(); i++){
			if (text.Get(i) == c) {
				count++;
				start = i + 1;
				break;
			}
		}

		for (int j = text.Length() - 1; j >= 0; j--){
			if (text.Get(j) == c) {
				count++;
				end = j - 1;
				break;
			}
		}
		
		// Return substring only if trimmed by c from both sides.
		if (count == 2) return text.Substring(start, end - start + 1);
		
		return "";
	}
	
	void MySplit(string text, string delim, out TStringArray list){
		string temp = text + delim;
		string word = "";
		
		for (int i = 0; i < temp.Length(); i++ ){
			string x = temp.Get(i);
			
			if ( x != delim ) {
				word = word + x;
			}
			else {
				list.Insert(word);
				word = "";
			}
		}
	}

	override void StartingEquipSetup(PlayerBase player, bool clothesChosen)
	{
		EntityAI itemClothing;
		EntityAI itemEnt;
		ItemBase itemBs;
		float rand;

		itemClothing = player.FindAttachmentBySlotName( "Body" );
		if ( itemClothing )
		{
			
			itemEnt = itemClothing.GetInventory().CreateInInventory( "BandageDressing" );
			player.SetQuickBarEntityShortcut(itemEnt, 2);
			
			string chemlightArray[] = { "Chemlight_White", "Chemlight_Yellow", "Chemlight_Green", "Chemlight_Red" };
			int rndIndex = Math.RandomInt( 0, 4 );
			itemEnt = itemClothing.GetInventory().CreateInInventory( chemlightArray[rndIndex] );
			player.SetQuickBarEntityShortcut(itemEnt, 1);

			rand = Math.RandomFloatInclusive( 0.0, 1.0 );
			if ( rand < 0.35 )
				itemEnt = player.GetInventory().CreateInInventory( "Apple" );
			else if ( rand > 0.65 )
				itemEnt = player.GetInventory().CreateInInventory( "Pear" );
			else
				itemEnt = player.GetInventory().CreateInInventory( "Plum" );
			player.SetQuickBarEntityShortcut(itemEnt, 3);
		}
		
		itemClothing = player.FindAttachmentBySlotName( "Legs" );

		
		itemClothing = player.FindAttachmentBySlotName( "Feet" );
	}

	override PlayerBase CreateCharacter(PlayerIdentity identity, vector pos, ParamsReadContext ctx, string characterName){
		Entity playerEnt;
		playerEnt = GetGame().CreatePlayer(identity, characterName, pos, 0, "NONE");//Creates random player
		Class.CastTo(m_player, playerEnt);

		GetGame().SelectPlayer(identity, m_player);

		return m_player;
	}
};

enum Identity {
	ANY,
	NAME,
	STEAMID,
	PID
};

Mission CreateCustomMission(string path)
{
	return new CustomMission();
}