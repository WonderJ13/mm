#include "z_bg_ikana_bombwall.h"

#define FLAGS 0x10000000

#define THIS ((BgIkanaBombwall*)thisx)

void BgIkanaBombwall_Init(Actor* thisx, GlobalContext* globalCtx);
void BgIkanaBombwall_Destroy(Actor* thisx, GlobalContext* globalCtx);
void BgIkanaBombwall_Update(Actor* thisx, GlobalContext* globalCtx);
void BgIkanaBombwall_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit Bg_Ikana_Bombwall_InitVars = {
    ACTOR_BG_IKANA_BOMBWALL,
    ACTORTYPE_BG,
    FLAGS,
    OBJECT_IKANA_OBJ,
    sizeof(BgIkanaBombwall),
    (ActorFunc)BgIkanaBombwall_Init,
    (ActorFunc)BgIkanaBombwall_Destroy,
    (ActorFunc)BgIkanaBombwall_Update,
    (ActorFunc)BgIkanaBombwall_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_Bg_Ikana_Bombwall_0x80BD4720/func_80BD4720.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Bg_Ikana_Bombwall_0x80BD4720/func_80BD4A14.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Bg_Ikana_Bombwall_0x80BD4720/BgIkanaBombwall_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Bg_Ikana_Bombwall_0x80BD4720/BgIkanaBombwall_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Bg_Ikana_Bombwall_0x80BD4720/func_80BD4E44.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Bg_Ikana_Bombwall_0x80BD4720/func_80BD4EAC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Bg_Ikana_Bombwall_0x80BD4720/func_80BD4F18.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Bg_Ikana_Bombwall_0x80BD4720/func_80BD4F2C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Bg_Ikana_Bombwall_0x80BD4720/func_80BD4F88.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Bg_Ikana_Bombwall_0x80BD4720/func_80BD4F9C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Bg_Ikana_Bombwall_0x80BD4720/func_80BD4FF8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Bg_Ikana_Bombwall_0x80BD4720/func_80BD503C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Bg_Ikana_Bombwall_0x80BD4720/func_80BD5118.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Bg_Ikana_Bombwall_0x80BD4720/func_80BD5134.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Bg_Ikana_Bombwall_0x80BD4720/BgIkanaBombwall_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Bg_Ikana_Bombwall_0x80BD4720/BgIkanaBombwall_Draw.asm")
