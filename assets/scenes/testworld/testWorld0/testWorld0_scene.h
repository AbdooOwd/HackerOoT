#ifndef TESTWORLD0_SCENE_H
#define TESTWORLD0_SCENE_H

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
