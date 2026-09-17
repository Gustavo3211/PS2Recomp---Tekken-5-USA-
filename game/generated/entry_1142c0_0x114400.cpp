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

// Function: entry_1142c0
// Address: 0x1142c0 - 0x114400
void entry_1142c0_0x114400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1142c0_0x114400");
#endif

    switch (ctx->pc) {
        case 0x1142e4u: goto label_1142e4;
        case 0x1142fcu: goto label_1142fc;
        case 0x114304u: goto label_114304;
        case 0x114314u: goto label_114314;
        case 0x114328u: goto label_114328;
        case 0x114338u: goto label_114338;
        case 0x114378u: goto label_114378;
        case 0x1143c0u: goto label_1143c0;
        case 0x1143d0u: goto label_1143d0;
        case 0x1143e4u: goto label_1143e4;
        default: break;
    }

    ctx->pc = 0x1142c0u;

    // 0x1142c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1142c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1142c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1142c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1142c8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1142c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1142cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1142ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1142d0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1142d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1142d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1142d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1142d8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1142d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1142dc: 0xc044fb2  jal         func_113EC8
    ctx->pc = 0x1142DCu;
    SET_GPR_U32(ctx, 31, 0x1142E4u);
    ctx->pc = 0x1142E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1142DCu;
    // 0x1142e0: 0x240400fe  addiu       $a0, $zero, 0xFE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EC8u, 0x1142DCu, 0x1142E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1142E4u;
label_1142e4:
    // 0x1142e4: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x1142e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x1142e8: 0x8c621194  lw          $v0, 0x1194($v1)
    ctx->pc = 0x1142e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x131194u));
    // 0x1142ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1142ECu;
    {
        const bool branch_taken_0x1142ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1142ec) {
            ctx->pc = 0x1142FCu;
            goto label_1142fc;
        }
    }
    ctx->pc = 0x1142F4u;
    // 0x1142f4: 0xc044ffc  jal         func_113FF0
    ctx->pc = 0x1142F4u;
    SET_GPR_U32(ctx, 31, 0x1142FCu);
    ctx->pc = 0x113FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113FF0u, 0x1142F4u, 0x1142FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1142FCu;
label_1142fc:
    // 0x1142fc: 0xc04507e  jal         func_1141F8
    ctx->pc = 0x1142FCu;
    SET_GPR_U32(ctx, 31, 0x114304u);
    ctx->pc = 0x1141F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1141F8u, 0x1142FCu, 0x114304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114304u;
label_114304:
    // 0x114304: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x114304u;
    {
        const bool branch_taken_0x114304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114304) {
            ctx->pc = 0x114320u;
            goto label_114320;
        }
    }
    ctx->pc = 0x11430Cu;
    // 0x11430c: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x11430Cu;
    SET_GPR_U32(ctx, 31, 0x114314u);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x11430Cu, 0x114314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114314u;
label_114314:
    // 0x114314: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x114314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x114318: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x114318u;
    {
        const bool branch_taken_0x114318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114318u;
        // 0x11431c: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114318) {
            ctx->pc = 0x1143E8u;
            goto label_1143e8;
        }
    }
    ctx->pc = 0x114320u;
label_114320:
    // 0x114320: 0xc044e14  jal         func_113850
    ctx->pc = 0x114320u;
    SET_GPR_U32(ctx, 31, 0x114328u);
    ctx->pc = 0x113850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113850u, 0x114320u, 0x114328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114328u;
label_114328:
    // 0x114328: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x114328u;
    {
        const bool branch_taken_0x114328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114328u;
        // 0x11432c: 0x32023fff  andi        $v0, $s0, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114328) {
            ctx->pc = 0x114340u;
            goto label_114340;
        }
    }
    ctx->pc = 0x114330u;
    // 0x114330: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x114330u;
    SET_GPR_U32(ctx, 31, 0x114338u);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x114330u, 0x114338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114338u;
label_114338:
    // 0x114338: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x114338u;
    {
        const bool branch_taken_0x114338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114338u;
        // 0x11433c: 0x2402fff0  addiu       $v0, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114338) {
            ctx->pc = 0x1143E8u;
            goto label_1143e8;
        }
    }
    ctx->pc = 0x114340u;
label_114340:
    // 0x114340: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x114340u;
    {
        const bool branch_taken_0x114340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114340) {
            ctx->pc = 0x114370u;
            goto label_114370;
        }
    }
    ctx->pc = 0x114348u;
    // 0x114348: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x114348u;
    {
        const bool branch_taken_0x114348 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114348u;
        // 0x11434c: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114348) {
            ctx->pc = 0x114370u;
            goto label_114370;
        }
    }
    ctx->pc = 0x114350u;
    // 0x114350: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x114350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x114354: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x114354u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x114358: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x114358u;
    {
        const bool branch_taken_0x114358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114358) {
            ctx->pc = 0x114370u;
            goto label_114370;
        }
    }
    ctx->pc = 0x114360u;
    // 0x114360: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x114360u;
    {
        const bool branch_taken_0x114360 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x114364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114360u;
        // 0x114364: 0x2e220021  sltiu       $v0, $s1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114360) {
            ctx->pc = 0x114370u;
            goto label_114370;
        }
    }
    ctx->pc = 0x114368u;
    // 0x114368: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x114368u;
    {
        const bool branch_taken_0x114368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114368u;
        // 0x11436c: 0x3c03001f  lui         $v1, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114368) {
            ctx->pc = 0x114380u;
            goto label_114380;
        }
    }
    ctx->pc = 0x114370u;
label_114370:
    // 0x114370: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x114370u;
    SET_GPR_U32(ctx, 31, 0x114378u);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x114370u, 0x114378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114378u;
label_114378:
    // 0x114378: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x114378u;
    {
        const bool branch_taken_0x114378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114378u;
        // 0x11437c: 0x2402ffea  addiu       $v0, $zero, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114378) {
            ctx->pc = 0x1143E8u;
            goto label_1143e8;
        }
    }
    ctx->pc = 0x114380u;
label_114380:
    // 0x114380: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x114380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x114384: 0x2467a340  addiu       $a3, $v1, -0x5CC0
    ctx->pc = 0x114384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943552));
    // 0x114388: 0xac70a340  sw          $s0, -0x5CC0($v1)
    ctx->pc = 0x114388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943552), GPR_U32(ctx, 16));
    // 0x11438c: 0xacf10004  sw          $s1, 0x4($a3)
    ctx->pc = 0x11438cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 17));
    // 0x114390: 0x2452af80  addiu       $s2, $v0, -0x5080
    ctx->pc = 0x114390u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946688));
    // 0x114394: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x114394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x114398: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x114398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11439c: 0x2484ba40  addiu       $a0, $a0, -0x45C0
    ctx->pc = 0x11439cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949440));
    // 0x1143a0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1143a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1143a4: 0x240500fe  addiu       $a1, $zero, 0xFE
    ctx->pc = 0x1143a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x1143a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1143a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1143ac: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1143acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1143b0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1143b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1143b4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1143b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1143b8: 0xc044e56  jal         func_113958
    ctx->pc = 0x1143B8u;
    SET_GPR_U32(ctx, 31, 0x1143C0u);
    ctx->pc = 0x1143BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1143B8u;
    // 0x1143bc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113958u, 0x1143B8u, 0x1143C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1143C0u;
label_1143c0:
    // 0x1143c0: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1143C0u;
    {
        const bool branch_taken_0x1143c0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1143C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143C0u;
        // 0x1143c4: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1143c0) {
            ctx->pc = 0x1143D8u;
            goto label_1143d8;
        }
    }
    ctx->pc = 0x1143C8u;
    // 0x1143c8: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x1143C8u;
    SET_GPR_U32(ctx, 31, 0x1143D0u);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x1143C8u, 0x1143D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1143D0u;
label_1143d0:
    // 0x1143d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1143D0u;
    {
        const bool branch_taken_0x1143d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1143D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143D0u;
        // 0x1143d4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1143d0) {
            ctx->pc = 0x1143E8u;
            goto label_1143e8;
        }
    }
    ctx->pc = 0x1143D8u;
label_1143d8:
    // 0x1143d8: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x1143d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1143dc: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x1143DCu;
    SET_GPR_U32(ctx, 31, 0x1143E4u);
    ctx->pc = 0x1143E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1143DCu;
    // 0x1143e0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x1143DCu, 0x1143E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1143E4u;
label_1143e4:
    // 0x1143e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1143e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1143e8:
    // 0x1143e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1143e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1143ec: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1143ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1143f0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1143f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1143f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1143f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1143f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1143F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1143FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143F8u;
        // 0x1143fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1143F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114400u;
}
