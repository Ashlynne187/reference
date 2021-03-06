object_draft_schematic_item_tarkin_custom_holoscroll = object_draft_schematic_item_tarkin_custom_shared_holoscroll:new {

	templateType = DRAFTSCHEMATIC,

	customObjectName = "Holoscroll",

	craftingToolTab = 512, -- (See DraftSchematicObjectTemplate.h)
	complexity = 12,
	size = 2,
	factoryCrateSize = 10,

	xpType = "crafting_structure_general",
	xp = 140,

	assemblySkill = "structure_assembly",
	experimentingSkill = "structure_experimentation",
	customizationSkill = "structure_customization",

	customizationOptions = {},
	customizationStringNames = {},
	customizationDefaults = {},

	ingredientTemplateNames = {"craft_furniture_ingredients_n", "craft_furniture_ingredients_n"},
	ingredientTitleNames = {"projector", "frame"},
	ingredientSlotType = {0, 0},
	resourceTypes = {"copper", "aluminum"},
	resourceQuantities = {10, 4},
	contribution = {100, 100},

	targetTemplate = "object/tangible/tarkin_custom/decorative/holoscroll.iff",

	additionalTemplates = {}
}
ObjectTemplates:addTemplate(object_draft_schematic_item_tarkin_custom_holoscroll, "object/draft_schematic/item/tarkin_custom/holoscroll.iff")
