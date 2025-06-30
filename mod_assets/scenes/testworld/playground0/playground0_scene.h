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
extern EnvLightSettings playground0_scene_header00_lightSettings[4];
extern SurfaceType playground0_scene_polygonTypes[1];
extern Vec3s playground0_scene_vertices[4];
extern CollisionPoly playground0_scene_polygons[2];
extern CollisionHeader playground0_scene_collisionHeader;
extern SceneCmd playground0_room_0_header00[];
extern Gfx playground0_room_0_shapeHeader_entry_0_opaque[];
extern Vtx playground0_room_0_dl_Floor_mesh_layer_Opaque_vtx_cull[8];
extern Vtx playground0_room_0_dl_Floor_mesh_layer_Opaque_vtx_0[4];
extern Gfx playground0_room_0_dl_Floor_mesh_layer_Opaque_tri_0[];
extern Gfx mat_playground0_room_0_dl_floor_mat_layerOpaque[];
extern Gfx mat_revert_playground0_room_0_dl_floor_mat_layerOpaque[];
extern Gfx playground0_room_0_dl_Floor_mesh_layer_Opaque[];
extern RoomShapeNormal playground0_room_0_shapeHeader;
extern RoomShapeDListsEntry playground0_room_0_shapeDListsEntry[1];

#endif
