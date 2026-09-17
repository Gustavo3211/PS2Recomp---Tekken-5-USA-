#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FE1D8
// Address: 0x2fe1d8 - 0x2fe598
void sub_002FE1D8_0x2fe1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE1D8_0x2fe1d8");
#endif

    switch (ctx->pc) {
        case 0x2fe1d8u: goto label_2fe1d8;
        case 0x2fe1dcu: goto label_2fe1dc;
        case 0x2fe1e0u: goto label_2fe1e0;
        case 0x2fe1e4u: goto label_2fe1e4;
        case 0x2fe1e8u: goto label_2fe1e8;
        case 0x2fe1ecu: goto label_2fe1ec;
        case 0x2fe1f0u: goto label_2fe1f0;
        case 0x2fe1f4u: goto label_2fe1f4;
        case 0x2fe1f8u: goto label_2fe1f8;
        case 0x2fe1fcu: goto label_2fe1fc;
        case 0x2fe200u: goto label_2fe200;
        case 0x2fe204u: goto label_2fe204;
        case 0x2fe208u: goto label_2fe208;
        case 0x2fe20cu: goto label_2fe20c;
        case 0x2fe210u: goto label_2fe210;
        case 0x2fe214u: goto label_2fe214;
        case 0x2fe218u: goto label_2fe218;
        case 0x2fe21cu: goto label_2fe21c;
        case 0x2fe220u: goto label_2fe220;
        case 0x2fe224u: goto label_2fe224;
        case 0x2fe228u: goto label_2fe228;
        case 0x2fe22cu: goto label_2fe22c;
        case 0x2fe230u: goto label_2fe230;
        case 0x2fe234u: goto label_2fe234;
        case 0x2fe238u: goto label_2fe238;
        case 0x2fe23cu: goto label_2fe23c;
        case 0x2fe240u: goto label_2fe240;
        case 0x2fe244u: goto label_2fe244;
        case 0x2fe248u: goto label_2fe248;
        case 0x2fe24cu: goto label_2fe24c;
        case 0x2fe250u: goto label_2fe250;
        case 0x2fe254u: goto label_2fe254;
        case 0x2fe258u: goto label_2fe258;
        case 0x2fe25cu: goto label_2fe25c;
        case 0x2fe260u: goto label_2fe260;
        case 0x2fe264u: goto label_2fe264;
        case 0x2fe268u: goto label_2fe268;
        case 0x2fe26cu: goto label_2fe26c;
        case 0x2fe270u: goto label_2fe270;
        case 0x2fe274u: goto label_2fe274;
        case 0x2fe278u: goto label_2fe278;
        case 0x2fe27cu: goto label_2fe27c;
        case 0x2fe280u: goto label_2fe280;
        case 0x2fe284u: goto label_2fe284;
        case 0x2fe288u: goto label_2fe288;
        case 0x2fe28cu: goto label_2fe28c;
        case 0x2fe290u: goto label_2fe290;
        case 0x2fe294u: goto label_2fe294;
        case 0x2fe298u: goto label_2fe298;
        case 0x2fe29cu: goto label_2fe29c;
        case 0x2fe2a0u: goto label_2fe2a0;
        case 0x2fe2a4u: goto label_2fe2a4;
        case 0x2fe2a8u: goto label_2fe2a8;
        case 0x2fe2acu: goto label_2fe2ac;
        case 0x2fe2b0u: goto label_2fe2b0;
        case 0x2fe2b4u: goto label_2fe2b4;
        case 0x2fe2b8u: goto label_2fe2b8;
        case 0x2fe2bcu: goto label_2fe2bc;
        case 0x2fe2c0u: goto label_2fe2c0;
        case 0x2fe2c4u: goto label_2fe2c4;
        case 0x2fe2c8u: goto label_2fe2c8;
        case 0x2fe2ccu: goto label_2fe2cc;
        case 0x2fe2d0u: goto label_2fe2d0;
        case 0x2fe2d4u: goto label_2fe2d4;
        case 0x2fe2d8u: goto label_2fe2d8;
        case 0x2fe2dcu: goto label_2fe2dc;
        case 0x2fe2e0u: goto label_2fe2e0;
        case 0x2fe2e4u: goto label_2fe2e4;
        case 0x2fe2e8u: goto label_2fe2e8;
        case 0x2fe2ecu: goto label_2fe2ec;
        case 0x2fe2f0u: goto label_2fe2f0;
        case 0x2fe2f4u: goto label_2fe2f4;
        case 0x2fe2f8u: goto label_2fe2f8;
        case 0x2fe2fcu: goto label_2fe2fc;
        case 0x2fe300u: goto label_2fe300;
        case 0x2fe304u: goto label_2fe304;
        case 0x2fe308u: goto label_2fe308;
        case 0x2fe30cu: goto label_2fe30c;
        case 0x2fe310u: goto label_2fe310;
        case 0x2fe314u: goto label_2fe314;
        case 0x2fe318u: goto label_2fe318;
        case 0x2fe31cu: goto label_2fe31c;
        case 0x2fe320u: goto label_2fe320;
        case 0x2fe324u: goto label_2fe324;
        case 0x2fe328u: goto label_2fe328;
        case 0x2fe32cu: goto label_2fe32c;
        case 0x2fe330u: goto label_2fe330;
        case 0x2fe334u: goto label_2fe334;
        case 0x2fe338u: goto label_2fe338;
        case 0x2fe33cu: goto label_2fe33c;
        case 0x2fe340u: goto label_2fe340;
        case 0x2fe344u: goto label_2fe344;
        case 0x2fe348u: goto label_2fe348;
        case 0x2fe34cu: goto label_2fe34c;
        case 0x2fe350u: goto label_2fe350;
        case 0x2fe354u: goto label_2fe354;
        case 0x2fe358u: goto label_2fe358;
        case 0x2fe35cu: goto label_2fe35c;
        case 0x2fe360u: goto label_2fe360;
        case 0x2fe364u: goto label_2fe364;
        case 0x2fe368u: goto label_2fe368;
        case 0x2fe36cu: goto label_2fe36c;
        case 0x2fe370u: goto label_2fe370;
        case 0x2fe374u: goto label_2fe374;
        case 0x2fe378u: goto label_2fe378;
        case 0x2fe37cu: goto label_2fe37c;
        case 0x2fe380u: goto label_2fe380;
        case 0x2fe384u: goto label_2fe384;
        case 0x2fe388u: goto label_2fe388;
        case 0x2fe38cu: goto label_2fe38c;
        case 0x2fe390u: goto label_2fe390;
        case 0x2fe394u: goto label_2fe394;
        case 0x2fe398u: goto label_2fe398;
        case 0x2fe39cu: goto label_2fe39c;
        case 0x2fe3a0u: goto label_2fe3a0;
        case 0x2fe3a4u: goto label_2fe3a4;
        case 0x2fe3a8u: goto label_2fe3a8;
        case 0x2fe3acu: goto label_2fe3ac;
        case 0x2fe3b0u: goto label_2fe3b0;
        case 0x2fe3b4u: goto label_2fe3b4;
        case 0x2fe3b8u: goto label_2fe3b8;
        case 0x2fe3bcu: goto label_2fe3bc;
        case 0x2fe3c0u: goto label_2fe3c0;
        case 0x2fe3c4u: goto label_2fe3c4;
        case 0x2fe3c8u: goto label_2fe3c8;
        case 0x2fe3ccu: goto label_2fe3cc;
        case 0x2fe3d0u: goto label_2fe3d0;
        case 0x2fe3d4u: goto label_2fe3d4;
        case 0x2fe3d8u: goto label_2fe3d8;
        case 0x2fe3dcu: goto label_2fe3dc;
        case 0x2fe3e0u: goto label_2fe3e0;
        case 0x2fe3e4u: goto label_2fe3e4;
        case 0x2fe3e8u: goto label_2fe3e8;
        case 0x2fe3ecu: goto label_2fe3ec;
        case 0x2fe3f0u: goto label_2fe3f0;
        case 0x2fe3f4u: goto label_2fe3f4;
        case 0x2fe3f8u: goto label_2fe3f8;
        case 0x2fe3fcu: goto label_2fe3fc;
        case 0x2fe400u: goto label_2fe400;
        case 0x2fe404u: goto label_2fe404;
        case 0x2fe408u: goto label_2fe408;
        case 0x2fe40cu: goto label_2fe40c;
        case 0x2fe410u: goto label_2fe410;
        case 0x2fe414u: goto label_2fe414;
        case 0x2fe418u: goto label_2fe418;
        case 0x2fe41cu: goto label_2fe41c;
        case 0x2fe420u: goto label_2fe420;
        case 0x2fe424u: goto label_2fe424;
        case 0x2fe428u: goto label_2fe428;
        case 0x2fe42cu: goto label_2fe42c;
        case 0x2fe430u: goto label_2fe430;
        case 0x2fe434u: goto label_2fe434;
        case 0x2fe438u: goto label_2fe438;
        case 0x2fe43cu: goto label_2fe43c;
        case 0x2fe440u: goto label_2fe440;
        case 0x2fe444u: goto label_2fe444;
        case 0x2fe448u: goto label_2fe448;
        case 0x2fe44cu: goto label_2fe44c;
        case 0x2fe450u: goto label_2fe450;
        case 0x2fe454u: goto label_2fe454;
        case 0x2fe458u: goto label_2fe458;
        case 0x2fe45cu: goto label_2fe45c;
        case 0x2fe460u: goto label_2fe460;
        case 0x2fe464u: goto label_2fe464;
        case 0x2fe468u: goto label_2fe468;
        case 0x2fe46cu: goto label_2fe46c;
        case 0x2fe470u: goto label_2fe470;
        case 0x2fe474u: goto label_2fe474;
        case 0x2fe478u: goto label_2fe478;
        case 0x2fe47cu: goto label_2fe47c;
        case 0x2fe480u: goto label_2fe480;
        case 0x2fe484u: goto label_2fe484;
        case 0x2fe488u: goto label_2fe488;
        case 0x2fe48cu: goto label_2fe48c;
        case 0x2fe490u: goto label_2fe490;
        case 0x2fe494u: goto label_2fe494;
        case 0x2fe498u: goto label_2fe498;
        case 0x2fe49cu: goto label_2fe49c;
        case 0x2fe4a0u: goto label_2fe4a0;
        case 0x2fe4a4u: goto label_2fe4a4;
        case 0x2fe4a8u: goto label_2fe4a8;
        case 0x2fe4acu: goto label_2fe4ac;
        case 0x2fe4b0u: goto label_2fe4b0;
        case 0x2fe4b4u: goto label_2fe4b4;
        case 0x2fe4b8u: goto label_2fe4b8;
        case 0x2fe4bcu: goto label_2fe4bc;
        case 0x2fe4c0u: goto label_2fe4c0;
        case 0x2fe4c4u: goto label_2fe4c4;
        case 0x2fe4c8u: goto label_2fe4c8;
        case 0x2fe4ccu: goto label_2fe4cc;
        case 0x2fe4d0u: goto label_2fe4d0;
        case 0x2fe4d4u: goto label_2fe4d4;
        case 0x2fe4d8u: goto label_2fe4d8;
        case 0x2fe4dcu: goto label_2fe4dc;
        case 0x2fe4e0u: goto label_2fe4e0;
        case 0x2fe4e4u: goto label_2fe4e4;
        case 0x2fe4e8u: goto label_2fe4e8;
        case 0x2fe4ecu: goto label_2fe4ec;
        case 0x2fe4f0u: goto label_2fe4f0;
        case 0x2fe4f4u: goto label_2fe4f4;
        case 0x2fe4f8u: goto label_2fe4f8;
        case 0x2fe4fcu: goto label_2fe4fc;
        case 0x2fe500u: goto label_2fe500;
        case 0x2fe504u: goto label_2fe504;
        case 0x2fe508u: goto label_2fe508;
        case 0x2fe50cu: goto label_2fe50c;
        case 0x2fe510u: goto label_2fe510;
        case 0x2fe514u: goto label_2fe514;
        case 0x2fe518u: goto label_2fe518;
        case 0x2fe51cu: goto label_2fe51c;
        case 0x2fe520u: goto label_2fe520;
        case 0x2fe524u: goto label_2fe524;
        case 0x2fe528u: goto label_2fe528;
        case 0x2fe52cu: goto label_2fe52c;
        case 0x2fe530u: goto label_2fe530;
        case 0x2fe534u: goto label_2fe534;
        case 0x2fe538u: goto label_2fe538;
        case 0x2fe53cu: goto label_2fe53c;
        case 0x2fe540u: goto label_2fe540;
        case 0x2fe544u: goto label_2fe544;
        case 0x2fe548u: goto label_2fe548;
        case 0x2fe54cu: goto label_2fe54c;
        case 0x2fe550u: goto label_2fe550;
        case 0x2fe554u: goto label_2fe554;
        case 0x2fe558u: goto label_2fe558;
        case 0x2fe55cu: goto label_2fe55c;
        case 0x2fe560u: goto label_2fe560;
        case 0x2fe564u: goto label_2fe564;
        case 0x2fe568u: goto label_2fe568;
        case 0x2fe56cu: goto label_2fe56c;
        case 0x2fe570u: goto label_2fe570;
        case 0x2fe574u: goto label_2fe574;
        case 0x2fe578u: goto label_2fe578;
        case 0x2fe57cu: goto label_2fe57c;
        case 0x2fe580u: goto label_2fe580;
        case 0x2fe584u: goto label_2fe584;
        case 0x2fe588u: goto label_2fe588;
        case 0x2fe58cu: goto label_2fe58c;
        case 0x2fe590u: goto label_2fe590;
        case 0x2fe594u: goto label_2fe594;
        default: break;
    }

    ctx->pc = 0x2fe1d8u;

label_2fe1d8:
    // 0x2fe1d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fe1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fe1dc:
    // 0x2fe1dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fe1dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fe1e0:
    // 0x2fe1e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fe1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2fe1e4:
    // 0x2fe1e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fe1e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fe1e8:
    // 0x2fe1e8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2fe1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2fe1ec:
    // 0x2fe1ec: 0x26340038  addiu       $s4, $s1, 0x38
    ctx->pc = 0x2fe1ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_2fe1f0:
    // 0x2fe1f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2fe1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2fe1f4:
    // 0x2fe1f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fe1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2fe1f8:
    // 0x2fe1f8: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x2fe1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_2fe1fc:
    // 0x2fe1fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2fe1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2fe200:
    // 0x2fe200: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2fe200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2fe204:
    // 0x2fe204: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x2fe204u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
label_2fe208:
    // 0x2fe208: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x2fe208u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_2fe20c:
    // 0x2fe20c: 0x146400da  bne         $v1, $a0, . + 4 + (0xDA << 2)
label_2fe210:
    if (ctx->pc == 0x2FE210u) {
        ctx->pc = 0x2FE210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE20Cu;
        // 0x2fe210: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE214u;
        goto label_2fe214;
    }
    ctx->pc = 0x2FE20Cu;
    {
        const bool branch_taken_0x2fe20c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2FE210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE20Cu;
        // 0x2fe210: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe20c) {
            ctx->pc = 0x2FE578u;
            goto label_2fe578;
        }
    }
    ctx->pc = 0x2FE214u;
label_2fe214:
    // 0x2fe214: 0x94b30002  lhu         $s3, 0x2($a1)
    ctx->pc = 0x2fe214u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_2fe218:
    // 0x2fe218: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fe218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fe21c:
    // 0x2fe21c: 0x132840  sll         $a1, $s3, 1
    ctx->pc = 0x2fe21cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_2fe220:
    // 0x2fe220: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x2fe220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_2fe224:
    // 0x2fe224: 0xc0be9b4  jal         func_2FA6D0
label_2fe228:
    if (ctx->pc == 0x2FE228u) {
        ctx->pc = 0x2FE228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE224u;
        // 0x2fe228: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE22Cu;
        goto label_2fe22c;
    }
    ctx->pc = 0x2FE224u;
    SET_GPR_U32(ctx, 31, 0x2FE22Cu);
    ctx->pc = 0x2FE228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE224u;
    // 0x2fe228: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA6D0u, 0x2FE224u, 0x2FE22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE22Cu;
label_2fe22c:
    // 0x2fe22c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2fe22cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fe230:
    // 0x2fe230: 0x106000d1  beqz        $v1, . + 4 + (0xD1 << 2)
label_2fe234:
    if (ctx->pc == 0x2FE234u) {
        ctx->pc = 0x2FE234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE230u;
        // 0x2fe234: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE238u;
        goto label_2fe238;
    }
    ctx->pc = 0x2FE230u;
    {
        const bool branch_taken_0x2fe230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE230u;
        // 0x2fe234: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe230) {
            ctx->pc = 0x2FE578u;
            goto label_2fe578;
        }
    }
    ctx->pc = 0x2FE238u;
label_2fe238:
    // 0x2fe238: 0x138180  sll         $s0, $s3, 6
    ctx->pc = 0x2fe238u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_2fe23c:
    // 0x2fe23c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fe23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fe240:
    // 0x2fe240: 0xc0be9be  jal         func_2FA6F8
label_2fe244:
    if (ctx->pc == 0x2FE244u) {
        ctx->pc = 0x2FE244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE240u;
        // 0x2fe244: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE248u;
        goto label_2fe248;
    }
    ctx->pc = 0x2FE240u;
    SET_GPR_U32(ctx, 31, 0x2FE248u);
    ctx->pc = 0x2FE244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE240u;
    // 0x2fe244: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA6F8u, 0x2FE240u, 0x2FE248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE248u;
label_2fe248:
    // 0x2fe248: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2fe24c:
    if (ctx->pc == 0x2FE24Cu) {
        ctx->pc = 0x2FE24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE248u;
        // 0x2fe24c: 0xae22003c  sw          $v0, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE250u;
        goto label_2fe250;
    }
    ctx->pc = 0x2FE248u;
    {
        const bool branch_taken_0x2fe248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE248u;
        // 0x2fe24c: 0xae22003c  sw          $v0, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe248) {
            ctx->pc = 0x2FE28Cu;
            goto label_2fe28c;
        }
    }
    ctx->pc = 0x2FE250u;
label_2fe250:
    // 0x2fe250: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fe250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fe254:
    // 0x2fe254: 0xc0be9be  jal         func_2FA6F8
label_2fe258:
    if (ctx->pc == 0x2FE258u) {
        ctx->pc = 0x2FE258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE254u;
        // 0x2fe258: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE25Cu;
        goto label_2fe25c;
    }
    ctx->pc = 0x2FE254u;
    SET_GPR_U32(ctx, 31, 0x2FE25Cu);
    ctx->pc = 0x2FE258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE254u;
    // 0x2fe258: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA6F8u, 0x2FE254u, 0x2FE25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE25Cu;
label_2fe25c:
    // 0x2fe25c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2fe260:
    if (ctx->pc == 0x2FE260u) {
        ctx->pc = 0x2FE260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE25Cu;
        // 0x2fe260: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE264u;
        goto label_2fe264;
    }
    ctx->pc = 0x2FE25Cu;
    {
        const bool branch_taken_0x2fe25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE25Cu;
        // 0x2fe260: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe25c) {
            ctx->pc = 0x2FE28Cu;
            goto label_2fe28c;
        }
    }
    ctx->pc = 0x2FE264u;
label_2fe264:
    // 0x2fe264: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fe264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fe268:
    // 0x2fe268: 0xc0be9be  jal         func_2FA6F8
label_2fe26c:
    if (ctx->pc == 0x2FE26Cu) {
        ctx->pc = 0x2FE26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE268u;
        // 0x2fe26c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE270u;
        goto label_2fe270;
    }
    ctx->pc = 0x2FE268u;
    SET_GPR_U32(ctx, 31, 0x2FE270u);
    ctx->pc = 0x2FE26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE268u;
    // 0x2fe26c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA6F8u, 0x2FE268u, 0x2FE270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE270u;
label_2fe270:
    // 0x2fe270: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2fe274:
    if (ctx->pc == 0x2FE274u) {
        ctx->pc = 0x2FE274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE270u;
        // 0x2fe274: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE278u;
        goto label_2fe278;
    }
    ctx->pc = 0x2FE270u;
    {
        const bool branch_taken_0x2fe270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE270u;
        // 0x2fe274: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe270) {
            ctx->pc = 0x2FE28Cu;
            goto label_2fe28c;
        }
    }
    ctx->pc = 0x2FE278u;
label_2fe278:
    // 0x2fe278: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fe278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fe27c:
    // 0x2fe27c: 0xc0be9be  jal         func_2FA6F8
label_2fe280:
    if (ctx->pc == 0x2FE280u) {
        ctx->pc = 0x2FE280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE27Cu;
        // 0x2fe280: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE284u;
        goto label_2fe284;
    }
    ctx->pc = 0x2FE27Cu;
    SET_GPR_U32(ctx, 31, 0x2FE284u);
    ctx->pc = 0x2FE280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE27Cu;
    // 0x2fe280: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA6F8u, 0x2FE27Cu, 0x2FE284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE284u;
label_2fe284:
    // 0x2fe284: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2fe288:
    if (ctx->pc == 0x2FE288u) {
        ctx->pc = 0x2FE288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE284u;
        // 0x2fe288: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE28Cu;
        goto label_2fe28c;
    }
    ctx->pc = 0x2FE284u;
    {
        const bool branch_taken_0x2fe284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FE288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE284u;
        // 0x2fe288: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe284) {
            ctx->pc = 0x2FE298u;
            goto label_2fe298;
        }
    }
    ctx->pc = 0x2FE28Cu;
label_2fe28c:
    // 0x2fe28c: 0x100000ba  b           . + 4 + (0xBA << 2)
label_2fe290:
    if (ctx->pc == 0x2FE290u) {
        ctx->pc = 0x2FE290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE28Cu;
        // 0x2fe290: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE294u;
        goto label_2fe294;
    }
    ctx->pc = 0x2FE28Cu;
    {
        const bool branch_taken_0x2fe28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE28Cu;
        // 0x2fe290: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe28c) {
            ctx->pc = 0x2FE578u;
            goto label_2fe578;
        }
    }
    ctx->pc = 0x2FE294u;
label_2fe294:
    // 0x2fe294: 0x0  nop
    ctx->pc = 0x2fe294u;
    // NOP
label_2fe298:
    // 0x2fe298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fe298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fe29c:
    // 0x2fe29c: 0xc0bf83a  jal         func_2FE0E8
label_2fe2a0:
    if (ctx->pc == 0x2FE2A0u) {
        ctx->pc = 0x2FE2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE29Cu;
        // 0x2fe2a0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE2A4u;
        goto label_2fe2a4;
    }
    ctx->pc = 0x2FE29Cu;
    SET_GPR_U32(ctx, 31, 0x2FE2A4u);
    ctx->pc = 0x2FE2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE29Cu;
    // 0x2fe2a0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0E8u, 0x2FE29Cu, 0x2FE2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE2A4u;
label_2fe2a4:
    // 0x2fe2a4: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x2fe2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_2fe2a8:
    // 0x2fe2a8: 0x12600047  beqz        $s3, . + 4 + (0x47 << 2)
label_2fe2ac:
    if (ctx->pc == 0x2FE2ACu) {
        ctx->pc = 0x2FE2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE2A8u;
        // 0x2fe2ac: 0x8e300034  lw          $s0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE2B0u;
        goto label_2fe2b0;
    }
    ctx->pc = 0x2FE2A8u;
    {
        const bool branch_taken_0x2fe2a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE2A8u;
        // 0x2fe2ac: 0x8e300034  lw          $s0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe2a8) {
            ctx->pc = 0x2FE3C8u;
            goto label_2fe3c8;
        }
    }
    ctx->pc = 0x2FE2B0u;
label_2fe2b0:
    // 0x2fe2b0: 0xc0bf83a  jal         func_2FE0E8
label_2fe2b4:
    if (ctx->pc == 0x2FE2B4u) {
        ctx->pc = 0x2FE2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE2B0u;
        // 0x2fe2b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE2B8u;
        goto label_2fe2b8;
    }
    ctx->pc = 0x2FE2B0u;
    SET_GPR_U32(ctx, 31, 0x2FE2B8u);
    ctx->pc = 0x2FE2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE2B0u;
    // 0x2fe2b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0E8u, 0x2FE2B0u, 0x2FE2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE2B8u;
label_2fe2b8:
    // 0x2fe2b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2fe2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2fe2bc:
    // 0x2fe2bc: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x2fe2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_2fe2c0:
    // 0x2fe2c0: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x2fe2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2fe2c4:
    // 0x2fe2c4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2fe2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2fe2c8:
    // 0x2fe2c8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2fe2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2fe2cc:
    // 0x2fe2cc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2fe2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2fe2d0:
    // 0x2fe2d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fe2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2fe2d4:
    // 0x2fe2d4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2fe2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2fe2d8:
    // 0x2fe2d8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2fe2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fe2dc:
    // 0x2fe2dc: 0x92102a  slt         $v0, $a0, $s2
    ctx->pc = 0x2fe2dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2fe2e0:
    // 0x2fe2e0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2fe2e4:
    if (ctx->pc == 0x2FE2E4u) {
        ctx->pc = 0x2FE2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE2E0u;
        // 0x2fe2e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE2E8u;
        goto label_2fe2e8;
    }
    ctx->pc = 0x2FE2E0u;
    {
        const bool branch_taken_0x2fe2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE2E0u;
        // 0x2fe2e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe2e0) {
            ctx->pc = 0x2FE310u;
            goto label_2fe310;
        }
    }
    ctx->pc = 0x2FE2E8u;
label_2fe2e8:
    // 0x2fe2e8: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x2fe2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2fe2ec:
    // 0x2fe2ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2fe2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fe2f0:
    // 0x2fe2f0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2fe2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_2fe2f4:
    // 0x2fe2f4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2fe2f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2fe2f8:
    // 0x2fe2f8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2fe2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2fe2fc:
    // 0x2fe2fc: 0x40f809  jalr        $v0
label_2fe300:
    if (ctx->pc == 0x2FE300u) {
        ctx->pc = 0x2FE300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE2FCu;
        // 0x2fe300: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE304u;
        goto label_2fe304;
    }
    ctx->pc = 0x2FE2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FE304u);
        ctx->pc = 0x2FE300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE2FCu;
        // 0x2fe300: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE2FCu, 0x2FE304u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FE304u;
label_2fe304:
    // 0x2fe304: 0x10000009  b           . + 4 + (0x9 << 2)
label_2fe308:
    if (ctx->pc == 0x2FE308u) {
        ctx->pc = 0x2FE308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE304u;
        // 0x2fe308: 0x8e230040  lw          $v1, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE30Cu;
        goto label_2fe30c;
    }
    ctx->pc = 0x2FE304u;
    {
        const bool branch_taken_0x2fe304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE304u;
        // 0x2fe308: 0x8e230040  lw          $v1, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe304) {
            ctx->pc = 0x2FE32Cu;
            goto label_2fe32c;
        }
    }
    ctx->pc = 0x2FE30Cu;
label_2fe30c:
    // 0x2fe30c: 0x0  nop
    ctx->pc = 0x2fe30cu;
    // NOP
label_2fe310:
    // 0x2fe310: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x2fe310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2fe314:
    // 0x2fe314: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2fe314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_2fe318:
    // 0x2fe318: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2fe318u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2fe31c:
    // 0x2fe31c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2fe31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2fe320:
    // 0x2fe320: 0x40f809  jalr        $v0
label_2fe324:
    if (ctx->pc == 0x2FE324u) {
        ctx->pc = 0x2FE324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE320u;
        // 0x2fe324: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE328u;
        goto label_2fe328;
    }
    ctx->pc = 0x2FE320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FE328u);
        ctx->pc = 0x2FE324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE320u;
        // 0x2fe324: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE320u, 0x2FE328u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FE328u;
label_2fe328:
    // 0x2fe328: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x2fe328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2fe32c:
    // 0x2fe32c: 0x122980  sll         $a1, $s2, 6
    ctx->pc = 0x2fe32cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_2fe330:
    // 0x2fe330: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2fe330u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2fe334:
    // 0x2fe334: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x2fe334u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_2fe338:
    // 0x2fe338: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2fe338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2fe33c:
    // 0x2fe33c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2fe33cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_2fe340:
    // 0x2fe340: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x2fe340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_2fe344:
    // 0x2fe344: 0x4410012  bgez        $v0, . + 4 + (0x12 << 2)
label_2fe348:
    if (ctx->pc == 0x2FE348u) {
        ctx->pc = 0x2FE348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE344u;
        // 0x2fe348: 0x253382a  slt         $a3, $s2, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE34Cu;
        goto label_2fe34c;
    }
    ctx->pc = 0x2FE344u;
    {
        const bool branch_taken_0x2fe344 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2FE348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE344u;
        // 0x2fe348: 0x253382a  slt         $a3, $s2, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe344) {
            ctx->pc = 0x2FE390u;
            goto label_2fe390;
        }
    }
    ctx->pc = 0x2FE34Cu;
label_2fe34c:
    // 0x2fe34c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2fe34cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2fe350:
    // 0x2fe350: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2fe350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2fe354:
    // 0x2fe354: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2fe354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2fe358:
    // 0x2fe358: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x2fe358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_2fe35c:
    // 0x2fe35c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2fe35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2fe360:
    // 0x2fe360: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2fe360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_2fe364:
    // 0x2fe364: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x2fe364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2fe368:
    // 0x2fe368: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2fe368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2fe36c:
    // 0x2fe36c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2fe36cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_2fe370:
    // 0x2fe370: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x2fe370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_2fe374:
    // 0x2fe374: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2fe374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2fe378:
    // 0x2fe378: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2fe378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_2fe37c:
    // 0x2fe37c: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x2fe37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2fe380:
    // 0x2fe380: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x2fe380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_2fe384:
    // 0x2fe384: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2fe384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2fe388:
    // 0x2fe388: 0x1000000d  b           . + 4 + (0xD << 2)
label_2fe38c:
    if (ctx->pc == 0x2FE38Cu) {
        ctx->pc = 0x2FE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE388u;
        // 0x2fe38c: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE390u;
        goto label_2fe390;
    }
    ctx->pc = 0x2FE388u;
    {
        const bool branch_taken_0x2fe388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE388u;
        // 0x2fe38c: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe388) {
            ctx->pc = 0x2FE3C0u;
            goto label_2fe3c0;
        }
    }
    ctx->pc = 0x2FE390u;
label_2fe390:
    // 0x2fe390: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x2fe390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2fe394:
    // 0x2fe394: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x2fe394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_2fe398:
    // 0x2fe398: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2fe398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2fe39c:
    // 0x2fe39c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2fe39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2fe3a0:
    // 0x2fe3a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2fe3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2fe3a4:
    // 0x2fe3a4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2fe3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_2fe3a8:
    // 0x2fe3a8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2fe3a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2fe3ac:
    // 0x2fe3ac: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2fe3acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2fe3b0:
    // 0x2fe3b0: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x2fe3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_2fe3b4:
    // 0x2fe3b4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2fe3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_2fe3b8:
    // 0x2fe3b8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2fe3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_2fe3bc:
    // 0x2fe3bc: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2fe3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_2fe3c0:
    // 0x2fe3c0: 0x14e0ffbb  bnez        $a3, . + 4 + (-0x45 << 2)
label_2fe3c4:
    if (ctx->pc == 0x2FE3C4u) {
        ctx->pc = 0x2FE3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE3C0u;
        // 0x2fe3c4: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE3C8u;
        goto label_2fe3c8;
    }
    ctx->pc = 0x2FE3C0u;
    {
        const bool branch_taken_0x2fe3c0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FE3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE3C0u;
        // 0x2fe3c4: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe3c0) {
            ctx->pc = 0x2FE2B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fe2b0;
        }
    }
    ctx->pc = 0x2FE3C8u;
label_2fe3c8:
    // 0x2fe3c8: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x2fe3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2fe3cc:
    // 0x2fe3cc: 0x5060001a  beql        $v1, $zero, . + 4 + (0x1A << 2)
label_2fe3d0:
    if (ctx->pc == 0x2FE3D0u) {
        ctx->pc = 0x2FE3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE3CCu;
        // 0x2fe3d0: 0x8e230040  lw          $v1, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE3D4u;
        goto label_2fe3d4;
    }
    ctx->pc = 0x2FE3CCu;
    {
        const bool branch_taken_0x2fe3cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe3cc) {
            ctx->pc = 0x2FE3D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE3CCu;
            // 0x2fe3d0: 0x8e230040  lw          $v1, 0x40($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE438u;
            goto label_2fe438;
        }
    }
    ctx->pc = 0x2FE3D4u;
label_2fe3d4:
    // 0x2fe3d4: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2fe3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2fe3d8:
    // 0x2fe3d8: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
label_2fe3dc:
    if (ctx->pc == 0x2FE3DCu) {
        ctx->pc = 0x2FE3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE3D8u;
        // 0x2fe3dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE3E0u;
        goto label_2fe3e0;
    }
    ctx->pc = 0x2FE3D8u;
    {
        const bool branch_taken_0x2fe3d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2FE3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE3D8u;
        // 0x2fe3dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe3d8) {
            ctx->pc = 0x2FE434u;
            goto label_2fe434;
        }
    }
    ctx->pc = 0x2FE3E0u;
label_2fe3e0:
    // 0x2fe3e0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2fe3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2fe3e4:
    // 0x2fe3e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2fe3e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fe3e8:
    // 0x2fe3e8: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x2fe3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_2fe3ec:
    // 0x2fe3ec: 0x0  nop
    ctx->pc = 0x2fe3ecu;
    // NOP
label_2fe3f0:
    // 0x2fe3f0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2fe3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2fe3f4:
    // 0x2fe3f4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2fe3f8:
    if (ctx->pc == 0x2FE3F8u) {
        ctx->pc = 0x2FE3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE3F4u;
        // 0x2fe3f8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE3FCu;
        goto label_2fe3fc;
    }
    ctx->pc = 0x2FE3F4u;
    {
        const bool branch_taken_0x2fe3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe3f4) {
            ctx->pc = 0x2FE3F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE3F4u;
            // 0x2fe3f8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE424u;
            goto label_2fe424;
        }
    }
    ctx->pc = 0x2FE3FCu;
label_2fe3fc:
    // 0x2fe3fc: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x2fe3fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2fe400:
    // 0x2fe400: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x2fe400u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2fe404:
    // 0x2fe404: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x2fe404u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2fe408:
    // 0x2fe408: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x2fe408u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_2fe40c:
    // 0x2fe40c: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x2fe40cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_2fe410:
    // 0x2fe410: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x2fe410u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_2fe414:
    // 0x2fe414: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x2fe414u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
label_2fe418:
    // 0x2fe418: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x2fe418u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
label_2fe41c:
    // 0x2fe41c: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x2fe41cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
label_2fe420:
    // 0x2fe420: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2fe420u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2fe424:
    // 0x2fe424: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x2fe424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2fe428:
    // 0x2fe428: 0x0  nop
    ctx->pc = 0x2fe428u;
    // NOP
label_2fe42c:
    // 0x2fe42c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_2fe430:
    if (ctx->pc == 0x2FE430u) {
        ctx->pc = 0x2FE430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE42Cu;
        // 0x2fe430: 0x121180  sll         $v0, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE434u;
        goto label_2fe434;
    }
    ctx->pc = 0x2FE42Cu;
    {
        const bool branch_taken_0x2fe42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FE430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE42Cu;
        // 0x2fe430: 0x121180  sll         $v0, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe42c) {
            ctx->pc = 0x2FE3F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fe3f0;
        }
    }
    ctx->pc = 0x2FE434u;
label_2fe434:
    // 0x2fe434: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x2fe434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2fe438:
    // 0x2fe438: 0x50600019  beql        $v1, $zero, . + 4 + (0x19 << 2)
label_2fe43c:
    if (ctx->pc == 0x2FE43Cu) {
        ctx->pc = 0x2FE43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE438u;
        // 0x2fe43c: 0x8e230044  lw          $v1, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE440u;
        goto label_2fe440;
    }
    ctx->pc = 0x2FE438u;
    {
        const bool branch_taken_0x2fe438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe438) {
            ctx->pc = 0x2FE43Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE438u;
            // 0x2fe43c: 0x8e230044  lw          $v1, 0x44($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE4A0u;
            goto label_2fe4a0;
        }
    }
    ctx->pc = 0x2FE440u;
label_2fe440:
    // 0x2fe440: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2fe440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2fe444:
    // 0x2fe444: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
label_2fe448:
    if (ctx->pc == 0x2FE448u) {
        ctx->pc = 0x2FE448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE444u;
        // 0x2fe448: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE44Cu;
        goto label_2fe44c;
    }
    ctx->pc = 0x2FE444u;
    {
        const bool branch_taken_0x2fe444 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2FE448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE444u;
        // 0x2fe448: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe444) {
            ctx->pc = 0x2FE49Cu;
            goto label_2fe49c;
        }
    }
    ctx->pc = 0x2FE44Cu;
label_2fe44c:
    // 0x2fe44c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2fe44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2fe450:
    // 0x2fe450: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2fe450u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fe454:
    // 0x2fe454: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x2fe454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_2fe458:
    // 0x2fe458: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2fe458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2fe45c:
    // 0x2fe45c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2fe460:
    if (ctx->pc == 0x2FE460u) {
        ctx->pc = 0x2FE460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE45Cu;
        // 0x2fe460: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE464u;
        goto label_2fe464;
    }
    ctx->pc = 0x2FE45Cu;
    {
        const bool branch_taken_0x2fe45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe45c) {
            ctx->pc = 0x2FE460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE45Cu;
            // 0x2fe460: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE48Cu;
            goto label_2fe48c;
        }
    }
    ctx->pc = 0x2FE464u;
label_2fe464:
    // 0x2fe464: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x2fe464u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2fe468:
    // 0x2fe468: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x2fe468u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2fe46c:
    // 0x2fe46c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x2fe46cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2fe470:
    // 0x2fe470: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x2fe470u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_2fe474:
    // 0x2fe474: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x2fe474u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_2fe478:
    // 0x2fe478: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x2fe478u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_2fe47c:
    // 0x2fe47c: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x2fe47cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
label_2fe480:
    // 0x2fe480: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x2fe480u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
label_2fe484:
    // 0x2fe484: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x2fe484u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
label_2fe488:
    // 0x2fe488: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2fe488u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2fe48c:
    // 0x2fe48c: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x2fe48cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2fe490:
    // 0x2fe490: 0x0  nop
    ctx->pc = 0x2fe490u;
    // NOP
label_2fe494:
    // 0x2fe494: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_2fe498:
    if (ctx->pc == 0x2FE498u) {
        ctx->pc = 0x2FE498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE494u;
        // 0x2fe498: 0x121180  sll         $v0, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE49Cu;
        goto label_2fe49c;
    }
    ctx->pc = 0x2FE494u;
    {
        const bool branch_taken_0x2fe494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FE498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE494u;
        // 0x2fe498: 0x121180  sll         $v0, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe494) {
            ctx->pc = 0x2FE458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fe458;
        }
    }
    ctx->pc = 0x2FE49Cu;
label_2fe49c:
    // 0x2fe49c: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x2fe49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_2fe4a0:
    // 0x2fe4a0: 0x50600019  beql        $v1, $zero, . + 4 + (0x19 << 2)
label_2fe4a4:
    if (ctx->pc == 0x2FE4A4u) {
        ctx->pc = 0x2FE4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE4A0u;
        // 0x2fe4a4: 0x8e230048  lw          $v1, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE4A8u;
        goto label_2fe4a8;
    }
    ctx->pc = 0x2FE4A0u;
    {
        const bool branch_taken_0x2fe4a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe4a0) {
            ctx->pc = 0x2FE4A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE4A0u;
            // 0x2fe4a4: 0x8e230048  lw          $v1, 0x48($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE508u;
            goto label_2fe508;
        }
    }
    ctx->pc = 0x2FE4A8u;
label_2fe4a8:
    // 0x2fe4a8: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2fe4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2fe4ac:
    // 0x2fe4ac: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
label_2fe4b0:
    if (ctx->pc == 0x2FE4B0u) {
        ctx->pc = 0x2FE4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE4ACu;
        // 0x2fe4b0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE4B4u;
        goto label_2fe4b4;
    }
    ctx->pc = 0x2FE4ACu;
    {
        const bool branch_taken_0x2fe4ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2FE4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE4ACu;
        // 0x2fe4b0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe4ac) {
            ctx->pc = 0x2FE504u;
            goto label_2fe504;
        }
    }
    ctx->pc = 0x2FE4B4u;
label_2fe4b4:
    // 0x2fe4b4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2fe4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2fe4b8:
    // 0x2fe4b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2fe4b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fe4bc:
    // 0x2fe4bc: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x2fe4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_2fe4c0:
    // 0x2fe4c0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2fe4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2fe4c4:
    // 0x2fe4c4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2fe4c8:
    if (ctx->pc == 0x2FE4C8u) {
        ctx->pc = 0x2FE4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE4C4u;
        // 0x2fe4c8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE4CCu;
        goto label_2fe4cc;
    }
    ctx->pc = 0x2FE4C4u;
    {
        const bool branch_taken_0x2fe4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe4c4) {
            ctx->pc = 0x2FE4C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE4C4u;
            // 0x2fe4c8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE4F4u;
            goto label_2fe4f4;
        }
    }
    ctx->pc = 0x2FE4CCu;
label_2fe4cc:
    // 0x2fe4cc: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x2fe4ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2fe4d0:
    // 0x2fe4d0: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x2fe4d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2fe4d4:
    // 0x2fe4d4: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x2fe4d4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2fe4d8:
    // 0x2fe4d8: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x2fe4d8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_2fe4dc:
    // 0x2fe4dc: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x2fe4dcu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_2fe4e0:
    // 0x2fe4e0: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x2fe4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_2fe4e4:
    // 0x2fe4e4: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x2fe4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
label_2fe4e8:
    // 0x2fe4e8: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x2fe4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
label_2fe4ec:
    // 0x2fe4ec: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x2fe4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
label_2fe4f0:
    // 0x2fe4f0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2fe4f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2fe4f4:
    // 0x2fe4f4: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x2fe4f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2fe4f8:
    // 0x2fe4f8: 0x0  nop
    ctx->pc = 0x2fe4f8u;
    // NOP
label_2fe4fc:
    // 0x2fe4fc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_2fe500:
    if (ctx->pc == 0x2FE500u) {
        ctx->pc = 0x2FE500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE4FCu;
        // 0x2fe500: 0x121180  sll         $v0, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE504u;
        goto label_2fe504;
    }
    ctx->pc = 0x2FE4FCu;
    {
        const bool branch_taken_0x2fe4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FE500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE4FCu;
        // 0x2fe500: 0x121180  sll         $v0, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe4fc) {
            ctx->pc = 0x2FE4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fe4c0;
        }
    }
    ctx->pc = 0x2FE504u;
label_2fe504:
    // 0x2fe504: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x2fe504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2fe508:
    // 0x2fe508: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_2fe50c:
    if (ctx->pc == 0x2FE50Cu) {
        ctx->pc = 0x2FE510u;
        goto label_2fe510;
    }
    ctx->pc = 0x2FE508u;
    {
        const bool branch_taken_0x2fe508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe508) {
            ctx->pc = 0x2FE56Cu;
            goto label_2fe56c;
        }
    }
    ctx->pc = 0x2FE510u;
label_2fe510:
    // 0x2fe510: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2fe510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2fe514:
    // 0x2fe514: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
label_2fe518:
    if (ctx->pc == 0x2FE518u) {
        ctx->pc = 0x2FE518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE514u;
        // 0x2fe518: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE51Cu;
        goto label_2fe51c;
    }
    ctx->pc = 0x2FE514u;
    {
        const bool branch_taken_0x2fe514 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2FE518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE514u;
        // 0x2fe518: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe514) {
            ctx->pc = 0x2FE56Cu;
            goto label_2fe56c;
        }
    }
    ctx->pc = 0x2FE51Cu;
label_2fe51c:
    // 0x2fe51c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2fe51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2fe520:
    // 0x2fe520: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2fe520u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fe524:
    // 0x2fe524: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x2fe524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_2fe528:
    // 0x2fe528: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2fe528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2fe52c:
    // 0x2fe52c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2fe530:
    if (ctx->pc == 0x2FE530u) {
        ctx->pc = 0x2FE530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE52Cu;
        // 0x2fe530: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE534u;
        goto label_2fe534;
    }
    ctx->pc = 0x2FE52Cu;
    {
        const bool branch_taken_0x2fe52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe52c) {
            ctx->pc = 0x2FE530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE52Cu;
            // 0x2fe530: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE55Cu;
            goto label_2fe55c;
        }
    }
    ctx->pc = 0x2FE534u;
label_2fe534:
    // 0x2fe534: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x2fe534u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2fe538:
    // 0x2fe538: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x2fe538u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2fe53c:
    // 0x2fe53c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x2fe53cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2fe540:
    // 0x2fe540: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x2fe540u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_2fe544:
    // 0x2fe544: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x2fe544u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_2fe548:
    // 0x2fe548: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x2fe548u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_2fe54c:
    // 0x2fe54c: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x2fe54cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
label_2fe550:
    // 0x2fe550: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x2fe550u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
label_2fe554:
    // 0x2fe554: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x2fe554u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
label_2fe558:
    // 0x2fe558: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2fe558u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2fe55c:
    // 0x2fe55c: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x2fe55cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2fe560:
    // 0x2fe560: 0x0  nop
    ctx->pc = 0x2fe560u;
    // NOP
label_2fe564:
    // 0x2fe564: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_2fe568:
    if (ctx->pc == 0x2FE568u) {
        ctx->pc = 0x2FE568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE564u;
        // 0x2fe568: 0x121180  sll         $v0, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE56Cu;
        goto label_2fe56c;
    }
    ctx->pc = 0x2FE564u;
    {
        const bool branch_taken_0x2fe564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FE568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE564u;
        // 0x2fe568: 0x121180  sll         $v0, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe564) {
            ctx->pc = 0x2FE528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fe528;
        }
    }
    ctx->pc = 0x2FE56Cu;
label_2fe56c:
    // 0x2fe56c: 0xc0bfa5a  jal         func_2FE968
label_2fe570:
    if (ctx->pc == 0x2FE570u) {
        ctx->pc = 0x2FE570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE56Cu;
        // 0x2fe570: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE574u;
        goto label_2fe574;
    }
    ctx->pc = 0x2FE56Cu;
    SET_GPR_U32(ctx, 31, 0x2FE574u);
    ctx->pc = 0x2FE570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE56Cu;
    // 0x2fe570: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE968u, 0x2FE56Cu, 0x2FE574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE574u;
label_2fe574:
    // 0x2fe574: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fe574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fe578:
    // 0x2fe578: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fe578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fe57c:
    // 0x2fe57c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fe57cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2fe580:
    // 0x2fe580: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2fe580u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fe584:
    // 0x2fe584: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2fe584u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2fe588:
    // 0x2fe588: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2fe588u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fe58c:
    // 0x2fe58c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2fe58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2fe590:
    // 0x2fe590: 0x3e00008  jr          $ra
label_2fe594:
    if (ctx->pc == 0x2FE594u) {
        ctx->pc = 0x2FE594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE590u;
        // 0x2fe594: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE598u;
        goto label_fallthrough_0x2fe590;
    }
    ctx->pc = 0x2FE590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE590u;
        // 0x2fe594: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2fe590:
    ctx->pc = 0x2FE598u;
}
