roba = Creature:new {
	objectName = "@mob/creature_names:roba",
	socialGroup = "roba",
	faction = "",
	level = 26,
	chanceHit = 0.36,
	damageMin = 240,
	damageMax = 250,
	baseXp = 2637,
	baseHAM = 7200,
	baseHAMmax = 8800,
	armor = 0,
	resists = {120,120,15,160,-1,160,-1,-1,-1},
	meatType = "meat_carnivore",
	meatAmount = 65,
	hideType = "hide_leathery",
	hideAmount = 35,
	boneType = "bone_mammal",
	boneAmount = 30,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = PACK,
	optionsBitmask = AIENABLED,
	diet = CARNIVORE,

	templates = {"object/mobile/roba_hue.iff"},
	hues = { 16, 17, 18, 19, 20, 21, 22, 23 },
	lootGroups = {},
	weapons = {},
	conversationTemplate = "",
	attacks = {
		{"blindattack",""},
		{"stunattack",""}
	}
}

CreatureTemplates:addCreatureTemplate(roba, "roba")
