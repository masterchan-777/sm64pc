#include "src/game/envfx_snow.h"
#include "geo_header.h"

const GeoLayout piranha_plant_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 155, 200),
		GEO_OPEN_NODE(),
			GEO_SCALE(0, 16384),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(1, 0, 14, 3, NULL),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(1, 0, 0, 0, piranha_plant_000_offset_mesh),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(1, 46, 0, 0, piranha_plant_000_offset_001_mesh),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(1, piranha_plant_000_offset_002_skinned),
							GEO_ANIMATED_PART(1, 154, 0, 0, piranha_plant_000_offset_002_mesh),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(1, piranha_plant_000_offset_003_skinned),
								GEO_ANIMATED_PART(1, 153, 0, 0, piranha_plant_000_offset_003_mesh),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(1, 236, 42, 0, NULL),
									GEO_OPEN_NODE(),
										GEO_ANIMATED_PART(1, 0, 0, 0, piranha_plant_000_offset_005_mesh),
										GEO_OPEN_NODE(),
											GEO_DISPLAY_LIST(4, piranha_plant_000_displaylist_skinned),
											GEO_DISPLAY_LIST(4, piranha_plant_000_displaylist_mesh),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
									GEO_ANIMATED_PART(1, 217, -2, 0, NULL),
									GEO_OPEN_NODE(),
										GEO_ANIMATED_PART(1, 0, 0, 0, piranha_plant_000_offset_006_mesh),
										GEO_OPEN_NODE(),
											GEO_DISPLAY_LIST(4, piranha_plant_000_displaylist_001_mesh),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
							GEO_ANIMATED_PART(1, 49, 0, -34, NULL),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(4, 0, 0, 0, piranha_plant_000_offset_007_mesh),
							GEO_CLOSE_NODE(),
							GEO_ANIMATED_PART(1, 49, 0, 37, NULL),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(4, 0, 0, 0, piranha_plant_000_offset_008_mesh),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(0, piranha_plant_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, piranha_plant_material_revert_render_settings),
		GEO_DISPLAY_LIST(2, piranha_plant_material_revert_render_settings),
		GEO_DISPLAY_LIST(3, piranha_plant_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, piranha_plant_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, piranha_plant_material_revert_render_settings),
		GEO_DISPLAY_LIST(6, piranha_plant_material_revert_render_settings),
		GEO_DISPLAY_LIST(7, piranha_plant_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
