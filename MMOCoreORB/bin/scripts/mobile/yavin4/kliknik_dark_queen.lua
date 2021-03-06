kliknik_dark_queen = Creature:new {
	objectName = "@mob/creature_names:kliknik_dark_queen",
	socialGroup = "kliknik",
	faction = "",
	level = 40,
	chanceHit = 0.44,
	damageMin = 345,
	damageMax = 400,
	baseXp = 3915,
	baseHAM = 9300,
	baseHAMmax = 11300,
	armor = 0,
	resists = {145,145,30,135,135,-1,-1,-1,-1},
	meatType = "meat_carnivore",
	meatAmount = 35,
	hideType = "hide_scaley",
	hideAmount = 60,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = AGGRESSIVE + ATTACKABLE + ENEMY,
	creatureBitmask = PACK,
	optionsBitmask = AIENABLED,
	diet = CARNIVORE,

	templates = {"object/mobile/kliknik_queen.iff"},
	hues = { 24, 25, 26, 27, 28, 29, 30, 31 },
	scale = 1.2,
	lootGroups = {
		{
			groups = {
				{group = "kliknik_common", chance = 10000000}
			},
			lootChance = 1800000
		},
		{	
			groups = {
				{group = "kliknik_trophy", chance = 10000000}
			},
			lootChance = 25000
		},
	},
	weapons = {"creature_spit_small_yellow"},
	conversationTemplate = "",
	attacks = {
		{"dizzyattack",""},
		{"mediumpoison",""}
	}
}

CreatureTemplates:addCreatureTemplate(kliknik_dark_queen, "kliknik_dark_queen")
