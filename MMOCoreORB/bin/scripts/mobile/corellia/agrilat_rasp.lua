agrilat_rasp = Creature:new {
	objectName = "@mob/creature_names:agrilat_plumed_rasp",
	socialGroup = "rasp",
	faction = "",
	level = 8,
	chanceHit = 0.27,
	damageMin = 90,
	damageMax = 110,
	baseXp = 187,
	baseHAM = 180,
	baseHAMmax = 220,
	armor = 0,
	resists = {0,10,0,0,0,110,0,-1,-1},
	meatType = "meat_avian",
	meatAmount = 20,
	hideType = "hide_leathery",
	hideAmount = 15,
	boneType = "bone_avian",
	boneAmount = 15,
	milk = 0,
	tamingChance = 0.25,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = NONE,
	optionsBitmask = AIENABLED,
	diet = HERBIVORE,

	templates = {"object/mobile/plumed_rasp_hue.iff"},
	hues = { 16, 17, 18, 19, 20, 21, 22, 23 },
	controlDeviceTemplate = "object/intangible/pet/plumed_rasp_hue.iff",
	scale = 1.05,
	lootGroups = {},
	weapons = {},
	conversationTemplate = "",
	attacks = {
	}
}

CreatureTemplates:addCreatureTemplate(agrilat_rasp, "agrilat_rasp")
