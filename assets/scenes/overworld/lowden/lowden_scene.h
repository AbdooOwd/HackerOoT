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
#include "math.h"
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
extern SurfaceType lowden_scene_polygonTypes[1];
extern Vec3s lowden_scene_vertices[32];
extern CollisionPoly lowden_scene_polygons[50];
extern CollisionHeader lowden_scene_collisionHeader;
extern SceneCmd lowden_room_0_header00[];
extern Gfx lowden_room_0_shapeHeader_entry_0_opaque[];
extern Vtx lowden_room_0_dl_Floor_mesh_layer_Opaque_vtx_cull[8];
extern Vtx lowden_room_0_dl_Floor_mesh_layer_Opaque_vtx_0[101];
extern Gfx lowden_room_0_dl_Floor_mesh_layer_Opaque_tri_0[];
extern Gfx mat_lowden_room_0_dl_floor_mat_layerOpaque[];
extern Gfx mat_revert_lowden_room_0_dl_floor_mat_layerOpaque[];
extern Gfx lowden_room_0_dl_Floor_mesh_layer_Opaque[];
extern RoomShapeNormal lowden_room_0_shapeHeader;
extern RoomShapeDListsEntry lowden_room_0_shapeDListsEntry[1];

#endif
