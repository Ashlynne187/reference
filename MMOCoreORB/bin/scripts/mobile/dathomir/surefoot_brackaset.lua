surefoot_brackaset = Creature:new {
	objectName = "@mob/creature_names:surefoot_brackaset",
	socialGroup = "brackaset",
	faction = "",
	level = 46,
	chanceHit = 0.44,
	damageMin = 340,
	damageMax = 390,
	baseXp = 4461,
	baseHAM = 10000,
	baseHAMmax = 12200,
	armor = 0,
	resists = {160,155,160,30,30,-1,-1,180,-1},
	meatType = "meat_wild",
	meatAmount = 230,
	hideType = "hide_leathery",
	hideAmount = 130,
	boneType = "bone_mammal",
	boneAmount = 90,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = PACK + HERD,
	optionsBitmask = AIENABLED,
	diet = CARNIVORE,

	templates = {"object/mobile/brackaset_hue.iff"},
	hues = { 16, 17, 18, 19, 20, 21, 22, 23, 32, 33, 34, 35, 36, 37, 38, 39, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 },
	scale = 1.2,
	lootGroups = {
		 {
	        groups = {
				{group = "brackaset_common", chance = 10000000}
			},
			lootChance = 1920000
		}
	},
	weapons = {},
	conversationTemplate = "",
	attacks = {
		{"stunattack",""},
		{"posturedownattack",""}
	}
}

CreatureTemplates:addCreatureTemplate(surefoot_brackaset, "surefoot_brackaset")
