#include "z_obj_jg_gakki.h"

#define FLAGS 0x00000020

#define THIS ((ObjJgGakki*)thisx)

void ObjJgGakki_Init(Actor* thisx, GlobalContext* globalCtx);
void ObjJgGakki_Destroy(Actor* thisx, GlobalContext* globalCtx);
void ObjJgGakki_Update(Actor* thisx, GlobalContext* globalCtx);
void ObjJgGakki_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit Obj_Jg_Gakki_InitVars = {
    ACTOR_OBJ_JG_GAKKI,
    ACTORTYPE_PROP,
    FLAGS,
    OBJECT_JG,
    sizeof(ObjJgGakki),
    (ActorFunc)ObjJgGakki_Init,
    (ActorFunc)ObjJgGakki_Destroy,
    (ActorFunc)ObjJgGakki_Update,
    (ActorFunc)ObjJgGakki_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Jg_Gakki_0x80B961E0/ObjJgGakki_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Jg_Gakki_0x80B961E0/ObjJgGakki_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Jg_Gakki_0x80B961E0/ObjJgGakki_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Jg_Gakki_0x80B961E0/ObjJgGakki_Draw.asm")
