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

// Function: sub_003553C8
// Address: 0x3553c8 - 0x3555ec
void sub_003553C8_0x3553c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003553C8_0x3553c8");
#endif

    switch (ctx->pc) {
        case 0x3553c8u: goto label_3553c8;
        case 0x3553ccu: goto label_3553cc;
        case 0x3553d0u: goto label_3553d0;
        case 0x3553d4u: goto label_3553d4;
        case 0x3553d8u: goto label_3553d8;
        case 0x3553dcu: goto label_3553dc;
        case 0x3553e0u: goto label_3553e0;
        case 0x3553e4u: goto label_3553e4;
        case 0x3553e8u: goto label_3553e8;
        case 0x3553ecu: goto label_3553ec;
        case 0x3553f0u: goto label_3553f0;
        case 0x3553f4u: goto label_3553f4;
        case 0x3553f8u: goto label_3553f8;
        case 0x3553fcu: goto label_3553fc;
        case 0x355400u: goto label_355400;
        case 0x355404u: goto label_355404;
        case 0x355408u: goto label_355408;
        case 0x35540cu: goto label_35540c;
        case 0x355410u: goto label_355410;
        case 0x355414u: goto label_355414;
        case 0x355418u: goto label_355418;
        case 0x35541cu: goto label_35541c;
        case 0x355420u: goto label_355420;
        case 0x355424u: goto label_355424;
        case 0x355428u: goto label_355428;
        case 0x35542cu: goto label_35542c;
        case 0x355430u: goto label_355430;
        case 0x355434u: goto label_355434;
        case 0x355438u: goto label_355438;
        case 0x35543cu: goto label_35543c;
        case 0x355440u: goto label_355440;
        case 0x355444u: goto label_355444;
        case 0x355448u: goto label_355448;
        case 0x35544cu: goto label_35544c;
        case 0x355450u: goto label_355450;
        case 0x355454u: goto label_355454;
        case 0x355458u: goto label_355458;
        case 0x35545cu: goto label_35545c;
        case 0x355460u: goto label_355460;
        case 0x355464u: goto label_355464;
        case 0x355468u: goto label_355468;
        case 0x35546cu: goto label_35546c;
        case 0x355470u: goto label_355470;
        case 0x355474u: goto label_355474;
        case 0x355478u: goto label_355478;
        case 0x35547cu: goto label_35547c;
        case 0x355480u: goto label_355480;
        case 0x355484u: goto label_355484;
        case 0x355488u: goto label_355488;
        case 0x35548cu: goto label_35548c;
        case 0x355490u: goto label_355490;
        case 0x355494u: goto label_355494;
        case 0x355498u: goto label_355498;
        case 0x35549cu: goto label_35549c;
        case 0x3554a0u: goto label_3554a0;
        case 0x3554a4u: goto label_3554a4;
        case 0x3554a8u: goto label_3554a8;
        case 0x3554acu: goto label_3554ac;
        case 0x3554b0u: goto label_3554b0;
        case 0x3554b4u: goto label_3554b4;
        case 0x3554b8u: goto label_3554b8;
        case 0x3554bcu: goto label_3554bc;
        case 0x3554c0u: goto label_3554c0;
        case 0x3554c4u: goto label_3554c4;
        case 0x3554c8u: goto label_3554c8;
        case 0x3554ccu: goto label_3554cc;
        case 0x3554d0u: goto label_3554d0;
        case 0x3554d4u: goto label_3554d4;
        case 0x3554d8u: goto label_3554d8;
        case 0x3554dcu: goto label_3554dc;
        case 0x3554e0u: goto label_3554e0;
        case 0x3554e4u: goto label_3554e4;
        case 0x3554e8u: goto label_3554e8;
        case 0x3554ecu: goto label_3554ec;
        case 0x3554f0u: goto label_3554f0;
        case 0x3554f4u: goto label_3554f4;
        case 0x3554f8u: goto label_3554f8;
        case 0x3554fcu: goto label_3554fc;
        case 0x355500u: goto label_355500;
        case 0x355504u: goto label_355504;
        case 0x355508u: goto label_355508;
        case 0x35550cu: goto label_35550c;
        case 0x355510u: goto label_355510;
        case 0x355514u: goto label_355514;
        case 0x355518u: goto label_355518;
        case 0x35551cu: goto label_35551c;
        case 0x355520u: goto label_355520;
        case 0x355524u: goto label_355524;
        case 0x355528u: goto label_355528;
        case 0x35552cu: goto label_35552c;
        case 0x355530u: goto label_355530;
        case 0x355534u: goto label_355534;
        case 0x355538u: goto label_355538;
        case 0x35553cu: goto label_35553c;
        case 0x355540u: goto label_355540;
        case 0x355544u: goto label_355544;
        case 0x355548u: goto label_355548;
        case 0x35554cu: goto label_35554c;
        case 0x355550u: goto label_355550;
        case 0x355554u: goto label_355554;
        case 0x355558u: goto label_355558;
        case 0x35555cu: goto label_35555c;
        case 0x355560u: goto label_355560;
        case 0x355564u: goto label_355564;
        case 0x355568u: goto label_355568;
        case 0x35556cu: goto label_35556c;
        case 0x355570u: goto label_355570;
        case 0x355574u: goto label_355574;
        case 0x355578u: goto label_355578;
        case 0x35557cu: goto label_35557c;
        case 0x355580u: goto label_355580;
        case 0x355584u: goto label_355584;
        case 0x355588u: goto label_355588;
        case 0x35558cu: goto label_35558c;
        case 0x355590u: goto label_355590;
        case 0x355594u: goto label_355594;
        case 0x355598u: goto label_355598;
        case 0x35559cu: goto label_35559c;
        case 0x3555a0u: goto label_3555a0;
        case 0x3555a4u: goto label_3555a4;
        case 0x3555a8u: goto label_3555a8;
        case 0x3555acu: goto label_3555ac;
        case 0x3555b0u: goto label_3555b0;
        case 0x3555b4u: goto label_3555b4;
        case 0x3555b8u: goto label_3555b8;
        case 0x3555bcu: goto label_3555bc;
        case 0x3555c0u: goto label_3555c0;
        case 0x3555c4u: goto label_3555c4;
        case 0x3555c8u: goto label_3555c8;
        case 0x3555ccu: goto label_3555cc;
        case 0x3555d0u: goto label_3555d0;
        case 0x3555d4u: goto label_3555d4;
        case 0x3555d8u: goto label_3555d8;
        case 0x3555dcu: goto label_3555dc;
        case 0x3555e0u: goto label_3555e0;
        case 0x3555e4u: goto label_3555e4;
        case 0x3555e8u: goto label_3555e8;
        default: break;
    }

    ctx->pc = 0x3553c8u;

label_3553c8:
    // 0x3553c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3553c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3553cc:
    // 0x3553cc: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x3553ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
label_3553d0:
    // 0x3553d0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3553d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_3553d4:
    // 0x3553d4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3553d4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3553d8:
    // 0x3553d8: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3553d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_3553dc:
    // 0x3553dc: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x3553dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_3553e0:
    // 0x3553e0: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x3553e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
label_3553e4:
    // 0x3553e4: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3553e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3553e8:
    // 0x3553e8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3553e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3553ec:
    // 0x3553ec: 0xafc20028  sw          $v0, 0x28($fp)
    ctx->pc = 0x3553ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 2));
label_3553f0:
    // 0x3553f0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3553f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3553f4:
    // 0x3553f4: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x3553f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_3553f8:
    // 0x3553f8: 0x1062004d  beq         $v1, $v0, . + 4 + (0x4D << 2)
label_3553fc:
    if (ctx->pc == 0x3553FCu) {
        ctx->pc = 0x355400u;
        goto label_355400;
    }
    ctx->pc = 0x3553F8u;
    {
        const bool branch_taken_0x3553f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3553f8) {
            ctx->pc = 0x355530u;
            goto label_355530;
        }
    }
    ctx->pc = 0x355400u;
label_355400:
    // 0x355400: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x355400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_355404:
    // 0x355404: 0x2862ffff  slti        $v0, $v1, -0x1
    ctx->pc = 0x355404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967295) ? 1 : 0);
label_355408:
    // 0x355408: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_35540c:
    if (ctx->pc == 0x35540Cu) {
        ctx->pc = 0x355410u;
        goto label_355410;
    }
    ctx->pc = 0x355408u;
    {
        const bool branch_taken_0x355408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355408) {
            ctx->pc = 0x355458u;
            goto label_355458;
        }
    }
    ctx->pc = 0x355410u;
label_355410:
    // 0x355410: 0x2402ff01  addiu       $v0, $zero, -0xFF
    ctx->pc = 0x355410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967041));
label_355414:
    // 0x355414: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x355414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_355418:
    // 0x355418: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_35541c:
    if (ctx->pc == 0x35541Cu) {
        ctx->pc = 0x355420u;
        goto label_355420;
    }
    ctx->pc = 0x355418u;
    {
        const bool branch_taken_0x355418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x355418) {
            ctx->pc = 0x355480u;
            goto label_355480;
        }
    }
    ctx->pc = 0x355420u;
label_355420:
    // 0x355420: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x355420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_355424:
    // 0x355424: 0x2862ff01  slti        $v0, $v1, -0xFF
    ctx->pc = 0x355424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967041) ? 1 : 0);
label_355428:
    // 0x355428: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
label_35542c:
    if (ctx->pc == 0x35542Cu) {
        ctx->pc = 0x355430u;
        goto label_355430;
    }
    ctx->pc = 0x355428u;
    {
        const bool branch_taken_0x355428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355428) {
            ctx->pc = 0x3555D4u;
            goto label_3555d4;
        }
    }
    ctx->pc = 0x355430u;
label_355430:
    // 0x355430: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x355430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_355434:
    // 0x355434: 0x2862fff8  slti        $v0, $v1, -0x8
    ctx->pc = 0x355434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967288) ? 1 : 0);
label_355438:
    // 0x355438: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
label_35543c:
    if (ctx->pc == 0x35543Cu) {
        ctx->pc = 0x355440u;
        goto label_355440;
    }
    ctx->pc = 0x355438u;
    {
        const bool branch_taken_0x355438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355438) {
            ctx->pc = 0x3555D4u;
            goto label_3555d4;
        }
    }
    ctx->pc = 0x355440u;
label_355440:
    // 0x355440: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x355440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_355444:
    // 0x355444: 0x2862fff6  slti        $v0, $v1, -0xA
    ctx->pc = 0x355444u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967286) ? 1 : 0);
label_355448:
    // 0x355448: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
label_35544c:
    if (ctx->pc == 0x35544Cu) {
        ctx->pc = 0x355450u;
        goto label_355450;
    }
    ctx->pc = 0x355448u;
    {
        const bool branch_taken_0x355448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355448) {
            ctx->pc = 0x3555D4u;
            goto label_3555d4;
        }
    }
    ctx->pc = 0x355450u;
label_355450:
    // 0x355450: 0x1000000b  b           . + 4 + (0xB << 2)
label_355454:
    if (ctx->pc == 0x355454u) {
        ctx->pc = 0x355458u;
        goto label_355458;
    }
    ctx->pc = 0x355450u;
    {
        const bool branch_taken_0x355450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355450) {
            ctx->pc = 0x355480u;
            goto label_355480;
        }
    }
    ctx->pc = 0x355458u;
label_355458:
    // 0x355458: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x355458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_35545c:
    // 0x35545c: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x35545cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_355460:
    // 0x355460: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_355464:
    if (ctx->pc == 0x355464u) {
        ctx->pc = 0x355468u;
        goto label_355468;
    }
    ctx->pc = 0x355460u;
    {
        const bool branch_taken_0x355460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x355460) {
            ctx->pc = 0x355480u;
            goto label_355480;
        }
    }
    ctx->pc = 0x355468u;
label_355468:
    // 0x355468: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x355468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
label_35546c:
    // 0x35546c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x35546cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_355470:
    // 0x355470: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
label_355474:
    if (ctx->pc == 0x355474u) {
        ctx->pc = 0x355478u;
        goto label_355478;
    }
    ctx->pc = 0x355470u;
    {
        const bool branch_taken_0x355470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355470) {
            ctx->pc = 0x3555D4u;
            goto label_3555d4;
        }
    }
    ctx->pc = 0x355478u;
label_355478:
    // 0x355478: 0x1000002d  b           . + 4 + (0x2D << 2)
label_35547c:
    if (ctx->pc == 0x35547Cu) {
        ctx->pc = 0x355480u;
        goto label_355480;
    }
    ctx->pc = 0x355478u;
    {
        const bool branch_taken_0x355478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355478) {
            ctx->pc = 0x355530u;
            goto label_355530;
        }
    }
    ctx->pc = 0x355480u;
label_355480:
    // 0x355480: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x355480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_355484:
    // 0x355484: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x355484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_355488:
    // 0x355488: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x355488u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
label_35548c:
    // 0x35548c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x35548cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_355490:
    // 0x355490: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x355490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_355494:
    // 0x355494: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_355498:
    if (ctx->pc == 0x355498u) {
        ctx->pc = 0x35549Cu;
        goto label_35549c;
    }
    ctx->pc = 0x355494u;
    {
        const bool branch_taken_0x355494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x355494) {
            ctx->pc = 0x3554C8u;
            goto label_3554c8;
        }
    }
    ctx->pc = 0x35549Cu;
label_35549c:
    // 0x35549c: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x35549cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_3554a0:
    // 0x3554a0: 0x2862fffe  slti        $v0, $v1, -0x2
    ctx->pc = 0x3554a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967294) ? 1 : 0);
label_3554a4:
    // 0x3554a4: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
label_3554a8:
    if (ctx->pc == 0x3554A8u) {
        ctx->pc = 0x3554ACu;
        goto label_3554ac;
    }
    ctx->pc = 0x3554A4u;
    {
        const bool branch_taken_0x3554a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3554a4) {
            ctx->pc = 0x3555D4u;
            goto label_3555d4;
        }
    }
    ctx->pc = 0x3554ACu;
label_3554ac:
    // 0x3554ac: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x3554acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_3554b0:
    // 0x3554b0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3554b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3554b4:
    // 0x3554b4: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
label_3554b8:
    if (ctx->pc == 0x3554B8u) {
        ctx->pc = 0x3554BCu;
        goto label_3554bc;
    }
    ctx->pc = 0x3554B4u;
    {
        const bool branch_taken_0x3554b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3554b4) {
            ctx->pc = 0x3555D4u;
            goto label_3555d4;
        }
    }
    ctx->pc = 0x3554BCu;
label_3554bc:
    // 0x3554bc: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x3554bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_3554c0:
    // 0x3554c0: 0x4400044  bltz        $v0, . + 4 + (0x44 << 2)
label_3554c4:
    if (ctx->pc == 0x3554C4u) {
        ctx->pc = 0x3554C8u;
        goto label_3554c8;
    }
    ctx->pc = 0x3554C0u;
    {
        const bool branch_taken_0x3554c0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3554c0) {
            ctx->pc = 0x3555D4u;
            goto label_3555d4;
        }
    }
    ctx->pc = 0x3554C8u;
label_3554c8:
    // 0x3554c8: 0xc0d4ffe  jal         func_353FF8
label_3554cc:
    if (ctx->pc == 0x3554CCu) {
        ctx->pc = 0x3554D0u;
        goto label_3554d0;
    }
    ctx->pc = 0x3554C8u;
    SET_GPR_U32(ctx, 31, 0x3554D0u);
    ctx->pc = 0x353FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353FF8u, 0x3554C8u, 0x3554D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3554D0u;
label_3554d0:
    // 0x3554d0: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3554d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_3554d4:
    // 0x3554d4: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x3554d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_3554d8:
    // 0x3554d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3554d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3554dc:
    // 0x3554dc: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_3554e0:
    if (ctx->pc == 0x3554E0u) {
        ctx->pc = 0x3554E4u;
        goto label_3554e4;
    }
    ctx->pc = 0x3554DCu;
    {
        const bool branch_taken_0x3554dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3554dc) {
            ctx->pc = 0x3555D4u;
            goto label_3555d4;
        }
    }
    ctx->pc = 0x3554E4u;
label_3554e4:
    // 0x3554e4: 0x27c30010  addiu       $v1, $fp, 0x10
    ctx->pc = 0x3554e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_3554e8:
    // 0x3554e8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3554e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3554ec:
    // 0x3554ec: 0x24420061  addiu       $v0, $v0, 0x61
    ctx->pc = 0x3554ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 97));
label_3554f0:
    // 0x3554f0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3554f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3554f4:
    // 0x3554f4: 0x2785c740  addiu       $a1, $gp, -0x38C0
    ctx->pc = 0x3554f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294952768));
label_3554f8:
    // 0x3554f8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3554f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3554fc:
    // 0x3554fc: 0x8fc70004  lw          $a3, 0x4($fp)
    ctx->pc = 0x3554fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_355500:
    // 0x355500: 0xc04a368  jal         func_128DA0
label_355504:
    if (ctx->pc == 0x355504u) {
        ctx->pc = 0x355508u;
        goto label_355508;
    }
    ctx->pc = 0x355500u;
    SET_GPR_U32(ctx, 31, 0x355508u);
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x355500u, 0x355508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355508u;
label_355508:
    // 0x355508: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x355508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_35550c:
    // 0x35550c: 0x27c30010  addiu       $v1, $fp, 0x10
    ctx->pc = 0x35550cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_355510:
    // 0x355510: 0x8fc5000c  lw          $a1, 0xC($fp)
    ctx->pc = 0x355510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_355514:
    // 0x355514: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x355514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_355518:
    // 0x355518: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x355518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_35551c:
    // 0x35551c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x35551cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_355520:
    // 0x355520: 0x40f809  jalr        $v0
label_355524:
    if (ctx->pc == 0x355524u) {
        ctx->pc = 0x355528u;
        goto label_355528;
    }
    ctx->pc = 0x355520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x355528u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355520u, 0x355528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x355528u;
label_355528:
    // 0x355528: 0x1000002a  b           . + 4 + (0x2A << 2)
label_35552c:
    if (ctx->pc == 0x35552Cu) {
        ctx->pc = 0x355530u;
        goto label_355530;
    }
    ctx->pc = 0x355528u;
    {
        const bool branch_taken_0x355528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355528) {
            ctx->pc = 0x3555D4u;
            goto label_3555d4;
        }
    }
    ctx->pc = 0x355530u;
label_355530:
    // 0x355530: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x355530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_355534:
    // 0x355534: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x355534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_355538:
    // 0x355538: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x355538u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
label_35553c:
    // 0x35553c: 0x8fc30024  lw          $v1, 0x24($fp)
    ctx->pc = 0x35553cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_355540:
    // 0x355540: 0x2862fff6  slti        $v0, $v1, -0xA
    ctx->pc = 0x355540u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967286) ? 1 : 0);
label_355544:
    // 0x355544: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_355548:
    if (ctx->pc == 0x355548u) {
        ctx->pc = 0x35554Cu;
        goto label_35554c;
    }
    ctx->pc = 0x355544u;
    {
        const bool branch_taken_0x355544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355544) {
            ctx->pc = 0x3555D4u;
            goto label_3555d4;
        }
    }
    ctx->pc = 0x35554Cu;
label_35554c:
    // 0x35554c: 0x8fc30024  lw          $v1, 0x24($fp)
    ctx->pc = 0x35554cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_355550:
    // 0x355550: 0x2862fff8  slti        $v0, $v1, -0x8
    ctx->pc = 0x355550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967288) ? 1 : 0);
label_355554:
    // 0x355554: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_355558:
    if (ctx->pc == 0x355558u) {
        ctx->pc = 0x35555Cu;
        goto label_35555c;
    }
    ctx->pc = 0x355554u;
    {
        const bool branch_taken_0x355554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355554) {
            ctx->pc = 0x355574u;
            goto label_355574;
        }
    }
    ctx->pc = 0x35555Cu;
label_35555c:
    // 0x35555c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35555cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_355560:
    // 0x355560: 0x8fc30024  lw          $v1, 0x24($fp)
    ctx->pc = 0x355560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_355564:
    // 0x355564: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_355568:
    if (ctx->pc == 0x355568u) {
        ctx->pc = 0x35556Cu;
        goto label_35556c;
    }
    ctx->pc = 0x355564u;
    {
        const bool branch_taken_0x355564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x355564) {
            ctx->pc = 0x355574u;
            goto label_355574;
        }
    }
    ctx->pc = 0x35556Cu;
label_35556c:
    // 0x35556c: 0x10000019  b           . + 4 + (0x19 << 2)
label_355570:
    if (ctx->pc == 0x355570u) {
        ctx->pc = 0x355574u;
        goto label_355574;
    }
    ctx->pc = 0x35556Cu;
    {
        const bool branch_taken_0x35556c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35556c) {
            ctx->pc = 0x3555D4u;
            goto label_3555d4;
        }
    }
    ctx->pc = 0x355574u;
label_355574:
    // 0x355574: 0xc0d501c  jal         func_354070
label_355578:
    if (ctx->pc == 0x355578u) {
        ctx->pc = 0x35557Cu;
        goto label_35557c;
    }
    ctx->pc = 0x355574u;
    SET_GPR_U32(ctx, 31, 0x35557Cu);
    ctx->pc = 0x354070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354070u, 0x355574u, 0x35557Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35557Cu;
label_35557c:
    // 0x35557c: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x35557cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_355580:
    // 0x355580: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x355580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_355584:
    // 0x355584: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x355584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_355588:
    // 0x355588: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_35558c:
    if (ctx->pc == 0x35558Cu) {
        ctx->pc = 0x355590u;
        goto label_355590;
    }
    ctx->pc = 0x355588u;
    {
        const bool branch_taken_0x355588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355588) {
            ctx->pc = 0x3555D4u;
            goto label_3555d4;
        }
    }
    ctx->pc = 0x355590u;
label_355590:
    // 0x355590: 0x27c30010  addiu       $v1, $fp, 0x10
    ctx->pc = 0x355590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_355594:
    // 0x355594: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x355594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_355598:
    // 0x355598: 0x24420061  addiu       $v0, $v0, 0x61
    ctx->pc = 0x355598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 97));
label_35559c:
    // 0x35559c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x35559cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3555a0:
    // 0x3555a0: 0x2785c740  addiu       $a1, $gp, -0x38C0
    ctx->pc = 0x3555a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294952768));
label_3555a4:
    // 0x3555a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3555a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3555a8:
    // 0x3555a8: 0x8fc70004  lw          $a3, 0x4($fp)
    ctx->pc = 0x3555a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_3555ac:
    // 0x3555ac: 0xc04a368  jal         func_128DA0
label_3555b0:
    if (ctx->pc == 0x3555B0u) {
        ctx->pc = 0x3555B4u;
        goto label_3555b4;
    }
    ctx->pc = 0x3555ACu;
    SET_GPR_U32(ctx, 31, 0x3555B4u);
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x3555ACu, 0x3555B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3555B4u;
label_3555b4:
    // 0x3555b4: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x3555b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_3555b8:
    // 0x3555b8: 0x27c30010  addiu       $v1, $fp, 0x10
    ctx->pc = 0x3555b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_3555bc:
    // 0x3555bc: 0x8fc5000c  lw          $a1, 0xC($fp)
    ctx->pc = 0x3555bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_3555c0:
    // 0x3555c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3555c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3555c4:
    // 0x3555c4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3555c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3555c8:
    // 0x3555c8: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x3555c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3555cc:
    // 0x3555cc: 0x40f809  jalr        $v0
label_3555d0:
    if (ctx->pc == 0x3555D0u) {
        ctx->pc = 0x3555D4u;
        goto label_3555d4;
    }
    ctx->pc = 0x3555CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3555D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3555CCu, 0x3555D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3555D4u;
label_3555d4:
    // 0x3555d4: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3555d4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3555d8:
    // 0x3555d8: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x3555d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3555dc:
    // 0x3555dc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3555dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3555e0:
    // 0x3555e0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3555e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3555e4:
    // 0x3555e4: 0x3e00008  jr          $ra
label_3555e8:
    if (ctx->pc == 0x3555E8u) {
        ctx->pc = 0x3555ECu;
        goto label_fallthrough_0x3555e4;
    }
    ctx->pc = 0x3555E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3555E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3555e4:
    ctx->pc = 0x3555ECu;
}
