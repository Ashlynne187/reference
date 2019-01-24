bantha_ivory_projectile = {
	minimumLevel = 0,
	maximumLevel = -1,
	customObjectName = "Smuggled Bantha Ivory",
	directObjectTemplate = "object/tangible/tarkin_custom/statted/projectile_feed_mechanism_enhancement_bantha.iff",
	craftingValues = {
		{"mindamage",54,100},
		{"maxdamage",54,100},
		{"useCount",1,6,0},
		{"attackspeed",0,0,0,0},
		{"woundchance",0,0,0,0},
		{"hitpoints",0,0,0,0},
		{"zerorangemod",0,0,0,0},
		{"maxrangemod",0,0,0,0},
		{"midrangemod",0,0,0,0},
		{"attackhealthcost",0,0,0,0},
		{"attackactioncost",0,0,0,0},
		{"attackmindcost",0,0,0,0},
	},
	customizationStringNames = {},
	customizationValues = {}
}

addLootItemTemplate("bantha_ivory_projectile", bantha_ivory_projectile)
