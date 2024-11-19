


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