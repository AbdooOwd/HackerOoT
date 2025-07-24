#ifndef LOWDEN_SCENE_H
#define LOWDEN_SCENE_H

#include "ultra64.h"
#include "romfile.h"
#include "array_count.h"
#include "sequence.h"
#include "actor_profile.h"
#include "bgcheck.h"
#include "camera.h"
#include "cutscene.h"
#include "cutscene_commands.h"
#include "environment.h"
#include "z_math.h"
#include "object.h"
#include "ocarina.h"
#include "path.h"
#include "player.h"
#include "room.h"
#include "scene.h"

extern SceneCmd lowden_scene_header00[];
extern RomFile lowden_scene_roomList[];
extern u8 _lowden_room_0SegmentRomStart[];
extern u8 _lowden_room_0SegmentRomEnd[];
extern ActorEntry lowden_scene_header00_playerEntryList[];
extern Spawn lowden_scene_header00_entranceList[];
extern EnvLightSettings lowden_scene_header00_lightSettings[4];
extern WaterBox lowden_scene_waterBoxes[1];
extern SurfaceType lowden_scene_polygonTypes[1];
extern Vec3s lowden_scene_vertices[67];
extern CollisionPoly lowden_scene_polygons[110];
extern CollisionHeader lowden_scene_collisionHeader;
extern SceneCmd lowden_room_0_header00[];
extern s16 lowden_room_0_header00_objectList[];
extern Gfx lowden_room_0_shapeHeader_entry_0_opaque[];
extern Gfx lowden_room_0_shapeHeader_entry_0_transparent[];
extern u64 lowden_room_0_dl_groundGrass_Tex_rgba16_ci8[];
extern u64 lowden_room_0_dl_groundGrass_Tex_rgba16_pal_rgba16[];
extern u64 lowden_room_0_dl_naturalWalls_Tex_rgba16_rgba16[];
extern u64 lowden_room_0_dl_water0_Tex_rgba16_ci8[];
extern u64 lowden_room_0_dl_water0_Tex_rgba16_pal_rgba16[];
extern u64 lowden_room_0_dl_woodLogEnd_Tex_rgba16_ci8[];
extern u64 lowden_room_0_dl_woodLogEnd_Tex_rgba16_pal_rgba16[];
extern u64 lowden_room_0_dl_purewood_Tex_rgba16_ci8[];
extern u64 lowden_room_0_dl_purewood_Tex_rgba16_pal_rgba16[];
extern Vtx lowden_room_0_dl_Render_mesh_layer_Opaque_vtx_cull[8];
extern Vtx lowden_room_0_dl_Render_mesh_layer_Opaque_vtx_0[105];
extern Gfx lowden_room_0_dl_Render_mesh_layer_Opaque_tri_0[];
extern Vtx lowden_room_0_dl_Render_mesh_layer_Opaque_vtx_1[64];
extern Gfx lowden_room_0_dl_Render_mesh_layer_Opaque_tri_1[];
extern Vtx lowden_room_0_dl_lilPond_mesh_layer_Transparent_vtx_cull[8];
extern Vtx lowden_room_0_dl_lilPond_mesh_layer_Transparent_vtx_0[4];
extern Gfx lowden_room_0_dl_lilPond_mesh_layer_Transparent_tri_0[];
extern Vtx lowden_room_0_dl_woodLog_0_mesh_layer_Opaque_vtx_cull[8];
extern Vtx lowden_room_0_dl_woodLog_0_mesh_layer_Opaque_vtx_0[18];
extern Gfx lowden_room_0_dl_woodLog_0_mesh_layer_Opaque_tri_0[];
extern Vtx lowden_room_0_dl_woodLog_0_mesh_layer_Opaque_vtx_1[32];
extern Gfx lowden_room_0_dl_woodLog_0_mesh_layer_Opaque_tri_1[];
extern Vtx lowden_room_0_dl_woodLog_1_mesh_layer_Opaque_vtx_cull[8];
extern Vtx lowden_room_0_dl_woodLog_1_mesh_layer_Opaque_vtx_0[18];
extern Gfx lowden_room_0_dl_woodLog_1_mesh_layer_Opaque_tri_0[];
extern Vtx lowden_room_0_dl_woodLog_1_mesh_layer_Opaque_vtx_1[32];
extern Gfx lowden_room_0_dl_woodLog_1_mesh_layer_Opaque_tri_1[];
extern Vtx lowden_room_0_dl_woodLog_3_mesh_layer_Opaque_vtx_cull[8];
extern Vtx lowden_room_0_dl_woodLog_3_mesh_layer_Opaque_vtx_0[18];
extern Gfx lowden_room_0_dl_woodLog_3_mesh_layer_Opaque_tri_0[];
extern Vtx lowden_room_0_dl_woodLog_3_mesh_layer_Opaque_vtx_1[32];
extern Gfx lowden_room_0_dl_woodLog_3_mesh_layer_Opaque_tri_1[];
extern Vtx lowden_room_0_dl_woodLog_4_mesh_layer_Opaque_vtx_cull[8];
extern Vtx lowden_room_0_dl_woodLog_4_mesh_layer_Opaque_vtx_0[18];
extern Gfx lowden_room_0_dl_woodLog_4_mesh_layer_Opaque_tri_0[];
extern Vtx lowden_room_0_dl_woodLog_4_mesh_layer_Opaque_vtx_1[32];
extern Gfx lowden_room_0_dl_woodLog_4_mesh_layer_Opaque_tri_1[];
extern Gfx mat_lowden_room_0_dl_grass_tex_layerOpaque[];
extern Gfx mat_revert_lowden_room_0_dl_grass_tex_layerOpaque[];
extern Gfx mat_lowden_room_0_dl_naturalWalls_tex_layerOpaque[];
extern Gfx mat_revert_lowden_room_0_dl_naturalWalls_tex_layerOpaque[];
extern Gfx mat_lowden_room_0_dl_water_mat_layerTransparent[];
extern Gfx mat_revert_lowden_room_0_dl_water_mat_layerTransparent[];
extern Gfx mat_lowden_room_0_dl_woodLogEnd_tex_layerOpaque[];
extern Gfx mat_revert_lowden_room_0_dl_woodLogEnd_tex_layerOpaque[];
extern Gfx mat_lowden_room_0_dl_woodLog_tex_layerOpaque[];
extern Gfx mat_revert_lowden_room_0_dl_woodLog_tex_layerOpaque[];
extern Gfx lowden_room_0_dl_Render_mesh_layer_Opaque[];
extern Gfx lowden_room_0_dl_lilPond_mesh_layer_Transparent[];
extern Gfx lowden_room_0_dl_woodLog_0_mesh_layer_Opaque[];
extern Gfx lowden_room_0_dl_woodLog_1_mesh_layer_Opaque[];
extern Gfx lowden_room_0_dl_woodLog_3_mesh_layer_Opaque[];
extern Gfx lowden_room_0_dl_woodLog_4_mesh_layer_Opaque[];
extern RoomShapeNormal lowden_room_0_shapeHeader;
extern RoomShapeDListsEntry lowden_room_0_shapeDListsEntry[1];

#endif
