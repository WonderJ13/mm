#include "z_en_gakufu.h"

#define FLAGS 0x02000010

#define THIS ((EnGakufu*)thisx)

void EnGakufu_Init(Actor* thisx, GlobalContext* globalCtx);
void EnGakufu_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnGakufu_Update(Actor* thisx, GlobalContext* globalCtx);
void EnGakufu_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit En_Gakufu_InitVars = {
    ACTOR_EN_GAKUFU,
    ACTORTYPE_ITEMACTION,
    FLAGS,
    GAMEPLAY_KEEP,
    sizeof(EnGakufu),
    (ActorFunc)EnGakufu_Init,
    (ActorFunc)EnGakufu_Destroy,
    (ActorFunc)EnGakufu_Update,
    (ActorFunc)EnGakufu_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_En_Gakufu_0x80AFC960/func_80AFC960.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gakufu_0x80AFC960/EnGakufu_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gakufu_0x80AFC960/EnGakufu_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gakufu_0x80AFC960/func_80AFCB94.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gakufu_0x80AFC960/func_80AFCBD4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gakufu_0x80AFC960/func_80AFCC14.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gakufu_0x80AFC960/func_80AFCC24.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gakufu_0x80AFC960/func_80AFCC58.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gakufu_0x80AFC960/func_80AFCD44.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gakufu_0x80AFC960/func_80AFCDC8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gakufu_0x80AFC960/EnGakufu_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gakufu_0x80AFC960/EnGakufu_Draw.asm")
