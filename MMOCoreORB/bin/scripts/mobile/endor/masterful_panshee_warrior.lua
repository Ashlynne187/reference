masterful_panshee_warrior = Creature:new {
	objectName = "@mob/creature_names:masterful_panshee_warrior",
	randomNameType = NAME_GENERIC,
	randomNameTag = true,
	socialGroup = "panshee_tribe",
	faction = "panshee_tribe",
	level = 42,
	chanceHit = 0.450000,
	damageMin = 355,
	damageMax = 420,
	baseXp = 4188,
	baseHAM = 9500,
	baseHAMmax = 11600,
	armor = 0,
	resists = {0,0,0,0,0,0,0,0,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0.000000,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = PACK + KILLER,
	diet = HERBIVORE,

	templates = {
		"object/mobile/dressed_ewok_m_09.iff",
		"object/mobile/dressed_ewok_m_10.iff"},
	lootGroups = {
		{
			groups = {
				{group = "ewok", chance = 4400000},
				{group = "wookiee_loot_common", chance = 3500000},
				{group = "panshee_loot", chance = 2100000}
			},
			lootChance = 1840000
		},
		{	
			groups = {
				{group = "ewok_trophy", chance = 10000000}
			},
			lootChance = 25000
		},
	},
	weapons = {"ewok_weapons"},
	attacks = merge(riflemanmaster,brawlermaster)
}

CreatureTemplates:addCreatureTemplate(masterful_panshee_warrior, "masterful_panshee_warrior")
