generic_businessman_missions =
	{
		{
			missionType = "escort",
			primarySpawns =
			{
				{ npcTemplate = "businessman_target", planetName = "generic", npcName = "random" }
			},
			secondarySpawns = {},
			itemSpawns = {},
			rewards =
			{
				{ rewardType = "item", itemTemplate = "object/tangible/loot/misc/inkpen_engraved_s01.iff" }
			}
		},
		{
			missionType = "escort",
			primarySpawns =
			{
				{ npcTemplate = "businessman_target", planetName = "generic", npcName = "random" }
			},
			secondarySpawns = {},
			itemSpawns = {},
			rewards =
			{
				{ rewardType = "item", itemTemplate = "object/tangible/loot/misc/ticket_expired.iff" }
			}
		},
		{
			missionType = "confiscate",
			primarySpawns =
			{
				{ npcTemplate = "businessman_target_thief_briefcase", planetName = "generic", npcName = "random" }
			},
			secondarySpawns = {},
			itemSpawns =
			{
				{ itemTemplate = "object/tangible/loot/misc/briefcase_s01.iff", itemName = "A Locked Briefcase" }
			},
			rewards =
			{
				{ rewardType = "item", itemTemplate = "object/tangible/loot/misc/inkpen_engraved_s01.iff" }
			}
		},
		{
			missionType = "confiscate",
			primarySpawns =
			{
				{ npcTemplate = "businessman_target_thief_award", planetName = "generic", npcName = "random" }
			},
			secondarySpawns = {},
			itemSpawns =
			{
				{ itemTemplate = "object/tangible/loot/misc/sports_award_s01.iff", itemName = "An Award for Sporting Excellence" }
			},
			rewards =
			{
				{ rewardType = "item", itemTemplate = "object/tangible/loot/misc/ticket_expired.iff" }
			}
		},
		{
			missionType = "deliver",
			primarySpawns =
			{
				{ npcTemplate = "businessman_target", planetName = "generic", npcName = "random" }
			},
			secondarySpawns = {},
			itemSpawns =
			{
				{ itemTemplate = "object/tangible/loot/misc/briefcase_s01.iff", itemName = "A Locked Briefcase" }
			},
			rewards =
			{
				{ rewardType = "item", itemTemplate = "object/tangible/loot/misc/inkpen_engraved_s01.iff" }
			}
		},
		{
			missionType = "deliver",
			primarySpawns =
			{
				{ npcTemplate = "businessman_target", planetName = "generic", npcName = "random" }
			},
			secondarySpawns = {},
			itemSpawns =
			{
				{ itemTemplate = "object/tangible/loot/misc/sports_award_s01.iff", itemName = "An Award for Sporting Excellence" }
			},
			rewards =
			{
				{ rewardType = "item", itemTemplate = "object/tangible/loot/misc/ticket_expired.iff" }
			}
		}
	}

npcMapGenericBusinessman =
	{
		{
			npcNumber = 1,
			stfFile = "@random_quest/businessman",
			missions = generic_businessman_missions
		}
	}

GenericBusinessman = ThemeParkLogic:new {
	numberOfActs = 1,
	genericGiver = true,
	npcMap = npcMapGenericBusinessman,
	className = "GenericBusinessman",
	screenPlayState = "generic_businessman_quest",
	distance = 1000,
}

registerScreenPlay("GenericBusinessman", true)

generic_businessman_mission_giver_conv_handler = mission_giver_conv_handler:new {
	themePark = GenericBusinessman
}
generic_businessman_mission_target_conv_handler = mission_target_conv_handler:new {
	themePark = GenericBusinessman
}