object_tangible_borrie_wall_sd_mainwall = object_tangible_borrie_wall_shared_sd_mainwall:new {

	numberExperimentalProperties = {1, 1, 1, 2},
	experimentalProperties = {"XX", "XX", "XX", "DR", "OQ"},
	experimentalWeights = {1, 1, 1, 1, 1},
	experimentalGroupTitles = {"null", "null", "null", "exp_quality"},
	experimentalSubGroupTitles = {"null", "null", "hitpoints", "quality"},
	experimentalMin = {0, 0, 1000, 1},
	experimentalMax = {0, 0, 1000, 100},
	experimentalPrecision = {0, 0, 0, 0},
	experimentalCombineType = {0, 0, 4, 1},

}
ObjectTemplates:addTemplate(object_tangible_borrie_wall_sd_mainwall, "object/tangible/borrie/wall/sd_mainwall.iff")
