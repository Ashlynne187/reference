kliknik_queen = Creature:new {
	objectName = "@mob/creature_names:kliknik_queen",
	socialGroup = "kliknik",
	faction = "",
	level = 37,
	chanceHit = 0.41,
	damageMin = 320,
	damageMax = 350,
	baseXp = 3642,
	baseHAM = 8800,
	baseHAMmax = 10800,
	armor = 0,
	resists = {160,135,25,135,135,-1,-1,-1,-1},
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
	scale = 1.25,
	lootGroups = {
		{
			groups = {
				{group = "kliknik_common", chance = 10000000}
			},
			lootChance = 1740000
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
		{"mildpoison",""}
	}
}

CreatureTemplates:addCreatureTemplate(kliknik_queen, "kliknik_queen")
