singing_mountain_clan_councilwoman = Creature:new {
	objectName = "@mob/creature_names:singing_mtn_clan_councilwoman",
	randomNameType = NAME_GENERIC,
	randomNameTag = true,
	socialGroup = "mtn_clan",
	faction = "mtn_clan",
	level = 253,
	chanceHit = 23.5,
	damageMin = 1395,
	damageMax = 2500,
	baseXp = 24180,
	baseHAM = 261000,
	baseHAMmax = 320000,
	armor = 3,
	resists = {100,35,35,100,100,100,100,100,-1},
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
	creatureBitmask = PACK + KILLER + HEALER,
	optionsBitmask = AIENABLED,
	diet = HERBIVORE,

	templates = {"object/mobile/dressed_dathomir_sing_mt_clan_councilwoman.iff"},
	lootGroups = {
		{
			groups = {
				{group = "junk", chance = 1500000},
                		{group = "power_crystals", chance = 500000},
             		  	{group = "color_crystals", chance = 500000},
                		{group = "armor_attachments", chance = 600000},
                		{group = "clothing_attachments", chance = 600000},
                		{group = "melee_weapons", chance = 900000},
                		{group = "rifles", chance = 900000},
                		{group = "pistols", chance = 900000},
                		{group = "carbines", chance = 900000},
                		{group = "smc_clothing", chance = 2000000},
                		{group = "smc_armor", chance = 550000},
                		{group = "smc_rare", chance = 100000},
                		{group = "deed_voucher", chance = 50000}                                           
            		}
         	}
	},
	weapons = {"mixed_force_weapons"},
	conversationTemplate = "",
	attacks = merge(brawlermaster,pikemanmaster,forcepowermaster)
}

CreatureTemplates:addCreatureTemplate(singing_mountain_clan_councilwoman, "singing_mountain_clan_councilwoman")
