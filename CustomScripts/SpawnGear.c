
////////////////////////////////////////////////////
////////////////////////////////////////////////////

	bool AttachRandomLoadout(PlayerBase player){
		if (HATS.Count() > 0)			{	string hat 			= 	GetRandomItem(HATS); 			player.GetInventory().CreateInInventory(hat); 			}
		if (FACECOVERS.Count() > 0)		{	string faceCover 	= 	GetRandomItem(FACECOVERS);  	player.GetInventory().CreateInInventory(faceCover); 	}
		if (COATS.Count() > 0) 			{	string coat 		= 	GetRandomItem(COATS);			player.GetInventory().CreateInInventory(coat);			}
		if (LIGHTBAGS.Count() > 0)  	{	string lightBag 	= 	GetRandomItem(LIGHTBAGS);		player.GetInventory().CreateInInventory(lightBag);		}
		if (HIPBAG.Count() > 0)			{	string hipBag 		= 	GetRandomItem(HIPBAG);			player.GetInventory().CreateInInventory(hipBag);		}
		if (PANTS.Count() > 0) 			{	string pants 		=	GetRandomItem(PANTS);			player.GetInventory().CreateInInventory(pants);			}
		if (SHOES.Count() > 0)   		{	string shoes 		=	GetRandomItem(SHOES);			player.GetInventory().CreateInInventory(shoes);			}
		if (GLOVES.Count() > 0) 		{	string gloves 		=	GetRandomItem(GLOVES);			player.GetInventory().CreateInInventory(gloves);		}
		foreach (string accessoryItem : ACCESSORIES)  {
			player.GetInventory().CreateInInventory(accessoryItem);
		}
		foreach (string medItem : MEDS) {
			player.GetInventory().CreateInInventory(medItem);
		}
		if (FOODS.Count() > 0) {
										 string food1 			=	GetRandomItem(FOODS);			player.GetInventory().CreateInInventory(food1);
										 string food2 			=	GetRandomItem(FOODS);			player.GetInventory().CreateInInventory(food2);
		}
		if (MELEE_WEAPONS.Count() > 0) 	{string meleeWeapon 	=	GetRandomItem(MELEE_WEAPONS);	player.GetInventory().CreateInInventory(meleeWeapon);	}
		if (BLADES.Count() > 0)  		{string blade 			=	GetRandomItem(BLADES);			player.GetInventory().CreateInInventory(blade);			}
		// Ajoute un fusil et ses munitions
		if (RIFLES.Count() > 0){
			string rifle = GetRandomItem(RIFLES);
			string rifleAmmoBox = GetAmmoBoxForWeapon(rifle);
			EntityAI rifleEntity = player.GetInventory().CreateInInventory(rifle);
			if (rifleEntity){
				player.SetQuickBarEntityShortcut(rifleEntity, 0);
			}
			if (rifleAmmoBox != ""){
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

	string GetRandomItem(array<string> items){
		int index = Math.RandomInt(0, items.Count());
		return items.Get(index);
	}

	// Fonction pour ajouter des attachements spécifiques aux casques
	void AttachItemsToHelmet(PlayerBase player, vector pos, string helmet, string attachment1, string battery1, string attachment2, string battery2){
		EntityAI item = player.SpawnEntityOnGroundPos(helmet, pos);
		EntityAI subItem = item.GetInventory().CreateAttachment(attachment1);
		subItem.GetInventory().CreateAttachment(battery1);
		subItem = item.GetInventory().CreateAttachment(attachment2);
		subItem.GetInventory().CreateAttachment(battery2);
	}

	// Fonction pour attacher des objets spécifiques aux vestes
	void AttachItemsToVest(PlayerBase player, vector pos, string vest, string attachment){
		EntityAI item = player.SpawnEntityOnGroundPos(vest, pos);
		item.GetInventory().CreateAttachment(attachment);
	}

	// Fonction pour attacher des objets spécifiques aux ceintures
	void AttachItemsToBelt(PlayerBase player, vector pos, string belt, string attachment1, string attachment2, string attachment3, string knife) {
		EntityAI item = player.SpawnEntityOnGroundPos(belt, pos);
		item.GetInventory().CreateAttachment(attachment1);
		item.GetInventory().CreateAttachment(attachment2);
		EntityAI subItem = item.GetInventory().CreateAttachment(attachment3);
		subItem.GetInventory().CreateAttachment(knife);
	}

	// Fonction pour attacher des objets spécifiques aux bottes
	void AttachItemsToBoots(PlayerBase player, vector pos, string boots, string knife){
		EntityAI item = player.SpawnEntityOnGroundPos(boots, pos);
		item.GetInventory().CreateAttachment(knife);
	}

	void ClearAllPlayerTouchedLootO(){
		// Crée une liste pour stocker tous les objets dans le monde
		ref array<Object> objects = new array<Object>;
		GetGame().GetObjectsAtPosition3D("0 0 0", 100000, objects, null);
		// Parcours de tous les objets trouvés
		foreach (Object obj : objects)  {
			// Vérifie que l'objet n'est ni un joueur, ni un véhicule, ni une base de construction
			if (obj && !obj.IsInherited(PlayerBase) && !obj.IsInherited(CarScript) && !obj.IsInherited(BaseBuildingBase))  {
				// Cast de l'objet en ItemBase pour vérifier s'il a été manipulé par un joueur
				ItemBase item = ItemBase.Cast(obj);
				if (item) {
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

	// Fonction pour faire apparaître des objets
	void SpawnItems(PlayerBase player, vector pos, string[] items){
		foreach (string itemName : items){
			player.SpawnEntityOnGroundPos(itemName, pos);
		}
	}

	// Fonction pour faire apparaître l'équipement
	bool SpawnGear(PlayerBase player, string type){
		type.ToLower();
		const string helpMsg = "Available types: random, mil, ghillie, medic, nv, svd, m4, akm, fx45, 12ga , 308 tundra, bk clearn";
		vector pos = player.GetPosition() + "1 1 1";
		// DONT spawn a mag as attachment, is buggy ingame, spawn mags on ground instead
		EntityAI item;
		EntityAI subItem;
		switch (type){
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
				//	SpawnItems(player, pos, MIL_GEAR);
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