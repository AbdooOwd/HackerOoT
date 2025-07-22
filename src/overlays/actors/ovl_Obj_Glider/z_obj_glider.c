/*
 * File: z_obj_glider.c
 * Overlay: ovl_Obj_Glider
 * Description: Glider
 */

#include "z_obj_glider.h"

#include "assets/objects/object_glider/object_glider.h"

#define FLAGS (0)

void Obj_Glider_Init(Actor* thisx, PlayState* play);
void Obj_Glider_Destroy(Actor* thisx, PlayState* play);
void Obj_Glider_Update(Actor* thisx, PlayState* play);
void Obj_Glider_Draw(Actor* thisx, PlayState* play);

void Obj_Glider_DoNothing(Obj_Glider* this, PlayState* play);

ActorProfile Obj_Glider_Profile = {
    ACTOR_OBJ_GLIDER,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GLIDER,
    sizeof(Obj_Glider),
    (ActorFunc)Obj_Glider_Init,
    (ActorFunc)Obj_Glider_Destroy,
    (ActorFunc)Obj_Glider_Update,
    (ActorFunc)Obj_Glider_Draw,
};

void Obj_Glider_Init(Actor* thisx, PlayState* play) {
    Obj_Glider* this = (Obj_Glider*)thisx;

    this->actionFunc = Obj_Glider_DoNothing;
}

void Obj_Glider_Destroy(Actor* thisx, PlayState* play) {
    Obj_Glider* this = (Obj_Glider*)thisx;
}

void Obj_Glider_Update(Actor* thisx, PlayState* play) {
    Obj_Glider* this = (Obj_Glider*)thisx;

    this->actionFunc(this, play);
}

void Obj_Glider_Draw(Actor* thisx, PlayState* play) {
    Obj_Glider* this = (Obj_Glider*)thisx;

    Gfx_DrawDListOpa(play, gGliderDL);
}

void Obj_Glider_DoNothing(Obj_Glider* this, PlayState* play) {

}
