#include "testWorld0_scene.h"

/**
 * Header Child Day (Default)
*/
#define LENGTH_TESTWORLD0_ROOM_0_HEADER00_OBJECTLIST 1
SceneCmd testWorld0_room_0_header00[] = {
    SCENE_CMD_ROOM_SHAPE(&testWorld0_room_0_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 10),
    SCENE_CMD_END(),
};


RoomShapeNormal testWorld0_room_0_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(testWorld0_room_0_shapeDListsEntry),
    testWorld0_room_0_shapeDListsEntry,
    testWorld0_room_0_shapeDListsEntry + ARRAY_COUNT(testWorld0_room_0_shapeDListsEntry)
};

RoomShapeDListsEntry testWorld0_room_0_shapeDListsEntry[1] = {
    { testWorld0_room_0_shapeHeader_entry_0_opaque, NULL }
};

Gfx testWorld0_room_0_shapeHeader_entry_0_opaque[] = {
	gsSPDisplayList(testWorld0_room_0_dl_el_9a3a_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

Vtx testWorld0_room_0_dl_el_9a3a_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-1200, -120, 700}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1200, 280, 700}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1200, 280, -300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1200, -120, -300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {600, -120, 700}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {600, 280, 700}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {600, 280, -300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {600, -120, -300}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx testWorld0_room_0_dl_el_9a3a_mesh_layer_Opaque_vtx_0[29] = {
	{{ {-300, -120, 300}, 0, {-16, 1008}, {0, 127, 0, 255} }},
	{{ {300, -120, 300}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {300, -120, -300}, 0, {1008, -16}, {0, 127, 0, 255} }},
	{{ {-300, -120, -300}, 0, {-16, -16}, {0, 127, 0, 255} }},
	{{ {-1200, -120, -300}, 0, {-16, -16}, {0, 127, 0, 255} }},
	{{ {-1200, -120, 300}, 0, {-16, 1008}, {0, 127, 0, 255} }},
	{{ {300, -120, 300}, 0, {1008, 1008}, {0, 90, 166, 255} }},
	{{ {-300, -120, 300}, 0, {-16, 1008}, {0, 90, 166, 255} }},
	{{ {-300, 80, 500}, 0, {-16, 1008}, {0, 90, 166, 255} }},
	{{ {300, 80, 500}, 0, {1008, 1008}, {0, 90, 166, 255} }},
	{{ {300, 80, 500}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {-300, 80, 500}, 0, {-16, 1008}, {0, 127, 0, 255} }},
	{{ {-300, 80, 700}, 0, {-16, 1008}, {0, 127, 0, 255} }},
	{{ {300, 80, 700}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {600, 80, 700}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {600, 80, 500}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {300, 80, 500}, 0, {1008, 1008}, {0, 90, 90, 255} }},
	{{ {600, 80, 500}, 0, {1008, 1008}, {0, 90, 90, 255} }},
	{{ {600, 280, 300}, 0, {1008, 1008}, {0, 90, 90, 255} }},
	{{ {300, 280, 300}, 0, {1008, 1008}, {0, 90, 90, 255} }},
	{{ {300, 280, 300}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {600, 280, 300}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {600, 280, -300}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {300, 280, -300}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {300, -120, -300}, 0, {1008, -16}, {129, 0, 0, 255} }},
	{{ {300, -120, 300}, 0, {1008, 1008}, {129, 0, 0, 255} }},
	{{ {300, 80, 500}, 0, {1008, 1008}, {129, 0, 0, 255} }},
	{{ {300, 280, -300}, 0, {1008, 1008}, {129, 0, 0, 255} }},
	{{ {300, 280, 300}, 0, {1008, 1008}, {129, 0, 0, 255} }},
};

Gfx testWorld0_room_0_dl_el_9a3a_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(testWorld0_room_0_dl_el_9a3a_mesh_layer_Opaque_vtx_0 + 0, 29, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
	gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
	gsSP2Triangles(10, 13, 14, 0, 10, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
	gsSP2Triangles(24, 25, 26, 0, 26, 27, 24, 0),
	gsSP1Triangle(26, 28, 27, 0),
	gsSPEndDisplayList(),
};

Gfx mat_testWorld0_room_0_dl_floor_mat_layerOpaque[] = {
	gsSPLoadGeometryMode(G_FOG | G_SHADING_SMOOTH | G_ZBUFFER | G_SHADE | G_LIGHTING | G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_TT_NONE | G_TP_PERSP | G_CD_MAGICSQ | G_CYC_2CYCLE | G_PM_NPRIMITIVE | G_TD_CLAMP | G_TL_TILE | G_TC_FILT | G_CK_NONE | G_TF_BILERP),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2 | G_ZS_PIXEL | G_AC_NONE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsSPEndDisplayList(),
};

Gfx mat_revert_testWorld0_room_0_dl_floor_mat_layerOpaque[] = {
	gsDPPipeSync(),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_RM_AA_ZB_OPA_SURF | G_RM_AA_ZB_OPA_SURF2 | G_ZS_PIXEL | G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx testWorld0_room_0_dl_el_9a3a_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(testWorld0_room_0_dl_el_9a3a_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_testWorld0_room_0_dl_floor_mat_layerOpaque),
	gsSPDisplayList(testWorld0_room_0_dl_el_9a3a_mesh_layer_Opaque_tri_0),
	gsSPDisplayList(mat_revert_testWorld0_room_0_dl_floor_mat_layerOpaque),
	gsSPEndDisplayList(),
};

