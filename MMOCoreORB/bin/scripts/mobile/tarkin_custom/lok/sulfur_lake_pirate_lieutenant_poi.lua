sulfur_lake_pirate_lieutenant_poi = Creature:new {
	objectName = "@mob/creature_names:slp_privateer",
	randomNameType = NAME_GENERIC,
	randomNameTag = true,
	socialGroup = "pirate",
	faction = "",
	level = 121,
	chanceHit = 4,
	damageMin = 445,
	damageMax = 700,
	baseXp = 11390,
	baseHAM = 45000,
	baseHAMmax = 50000,
	armor = 2,
	resists = {55,55,70,60,30,30,95,40,55},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = AGGRESSIVE + ATTACKABLE + ENEMY,
	creatureBitmask = PACK + KILLER,
	optionsBitmask = AIENABLED,
	diet = HERBIVORE,

	templates = { "object/mobile/dressed_criminal_pirate_human_male_01.iff" },
	lootGroups = {
		{
			groups = {
				{group = "nyms_pirate_poi_common", chance = 2000000},
				{group = "generic_consoles", chance = 900000},
				{group = "generic_tech", chance = 900000},
				{group = "pistols", chance = 900000},
				{group = "rifles", chance = 900000},
				{group = "carbines", chance = 900000},
				{group = "heavy_weapons", chance = 500000},
				{group = "heavy_weapons_rifle", chance = 500000},
				{group = "skill_buffs", chance = 600000},
				{group = "printer_parts", chance = 1000000},
				{group = "tailor_components", chance = 900000}
			},
			lootChance = 10000000
		},
		{	
			groups = {
				{group = "clothing_attachments", chance = 5000000},
				{group = "armor_attachments", chance = 5000000}	
			},
			lootChance = 300000
		},
		{	
			groups = {
				{group = "nyms_pirate_poi_rare", chance = 10000000},	
			},
			lootChance = 300000
		},		
	},
	weapons = {"ranged_weapons"},
	conversationTemplate = "",
	reactionStf = "@npc_reaction/slang",
	attacks = merge(brawlermaster,marksmanmaster,riflemanmaster,fencermaster)
}

CreatureTemplates:addCreatureTemplate(sulfur_lake_pirate_lieutenant_poi, "sulfur_lake_pirate_lieutenant_poi")
