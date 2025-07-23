#ifndef TESTWORLD0_SCENE_H
#define TESTWORLD0_SCENE_H

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

extern SceneCmd testWorld0_scene_header00[];
extern RomFile testWorld0_scene_roomList[];
extern u8 _testWorld0_room_0SegmentRomStart[];
extern u8 _testWorld0_room_0SegmentRomEnd[];
extern ActorEntry testWorld0_scene_header00_playerEntryList[];
extern Spawn testWorld0_scene_header00_entranceList[];
extern EnvLightSettings testWorld0_scene_header00_lightSettings[4];
extern SurfaceType testWorld0_scene_polygonTypes[1];
extern Vec3s testWorld0_scene_vertices[16];
extern CollisionPoly testWorld0_scene_polygons[17];
extern CollisionHeader testWorld0_scene_collisionHeader;
extern SceneCmd testWorld0_room_0_header00[];
extern s16 testWorld0_room_0_header00_objectList[];
extern Gfx testWorld0_room_0_shapeHeader_entry_0_opaque[];
extern Vtx testWorld0_room_0_dl_el_9a3a_mesh_layer_Opaque_vtx_cull[8];
extern Vtx testWorld0_room_0_dl_el_9a3a_mesh_layer_Opaque_vtx_0[29];
extern Gfx testWorld0_room_0_dl_el_9a3a_mesh_layer_Opaque_tri_0[];
extern Gfx mat_testWorld0_room_0_dl_floor_mat_layerOpaque[];
extern Gfx mat_revert_testWorld0_room_0_dl_floor_mat_layerOpaque[];
extern Gfx testWorld0_room_0_dl_el_9a3a_mesh_layer_Opaque[];
extern RoomShapeNormal testWorld0_room_0_shapeHeader;
extern RoomShapeDListsEntry testWorld0_room_0_shapeDListsEntry[1];

#endif
