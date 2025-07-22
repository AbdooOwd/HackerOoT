#ifndef PLAYGROUND0_SCENE_H
#define PLAYGROUND0_SCENE_H

#include "ultra64.h"
#include "romfile.h"
#include "array_count.h"
#include "sequence.h"
#include "z64actor_profile.h"
#include "z64bgcheck.h"
#include "z64camera.h"
#include "z64cutscene.h"
#include "z64cutscene_commands.h"
#include "z64environment.h"
#include "z64math.h"
#include "z64object.h"
#include "z64ocarina.h"
#include "z64path.h"
#include "z64player.h"
#include "z64room.h"
#include "z64scene.h"

extern SceneCmd playground0_scene_header00[];
extern RomFile playground0_scene_roomList[];
extern u8 _playground0_room_0SegmentRomStart[];
extern u8 _playground0_room_0SegmentRomEnd[];
extern ActorEntry playground0_scene_header00_playerEntryList[];
extern Spawn playground0_scene_header00_entranceList[];
extern s16 playground0_scene_header00_exitList[1];
extern EnvLightSettings playground0_scene_header00_lightSettings[4];
extern SurfaceType playground0_scene_polygonTypes[2];
extern Vec3s playground0_scene_vertices[26];
extern CollisionPoly playground0_scene_polygons[48];
extern CollisionHeader playground0_scene_collisionHeader;
extern SceneCmd playground0_room_0_header00[];
extern ActorEntry playground0_room_0_header00_actorList[];
extern Gfx playground0_room_0_shapeHeader_entry_0_opaque[];
extern u64 playground0_room_0_dl_mahouya_room_0_03000080_RoomShapeNormal_0300008C_DListsEntries_03006548_DL_03000540_DL_00009A20_Tex_rgba16_ci8[];
extern u64 playground0_room_0_dl_mahouya_room_0_03000080_RoomShapeNormal_0300008C_DListsEntries_03006548_DL_03000540_DL_00009A20_Tex_rgba16_pal_rgba16[];
extern u64 playground0_room_0_dl_tokinoma_room_0_03000100_RoomShapeNormal_0300010C_DListsEntries_03008128_DL_03006F80_DL_000141D8_Tex_rgba16_ci8[];
extern u64 playground0_room_0_dl_tokinoma_room_0_03000100_RoomShapeNormal_0300010C_DListsEntries_03008128_DL_03006F80_DL_000141D8_Tex_rgba16_pal_rgba16[];
extern Vtx playground0_room_0_dl_Floor_mesh_layer_Opaque_vtx_cull[8];
extern Vtx playground0_room_0_dl_Floor_mesh_layer_Opaque_vtx_0[4];
extern Gfx playground0_room_0_dl_Floor_mesh_layer_Opaque_tri_0[];
extern Vtx playground0_room_0_dl_Floor_mesh_layer_Opaque_vtx_1[4];
extern Gfx playground0_room_0_dl_Floor_mesh_layer_Opaque_tri_1[];
extern Vtx playground0_room_0_dl_Floor_mesh_layer_Opaque_vtx_2[8];
extern Gfx playground0_room_0_dl_Floor_mesh_layer_Opaque_tri_2[];
extern Vtx playground0_room_0_dl_Floor_mesh_layer_Opaque_vtx_3[70];
extern Gfx playground0_room_0_dl_Floor_mesh_layer_Opaque_tri_3[];
extern Gfx mat_playground0_room_0_dl_exit0_layerOpaque[];
extern Gfx mat_revert_playground0_room_0_dl_exit0_layerOpaque[];
extern Gfx mat_playground0_room_0_dl_floor_mat_layerOpaque[];
extern Gfx mat_revert_playground0_room_0_dl_floor_mat_layerOpaque[];
extern Gfx mat_playground0_room_0_dl_wooden_floor_layerOpaque[];
extern Gfx mat_revert_playground0_room_0_dl_wooden_floor_layerOpaque[];
extern Gfx mat_playground0_room_0_dl_walls_idk_layerOpaque[];
extern Gfx mat_revert_playground0_room_0_dl_walls_idk_layerOpaque[];
extern Gfx playground0_room_0_dl_Floor_mesh_layer_Opaque[];
extern RoomShapeNormal playground0_room_0_shapeHeader;
extern RoomShapeDListsEntry playground0_room_0_shapeDListsEntry[1];

#endif
