#ifndef Z_OBJ_GLIDER_H
#define Z_OBJ_GLIDER_H

#include "ultra64.h"
#include "play_state.h"


struct Obj_Glider;

typedef void (*Obj_GliderActionFunc)(struct Obj_Glider*, PlayState*);

typedef struct Obj_Glider {
    Actor actor;
    Obj_GliderActionFunc actionFunc;
} Obj_Glider;

#endif
