hermit_spider = Creature:new {
	objectName = "@mob/creature_names:hermit_spider",
	socialGroup = "spider",
	faction = "",
	level = 7,
	chanceHit = 0.26,
	damageMin = 55,
	damageMax = 65,
	baseXp = 147,
	baseHAM = 270,
	baseHAMmax = 330,
	armor = 0,
	resists = {0,0,110,0,0,0,0,-1,-1},
	meatType = "meat_insect",
	meatAmount = 60,
	hideType = "hide_scaley",
	hideAmount = 60,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0.25,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = STALKER,
	optionsBitmask = AIENABLED,
	diet = CARNIVORE,

	templates = {"object/mobile/hermit_spider_hue.iff"},
	hues = { 0, 1, 2, 3, 4, 5, 6, 7 },
	controlDeviceTemplate = "object/intangible/pet/hermit_spider_hue.iff",
	lootGroups = {},
	weapons = {},
	conversationTemplate = "",
	attacks = {
	}
}

CreatureTemplates:addCreatureTemplate(hermit_spider, "hermit_spider")
