#include "z_obj_demo.h"

#define FLAGS 0x00000010

#define THIS ((ObjDemo*)thisx)

void ObjDemo_Init(Actor* thisx, GlobalContext* globalCtx);
void ObjDemo_Update(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit Obj_Demo_InitVars = {
    ACTOR_OBJ_DEMO,
    ACTORTYPE_PROP,
    FLAGS,
    GAMEPLAY_KEEP,
    sizeof(ObjDemo),
    (ActorFunc)ObjDemo_Init,
    (ActorFunc)func_800BDFB0,
    (ActorFunc)ObjDemo_Update,
    (ActorFunc)NULL
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Demo_0x80983520/ObjDemo_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Demo_0x80983520/func_80983634.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Demo_0x80983520/func_80983678.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Demo_0x80983520/func_80983704.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Demo_0x80983520/ObjDemo_Update.asm")
