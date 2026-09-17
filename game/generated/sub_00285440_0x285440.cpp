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

// Function: sub_00285440
// Address: 0x285440 - 0x2855a8
void sub_00285440_0x285440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285440_0x285440");
#endif

    switch (ctx->pc) {
        case 0x285440u: goto label_285440;
        case 0x285444u: goto label_285444;
        case 0x285448u: goto label_285448;
        case 0x28544cu: goto label_28544c;
        case 0x285450u: goto label_285450;
        case 0x285454u: goto label_285454;
        case 0x285458u: goto label_285458;
        case 0x28545cu: goto label_28545c;
        case 0x285460u: goto label_285460;
        case 0x285464u: goto label_285464;
        case 0x285468u: goto label_285468;
        case 0x28546cu: goto label_28546c;
        case 0x285470u: goto label_285470;
        case 0x285474u: goto label_285474;
        case 0x285478u: goto label_285478;
        case 0x28547cu: goto label_28547c;
        case 0x285480u: goto label_285480;
        case 0x285484u: goto label_285484;
        case 0x285488u: goto label_285488;
        case 0x28548cu: goto label_28548c;
        case 0x285490u: goto label_285490;
        case 0x285494u: goto label_285494;
        case 0x285498u: goto label_285498;
        case 0x28549cu: goto label_28549c;
        case 0x2854a0u: goto label_2854a0;
        case 0x2854a4u: goto label_2854a4;
        case 0x2854a8u: goto label_2854a8;
        case 0x2854acu: goto label_2854ac;
        case 0x2854b0u: goto label_2854b0;
        case 0x2854b4u: goto label_2854b4;
        case 0x2854b8u: goto label_2854b8;
        case 0x2854bcu: goto label_2854bc;
        case 0x2854c0u: goto label_2854c0;
        case 0x2854c4u: goto label_2854c4;
        case 0x2854c8u: goto label_2854c8;
        case 0x2854ccu: goto label_2854cc;
        case 0x2854d0u: goto label_2854d0;
        case 0x2854d4u: goto label_2854d4;
        case 0x2854d8u: goto label_2854d8;
        case 0x2854dcu: goto label_2854dc;
        case 0x2854e0u: goto label_2854e0;
        case 0x2854e4u: goto label_2854e4;
        case 0x2854e8u: goto label_2854e8;
        case 0x2854ecu: goto label_2854ec;
        case 0x2854f0u: goto label_2854f0;
        case 0x2854f4u: goto label_2854f4;
        case 0x2854f8u: goto label_2854f8;
        case 0x2854fcu: goto label_2854fc;
        case 0x285500u: goto label_285500;
        case 0x285504u: goto label_285504;
        case 0x285508u: goto label_285508;
        case 0x28550cu: goto label_28550c;
        case 0x285510u: goto label_285510;
        case 0x285514u: goto label_285514;
        case 0x285518u: goto label_285518;
        case 0x28551cu: goto label_28551c;
        case 0x285520u: goto label_285520;
        case 0x285524u: goto label_285524;
        case 0x285528u: goto label_285528;
        case 0x28552cu: goto label_28552c;
        case 0x285530u: goto label_285530;
        case 0x285534u: goto label_285534;
        case 0x285538u: goto label_285538;
        case 0x28553cu: goto label_28553c;
        case 0x285540u: goto label_285540;
        case 0x285544u: goto label_285544;
        case 0x285548u: goto label_285548;
        case 0x28554cu: goto label_28554c;
        case 0x285550u: goto label_285550;
        case 0x285554u: goto label_285554;
        case 0x285558u: goto label_285558;
        case 0x28555cu: goto label_28555c;
        case 0x285560u: goto label_285560;
        case 0x285564u: goto label_285564;
        case 0x285568u: goto label_285568;
        case 0x28556cu: goto label_28556c;
        case 0x285570u: goto label_285570;
        case 0x285574u: goto label_285574;
        case 0x285578u: goto label_285578;
        case 0x28557cu: goto label_28557c;
        case 0x285580u: goto label_285580;
        case 0x285584u: goto label_285584;
        case 0x285588u: goto label_285588;
        case 0x28558cu: goto label_28558c;
        case 0x285590u: goto label_285590;
        case 0x285594u: goto label_285594;
        case 0x285598u: goto label_285598;
        case 0x28559cu: goto label_28559c;
        case 0x2855a0u: goto label_2855a0;
        case 0x2855a4u: goto label_2855a4;
        default: break;
    }

    ctx->pc = 0x285440u;

label_285440:
    // 0x285440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x285440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_285444:
    // 0x285444: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x285444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_285448:
    // 0x285448: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x285448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28544c:
    // 0x28544c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28544cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_285450:
    // 0x285450: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x285450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_285454:
    // 0x285454: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
label_285458:
    if (ctx->pc == 0x285458u) {
        ctx->pc = 0x285458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285454u;
        // 0x285458: 0x28620008  slti        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28545Cu;
        goto label_28545c;
    }
    ctx->pc = 0x285454u;
    {
        const bool branch_taken_0x285454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x285458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285454u;
        // 0x285458: 0x28620008  slti        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285454) {
            ctx->pc = 0x285594u;
            goto label_285594;
        }
    }
    ctx->pc = 0x28545Cu;
label_28545c:
    // 0x28545c: 0x5040004e  beql        $v0, $zero, . + 4 + (0x4E << 2)
label_285460:
    if (ctx->pc == 0x285460u) {
        ctx->pc = 0x285460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28545Cu;
        // 0x285460: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285464u;
        goto label_285464;
    }
    ctx->pc = 0x28545Cu;
    {
        const bool branch_taken_0x28545c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28545c) {
            ctx->pc = 0x285460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28545Cu;
            // 0x285460: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285598u;
            goto label_285598;
        }
    }
    ctx->pc = 0x285464u;
label_285464:
    // 0x285464: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x285464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_285468:
    // 0x285468: 0x10c0004a  beqz        $a2, . + 4 + (0x4A << 2)
label_28546c:
    if (ctx->pc == 0x28546Cu) {
        ctx->pc = 0x28546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285468u;
        // 0x28546c: 0x28c20009  slti        $v0, $a2, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x285470u;
        goto label_285470;
    }
    ctx->pc = 0x285468u;
    {
        const bool branch_taken_0x285468 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x28546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285468u;
        // 0x28546c: 0x28c20009  slti        $v0, $a2, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285468) {
            ctx->pc = 0x285594u;
            goto label_285594;
        }
    }
    ctx->pc = 0x285470u;
label_285470:
    // 0x285470: 0x50400049  beql        $v0, $zero, . + 4 + (0x49 << 2)
label_285474:
    if (ctx->pc == 0x285474u) {
        ctx->pc = 0x285474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285470u;
        // 0x285474: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285478u;
        goto label_285478;
    }
    ctx->pc = 0x285470u;
    {
        const bool branch_taken_0x285470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x285470) {
            ctx->pc = 0x285474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285470u;
            // 0x285474: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285598u;
            goto label_285598;
        }
    }
    ctx->pc = 0x285478u;
label_285478:
    // 0x285478: 0x2462fffc  addiu       $v0, $v1, -0x4
    ctx->pc = 0x285478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_28547c:
    // 0x28547c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x28547cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_285480:
    // 0x285480: 0x54400045  bnel        $v0, $zero, . + 4 + (0x45 << 2)
label_285484:
    if (ctx->pc == 0x285484u) {
        ctx->pc = 0x285484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285480u;
        // 0x285484: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285488u;
        goto label_285488;
    }
    ctx->pc = 0x285480u;
    {
        const bool branch_taken_0x285480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285480) {
            ctx->pc = 0x285484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285480u;
            // 0x285484: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285598u;
            goto label_285598;
        }
    }
    ctx->pc = 0x285488u;
label_285488:
    // 0x285488: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x285488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_28548c:
    // 0x28548c: 0x50a00042  beql        $a1, $zero, . + 4 + (0x42 << 2)
label_285490:
    if (ctx->pc == 0x285490u) {
        ctx->pc = 0x285490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28548Cu;
        // 0x285490: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285494u;
        goto label_285494;
    }
    ctx->pc = 0x28548Cu;
    {
        const bool branch_taken_0x28548c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x28548c) {
            ctx->pc = 0x285490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28548Cu;
            // 0x285490: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285598u;
            goto label_285598;
        }
    }
    ctx->pc = 0x285494u;
label_285494:
    // 0x285494: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x285494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_285498:
    // 0x285498: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_28549c:
    if (ctx->pc == 0x28549Cu) {
        ctx->pc = 0x28549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285498u;
        // 0x28549c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2854A0u;
        goto label_2854a0;
    }
    ctx->pc = 0x285498u;
    {
        const bool branch_taken_0x285498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285498u;
        // 0x28549c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285498) {
            ctx->pc = 0x285594u;
            goto label_285594;
        }
    }
    ctx->pc = 0x2854A0u;
label_2854a0:
    // 0x2854a0: 0x54620021  bnel        $v1, $v0, . + 4 + (0x21 << 2)
label_2854a4:
    if (ctx->pc == 0x2854A4u) {
        ctx->pc = 0x2854A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854A0u;
        // 0x2854a4: 0x8ca30068  lw          $v1, 0x68($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2854A8u;
        goto label_2854a8;
    }
    ctx->pc = 0x2854A0u;
    {
        const bool branch_taken_0x2854a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2854a0) {
            ctx->pc = 0x2854A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2854A0u;
            // 0x2854a4: 0x8ca30068  lw          $v1, 0x68($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285528u;
            goto label_285528;
        }
    }
    ctx->pc = 0x2854A8u;
label_2854a8:
    // 0x2854a8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2854a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2854ac:
    // 0x2854ac: 0x54c20006  bnel        $a2, $v0, . + 4 + (0x6 << 2)
label_2854b0:
    if (ctx->pc == 0x2854B0u) {
        ctx->pc = 0x2854B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854ACu;
        // 0x2854b0: 0x8f82b2d8  lw          $v0, -0x4D28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2854B4u;
        goto label_2854b4;
    }
    ctx->pc = 0x2854ACu;
    {
        const bool branch_taken_0x2854ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x2854ac) {
            ctx->pc = 0x2854B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2854ACu;
            // 0x2854b0: 0x8f82b2d8  lw          $v0, -0x4D28($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2854C8u;
            goto label_2854c8;
        }
    }
    ctx->pc = 0x2854B4u;
label_2854b4:
    // 0x2854b4: 0xc0a14ae  jal         func_2852B8
label_2854b8:
    if (ctx->pc == 0x2854B8u) {
        ctx->pc = 0x2854BCu;
        goto label_2854bc;
    }
    ctx->pc = 0x2854B4u;
    SET_GPR_U32(ctx, 31, 0x2854BCu);
    ctx->pc = 0x2852B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2852B8u, 0x2854B4u, 0x2854BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2854BCu;
label_2854bc:
    // 0x2854bc: 0x10000019  b           . + 4 + (0x19 << 2)
label_2854c0:
    if (ctx->pc == 0x2854C0u) {
        ctx->pc = 0x2854C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854BCu;
        // 0x2854c0: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2854C4u;
        goto label_2854c4;
    }
    ctx->pc = 0x2854BCu;
    {
        const bool branch_taken_0x2854bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2854C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854BCu;
        // 0x2854c0: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2854bc) {
            ctx->pc = 0x285524u;
            goto label_285524;
        }
    }
    ctx->pc = 0x2854C4u;
label_2854c4:
    // 0x2854c4: 0x0  nop
    ctx->pc = 0x2854c4u;
    // NOP
label_2854c8:
    // 0x2854c8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2854cc:
    if (ctx->pc == 0x2854CCu) {
        ctx->pc = 0x2854CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854C8u;
        // 0x2854cc: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2854D0u;
        goto label_2854d0;
    }
    ctx->pc = 0x2854C8u;
    {
        const bool branch_taken_0x2854c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2854CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854C8u;
        // 0x2854cc: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2854c8) {
            ctx->pc = 0x2854FCu;
            goto label_2854fc;
        }
    }
    ctx->pc = 0x2854D0u;
label_2854d0:
    // 0x2854d0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2854d4:
    if (ctx->pc == 0x2854D4u) {
        ctx->pc = 0x2854D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854D0u;
        // 0x2854d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2854D8u;
        goto label_2854d8;
    }
    ctx->pc = 0x2854D0u;
    {
        const bool branch_taken_0x2854d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2854D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854D0u;
        // 0x2854d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2854d0) {
            ctx->pc = 0x2854DCu;
            goto label_2854dc;
        }
    }
    ctx->pc = 0x2854D8u;
label_2854d8:
    // 0x2854d8: 0xaca20048  sw          $v0, 0x48($a1)
    ctx->pc = 0x2854d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 2));
label_2854dc:
    // 0x2854dc: 0x8f82b2d8  lw          $v0, -0x4D28($gp)
    ctx->pc = 0x2854dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947544)));
label_2854e0:
    // 0x2854e0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2854e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2854e4:
    // 0x2854e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2854e8:
    if (ctx->pc == 0x2854E8u) {
        ctx->pc = 0x2854E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854E4u;
        // 0x2854e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2854ECu;
        goto label_2854ec;
    }
    ctx->pc = 0x2854E4u;
    {
        const bool branch_taken_0x2854e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2854E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854E4u;
        // 0x2854e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2854e4) {
            ctx->pc = 0x2854F4u;
            goto label_2854f4;
        }
    }
    ctx->pc = 0x2854ECu;
label_2854ec:
    // 0x2854ec: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2854ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2854f0:
    // 0x2854f0: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x2854f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
label_2854f4:
    // 0x2854f4: 0xaf80b2d8  sw          $zero, -0x4D28($gp)
    ctx->pc = 0x2854f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947544), GPR_U32(ctx, 0));
label_2854f8:
    // 0x2854f8: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x2854f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2854fc:
    // 0x2854fc: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x2854fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_285500:
    // 0x285500: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_285504:
    if (ctx->pc == 0x285504u) {
        ctx->pc = 0x285504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285500u;
        // 0x285504: 0x8ca30068  lw          $v1, 0x68($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285508u;
        goto label_285508;
    }
    ctx->pc = 0x285500u;
    {
        const bool branch_taken_0x285500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285500) {
            ctx->pc = 0x285504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285500u;
            // 0x285504: 0x8ca30068  lw          $v1, 0x68($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285528u;
            goto label_285528;
        }
    }
    ctx->pc = 0x285508u;
label_285508:
    // 0x285508: 0x8ca20068  lw          $v0, 0x68($a1)
    ctx->pc = 0x285508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
label_28550c:
    // 0x28550c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x28550cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_285510:
    // 0x285510: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x285510u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_285514:
    // 0x285514: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x285514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_285518:
    // 0x285518: 0x60f809  jalr        $v1
label_28551c:
    if (ctx->pc == 0x28551Cu) {
        ctx->pc = 0x28551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285518u;
        // 0x28551c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285520u;
        goto label_285520;
    }
    ctx->pc = 0x285518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x285520u);
        ctx->pc = 0x28551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285518u;
        // 0x28551c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285518u, 0x285520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285520u;
label_285520:
    // 0x285520: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x285520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_285524:
    // 0x285524: 0x8ca30068  lw          $v1, 0x68($a1)
    ctx->pc = 0x285524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
label_285528:
    // 0x285528: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x285528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_28552c:
    // 0x28552c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x28552cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_285530:
    // 0x285530: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x285530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_285534:
    // 0x285534: 0x40f809  jalr        $v0
label_285538:
    if (ctx->pc == 0x285538u) {
        ctx->pc = 0x285538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285534u;
        // 0x285538: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28553Cu;
        goto label_28553c;
    }
    ctx->pc = 0x285534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28553Cu);
        ctx->pc = 0x285538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285534u;
        // 0x285538: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285534u, 0x28553Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28553Cu;
label_28553c:
    // 0x28553c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28553cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285540:
    // 0x285540: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x285540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_285544:
    // 0x285544: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_285548:
    if (ctx->pc == 0x285548u) {
        ctx->pc = 0x285548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285544u;
        // 0x285548: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28554Cu;
        goto label_28554c;
    }
    ctx->pc = 0x285544u;
    {
        const bool branch_taken_0x285544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x285544) {
            ctx->pc = 0x285548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285544u;
            // 0x285548: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285558u;
            goto label_285558;
        }
    }
    ctx->pc = 0x28554Cu;
label_28554c:
    // 0x28554c: 0x10000009  b           . + 4 + (0x9 << 2)
label_285550:
    if (ctx->pc == 0x285550u) {
        ctx->pc = 0x285550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28554Cu;
        // 0x285550: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285554u;
        goto label_285554;
    }
    ctx->pc = 0x28554Cu;
    {
        const bool branch_taken_0x28554c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28554Cu;
        // 0x285550: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28554c) {
            ctx->pc = 0x285574u;
            goto label_285574;
        }
    }
    ctx->pc = 0x285554u;
label_285554:
    // 0x285554: 0x0  nop
    ctx->pc = 0x285554u;
    // NOP
label_285558:
    // 0x285558: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_28555c:
    if (ctx->pc == 0x28555Cu) {
        ctx->pc = 0x28555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285558u;
        // 0x28555c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285560u;
        goto label_285560;
    }
    ctx->pc = 0x285558u;
    {
        const bool branch_taken_0x285558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x285558) {
            ctx->pc = 0x28555Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285558u;
            // 0x28555c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285568u;
            goto label_285568;
        }
    }
    ctx->pc = 0x285560u;
label_285560:
    // 0x285560: 0x10000004  b           . + 4 + (0x4 << 2)
label_285564:
    if (ctx->pc == 0x285564u) {
        ctx->pc = 0x285564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285560u;
        // 0x285564: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285568u;
        goto label_285568;
    }
    ctx->pc = 0x285560u;
    {
        const bool branch_taken_0x285560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285560u;
        // 0x285564: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285560) {
            ctx->pc = 0x285574u;
            goto label_285574;
        }
    }
    ctx->pc = 0x285568u;
label_285568:
    // 0x285568: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_28556c:
    if (ctx->pc == 0x28556Cu) {
        ctx->pc = 0x28556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285568u;
        // 0x28556c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285570u;
        goto label_285570;
    }
    ctx->pc = 0x285568u;
    {
        const bool branch_taken_0x285568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x285568) {
            ctx->pc = 0x28556Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285568u;
            // 0x28556c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285598u;
            goto label_285598;
        }
    }
    ctx->pc = 0x285570u;
label_285570:
    // 0x285570: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x285570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_285574:
    // 0x285574: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x285574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_285578:
    // 0x285578: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x285578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_28557c:
    // 0x28557c: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x28557cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
label_285580:
    // 0x285580: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x285580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
label_285584:
    // 0x285584: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x285584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_285588:
    // 0x285588: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x285588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_28558c:
    // 0x28558c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x28558cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_285590:
    // 0x285590: 0xac830064  sw          $v1, 0x64($a0)
    ctx->pc = 0x285590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 3));
label_285594:
    // 0x285594: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x285594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_285598:
    // 0x285598: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x285598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_28559c:
    // 0x28559c: 0x3e00008  jr          $ra
label_2855a0:
    if (ctx->pc == 0x2855A0u) {
        ctx->pc = 0x2855A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28559Cu;
        // 0x2855a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2855A4u;
        goto label_2855a4;
    }
    ctx->pc = 0x28559Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2855A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28559Cu;
        // 0x2855a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28559Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2855A4u;
label_2855a4:
    // 0x2855a4: 0x0  nop
    ctx->pc = 0x2855a4u;
    // NOP
    ctx->pc = 0x2855a8u;
}
