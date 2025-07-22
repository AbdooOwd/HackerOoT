#include "playground0_scene.h"

/**
 * Header Child Day (Default)
*/
#define LENGTH_PLAYGROUND0_ROOM_0_HEADER00_ACTORLIST 1
SceneCmd playground0_room_0_header00[] = {
    SCENE_CMD_ROOM_SHAPE(&playground0_room_0_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 10),
    SCENE_CMD_ACTOR_LIST(LENGTH_PLAYGROUND0_ROOM_0_HEADER00_ACTORLIST, playground0_room_0_header00_actorList),
    SCENE_CMD_END(),
};

ActorEntry playground0_room_0_header00_actorList[LENGTH_PLAYGROUND0_ROOM_0_HEADER00_ACTORLIST] = {
    // Custom Actor
    {
        /* Actor ID   */ ACTOR_OBJ_GLIDER,
        /* Position   */ { -60, -90, 60 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },
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

u64 playground0_room_0_dl_mahouya_room_0_03000080_RoomShapeNormal_0300008C_DListsEntries_03006548_DL_03000540_DL_00009A20_Tex_rgba16_ci8[] = {
	0x0001020304050601, 0x0507080909000009, 0x0a0b0a0908070c04, 0x0d0e0f0c05030202, 0x040304030708060d, 0x0e0f020302050303, 0x03020405040c0505, 0x04101102040c0307, 
	0x0e0a0a0d0d0d0d0a, 0x0a0d0d0d0a0a0a0a, 0x0a0a0a0b0b0b0b12, 0x0b0a120b0b12060b, 0x0a0b0b0b0b0d0b0a, 0x0a130714120b0b12, 0x0b0b0b0b0d0e0e0d, 0x0a0a0a0d0d0a0d0e, 
	0x0404151617001804, 0x1716190900000900, 0x0100060606060008, 0x0108180b0a05171a, 0x1b1c1d1e1f191b20, 0x2104100509090005, 0x0c030501060b0a0a, 0x0b0517162017041a, 
	0x1611111922101111, 0x23241d2510261016, 0x1116271010161616, 0x1610191116112724, 0x1d2822291d221d19, 0x16060a0a0a06050c, 0x0303030305010303, 0x022a23221d2b1916, 
	0x05020216192c0005, 0x0510160404040c05, 0x0505250310100204, 0x0210022c172c1117, 0x1717171717171716, 0x1111110203030303, 0x05050505060a0803, 0x072c10021a10022c, 
	0x051a11051a16050c, 0x050701090d2d0a0a, 0x0b09010507070505, 0x010107041605051a, 0x1604040216172c10, 0x0304020402020202, 0x0303050506090006, 0x0906000608000601, 
	0x0711110727030427, 0x0310021003010800, 0x0505050310030205, 0x0403071011050711, 0x111111112e19192f, 0x1930022702273002, 0x0231030506073230, 0x1127031927032c27, 
	0x0a00000a060a0006, 0x0a06090b0a0d0d0d, 0x0d0d0d0d0a0a0a0d, 0x0a0a0d0a00090a00, 0x0006060000000606, 0x0d0d0b0909090006, 0x060909090d0a0607, 0x00060a00090a0909, 
	0x0504020504100410, 0x0510162121252521, 0x0501010101060001, 0x0508010f04030504, 0x0210101010100405, 0x0d2d070207040502, 0x0404030305070705, 0x0805050303050404, 
	0x2711332716232a16, 0x232e33202019331d, 0x242a2a1917112311, 0x112a171711272711, 0x3319191919190212, 0x3400192f191b1719, 0x1911021010100303, 0x0216231119271119, 
	0x0106090107010607, 0x0106090a0b0b0606, 0x0b0b09050310022c, 0x1a16040101050106, 0x0909090b0a0a0d2d, 0x2d01070702010705, 0x050505050701010f, 0x0705050606070606, 
	0x0d0d0e0b0a0a0d0a, 0x0a0d340e0d0a0d0d, 0x0e0e0d0a0b0b1213, 0x060a0b0a0d0a0b0d, 0x0e0d0a0a0a0d0a0d, 0x0d13071413120b12, 0x0b0b0b0b0d0e0e0e, 0x0a0a0a0d340a0d34, 
	0x15351b15041b1a04, 0x151a1b0000000908, 0x0505050505050505, 0x050516060a041535, 0x1b1f1d1f36191d1b, 0x17191d19192c1016, 0x2c02040c010b0a0b, 0x0b05151a1b151a1b, 
	0x111d1d1119112219, 0x11221d2510161011, 0x192e2a191924241b, 0x222a1d192a19111d, 0x1d281d2228282836, 0x361d22221d22191d, 0x29192f2f11302702, 0x372e11221d11221d, 
	0x0216350220161620, 0x02161a0404040403, 0x0504040416161616, 0x1716162c1b200216, 0x3517171617172c17, 0x11201b2c022c1d02, 0x1111110227270202, 0x0320021617021617, 
	0x0701070701070801, 0x070807342d342d0d, 0x0d0a060006010705, 0x0601130101010701, 0x0701070707070703, 0x0307010807070707, 0x0801010606060606, 0x1201070807070807, 
	0x1b17191b1b19171b, 0x1917190a2d2d0e0a, 0x050502041617172c, 0x111611171b1d1b17, 0x1917191602191719, 0x1b19112c2c191919, 0x202c1111020c0c05, 0x031b19171b19171b, 
	0x2e112f2e192f1119, 0x11112f0838390006, 0x1003021117191911, 0x1111191929192e11, 0x2f3a3a3a11191919, 0x1d202020201d2019, 0x2c1919172c0c0b0e, 0x0719111119111119, 
	0x291919291d192f1d, 0x192f190504050013, 0x0216110303111917, 0x193a11191d1d2919, 0x19192c3a3011191d, 0x1d20202c11192c2c, 0x33191003040c070a, 0x061d192f19192f19, 
	0x1b19191b1b20191b, 0x20192c0405010507, 0x021a0405052c2017, 0x2c020402201b1b19, 0x191103030302201c, 0x19112c0202191919, 0x112c021102030c01, 0x031b201919201919, 
	0x1920191920191919, 0x1919190404030c07, 0x1a0505022c2c2c2c, 0x0202111919191920, 0x1919202019201919, 0x193a3a30023a3a3a, 0x023a112703030203, 0x0c19191919191919, 
	0x19193a19193a193a, 0x3a192c1611302c04, 0x2c0210172c11112c, 0x0211191919191919, 0x3a1119193a193a19, 0x192c1111112c1920, 0x202c2c160204020c, 0x053a3a193a3a1919, 
	0x0202040202040402, 0x0404040410040400, 0x380f0f0501010505, 0x0505050402160202, 0x0404041a04030304, 0x0404040404040404, 0x0405050418050105, 0x0f02040404040402, 
	0x3b3b3b3b3b3b133b, 0x1313130b06060b0a, 0x0b0b0b0612120b0b, 0x120b0b063b3b3b3b, 0x3b3b120113123b07, 0x070707030307073b, 0x073b073b3b073b3b, 0x063b13133b13133b, 
	0x19201119203a2c19, 0x2c2c02100505040c, 0x2c04042c3a3c3d0e, 0x0e3d2c2c3a201920, 0x112c2c112c30022c, 0x1933203e1d202c02, 0x2c0404040403041a, 0x02193a2c2c3a2c2c, 
	0x1116161116160416, 0x1004020038380505, 0x031010100205060e, 0x0d05101117191116, 0x162c16021602022c, 0x2c17171b192a1116, 0x1005050510101004, 0x101616021602022a, 
	0x2c02022c02020102, 0x0607030608010410, 0x0204100503030418, 0x0f1a112c2c191911, 0x111130302c020220, 0x20192c1b20192c02, 0x02040c0505030c03, 0x0302020302020311, 
	0x1603041602040802, 0x04162c0205050505, 0x0504040405050416, 0x041602020217192c, 0x1616020303030302, 0x162c171916020202, 0x0404050101050503, 0x080505010505012c, 
	0x2c2c2c2c112c2c3a, 0x2c19192c04040304, 0x0702030502161616, 0x020202161119192c, 0x3a2c2c2c192c3a2c, 0x2c3a191902273030, 0x1102022703030302, 0x05032c112c2c2c20, 
	0x1a1819111111112c, 0x111119111616022c, 0x1016041016160202, 0x1610100216160216, 0x1111112c2c042c11, 0x2c2c2c160204041a, 0x2c2c2c0202100303, 0x050511113a113a11, 
	0x043f040404041818, 0x0404040c18050418, 0x40383f0f38000038, 0x053838380f181804, 0x0404040f3d3f0505, 0x0404040404383818, 0x0f040505180f0501, 0x380f040404040404, 
	0x0b0a130606090a0d, 0x0b0b0b0a0d0b0b0d, 0x2d0e0e0a090b0b0b, 0x0b0b0b0b0b090613, 0x1306130601060b06, 0x0601070705010601, 0x13013b073b3b073b, 0x3b06131313131306, 
	
};

u64 playground0_room_0_dl_mahouya_room_0_03000080_RoomShapeNormal_0300008C_DListsEntries_03006548_DL_03000540_DL_00009A20_Tex_rgba16_pal_rgba16[] = {
	0x28c330c549474105, 0x41473905288338c5, 0x30c3208318432043, 0x4107104308013907, 0x4145518728433083, 0x388551cb498751c9, 0x394759c949895a0b, 0x620d620b624b624d, 
	0x59cb418762094985, 0x5a09394541854945, 0x6a4b61c951c75185, 0x5189000159c75987, 0x51474905494961cb, 0x100149c96a4d5149, 0x3105290559893085, 0x598b41496a0d3107, 
	0x20c3000000000000
};

u64 playground0_room_0_dl_tokinoma_room_0_03000100_RoomShapeNormal_0300010C_DListsEntries_03008128_DL_03006F80_DL_000141D8_Tex_rgba16_ci8[] = {
	0x0001020303040205, 0x0406070800090a0b, 0x09090c0404020d0d, 0x03040e0b0d030e0f, 0x1000020504030404, 0x110a040204120d02, 0x100d030e10100210, 0x0d0e0a0a05041002, 
	0x0209040411050e0e, 0x0d0b090d0e030c0b, 0x0d090e0505040402, 0x050605040505040d, 0x12130e0e0d0e050e, 0x050e090505050e0e, 0x0e09120409090212, 0x040e0511050c0902, 
	0x120d020a090e050e, 0x040a090e050e0504, 0x040d0203040e0302, 0x0e0a0c030e090e03, 0x030c0b06090c0b0c, 0x0e06090c0b0e0404, 0x02030304090b040d, 0x0e0b0e0211110b0d, 
	0x090c0c0b0600010c, 0x0e0b0600010b0402, 0x0205040306060404, 0x0a0b09090c040604, 0x0e0504010708000e, 0x0a010708000b0402, 0x040411050a06040d, 0x02040411050a0604, 
	0x0e04040203030409, 0x0b040d09050b0e0d, 0x0e0e0d0e0a0a050d, 0x0d0e0e0d0e0a0a05, 0x0b04020205040312, 0x0d02100d030e0905, 0x050e0506120d0210, 0x0d030e1014021005, 
	0x0b04020404110503, 0x0c0b0d090e0a090e, 0x0509040e030e0a0d, 0x090e050504040209, 0x0b0e0d0e0e0d0e05, 0x0e0c0e091206090c, 0x0b0c0e0a090c0c0e, 0x09120d040902120e, 
	0x0e0905050e05060e, 0x0504040d020b0600, 0x010c0e0b0e050404, 0x0d0203040e030211, 0x0a090e050e040e0e, 0x0404020303010708, 0x000e0a0b0e040402, 0x03030d090b040d0c, 
	0x06090c0b0e090a0b, 0x0402020504030606, 0x040402030b040202, 0x0504030606040410, 0x0b0600010c0e0b0b, 0x0402040411050a06, 0x040d02050b040204, 0x0411050a06041105, 
	0x010708000e0a0b0b, 0x0e0d0e0e0d0e0a0a, 0x050404040b0e0d0e, 0x0e0d0e0a0a050315, 0x0e03020e0512040e, 0x0905050e05060504, 0x05050e0e0e090505, 0x0e05060504050404, 
	0x0b040d040d02030a, 0x090e050e04010708, 0x000c050e0a090e05, 0x0e040e0511090c09, 0x0a04040203030406, 0x090c0b0c0e030606, 0x040e050e06120d02, 0x100d030e10100214, 
	0x06040d020504030b, 0x06120d0210050a06, 0x041002100b030c0b, 0x0d090e0505040402, 0x0a0504030e101001, 0x07030c0b0d0e0a0a, 0x0504040201090c0c, 0x0e09120409090212, 
	0x0405050e05050404, 0x02090c0c0e091204, 0x090902120a0e0504, 0x040d0203040e0302, 0x0405050e05050404, 0x02090c0c0e091204, 0x090902120a0e0504, 0x040d0203040e0302, 
	0x11090c1204090902, 0x120e0503040d0203, 0x040e03020b0e0404, 0x02030304090b040d, 0x060e05040f041603, 0x0317180f190d030e, 0x101002100b0b0402, 0x0205041a13060417, 
	0x0e0e04040e101001, 0x07030c0b0d090e05, 0x05040402010b040c, 0x0e09120409061b15, 0x0a0b040205050404, 0x02090c0c0e091204, 0x090902120a0e0504, 0x040d0203040e0302, 
	0x0b0b040205050404, 0x02090c0c0e091204, 0x090902120a0e0504, 0x04020303040e0302, 0x0b0b0e0d04090902, 0x120e0503040d0203, 0x040e03020b0e0404, 0x02020504030b040d, 
	0x040e09050f041603, 0x0317180f19030304, 0x090b040d0b0b0402, 0x0204041105060417, 0x030a090e1c1c1d0f, 0x111e1f19201d1d0f, 0x09180f1d1b0b0402, 0x1a0e0e0d0e061b15, 
	
};

u64 playground0_room_0_dl_tokinoma_room_0_03000100_RoomShapeNormal_0300010C_DListsEntries_03008128_DL_03006F80_DL_000141D8_Tex_rgba16_pal_rgba16[] = {
	0x4adb42db73e36be3, 0x63a163614add3a59, 0x42995b61531f531d, 0x535f6ba15b5f6be5, 0x7c256ba373e55361, 0x7c2763e35ba163a3, 0x5ba374697cab63e5, 0x6c276c6964276469, 
	0x74ed000000000000
};

Vtx playground0_room_0_dl_Floor_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-102, -120, 200}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-102, 66, 200}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-102, 67, -250}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-102, -120, -250}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {102, -120, 200}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {102, 66, 200}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {102, 67, -250}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {102, -120, -250}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx playground0_room_0_dl_Floor_mesh_layer_Opaque_vtx_0[4] = {
	{{ {-30, -120, -205}, 0, {-16, 496}, {0, 127, 0, 255} }},
	{{ {30, -120, -205}, 0, {1008, 496}, {0, 127, 0, 255} }},
	{{ {30, -120, -250}, 0, {1008, -16}, {0, 127, 0, 255} }},
	{{ {-30, -120, -250}, 0, {-16, -16}, {0, 127, 0, 255} }},
};

Gfx playground0_room_0_dl_Floor_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(playground0_room_0_dl_Floor_mesh_layer_Opaque_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx playground0_room_0_dl_Floor_mesh_layer_Opaque_vtx_1[4] = {
	{{ {-30, -120, -250}, 0, {-16, -16}, {0, 0, 127, 255} }},
	{{ {30, -120, -250}, 0, {1008, -16}, {0, 0, 127, 255} }},
	{{ {30, -10, -250}, 0, {1008, -16}, {0, 0, 127, 255} }},
	{{ {-30, -10, -250}, 0, {-16, -16}, {0, 0, 127, 255} }},
};

Gfx playground0_room_0_dl_Floor_mesh_layer_Opaque_tri_1[] = {
	gsSPVertex(playground0_room_0_dl_Floor_mesh_layer_Opaque_vtx_1 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx playground0_room_0_dl_Floor_mesh_layer_Opaque_vtx_2[8] = {
	{{ {30, -120, -100}, 0, {1698, -1451}, {0, 127, 0, 255} }},
	{{ {30, -120, -205}, 0, {1698, -3548}, {0, 127, 0, 255} }},
	{{ {-30, -120, -205}, 0, {-698, -3548}, {0, 127, 0, 255} }},
	{{ {-30, -120, -100}, 0, {-698, -1451}, {0, 127, 0, 255} }},
	{{ {-102, -120, 0}, 0, {-3574, 546}, {0, 127, 0, 255} }},
	{{ {102, -120, 0}, 0, {4574, 546}, {0, 127, 0, 255} }},
	{{ {-102, -120, 200}, 0, {-3574, 4540}, {0, 127, 0, 255} }},
	{{ {102, -120, 200}, 0, {4574, 4540}, {0, 127, 0, 255} }},
};

Gfx playground0_room_0_dl_Floor_mesh_layer_Opaque_tri_2[] = {
	gsSPVertex(playground0_room_0_dl_Floor_mesh_layer_Opaque_vtx_2 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
	gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
	gsSPEndDisplayList(),
};

Vtx playground0_room_0_dl_Floor_mesh_layer_Opaque_vtx_3[70] = {
	{{ {30, -10, -250}, 0, {1236, -1505}, {129, 0, 0, 255} }},
	{{ {30, -120, -250}, 0, {-487, -1505}, {129, 0, 0, 255} }},
	{{ {30, -120, -205}, 0, {-487, -398}, {129, 0, 0, 255} }},
	{{ {30, -10, -100}, 0, {1236, 2187}, {129, 0, 0, 255} }},
	{{ {30, -120, -100}, 0, {-487, 2187}, {129, 0, 0, 255} }},
	{{ {-30, -10, -100}, 0, {1236, 23125}, {127, 0, 0, 255} }},
	{{ {-30, -120, -100}, 0, {-487, 23125}, {127, 0, 0, 255} }},
	{{ {-30, -120, -205}, 0, {-487, 25710}, {127, 0, 0, 255} }},
	{{ {-30, -10, -250}, 0, {1236, 26818}, {127, 0, 0, 255} }},
	{{ {-30, -120, -250}, 0, {-487, 26818}, {127, 0, 0, 255} }},
	{{ {-102, 0, 0}, 0, {1393, 20091}, {127, 0, 0, 255} }},
	{{ {-102, 0, 200}, 0, {1393, 15167}, {127, 0, 0, 255} }},
	{{ {-102, -120, 200}, 0, {-487, 15167}, {127, 0, 0, 255} }},
	{{ {-102, -120, 0}, 0, {-487, 20091}, {127, 0, 0, 255} }},
	{{ {102, -120, 0}, 0, {-487, 5221}, {129, 0, 0, 255} }},
	{{ {102, -120, 200}, 0, {-487, 10145}, {129, 0, 0, 255} }},
	{{ {102, 0, 200}, 0, {1393, 10145}, {129, 0, 0, 255} }},
	{{ {102, 0, 0}, 0, {1393, 5221}, {129, 0, 0, 255} }},
	{{ {102, -120, 0}, 0, {-487, 5221}, {153, 0, 74, 255} }},
	{{ {102, 0, 0}, 0, {1393, 5221}, {153, 0, 74, 255} }},
	{{ {30, -10, -100}, 0, {1236, 2187}, {153, 0, 74, 255} }},
	{{ {30, -120, -100}, 0, {-487, 2187}, {153, 0, 74, 255} }},
	{{ {-102, -120, 0}, 0, {-487, 20091}, {103, 0, 74, 255} }},
	{{ {-30, -120, -100}, 0, {-487, 23125}, {103, 0, 74, 255} }},
	{{ {-30, -10, -100}, 0, {1236, 23125}, {103, 0, 74, 255} }},
	{{ {-102, 0, 0}, 0, {1393, 20091}, {103, 0, 74, 255} }},
	{{ {-30, -10, -100}, 0, {1236, 23125}, {122, 221, 0, 255} }},
	{{ {-30, -10, -250}, 0, {1236, 26818}, {122, 221, 0, 255} }},
	{{ {-9, 64, -101}, 0, {2434, 23155}, {122, 221, 0, 255} }},
	{{ {-9, 64, -56}, 0, {2434, 22048}, {122, 221, 0, 255} }},
	{{ {-102, 0, 200}, 0, {1393, 15167}, {87, 163, 0, 255} }},
	{{ {-102, 0, 0}, 0, {1393, 20091}, {87, 163, 0, 255} }},
	{{ {-31, 66, -26}, 0, {2922, 19445}, {87, 163, 0, 255} }},
	{{ {-31, 66, 34}, 0, {2922, 19260}, {87, 163, 0, 255} }},
	{{ {-102, 0, 0}, 0, {1393, 20091}, {85, 191, 68, 255} }},
	{{ {-30, -10, -100}, 0, {1236, 23125}, {85, 191, 68, 255} }},
	{{ {-9, 64, -56}, 0, {2576, 22478}, {85, 191, 68, 255} }},
	{{ {-31, 66, -26}, 0, {2623, 21568}, {85, 191, 68, 255} }},
	{{ {-30, -10, -250}, 0, {2238, -1650}, {0, 142, 56, 255} }},
	{{ {30, -10, -250}, 0, {1236, -1505}, {0, 142, 56, 255} }},
	{{ {9, 64, -101}, 0, {2434, 2157}, {0, 142, 56, 255} }},
	{{ {-9, 64, -101}, 0, {2734, 2113}, {0, 142, 56, 255} }},
	{{ {102, 0, 0}, 0, {3438, 3518}, {169, 163, 0, 255} }},
	{{ {102, 0, 200}, 0, {6903, 1863}, {169, 163, 0, 255} }},
	{{ {31, 66, 34}, 0, {4240, 1633}, {169, 163, 0, 255} }},
	{{ {31, 66, -26}, 0, {3094, 1509}, {169, 163, 0, 255} }},
	{{ {30, -10, -250}, 0, {1236, -1505}, {134, 221, 0, 255} }},
	{{ {30, -10, -100}, 0, {1236, 2187}, {134, 221, 0, 255} }},
	{{ {9, 64, -56}, 0, {2434, 1110}, {134, 221, 0, 255} }},
	{{ {9, 64, -101}, 0, {2434, 2157}, {134, 221, 0, 255} }},
	{{ {30, -10, -100}, 0, {1236, 2187}, {171, 191, 68, 255} }},
	{{ {102, 0, 0}, 0, {3438, 3518}, {171, 191, 68, 255} }},
	{{ {31, 66, -26}, 0, {3094, 1509}, {171, 191, 68, 255} }},
	{{ {9, 64, -56}, 0, {2434, 1110}, {171, 191, 68, 255} }},
	{{ {9, 64, -56}, 0, {2581, 3176}, {0, 129, 3, 255} }},
	{{ {31, 66, -26}, 0, {3040, 3804}, {0, 129, 3, 255} }},
	{{ {31, 66, 34}, 0, {3237, 5162}, {0, 129, 3, 255} }},
	{{ {-9, 64, -56}, 0, {2882, 3132}, {0, 129, 3, 255} }},
	{{ {-31, 66, -26}, 0, {3341, 3761}, {0, 129, 3, 255} }},
	{{ {-31, 66, 34}, 0, {3537, 5119}, {0, 129, 3, 255} }},
	{{ {9, 64, -101}, 0, {2434, 2157}, {0, 129, 3, 255} }},
	{{ {-9, 64, -101}, 0, {2734, 2113}, {0, 129, 3, 255} }},
	{{ {-31, 66, 34}, 0, {4021, 516}, {0, 138, 209, 255} }},
	{{ {31, 66, 34}, 0, {4240, 1633}, {0, 138, 209, 255} }},
	{{ {102, 0, 200}, 0, {6903, 1863}, {0, 138, 209, 255} }},
	{{ {-102, 0, 200}, 0, {6173, -1859}, {0, 138, 209, 255} }},
	{{ {102, -120, 200}, 0, {-487, 10145}, {0, 0, 129, 255} }},
	{{ {-102, -120, 200}, 0, {-487, 15167}, {0, 0, 129, 255} }},
	{{ {-102, 0, 200}, 0, {1393, 15167}, {0, 0, 129, 255} }},
	{{ {102, 0, 200}, 0, {1393, 10145}, {0, 0, 129, 255} }},
};

Gfx playground0_room_0_dl_Floor_mesh_layer_Opaque_tri_3[] = {
	gsSPVertex(playground0_room_0_dl_Floor_mesh_layer_Opaque_vtx_3 + 0, 30, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
	gsSP2Triangles(2, 4, 3, 0, 5, 6, 7, 0),
	gsSP2Triangles(7, 8, 5, 0, 7, 9, 8, 0),
	gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
	gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
	gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
	gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
	gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
	gsSPVertex(playground0_room_0_dl_Floor_mesh_layer_Opaque_vtx_3 + 30, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
	gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
	gsSP2Triangles(26, 28, 27, 0, 26, 29, 28, 0),
	gsSP2Triangles(27, 30, 24, 0, 27, 31, 30, 0),
	gsSPVertex(playground0_room_0_dl_Floor_mesh_layer_Opaque_vtx_3 + 62, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSPEndDisplayList(),
};

Gfx mat_playground0_room_0_dl_exit0_layerOpaque[] = {
	gsSPLoadGeometryMode(G_FOG | G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH | G_CULL_BACK | G_LIGHTING),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_TP_PERSP | G_TT_NONE | G_TF_BILERP | G_TD_CLAMP | G_TL_TILE | G_CD_MAGICSQ | G_CYC_2CYCLE | G_CK_NONE | G_TC_FILT | G_PM_NPRIMITIVE | G_AD_NOISE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2 | G_ZS_PIXEL),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 47, 101, 255),
	gsSPEndDisplayList(),
};

Gfx mat_revert_playground0_room_0_dl_exit0_layerOpaque[] = {
	gsDPPipeSync(),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_RM_AA_ZB_OPA_SURF2 | G_RM_AA_ZB_OPA_SURF | G_ZS_PIXEL),
	gsSPEndDisplayList(),
};

Gfx mat_playground0_room_0_dl_floor_mat_layerOpaque[] = {
	gsSPLoadGeometryMode(G_FOG | G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH | G_CULL_BACK | G_LIGHTING),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_TP_PERSP | G_TT_NONE | G_TF_BILERP | G_TD_CLAMP | G_TL_TILE | G_CD_MAGICSQ | G_CYC_2CYCLE | G_CK_NONE | G_TC_FILT | G_PM_NPRIMITIVE | G_AD_NOISE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2 | G_ZS_PIXEL),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsSPEndDisplayList(),
};

Gfx mat_revert_playground0_room_0_dl_floor_mat_layerOpaque[] = {
	gsDPPipeSync(),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_RM_AA_ZB_OPA_SURF2 | G_RM_AA_ZB_OPA_SURF | G_ZS_PIXEL),
	gsSPEndDisplayList(),
};

Gfx mat_playground0_room_0_dl_wooden_floor_layerOpaque[] = {
	gsSPLoadGeometryMode(G_FOG | G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH | G_CULL_BACK | G_LIGHTING),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_TP_PERSP | G_TT_RGBA16 | G_TF_BILERP | G_TD_CLAMP | G_TL_TILE | G_CD_MAGICSQ | G_CYC_2CYCLE | G_CK_NONE | G_TC_FILT | G_PM_NPRIMITIVE | G_AD_NOISE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2 | G_ZS_PIXEL),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, playground0_room_0_dl_mahouya_room_0_03000080_RoomShapeNormal_0300008C_DListsEntries_03006548_DL_03000540_DL_00009A20_Tex_rgba16_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 64),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, playground0_room_0_dl_mahouya_room_0_03000080_RoomShapeNormal_0300008C_DListsEntries_03006548_DL_03000540_DL_00009A20_Tex_rgba16_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_playground0_room_0_dl_wooden_floor_layerOpaque[] = {
	gsDPPipeSync(),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_RM_AA_ZB_OPA_SURF2 | G_RM_AA_ZB_OPA_SURF | G_ZS_PIXEL),
	gsSPEndDisplayList(),
};

Gfx mat_playground0_room_0_dl_walls_idk_layerOpaque[] = {
	gsSPLoadGeometryMode(G_FOG | G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH | G_CULL_BACK | G_LIGHTING),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_TP_PERSP | G_TT_RGBA16 | G_TF_BILERP | G_TD_CLAMP | G_TL_TILE | G_CD_MAGICSQ | G_CYC_2CYCLE | G_CK_NONE | G_TC_FILT | G_PM_NPRIMITIVE | G_AD_NOISE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2 | G_ZS_PIXEL),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, playground0_room_0_dl_tokinoma_room_0_03000100_RoomShapeNormal_0300010C_DListsEntries_03008128_DL_03006F80_DL_000141D8_Tex_rgba16_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 32),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, playground0_room_0_dl_tokinoma_room_0_03000100_RoomShapeNormal_0300010C_DListsEntries_03008128_DL_03006F80_DL_000141D8_Tex_rgba16_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_playground0_room_0_dl_walls_idk_layerOpaque[] = {
	gsDPPipeSync(),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_RM_AA_ZB_OPA_SURF2 | G_RM_AA_ZB_OPA_SURF | G_ZS_PIXEL),
	gsSPEndDisplayList(),
};

Gfx playground0_room_0_dl_Floor_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(playground0_room_0_dl_Floor_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_playground0_room_0_dl_exit0_layerOpaque),
	gsSPDisplayList(playground0_room_0_dl_Floor_mesh_layer_Opaque_tri_0),
	gsSPDisplayList(mat_revert_playground0_room_0_dl_exit0_layerOpaque),
	gsSPDisplayList(mat_playground0_room_0_dl_floor_mat_layerOpaque),
	gsSPDisplayList(playground0_room_0_dl_Floor_mesh_layer_Opaque_tri_1),
	gsSPDisplayList(mat_revert_playground0_room_0_dl_floor_mat_layerOpaque),
	gsSPDisplayList(mat_playground0_room_0_dl_wooden_floor_layerOpaque),
	gsSPDisplayList(playground0_room_0_dl_Floor_mesh_layer_Opaque_tri_2),
	gsSPDisplayList(mat_revert_playground0_room_0_dl_wooden_floor_layerOpaque),
	gsSPDisplayList(mat_playground0_room_0_dl_walls_idk_layerOpaque),
	gsSPDisplayList(playground0_room_0_dl_Floor_mesh_layer_Opaque_tri_3),
	gsSPDisplayList(mat_revert_playground0_room_0_dl_walls_idk_layerOpaque),
	gsSPEndDisplayList(),
};

