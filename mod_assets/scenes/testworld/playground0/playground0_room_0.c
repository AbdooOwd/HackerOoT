#include "playground0_scene.h"

/**
 * Header Child Day (Default)
*/
SceneCmd playground0_room_0_header00[] = {
    SCENE_CMD_ROOM_SHAPE(&playground0_room_0_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 10),
    SCENE_CMD_END(),
};

RoomShapeNormal playground0_room_0_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(playground0_room_0_shapeDListsEntry),
    playground0_room_0_shapeDListsEntry,
    playground0_room_0_shapeDListsEntry + ARRAY_COUNT(playground0_room_0_shapeDListsEntry)
};

RoomShapeDListsEntry playground0_room_0_shapeDListsEntry[1] = {
    { playground0_room_0_shapeHeader_entry_0_opaque, NULL }
};

Gfx playground0_room_0_shapeHeader_entry_0_opaque[] = {
	gsSPDisplayList(playground0_room_0_dl_Floor_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

Vtx playground0_room_0_dl_Floor_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-300, -120, 300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-300, -120, 300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-300, -120, -300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-300, -120, -300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {300, -120, 300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {300, -120, 300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {300, -120, -300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {300, -120, -300}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx playground0_room_0_dl_Floor_mesh_layer_Opaque_vtx_0[4] = {
	{{ {-300, -120, 300}, 0, {-16, 1008}, {0, 127, 0, 255} }},
	{{ {300, -120, 300}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {300, -120, -300}, 0, {1008, -16}, {0, 127, 0, 255} }},
	{{ {-300, -120, -300}, 0, {-16, -16}, {0, 127, 0, 255} }},
};

Gfx playground0_room_0_dl_Floor_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(playground0_room_0_dl_Floor_mesh_layer_Opaque_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Gfx mat_playground0_room_0_dl_floor_mat_layerOpaque[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_LIGHTING | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_TF_BILERP | G_TT_NONE | G_CK_NONE | G_TP_PERSP | G_PM_NPRIMITIVE | G_CYC_2CYCLE | G_TD_CLAMP | G_TC_FILT | G_TL_TILE | G_CD_MAGICSQ | G_AD_NOISE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_RM_AA_ZB_OPA_SURF2 | G_RM_FOG_SHADE_A | G_AC_NONE | G_ZS_PIXEL),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsSPEndDisplayList(),
};

Gfx mat_revert_playground0_room_0_dl_floor_mat_layerOpaque[] = {
	gsDPPipeSync(),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_RM_AA_ZB_OPA_SURF2 | G_ZS_PIXEL | G_AC_NONE | G_RM_AA_ZB_OPA_SURF),
	gsSPEndDisplayList(),
};

Gfx playground0_room_0_dl_Floor_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(playground0_room_0_dl_Floor_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_playground0_room_0_dl_floor_mat_layerOpaque),
	gsSPDisplayList(playground0_room_0_dl_Floor_mesh_layer_Opaque_tri_0),
	gsSPDisplayList(mat_revert_playground0_room_0_dl_floor_mat_layerOpaque),
	gsSPEndDisplayList(),
};

