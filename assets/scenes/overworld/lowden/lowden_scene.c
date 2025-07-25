#include "lowden_scene.h"

/**
 * Header Child Day (Default)
*/
SceneCmd lowden_scene_header00[] = {
    SCENE_CMD_COL_HEADER(&lowden_scene_collisionHeader),
    SCENE_CMD_ROOM_LIST(1, lowden_scene_roomList),
    SCENE_CMD_SOUND_SETTINGS(0x00, 0x00, NA_BGM_NATURE_AMBIENCE),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x00),
    SCENE_CMD_SPECIAL_FILES(0x00, OBJECT_GAMEPLAY_FIELD_KEEP),
    SCENE_CMD_SKYBOX_SETTINGS(0x01, 0x00, LIGHT_MODE_TIME),
    SCENE_CMD_ENV_LIGHT_SETTINGS(4, lowden_scene_header00_lightSettings),
    SCENE_CMD_ENTRANCE_LIST(lowden_scene_header00_entranceList),
    SCENE_CMD_SPAWN_LIST(1, lowden_scene_header00_playerEntryList),
    SCENE_CMD_END(),
};

RomFile lowden_scene_roomList[] = {
    { (uintptr_t)_lowden_room_0SegmentRomStart, (uintptr_t)_lowden_room_0SegmentRomEnd },
};

ActorEntry lowden_scene_header00_playerEntryList[] = {
    // Link / Spawn point
    {
        /* Actor ID   */ ACTOR_PLAYER,
        /* Position   */ { 0, 0, 340 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(180.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ (0x0F00 | ((0xFF & 0x00FF)))
    },
};

Spawn lowden_scene_header00_entranceList[] = {
    // { Spawn Actor List Index, Room Index }
    { 0, 0 },
};

EnvLightSettings lowden_scene_header00_lightSettings[4] = {
    // Dawn Lighting
    {
        {    70,    45,    57 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {   180,   154,   138 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    20,    20,    60 },   // Diffuse1 Color
        {   140,   120,   100 },   // Fog Color
        ((1 << 10) | 993),         // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Day Lighting
    {
        {   105,    90,    90 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {   255,   255,   240 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    50,    50,    90 },   // Diffuse1 Color
        {   100,   100,   120 },   // Fog Color
        ((1 << 10) | 996),         // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Dusk Lighting
    {
        {   120,    90,     0 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {   250,   135,    50 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    30,    30,    60 },   // Diffuse1 Color
        {   120,    70,    50 },   // Fog Color
        ((1 << 10) | 995),         // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Night Lighting
    {
        {    40,    70,   100 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {    20,    20,    35 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    50,    50,   100 },   // Diffuse1 Color
        {     0,     0,    30 },   // Fog Color
        ((1 << 10) | 992),         // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
};

WaterBox lowden_scene_waterBoxes[1] = {
    { -290, -3, -310, 200, 200, WATERBOX_PROPERTIES(0, 0, 0, 0) },
};

SurfaceType lowden_scene_polygonTypes[1] = {
    { SURFACETYPE0(0, 0, 0x00, 0, 0x00, 0x00, 0, 0), SURFACETYPE1(0x00, 0x00, 0, 0, 0, 0, 0, 0) },
};

Vec3s lowden_scene_vertices[67] = {
    {   -326,      0,    151 },
    {   -326,    138,    151 },
    {   -220,    138,     76 },
    {   -220,      0,     76 },
    {   -150,    138,    177 },
    {   -150,      0,    177 },
    {   -203,    138,    215 },
    {   -256,    138,    252 },
    {   -212,    138,    314 },
    {   -159,    138,    277 },
    {   -256,      0,    252 },
    {   -203,      0,    215 },
    {   -159,      0,    277 },
    {   -212,      0,    314 },
    {    -60,      0,   -275 },
    {      0,      0,      0 },
    {    390,      0,      0 },
    {    300,      0,   -300 },
    {      0,      0,   -390 },
    {   -300,      0,   -300 },
    {   -155,      0,   -332 },
    {   -390,      0,      0 },
    {   -225,      0,    -80 },
    {    195,     50,    195 },
    {      0,      0,    390 },
    {    300,     50,    300 },
    {   -292,      0,   -170 },
    {    -68,      0,   -123 },
    {   -242,    -30,   -175 },
    {   -224,    -30,   -247 },
    {   -148,    -30,   -250 },
    {   -134,    -30,   -196 },
    {   -199,    -30,   -133 },
    {   -300,      0,    300 },
    {   -331,    240,   -321 },
    {   -427,    240,     19 },
    {    299,    240,   -321 },
    {     29,    240,   -427 },
    {    790,    100,   -100 },
    {    800,    100,   -300 },
    {    800,    400,   -300 },
    {    390,    300,      0 },
    {    790,    400,   -100 },
    {   -350,    270,    310 },
    {      0,    270,    430 },
    {    330,    320,    330 },
    {     45,    427,    729 },
    {    606,    512,    559 },
    {   -518,    376,   -548 },
    {   -681,    376,     30 },
    {     94,    376,   -728 },
    {   -550,    427,    525 },
    {    553,    376,   -548 },
    {   1240,    100,    100 },
    {   1250,    100,   -100 },
    {   1332,    100,   -155 },
    {   1536,    100,    190 },
    {   1554,    100,   -190 },
    {   1554,    100,   -590 },
    {   1332,    100,   -555 },
    {   1536,    390,    190 },
    {   1554,    390,   -190 },
    {   1554,    390,   -590 },
    {   1240,    390,    100 },
    {   1332,    390,   -555 },
    {   1332,    390,   -155 },
    {   1250,    390,   -100 },
};

CollisionPoly lowden_scene_polygons[110] = {
    { 0, COLPOLY_VTX(0, COLPOLY_IGNORE_NONE), COLPOLY_VTX(1, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(2), { COLPOLY_SNORMAL(-0.5721304416656494), COLPOLY_SNORMAL(6.192055934661767e-08), COLPOLY_SNORMAL(-0.8201626539230347) }, 65473 },
    { 0, COLPOLY_VTX(0, COLPOLY_IGNORE_NONE), COLPOLY_VTX(2, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(3), { COLPOLY_SNORMAL(-0.5721304416656494), COLPOLY_SNORMAL(6.192055934661767e-08), COLPOLY_SNORMAL(-0.8201626539230347) }, 65473 },
    { 0, COLPOLY_VTX(3, COLPOLY_IGNORE_NONE), COLPOLY_VTX(2, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(4), { COLPOLY_SNORMAL(0.8210278153419495), COLPOLY_SNORMAL(4.310086154646342e-08), COLPOLY_SNORMAL(-0.5708882212638855) }, 224 },
    { 0, COLPOLY_VTX(3, COLPOLY_IGNORE_NONE), COLPOLY_VTX(4, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(5), { COLPOLY_SNORMAL(0.8210278153419495), COLPOLY_SNORMAL(4.310086154646342e-08), COLPOLY_SNORMAL(-0.5708882212638855) }, 224 },
    { 0, COLPOLY_VTX(6, COLPOLY_IGNORE_NONE), COLPOLY_VTX(7, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(8), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 65398 },
    { 0, COLPOLY_VTX(6, COLPOLY_IGNORE_NONE), COLPOLY_VTX(8, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(9), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 65398 },
    { 0, COLPOLY_VTX(10, COLPOLY_IGNORE_NONE), COLPOLY_VTX(7, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(1), { COLPOLY_SNORMAL(-0.8209025859832764), COLPOLY_SNORMAL(-4.311445778171219e-08), COLPOLY_SNORMAL(0.571068286895752) }, 65182 },
    { 0, COLPOLY_VTX(10, COLPOLY_IGNORE_NONE), COLPOLY_VTX(1, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(0), { COLPOLY_SNORMAL(-0.8209025859832764), COLPOLY_SNORMAL(-4.311445778171219e-08), COLPOLY_SNORMAL(0.571068286895752) }, 65182 },
    { 0, COLPOLY_VTX(0, COLPOLY_IGNORE_NONE), COLPOLY_VTX(3, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(5), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08) }, 0 },
    { 0, COLPOLY_VTX(11, COLPOLY_IGNORE_NONE), COLPOLY_VTX(10, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(0), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08) }, 0 },
    { 0, COLPOLY_VTX(5, COLPOLY_IGNORE_NONE), COLPOLY_VTX(11, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(0), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08) }, 0 },
    { 0, COLPOLY_VTX(6, COLPOLY_IGNORE_NONE), COLPOLY_VTX(4, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(2), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 65398 },
    { 0, COLPOLY_VTX(2, COLPOLY_IGNORE_NONE), COLPOLY_VTX(1, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(7), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 65398 },
    { 0, COLPOLY_VTX(2, COLPOLY_IGNORE_NONE), COLPOLY_VTX(7, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(6), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 65398 },
    { 0, COLPOLY_VTX(5, COLPOLY_IGNORE_NONE), COLPOLY_VTX(4, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(6), { COLPOLY_SNORMAL(0.5732108354568481), COLPOLY_SNORMAL(-6.18635738192097e-08), COLPOLY_SNORMAL(0.8194079399108887) }, 65477 },
    { 0, COLPOLY_VTX(5, COLPOLY_IGNORE_NONE), COLPOLY_VTX(6, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(11), { COLPOLY_SNORMAL(0.5732108354568481), COLPOLY_SNORMAL(-6.18635738192097e-08), COLPOLY_SNORMAL(0.8194079399108887) }, 65477 },
    { 0, COLPOLY_VTX(12, COLPOLY_IGNORE_NONE), COLPOLY_VTX(9, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(8), { COLPOLY_SNORMAL(0.5732108354568481), COLPOLY_SNORMAL(-6.18635738192097e-08), COLPOLY_SNORMAL(0.8194079399108887) }, 65400 },
    { 0, COLPOLY_VTX(12, COLPOLY_IGNORE_NONE), COLPOLY_VTX(8, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(13), { COLPOLY_SNORMAL(0.5732108354568481), COLPOLY_SNORMAL(-6.18635738192097e-08), COLPOLY_SNORMAL(0.8194079399108887) }, 65400 },
    { 0, COLPOLY_VTX(10, COLPOLY_IGNORE_NONE), COLPOLY_VTX(11, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(12), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08) }, 0 },
    { 0, COLPOLY_VTX(10, COLPOLY_IGNORE_NONE), COLPOLY_VTX(12, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(13), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08) }, 0 },
    { 0, COLPOLY_VTX(10, COLPOLY_IGNORE_NONE), COLPOLY_VTX(13, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(7), { COLPOLY_SNORMAL(-0.8188011646270752), COLPOLY_SNORMAL(-4.334163250518941e-08), COLPOLY_SNORMAL(0.574077308177948) }, 65182 },
    { 0, COLPOLY_VTX(13, COLPOLY_IGNORE_NONE), COLPOLY_VTX(8, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(7), { COLPOLY_SNORMAL(-0.8188011646270752), COLPOLY_SNORMAL(-4.334163250518941e-08), COLPOLY_SNORMAL(0.574077308177948) }, 65182 },
    { 0, COLPOLY_VTX(11, COLPOLY_IGNORE_NONE), COLPOLY_VTX(6, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(9), { COLPOLY_SNORMAL(0.8188011050224304), COLPOLY_SNORMAL(4.334163961061677e-08), COLPOLY_SNORMAL(-0.5740774273872375) }, 289 },
    { 0, COLPOLY_VTX(11, COLPOLY_IGNORE_NONE), COLPOLY_VTX(9, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(12), { COLPOLY_SNORMAL(0.8188011050224304), COLPOLY_SNORMAL(4.334163961061677e-08), COLPOLY_SNORMAL(-0.5740774273872375) }, 289 },
    { 0, COLPOLY_VTX(14, COLPOLY_IGNORE_NONE), COLPOLY_VTX(15, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(16), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 0 },
    { 0, COLPOLY_VTX(16, COLPOLY_IGNORE_NONE), COLPOLY_VTX(17, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(18), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 0 },
    { 0, COLPOLY_VTX(16, COLPOLY_IGNORE_NONE), COLPOLY_VTX(18, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(14), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 0 },
    { 0, COLPOLY_VTX(19, COLPOLY_IGNORE_NONE), COLPOLY_VTX(20, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(18), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 0 },
    { 0, COLPOLY_VTX(20, COLPOLY_IGNORE_NONE), COLPOLY_VTX(14, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(18), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 0 },
    { 0, COLPOLY_VTX(21, COLPOLY_IGNORE_NONE), COLPOLY_VTX(15, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(22), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 0 },
    { 0, COLPOLY_VTX(16, COLPOLY_IGNORE_NONE), COLPOLY_VTX(15, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(23), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.9686639308929443), COLPOLY_SNORMAL(-0.24837526679039001) }, 0 },
    { 0, COLPOLY_VTX(24, COLPOLY_IGNORE_NONE), COLPOLY_VTX(25, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(23), { COLPOLY_SNORMAL(-0.12614844739437103), COLPOLY_SNORMAL(0.983957827091217), COLPOLY_SNORMAL(0.126148521900177) }, 65487 },
    { 0, COLPOLY_VTX(16, COLPOLY_IGNORE_NONE), COLPOLY_VTX(23, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(25), { COLPOLY_SNORMAL(0.12614844739437103), COLPOLY_SNORMAL(0.9839579463005066), COLPOLY_SNORMAL(-0.12614835798740387) }, 65487 },
    { 0, COLPOLY_VTX(15, COLPOLY_IGNORE_NONE), COLPOLY_VTX(24, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(23), { COLPOLY_SNORMAL(-0.24837535619735718), COLPOLY_SNORMAL(0.9686639308929443), COLPOLY_SNORMAL(7.313209948733856e-08) }, 0 },
    { 0, COLPOLY_VTX(21, COLPOLY_IGNORE_NONE), COLPOLY_VTX(22, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(26), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 0 },
    { 0, COLPOLY_VTX(21, COLPOLY_IGNORE_NONE), COLPOLY_VTX(26, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(19), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 0 },
    { 0, COLPOLY_VTX(22, COLPOLY_IGNORE_NONE), COLPOLY_VTX(15, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(27), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 0 },
    { 0, COLPOLY_VTX(15, COLPOLY_IGNORE_NONE), COLPOLY_VTX(14, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(27), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 0 },
    { 0, COLPOLY_VTX(28, COLPOLY_IGNORE_NONE), COLPOLY_VTX(29, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(19), { COLPOLY_SNORMAL(0.3191966414451599), COLPOLY_SNORMAL(0.9444960355758667), COLPOLY_SNORMAL(0.07772262394428253) }, 119 },
    { 0, COLPOLY_VTX(30, COLPOLY_IGNORE_NONE), COLPOLY_VTX(31, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(14), { COLPOLY_SNORMAL(-0.29902786016464233), COLPOLY_SNORMAL(0.9506300687789917), COLPOLY_SNORMAL(0.08297479897737503) }, 5 },
    { 0, COLPOLY_VTX(28, COLPOLY_IGNORE_NONE), COLPOLY_VTX(32, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(31), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 30 },
    { 0, COLPOLY_VTX(31, COLPOLY_IGNORE_NONE), COLPOLY_VTX(30, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(29), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 30 },
    { 0, COLPOLY_VTX(31, COLPOLY_IGNORE_NONE), COLPOLY_VTX(29, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(28), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 30 },
    { 0, COLPOLY_VTX(28, COLPOLY_IGNORE_NONE), COLPOLY_VTX(19, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(26), { COLPOLY_SNORMAL(0.505791425704956), COLPOLY_SNORMAL(0.862162172794342), COLPOLY_SNORMAL(-0.02918020822107792) }, 143 },
    { 0, COLPOLY_VTX(29, COLPOLY_IGNORE_NONE), COLPOLY_VTX(20, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(19), { COLPOLY_SNORMAL(0.08800697326660156), COLPOLY_SNORMAL(0.9154689311981201), COLPOLY_SNORMAL(0.3926466107368469) }, 144 },
    { 0, COLPOLY_VTX(31, COLPOLY_IGNORE_NONE), COLPOLY_VTX(27, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(14), { COLPOLY_SNORMAL(-0.3953239917755127), COLPOLY_SNORMAL(0.9183359742164612), COLPOLY_SNORMAL(-0.01944211684167385) }, 65507 },
    { 0, COLPOLY_VTX(31, COLPOLY_IGNORE_NONE), COLPOLY_VTX(32, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(27), { COLPOLY_SNORMAL(-0.2029486447572708), COLPOLY_SNORMAL(0.9570257067680359), COLPOLY_SNORMAL(-0.20715636014938354) }, 65497 },
    { 0, COLPOLY_VTX(32, COLPOLY_IGNORE_NONE), COLPOLY_VTX(22, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(27), { COLPOLY_SNORMAL(-0.14691099524497986), COLPOLY_SNORMAL(0.8258376717567444), COLPOLY_SNORMAL(-0.5444347262382507) }, 65459 },
    { 0, COLPOLY_VTX(33, COLPOLY_IGNORE_NONE), COLPOLY_VTX(24, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(15), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 0 },
    { 0, COLPOLY_VTX(33, COLPOLY_IGNORE_NONE), COLPOLY_VTX(15, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(21), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 0 },
    { 0, COLPOLY_VTX(32, COLPOLY_IGNORE_NONE), COLPOLY_VTX(28, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(22), { COLPOLY_SNORMAL(0.3317621052265167), COLPOLY_SNORMAL(0.8813834190368652), COLPOLY_SNORMAL(-0.33629927039146423) }, 48 },
    { 0, COLPOLY_VTX(28, COLPOLY_IGNORE_NONE), COLPOLY_VTX(26, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(22), { COLPOLY_SNORMAL(0.45270925760269165), COLPOLY_SNORMAL(0.8244831562042236), COLPOLY_SNORMAL(-0.3395317792892456) }, 75 },
    { 0, COLPOLY_VTX(29, COLPOLY_IGNORE_NONE), COLPOLY_VTX(30, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(20), { COLPOLY_SNORMAL(0.013890247792005539), COLPOLY_SNORMAL(0.9398688673973083), COLPOLY_SNORMAL(0.34125280380249023) }, 116 },
    { 0, COLPOLY_VTX(30, COLPOLY_IGNORE_NONE), COLPOLY_VTX(14, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(20), { COLPOLY_SNORMAL(-0.2113988995552063), COLPOLY_SNORMAL(0.9128649234771729), COLPOLY_SNORMAL(0.34926795959472656) }, 83 },
    { 0, COLPOLY_VTX(21, COLPOLY_IGNORE_NONE), COLPOLY_VTX(19, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(34), { COLPOLY_SNORMAL(0.9473867416381836), COLPOLY_SNORMAL(0.14723975956439972), COLPOLY_SNORMAL(0.28421616554260254) }, 369 },
    { 0, COLPOLY_VTX(21, COLPOLY_IGNORE_NONE), COLPOLY_VTX(34, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(35), { COLPOLY_SNORMAL(0.9547227621078491), COLPOLY_SNORMAL(0.12584559619426727), COLPOLY_SNORMAL(0.26956889033317566) }, 372 },
    { 0, COLPOLY_VTX(18, COLPOLY_IGNORE_NONE), COLPOLY_VTX(17, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(36), { COLPOLY_SNORMAL(-0.28637242317199707), COLPOLY_SNORMAL(0.08233188092708588), COLPOLY_SNORMAL(0.9545744061470032) }, 372 },
    { 0, COLPOLY_VTX(18, COLPOLY_IGNORE_NONE), COLPOLY_VTX(36, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(37), { COLPOLY_SNORMAL(-0.3591696619987488), COLPOLY_SNORMAL(0.18444137275218964), COLPOLY_SNORMAL(0.9148653745651245) }, 357 },
    { 0, COLPOLY_VTX(19, COLPOLY_IGNORE_NONE), COLPOLY_VTX(18, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(37), { COLPOLY_SNORMAL(0.2855325937271118), COLPOLY_SNORMAL(0.11223006248474121), COLPOLY_SNORMAL(0.9517749547958374) }, 371 },
    { 0, COLPOLY_VTX(19, COLPOLY_IGNORE_NONE), COLPOLY_VTX(37, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(34), { COLPOLY_SNORMAL(0.2804289758205414), COLPOLY_SNORMAL(0.1195569857954979), COLPOLY_SNORMAL(0.9523999691009521) }, 370 },
    { 0, COLPOLY_VTX(17, COLPOLY_IGNORE_NONE), COLPOLY_VTX(16, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(38), { COLPOLY_SNORMAL(-0.2259923368692398), COLPOLY_SNORMAL(0.9717669486999512), COLPOLY_SNORMAL(0.06779780238866806) }, 88 },
    { 0, COLPOLY_VTX(17, COLPOLY_IGNORE_NONE), COLPOLY_VTX(38, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(39), { COLPOLY_SNORMAL(-0.1961067169904709), COLPOLY_SNORMAL(0.9805335998535156), COLPOLY_SNORMAL(-0.00980526115745306) }, 56 },
    { 0, COLPOLY_VTX(17, COLPOLY_IGNORE_NONE), COLPOLY_VTX(39, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(36), { COLPOLY_SNORMAL(-0.01741633005440235), COLPOLY_SNORMAL(0.08708158135414124), COLPOLY_SNORMAL(0.9960489869117737) }, 304 },
    { 0, COLPOLY_VTX(39, COLPOLY_IGNORE_NONE), COLPOLY_VTX(40, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(36), { COLPOLY_SNORMAL(-0.041879359632730484), COLPOLY_SNORMAL(-7.543166447021576e-08), COLPOLY_SNORMAL(0.999122679233551) }, 333 },
    { 0, COLPOLY_VTX(16, COLPOLY_IGNORE_NONE), COLPOLY_VTX(41, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(38), { COLPOLY_SNORMAL(-0.24253563582897186), COLPOLY_SNORMAL(7.324372575112648e-08), COLPOLY_SNORMAL(-0.9701424837112427) }, 95 },
    { 0, COLPOLY_VTX(38, COLPOLY_IGNORE_NONE), COLPOLY_VTX(41, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(42), { COLPOLY_SNORMAL(-0.24253563582897186), COLPOLY_SNORMAL(7.324372575112648e-08), COLPOLY_SNORMAL(-0.9701424837112427) }, 95 },
    { 0, COLPOLY_VTX(24, COLPOLY_IGNORE_NONE), COLPOLY_VTX(33, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(43), { COLPOLY_SNORMAL(0.2862245440483093), COLPOLY_SNORMAL(0.08834096044301987), COLPOLY_SNORMAL(-0.9540814161300659) }, 372 },
    { 0, COLPOLY_VTX(24, COLPOLY_IGNORE_NONE), COLPOLY_VTX(43, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(44), { COLPOLY_SNORMAL(0.321185827255249), COLPOLY_SNORMAL(0.1387840211391449), COLPOLY_SNORMAL(-0.9367916584014893) }, 365 },
    { 0, COLPOLY_VTX(24, COLPOLY_IGNORE_NONE), COLPOLY_VTX(44, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(25), { COLPOLY_SNORMAL(-0.30579981207847595), COLPOLY_SNORMAL(0.13952845335006714), COLPOLY_SNORMAL(-0.941816508769989) }, 367 },
    { 0, COLPOLY_VTX(25, COLPOLY_IGNORE_NONE), COLPOLY_VTX(44, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(45), { COLPOLY_SNORMAL(-0.306391179561615), COLPOLY_SNORMAL(0.13868233561515808), COLPOLY_SNORMAL(-0.9417492747306824) }, 368 },
    { 0, COLPOLY_VTX(33, COLPOLY_IGNORE_NONE), COLPOLY_VTX(21, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(35), { COLPOLY_SNORMAL(0.9442141056060791), COLPOLY_SNORMAL(0.16799145936965942), COLPOLY_SNORMAL(-0.2832643687725067) }, 368 },
    { 0, COLPOLY_VTX(33, COLPOLY_IGNORE_NONE), COLPOLY_VTX(35, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(43), { COLPOLY_SNORMAL(0.9451588988304138), COLPOLY_SNORMAL(0.18499857187271118), COLPOLY_SNORMAL(-0.2691657543182373) }, 364 },
    { 0, COLPOLY_VTX(25, COLPOLY_IGNORE_NONE), COLPOLY_VTX(45, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(41), { COLPOLY_SNORMAL(-0.9742714166641235), COLPOLY_SNORMAL(0.12880200147628784), COLPOLY_SNORMAL(-0.18494652211666107) }, 341 },
    { 0, COLPOLY_VTX(16, COLPOLY_IGNORE_NONE), COLPOLY_VTX(25, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(41), { COLPOLY_SNORMAL(-0.9578261971473694), COLPOLY_SNORMAL(2.169416823960546e-08), COLPOLY_SNORMAL(-0.2873479723930359) }, 374 },
    { 0, COLPOLY_VTX(44, COLPOLY_IGNORE_NONE), COLPOLY_VTX(46, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(45), { COLPOLY_SNORMAL(-0.25867360830307007), COLPOLY_SNORMAL(0.8707131147384644), COLPOLY_SNORMAL(-0.4182661771774292) }, 65481 },
    { 0, COLPOLY_VTX(45, COLPOLY_IGNORE_NONE), COLPOLY_VTX(46, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(47), { COLPOLY_SNORMAL(-0.2586735785007477), COLPOLY_SNORMAL(0.8707131147384644), COLPOLY_SNORMAL(-0.41826608777046204) }, 65481 },
    { 0, COLPOLY_VTX(35, COLPOLY_IGNORE_NONE), COLPOLY_VTX(34, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(48), { COLPOLY_SNORMAL(0.47255903482437134), COLPOLY_SNORMAL(0.8711398839950562), COLPOLY_SNORMAL(0.13342854380607605) }, 65526 },
    { 0, COLPOLY_VTX(35, COLPOLY_IGNORE_NONE), COLPOLY_VTX(48, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(49), { COLPOLY_SNORMAL(0.4725590646266937), COLPOLY_SNORMAL(0.8711398839950562), COLPOLY_SNORMAL(0.13342851400375366) }, 65526 },
    { 0, COLPOLY_VTX(34, COLPOLY_IGNORE_NONE), COLPOLY_VTX(37, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(50), { COLPOLY_SNORMAL(0.12698832154273987), COLPOLY_SNORMAL(0.8932361006736755), COLPOLY_SNORMAL(0.4312810003757477) }, 65502 },
    { 0, COLPOLY_VTX(34, COLPOLY_IGNORE_NONE), COLPOLY_VTX(50, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(48), { COLPOLY_SNORMAL(0.12698833644390106), COLPOLY_SNORMAL(0.8932361006736755), COLPOLY_SNORMAL(0.4312810003757477) }, 65502 },
    { 0, COLPOLY_VTX(35, COLPOLY_IGNORE_NONE), COLPOLY_VTX(49, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(43), { COLPOLY_SNORMAL(0.4544331729412079), COLPOLY_SNORMAL(0.8657939434051514), COLPOLY_SNORMAL(-0.20950229465961456) }, 65526 },
    { 0, COLPOLY_VTX(43, COLPOLY_IGNORE_NONE), COLPOLY_VTX(49, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(51), { COLPOLY_SNORMAL(0.4544331431388855), COLPOLY_SNORMAL(0.8657940626144409), COLPOLY_SNORMAL(-0.20950224995613098) }, 65526 },
    { 0, COLPOLY_VTX(44, COLPOLY_IGNORE_NONE), COLPOLY_VTX(43, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(51), { COLPOLY_SNORMAL(0.16382604837417603), COLPOLY_SNORMAL(0.8630432486534119), COLPOLY_SNORMAL(-0.47782576084136963) }, 65508 },
    { 0, COLPOLY_VTX(44, COLPOLY_IGNORE_NONE), COLPOLY_VTX(51, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(46), { COLPOLY_SNORMAL(0.16382606327533722), COLPOLY_SNORMAL(0.8630432486534119), COLPOLY_SNORMAL(-0.47782570123672485) }, 65508 },
    { 0, COLPOLY_VTX(37, COLPOLY_IGNORE_NONE), COLPOLY_VTX(36, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(52), { COLPOLY_SNORMAL(-0.149252787232399), COLPOLY_SNORMAL(0.9127939343452454), COLPOLY_SNORMAL(0.3801720142364502) }, 65484 },
    { 0, COLPOLY_VTX(37, COLPOLY_IGNORE_NONE), COLPOLY_VTX(52, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(50), { COLPOLY_SNORMAL(-0.149252787232399), COLPOLY_SNORMAL(0.9127939343452454), COLPOLY_SNORMAL(0.3801719844341278) }, 65484 },
    { 0, COLPOLY_VTX(36, COLPOLY_IGNORE_NONE), COLPOLY_VTX(40, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(52), { COLPOLY_SNORMAL(-0.30529969930648804), COLPOLY_SNORMAL(0.9278606176376343), COLPOLY_SNORMAL(0.21416553854942322) }, 65473 },
    { 0, COLPOLY_VTX(41, COLPOLY_IGNORE_NONE), COLPOLY_VTX(45, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(47), { COLPOLY_SNORMAL(-0.4842710793018341), COLPOLY_SNORMAL(0.8635814189910889), COLPOLY_SNORMAL(-0.14038754999637604) }, 65466 },
    { 0, COLPOLY_VTX(41, COLPOLY_IGNORE_NONE), COLPOLY_VTX(47, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(42), { COLPOLY_SNORMAL(-0.2912823259830475), COLPOLY_SNORMAL(0.9263608455657959), COLPOLY_SNORMAL(-0.23876823484897614) }, 65372 },
    { 0, COLPOLY_VTX(39, COLPOLY_IGNORE_NONE), COLPOLY_VTX(38, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(53), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 65436 },
    { 0, COLPOLY_VTX(39, COLPOLY_IGNORE_NONE), COLPOLY_VTX(53, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(54), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 65436 },
    { 0, COLPOLY_VTX(55, COLPOLY_IGNORE_NONE), COLPOLY_VTX(54, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(53), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 65436 },
    { 0, COLPOLY_VTX(53, COLPOLY_IGNORE_NONE), COLPOLY_VTX(56, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(57), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 65436 },
    { 0, COLPOLY_VTX(53, COLPOLY_IGNORE_NONE), COLPOLY_VTX(57, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(55), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 65436 },
    { 0, COLPOLY_VTX(55, COLPOLY_IGNORE_NONE), COLPOLY_VTX(57, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(58), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 65436 },
    { 0, COLPOLY_VTX(55, COLPOLY_IGNORE_NONE), COLPOLY_VTX(58, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(59), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 65436 },
    { 0, COLPOLY_VTX(57, COLPOLY_IGNORE_NONE), COLPOLY_VTX(56, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(60), { COLPOLY_SNORMAL(-0.9987522959709167), COLPOLY_SNORMAL(3.77017306263383e-09), COLPOLY_SNORMAL(-0.04993745684623718) }, 1543 },
    { 0, COLPOLY_VTX(57, COLPOLY_IGNORE_NONE), COLPOLY_VTX(60, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(61), { COLPOLY_SNORMAL(-0.9987522959709167), COLPOLY_SNORMAL(3.77017306263383e-09), COLPOLY_SNORMAL(-0.04993745684623718) }, 1543 },
    { 0, COLPOLY_VTX(58, COLPOLY_IGNORE_NONE), COLPOLY_VTX(57, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(61), { COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0) }, 1554 },
    { 0, COLPOLY_VTX(58, COLPOLY_IGNORE_NONE), COLPOLY_VTX(61, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(62), { COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0) }, 1554 },
    { 0, COLPOLY_VTX(56, COLPOLY_IGNORE_NONE), COLPOLY_VTX(53, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(63), { COLPOLY_SNORMAL(0.291354775428772), COLPOLY_SNORMAL(7.22224271498817e-08), COLPOLY_SNORMAL(-0.9566150307655334) }, 65270 },
    { 0, COLPOLY_VTX(56, COLPOLY_IGNORE_NONE), COLPOLY_VTX(63, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(60), { COLPOLY_SNORMAL(0.291354775428772), COLPOLY_SNORMAL(7.22224271498817e-08), COLPOLY_SNORMAL(-0.9566150307655334) }, 65270 },
    { 0, COLPOLY_VTX(55, COLPOLY_IGNORE_NONE), COLPOLY_VTX(59, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(64), { COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0) }, 64204 },
    { 0, COLPOLY_VTX(55, COLPOLY_IGNORE_NONE), COLPOLY_VTX(64, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(65), { COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0) }, 64204 },
    { 0, COLPOLY_VTX(54, COLPOLY_IGNORE_NONE), COLPOLY_VTX(55, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(65), { COLPOLY_SNORMAL(0.5558655261993408), COLPOLY_SNORMAL(-6.275931241361832e-08), COLPOLY_SNORMAL(0.8312722444534302) }, 64924 },
    { 0, COLPOLY_VTX(54, COLPOLY_IGNORE_NONE), COLPOLY_VTX(65, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(66), { COLPOLY_SNORMAL(0.5558655261993408), COLPOLY_SNORMAL(-6.275931241361832e-08), COLPOLY_SNORMAL(0.8312722444534302) }, 64924 },
    { 0, COLPOLY_VTX(39, COLPOLY_IGNORE_NONE), COLPOLY_VTX(54, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(66), { COLPOLY_SNORMAL(-0.40613847970962524), COLPOLY_SNORMAL(-6.899085747136269e-08), COLPOLY_SNORMAL(0.9138115644454956) }, 599 },
    { 0, COLPOLY_VTX(39, COLPOLY_IGNORE_NONE), COLPOLY_VTX(66, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(40), { COLPOLY_SNORMAL(-0.40613847970962524), COLPOLY_SNORMAL(-6.899085747136269e-08), COLPOLY_SNORMAL(0.9138115644454956) }, 599 },
    { 0, COLPOLY_VTX(53, COLPOLY_IGNORE_NONE), COLPOLY_VTX(42, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(63), { COLPOLY_SNORMAL(0.40613847970962524), COLPOLY_SNORMAL(6.899085747136269e-08), COLPOLY_SNORMAL(-0.9138115644454956) }, 65124 },
    { 0, COLPOLY_VTX(53, COLPOLY_IGNORE_NONE), COLPOLY_VTX(38, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(42), { COLPOLY_SNORMAL(0.40613847970962524), COLPOLY_SNORMAL(6.899085747136269e-08), COLPOLY_SNORMAL(-0.9138115644454956) }, 65124 },
};

CollisionHeader lowden_scene_collisionHeader = {
    { -681, -30, -728 },
    { 1554, 512, 729 },
    ARRAY_COUNT(lowden_scene_vertices), lowden_scene_vertices,
    ARRAY_COUNT(lowden_scene_polygons), lowden_scene_polygons,
    lowden_scene_polygonTypes,
    NULL,
    ARRAY_COUNT(lowden_scene_waterBoxes), lowden_scene_waterBoxes
};

