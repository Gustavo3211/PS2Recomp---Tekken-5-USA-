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

// Function: entry_1153f0
// Address: 0x1153f0 - 0x1155d8
void entry_1153f0_0x1155d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1153f0_0x1155d8");
#endif

    switch (ctx->pc) {
        case 0x115438u: goto label_115438;
        case 0x115444u: goto label_115444;
        case 0x11545cu: goto label_11545c;
        case 0x115478u: goto label_115478;
        case 0x115498u: goto label_115498;
        case 0x1154bcu: goto label_1154bc;
        case 0x1154f0u: goto label_1154f0;
        case 0x11551cu: goto label_11551c;
        case 0x115554u: goto label_115554;
        case 0x115564u: goto label_115564;
        case 0x11556cu: goto label_11556c;
        case 0x115580u: goto label_115580;
        case 0x115590u: goto label_115590;
        case 0x1155a0u: goto label_1155a0;
        case 0x1155a8u: goto label_1155a8;
        default: break;
    }

    ctx->pc = 0x1153f0u;

    // 0x1153f0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1153f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1153f4: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1153f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1153f8: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1153f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1153fc: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1153fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115400: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x115400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x115404: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x115404u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115408: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x115408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x11540c: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x11540cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115410: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x115410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x115414: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x115414u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115418: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x115418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x11541c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x11541cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115420: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x115420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x115424: 0x3c16001f  lui         $s6, 0x1F
    ctx->pc = 0x115424u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)31 << 16));
    // 0x115428: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x115428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x11542c: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x11542cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x115430: 0xc044e92  jal         func_113A48
    ctx->pc = 0x115430u;
    SET_GPR_U32(ctx, 31, 0x115438u);
    ctx->pc = 0x115434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115430u;
    // 0x115434: 0x26d1a340  addiu       $s1, $s6, -0x5CC0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294943552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113A48u, 0x115430u, 0x115438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115438u;
label_115438:
    // 0x115438: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x115438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11543c: 0xc044fb2  jal         func_113EC8
    ctx->pc = 0x11543Cu;
    SET_GPR_U32(ctx, 31, 0x115444u);
    ctx->pc = 0x115440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11543Cu;
    // 0x115440: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EC8u, 0x11543Cu, 0x115444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115444u;
label_115444:
    // 0x115444: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x115444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x115448: 0x8c431194  lw          $v1, 0x1194($v0)
    ctx->pc = 0x115448u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x131194u));
    // 0x11544c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11544Cu;
    {
        const bool branch_taken_0x11544c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11544c) {
            ctx->pc = 0x11545Cu;
            goto label_11545c;
        }
    }
    ctx->pc = 0x115454u;
    // 0x115454: 0xc044ffc  jal         func_113FF0
    ctx->pc = 0x115454u;
    SET_GPR_U32(ctx, 31, 0x11545Cu);
    ctx->pc = 0x113FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113FF0u, 0x115454u, 0x11545Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11545Cu;
label_11545c:
    // 0x11545c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x11545Cu;
    {
        const bool branch_taken_0x11545c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x11545c) {
            ctx->pc = 0x115470u;
            goto label_115470;
        }
    }
    ctx->pc = 0x115464u;
    // 0x115464: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x115464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x115468: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x115468u;
    {
        const bool branch_taken_0x115468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115468u;
        // 0x11546c: 0x2e620401  sltiu       $v0, $s3, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115468) {
            ctx->pc = 0x115480u;
            goto label_115480;
        }
    }
    ctx->pc = 0x115470u;
label_115470:
    // 0x115470: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x115470u;
    SET_GPR_U32(ctx, 31, 0x115478u);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x115470u, 0x115478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115478u;
label_115478:
    // 0x115478: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x115478u;
    {
        const bool branch_taken_0x115478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115478u;
        // 0x11547c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115478) {
            ctx->pc = 0x1155ACu;
            goto label_1155ac;
        }
    }
    ctx->pc = 0x115480u;
label_115480:
    // 0x115480: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x115480u;
    {
        const bool branch_taken_0x115480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115480u;
        // 0x115484: 0x2e820401  sltiu       $v0, $s4, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115480) {
            ctx->pc = 0x115490u;
            goto label_115490;
        }
    }
    ctx->pc = 0x115488u;
    // 0x115488: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x115488u;
    {
        const bool branch_taken_0x115488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x115488) {
            ctx->pc = 0x1154A0u;
            goto label_1154a0;
        }
    }
    ctx->pc = 0x115490u;
label_115490:
    // 0x115490: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x115490u;
    SET_GPR_U32(ctx, 31, 0x115498u);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x115490u, 0x115498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115498u;
label_115498:
    // 0x115498: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x115498u;
    {
        const bool branch_taken_0x115498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115498u;
        // 0x11549c: 0x2402ffea  addiu       $v0, $zero, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115498) {
            ctx->pc = 0x1155ACu;
            goto label_1155ac;
        }
    }
    ctx->pc = 0x1154A0u;
label_1154a0:
    // 0x1154a0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1154A0u;
    {
        const bool branch_taken_0x1154a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1154A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1154A0u;
        // 0x1154a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1154a0) {
            ctx->pc = 0x1154B0u;
            goto label_1154b0;
        }
    }
    ctx->pc = 0x1154A8u;
    // 0x1154a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1154A8u;
    {
        const bool branch_taken_0x1154a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1154ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1154A8u;
        // 0x1154ac: 0xae20041c  sw          $zero, 0x41C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1154a8) {
            ctx->pc = 0x1154BCu;
            goto label_1154bc;
        }
    }
    ctx->pc = 0x1154B0u;
label_1154b0:
    // 0x1154b0: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x1154b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1154b4: 0xc04a125  jal         func_128494
    ctx->pc = 0x1154B4u;
    SET_GPR_U32(ctx, 31, 0x1154BCu);
    ctx->pc = 0x1154B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1154B4u;
    // 0x1154b8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x1154B4u, 0x1154BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1154BCu;
label_1154bc:
    // 0x1154bc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1154bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1154c0: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x1154c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x1154c4: 0xae350010  sw          $s5, 0x10($s1)
    ctx->pc = 0x1154c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 21));
    // 0x1154c8: 0x2442e2e0  addiu       $v0, $v0, -0x1D20
    ctx->pc = 0x1154c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959840));
    // 0x1154cc: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1154ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1154d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1154d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1154d4: 0xae33041c  sw          $s3, 0x41C($s1)
    ctx->pc = 0x1154d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 19));
    // 0x1154d8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1154d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1154dc: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x1154dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x1154e0: 0x26d0a340  addiu       $s0, $s6, -0x5CC0
    ctx->pc = 0x1154e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294943552));
    // 0x1154e4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1154e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x1154e8: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x1154E8u;
    SET_GPR_U32(ctx, 31, 0x1154F0u);
    ctx->pc = 0x1154ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1154E8u;
    // 0x1154ec: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x1154E8u, 0x1154F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1154F0u;
label_1154f0:
    // 0x1154f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1154f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1154f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1154f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1154f8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1154f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1154fc: 0xae340418  sw          $s4, 0x418($s1)
    ctx->pc = 0x1154fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1048), GPR_U32(ctx, 20));
    // 0x115500: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x115500u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x115504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115508: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x115508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x11550c: 0x24050420  addiu       $a1, $zero, 0x420
    ctx->pc = 0x11550cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x115510: 0xae370414  sw          $s7, 0x414($s1)
    ctx->pc = 0x115510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1044), GPR_U32(ctx, 23));
    // 0x115514: 0xc04499e  jal         func_112678
    ctx->pc = 0x115514u;
    SET_GPR_U32(ctx, 31, 0x11551Cu);
    ctx->pc = 0x115518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115514u;
    // 0x115518: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112678u, 0x115514u, 0x11551Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11551Cu;
label_11551c:
    // 0x11551c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11551cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x115520: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x115520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x115524: 0x2451af80  addiu       $s1, $v0, -0x5080
    ctx->pc = 0x115524u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946688));
    // 0x115528: 0x2484ba40  addiu       $a0, $a0, -0x45C0
    ctx->pc = 0x115528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949440));
    // 0x11552c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11552cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115530: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x115530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x115534: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x115534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x115538: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x115538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x11553c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11553cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115540: 0x24080420  addiu       $t0, $zero, 0x420
    ctx->pc = 0x115540u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x115544: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x115544u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115548: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x115548u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11554c: 0xc044e56  jal         func_113958
    ctx->pc = 0x11554Cu;
    SET_GPR_U32(ctx, 31, 0x115554u);
    ctx->pc = 0x115550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11554Cu;
    // 0x115550: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113958u, 0x11554Cu, 0x115554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115554u;
label_115554:
    // 0x115554: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x115554u;
    {
        const bool branch_taken_0x115554 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x115558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115554u;
        // 0x115558: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115554) {
            ctx->pc = 0x115574u;
            goto label_115574;
        }
    }
    ctx->pc = 0x11555Cu;
    // 0x11555c: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x11555Cu;
    SET_GPR_U32(ctx, 31, 0x115564u);
    ctx->pc = 0x115560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11555Cu;
    // 0x115560: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x11555Cu, 0x115564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115564u;
label_115564:
    // 0x115564: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x115564u;
    SET_GPR_U32(ctx, 31, 0x11556Cu);
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x115564u, 0x11556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11556Cu;
label_11556c:
    // 0x11556c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11556Cu;
    {
        const bool branch_taken_0x11556c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11556Cu;
        // 0x115570: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11556c) {
            ctx->pc = 0x1155ACu;
            goto label_1155ac;
        }
    }
    ctx->pc = 0x115574u;
label_115574:
    // 0x115574: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x115574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x115578: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x115578u;
    SET_GPR_U32(ctx, 31, 0x115580u);
    ctx->pc = 0x11557Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115578u;
    // 0x11557c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF8u, 0x115578u, 0x115580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115580u;
label_115580:
    // 0x115580: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x115580u;
    {
        const bool branch_taken_0x115580 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x115580) {
            ctx->pc = 0x115598u;
            goto label_115598;
        }
    }
    ctx->pc = 0x115588u;
    // 0x115588: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x115588u;
    SET_GPR_U32(ctx, 31, 0x115590u);
    ctx->pc = 0x11558Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115588u;
    // 0x11558c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x115588u, 0x115590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115590u;
label_115590:
    // 0x115590: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x115590u;
    {
        const bool branch_taken_0x115590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115590u;
        // 0x115594: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115590) {
            ctx->pc = 0x1155ACu;
            goto label_1155ac;
        }
    }
    ctx->pc = 0x115598u;
label_115598:
    // 0x115598: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x115598u;
    SET_GPR_U32(ctx, 31, 0x1155A0u);
    ctx->pc = 0x11559Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115598u;
    // 0x11559c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x115598u, 0x1155A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1155A0u;
label_1155a0:
    // 0x1155a0: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x1155A0u;
    SET_GPR_U32(ctx, 31, 0x1155A8u);
    ctx->pc = 0x1155A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1155A0u;
    // 0x1155a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x1155A0u, 0x1155A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1155A8u;
label_1155a8:
    // 0x1155a8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1155a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1155ac:
    // 0x1155ac: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1155acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1155b0: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1155b0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1155b4: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1155b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1155b8: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1155b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1155bc: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1155bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1155c0: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1155c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1155c4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1155c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1155c8: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1155c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1155cc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1155ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1155d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1155D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1155D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1155D0u;
        // 0x1155d4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1155D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1155D8u;
}
