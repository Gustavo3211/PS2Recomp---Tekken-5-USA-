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

// Function: sub_00292108
// Address: 0x292108 - 0x292700
void sub_00292108_0x292108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292108_0x292108");
#endif

    switch (ctx->pc) {
        case 0x29213cu: goto label_29213c;
        case 0x292158u: goto label_292158;
        case 0x292168u: goto label_292168;
        case 0x292198u: goto label_292198;
        case 0x2921c8u: goto label_2921c8;
        case 0x2921f8u: goto label_2921f8;
        case 0x292228u: goto label_292228;
        case 0x292258u: goto label_292258;
        case 0x292288u: goto label_292288;
        case 0x2922b8u: goto label_2922b8;
        case 0x2922e8u: goto label_2922e8;
        case 0x292318u: goto label_292318;
        case 0x292348u: goto label_292348;
        case 0x292378u: goto label_292378;
        case 0x2923a8u: goto label_2923a8;
        case 0x2923d8u: goto label_2923d8;
        case 0x292408u: goto label_292408;
        case 0x292438u: goto label_292438;
        case 0x292468u: goto label_292468;
        case 0x292498u: goto label_292498;
        case 0x2924c8u: goto label_2924c8;
        case 0x2924f8u: goto label_2924f8;
        case 0x292528u: goto label_292528;
        case 0x292558u: goto label_292558;
        case 0x292588u: goto label_292588;
        case 0x2925b8u: goto label_2925b8;
        case 0x2925e8u: goto label_2925e8;
        case 0x292618u: goto label_292618;
        case 0x292648u: goto label_292648;
        case 0x292678u: goto label_292678;
        case 0x2926a8u: goto label_2926a8;
        case 0x2926acu: goto label_2926ac;
        case 0x2926c0u: goto label_2926c0;
        case 0x2926e4u: goto label_2926e4;
        default: break;
    }

    ctx->pc = 0x292108u;

    // 0x292108: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x292108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29210c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29210cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292110: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x292110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x292114: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x292114u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292118: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x292118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29211c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29211cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x292120: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x292120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x292124: 0xa2420155  sb          $v0, 0x155($s2)
    ctx->pc = 0x292124u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 341), (uint8_t)GPR_U32(ctx, 2));
    // 0x292128: 0x8e500158  lw          $s0, 0x158($s2)
    ctx->pc = 0x292128u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x29212c: 0x5200016e  beql        $s0, $zero, . + 4 + (0x16E << 2)
    ctx->pc = 0x29212Cu;
    {
        const bool branch_taken_0x29212c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29212c) {
            ctx->pc = 0x292130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29212Cu;
            // 0x292130: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2926E8u;
            goto label_2926e8;
        }
    }
    ctx->pc = 0x292134u;
    // 0x292134: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x292134u;
    SET_GPR_U32(ctx, 31, 0x29213Cu);
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x292134u, 0x29213Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29213Cu;
label_29213c:
    // 0x29213c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29213Cu;
    {
        const bool branch_taken_0x29213c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29213Cu;
        // 0x292140: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29213c) {
            ctx->pc = 0x29215Cu;
            goto label_29215c;
        }
    }
    ctx->pc = 0x292144u;
    // 0x292144: 0x8e440130  lw          $a0, 0x130($s2)
    ctx->pc = 0x292144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x292148: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x292148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29214c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29214cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292150: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x292150u;
    SET_GPR_U32(ctx, 31, 0x292158u);
    ctx->pc = 0x292154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292150u;
    // 0x292154: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x292150u, 0x292158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292158u;
label_292158:
    // 0x292158: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x292158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_29215c:
    // 0x29215c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29215cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292160: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x292160u;
    SET_GPR_U32(ctx, 31, 0x292168u);
    ctx->pc = 0x292164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292160u;
    // 0x292164: 0x24a5b0d8  addiu       $a1, $a1, -0x4F28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x292160u, 0x292168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292168u;
label_292168:
    // 0x292168: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x292168u;
    {
        const bool branch_taken_0x292168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292168) {
            ctx->pc = 0x29216Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292168u;
            // 0x29216c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29218Cu;
            goto label_29218c;
        }
    }
    ctx->pc = 0x292170u;
    // 0x292170: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x292170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x292174: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292174u;
    {
        const bool branch_taken_0x292174 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x292178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292174u;
        // 0x292178: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292174) {
            ctx->pc = 0x292188u;
            goto label_292188;
        }
    }
    ctx->pc = 0x29217Cu;
    // 0x29217c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29217cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x292180: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x292180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x292184: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x292184u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_292188:
    // 0x292188: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x292188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_29218c:
    // 0x29218c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29218cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292190: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x292190u;
    SET_GPR_U32(ctx, 31, 0x292198u);
    ctx->pc = 0x292194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292190u;
    // 0x292194: 0x24a5b0f0  addiu       $a1, $a1, -0x4F10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x292190u, 0x292198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292198u;
label_292198:
    // 0x292198: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x292198u;
    {
        const bool branch_taken_0x292198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292198) {
            ctx->pc = 0x29219Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292198u;
            // 0x29219c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2921BCu;
            goto label_2921bc;
        }
    }
    ctx->pc = 0x2921A0u;
    // 0x2921a0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2921a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2921a4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2921A4u;
    {
        const bool branch_taken_0x2921a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2921A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2921A4u;
        // 0x2921a8: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2921a4) {
            ctx->pc = 0x2921B8u;
            goto label_2921b8;
        }
    }
    ctx->pc = 0x2921ACu;
    // 0x2921ac: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2921acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2921b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2921b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2921b4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2921b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2921b8:
    // 0x2921b8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2921b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2921bc:
    // 0x2921bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2921bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2921c0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2921C0u;
    SET_GPR_U32(ctx, 31, 0x2921C8u);
    ctx->pc = 0x2921C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2921C0u;
    // 0x2921c4: 0x24a5b0c0  addiu       $a1, $a1, -0x4F40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2921C0u, 0x2921C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2921C8u;
label_2921c8:
    // 0x2921c8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2921C8u;
    {
        const bool branch_taken_0x2921c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2921c8) {
            ctx->pc = 0x2921CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2921C8u;
            // 0x2921cc: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2921ECu;
            goto label_2921ec;
        }
    }
    ctx->pc = 0x2921D0u;
    // 0x2921d0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2921d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2921d4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2921D4u;
    {
        const bool branch_taken_0x2921d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2921D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2921D4u;
        // 0x2921d8: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2921d4) {
            ctx->pc = 0x2921E8u;
            goto label_2921e8;
        }
    }
    ctx->pc = 0x2921DCu;
    // 0x2921dc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2921dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2921e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2921e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2921e4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2921e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2921e8:
    // 0x2921e8: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x2921e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_2921ec:
    // 0x2921ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2921ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2921f0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2921F0u;
    SET_GPR_U32(ctx, 31, 0x2921F8u);
    ctx->pc = 0x2921F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2921F0u;
    // 0x2921f4: 0x24a53df8  addiu       $a1, $a1, 0x3DF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2921F0u, 0x2921F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2921F8u;
label_2921f8:
    // 0x2921f8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2921F8u;
    {
        const bool branch_taken_0x2921f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2921f8) {
            ctx->pc = 0x2921FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2921F8u;
            // 0x2921fc: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29221Cu;
            goto label_29221c;
        }
    }
    ctx->pc = 0x292200u;
    // 0x292200: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x292200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x292204: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292204u;
    {
        const bool branch_taken_0x292204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x292208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292204u;
        // 0x292208: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292204) {
            ctx->pc = 0x292218u;
            goto label_292218;
        }
    }
    ctx->pc = 0x29220Cu;
    // 0x29220c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29220cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x292210: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x292210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x292214: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x292214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_292218:
    // 0x292218: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x292218u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_29221c:
    // 0x29221c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29221cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292220: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x292220u;
    SET_GPR_U32(ctx, 31, 0x292228u);
    ctx->pc = 0x292224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292220u;
    // 0x292224: 0x24a5b0a0  addiu       $a1, $a1, -0x4F60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x292220u, 0x292228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292228u;
label_292228:
    // 0x292228: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x292228u;
    {
        const bool branch_taken_0x292228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292228) {
            ctx->pc = 0x29222Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292228u;
            // 0x29222c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29224Cu;
            goto label_29224c;
        }
    }
    ctx->pc = 0x292230u;
    // 0x292230: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x292230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x292234: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292234u;
    {
        const bool branch_taken_0x292234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x292238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292234u;
        // 0x292238: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292234) {
            ctx->pc = 0x292248u;
            goto label_292248;
        }
    }
    ctx->pc = 0x29223Cu;
    // 0x29223c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29223cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x292240: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x292240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x292244: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x292244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_292248:
    // 0x292248: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x292248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_29224c:
    // 0x29224c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29224cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292250: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x292250u;
    SET_GPR_U32(ctx, 31, 0x292258u);
    ctx->pc = 0x292254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292250u;
    // 0x292254: 0x24a5b0b0  addiu       $a1, $a1, -0x4F50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x292250u, 0x292258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292258u;
label_292258:
    // 0x292258: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x292258u;
    {
        const bool branch_taken_0x292258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292258) {
            ctx->pc = 0x29225Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292258u;
            // 0x29225c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29227Cu;
            goto label_29227c;
        }
    }
    ctx->pc = 0x292260u;
    // 0x292260: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x292260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x292264: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292264u;
    {
        const bool branch_taken_0x292264 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x292268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292264u;
        // 0x292268: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292264) {
            ctx->pc = 0x292278u;
            goto label_292278;
        }
    }
    ctx->pc = 0x29226Cu;
    // 0x29226c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29226cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x292270: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x292270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x292274: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x292274u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_292278:
    // 0x292278: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x292278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_29227c:
    // 0x29227c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29227cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292280: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x292280u;
    SET_GPR_U32(ctx, 31, 0x292288u);
    ctx->pc = 0x292284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292280u;
    // 0x292284: 0x24a5b108  addiu       $a1, $a1, -0x4EF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x292280u, 0x292288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292288u;
label_292288:
    // 0x292288: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x292288u;
    {
        const bool branch_taken_0x292288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292288) {
            ctx->pc = 0x29228Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292288u;
            // 0x29228c: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2922ACu;
            goto label_2922ac;
        }
    }
    ctx->pc = 0x292290u;
    // 0x292290: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x292290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x292294: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292294u;
    {
        const bool branch_taken_0x292294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x292298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292294u;
        // 0x292298: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292294) {
            ctx->pc = 0x2922A8u;
            goto label_2922a8;
        }
    }
    ctx->pc = 0x29229Cu;
    // 0x29229c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29229cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2922a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2922a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2922a4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2922a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2922a8:
    // 0x2922a8: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x2922a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_2922ac:
    // 0x2922ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2922acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2922b0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2922B0u;
    SET_GPR_U32(ctx, 31, 0x2922B8u);
    ctx->pc = 0x2922B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2922B0u;
    // 0x2922b4: 0x24a53e00  addiu       $a1, $a1, 0x3E00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2922B0u, 0x2922B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2922B8u;
label_2922b8:
    // 0x2922b8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2922B8u;
    {
        const bool branch_taken_0x2922b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2922b8) {
            ctx->pc = 0x2922BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2922B8u;
            // 0x2922bc: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2922DCu;
            goto label_2922dc;
        }
    }
    ctx->pc = 0x2922C0u;
    // 0x2922c0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2922c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2922c4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2922C4u;
    {
        const bool branch_taken_0x2922c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2922C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2922C4u;
        // 0x2922c8: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2922c4) {
            ctx->pc = 0x2922D8u;
            goto label_2922d8;
        }
    }
    ctx->pc = 0x2922CCu;
    // 0x2922cc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2922ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2922d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2922d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2922d4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2922d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2922d8:
    // 0x2922d8: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x2922d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_2922dc:
    // 0x2922dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2922dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2922e0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2922E0u;
    SET_GPR_U32(ctx, 31, 0x2922E8u);
    ctx->pc = 0x2922E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2922E0u;
    // 0x2922e4: 0x24a53e08  addiu       $a1, $a1, 0x3E08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2922E0u, 0x2922E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2922E8u;
label_2922e8:
    // 0x2922e8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2922E8u;
    {
        const bool branch_taken_0x2922e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2922e8) {
            ctx->pc = 0x2922ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2922E8u;
            // 0x2922ec: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29230Cu;
            goto label_29230c;
        }
    }
    ctx->pc = 0x2922F0u;
    // 0x2922f0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2922f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2922f4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2922F4u;
    {
        const bool branch_taken_0x2922f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2922F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2922F4u;
        // 0x2922f8: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2922f4) {
            ctx->pc = 0x292308u;
            goto label_292308;
        }
    }
    ctx->pc = 0x2922FCu;
    // 0x2922fc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2922fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x292300: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x292300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x292304: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x292304u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_292308:
    // 0x292308: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x292308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_29230c:
    // 0x29230c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29230cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292310: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x292310u;
    SET_GPR_U32(ctx, 31, 0x292318u);
    ctx->pc = 0x292314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292310u;
    // 0x292314: 0x24a53e10  addiu       $a1, $a1, 0x3E10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x292310u, 0x292318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292318u;
label_292318:
    // 0x292318: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x292318u;
    {
        const bool branch_taken_0x292318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292318) {
            ctx->pc = 0x29231Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292318u;
            // 0x29231c: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29233Cu;
            goto label_29233c;
        }
    }
    ctx->pc = 0x292320u;
    // 0x292320: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x292320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x292324: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292324u;
    {
        const bool branch_taken_0x292324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x292328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292324u;
        // 0x292328: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292324) {
            ctx->pc = 0x292338u;
            goto label_292338;
        }
    }
    ctx->pc = 0x29232Cu;
    // 0x29232c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29232cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x292330: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x292330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x292334: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x292334u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_292338:
    // 0x292338: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x292338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_29233c:
    // 0x29233c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29233cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292340: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x292340u;
    SET_GPR_U32(ctx, 31, 0x292348u);
    ctx->pc = 0x292344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292340u;
    // 0x292344: 0x24a53e18  addiu       $a1, $a1, 0x3E18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x292340u, 0x292348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292348u;
label_292348:
    // 0x292348: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x292348u;
    {
        const bool branch_taken_0x292348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292348) {
            ctx->pc = 0x29234Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292348u;
            // 0x29234c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29236Cu;
            goto label_29236c;
        }
    }
    ctx->pc = 0x292350u;
    // 0x292350: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x292350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x292354: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292354u;
    {
        const bool branch_taken_0x292354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x292358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292354u;
        // 0x292358: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292354) {
            ctx->pc = 0x292368u;
            goto label_292368;
        }
    }
    ctx->pc = 0x29235Cu;
    // 0x29235c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29235cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x292360: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x292360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x292364: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x292364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_292368:
    // 0x292368: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x292368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_29236c:
    // 0x29236c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29236cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292370: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x292370u;
    SET_GPR_U32(ctx, 31, 0x292378u);
    ctx->pc = 0x292374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292370u;
    // 0x292374: 0x24a5b118  addiu       $a1, $a1, -0x4EE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x292370u, 0x292378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292378u;
label_292378:
    // 0x292378: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x292378u;
    {
        const bool branch_taken_0x292378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292378) {
            ctx->pc = 0x29237Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292378u;
            // 0x29237c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29239Cu;
            goto label_29239c;
        }
    }
    ctx->pc = 0x292380u;
    // 0x292380: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x292380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x292384: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292384u;
    {
        const bool branch_taken_0x292384 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x292388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292384u;
        // 0x292388: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292384) {
            ctx->pc = 0x292398u;
            goto label_292398;
        }
    }
    ctx->pc = 0x29238Cu;
    // 0x29238c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29238cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x292390: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x292390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x292394: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x292394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_292398:
    // 0x292398: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x292398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_29239c:
    // 0x29239c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29239cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2923a0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2923A0u;
    SET_GPR_U32(ctx, 31, 0x2923A8u);
    ctx->pc = 0x2923A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2923A0u;
    // 0x2923a4: 0x24a5b128  addiu       $a1, $a1, -0x4ED8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2923A0u, 0x2923A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2923A8u;
label_2923a8:
    // 0x2923a8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2923A8u;
    {
        const bool branch_taken_0x2923a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2923a8) {
            ctx->pc = 0x2923ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2923A8u;
            // 0x2923ac: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2923CCu;
            goto label_2923cc;
        }
    }
    ctx->pc = 0x2923B0u;
    // 0x2923b0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2923b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2923b4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2923B4u;
    {
        const bool branch_taken_0x2923b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2923B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2923B4u;
        // 0x2923b8: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2923b4) {
            ctx->pc = 0x2923C8u;
            goto label_2923c8;
        }
    }
    ctx->pc = 0x2923BCu;
    // 0x2923bc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2923bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2923c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2923c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2923c4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2923c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2923c8:
    // 0x2923c8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2923c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2923cc:
    // 0x2923cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2923ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2923d0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2923D0u;
    SET_GPR_U32(ctx, 31, 0x2923D8u);
    ctx->pc = 0x2923D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2923D0u;
    // 0x2923d4: 0x24a5b138  addiu       $a1, $a1, -0x4EC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2923D0u, 0x2923D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2923D8u;
label_2923d8:
    // 0x2923d8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2923D8u;
    {
        const bool branch_taken_0x2923d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2923d8) {
            ctx->pc = 0x2923DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2923D8u;
            // 0x2923dc: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2923FCu;
            goto label_2923fc;
        }
    }
    ctx->pc = 0x2923E0u;
    // 0x2923e0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2923e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2923e4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2923E4u;
    {
        const bool branch_taken_0x2923e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2923E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2923E4u;
        // 0x2923e8: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2923e4) {
            ctx->pc = 0x2923F8u;
            goto label_2923f8;
        }
    }
    ctx->pc = 0x2923ECu;
    // 0x2923ec: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2923ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2923f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2923f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2923f4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2923f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2923f8:
    // 0x2923f8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2923f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2923fc:
    // 0x2923fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2923fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292400: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x292400u;
    SET_GPR_U32(ctx, 31, 0x292408u);
    ctx->pc = 0x292404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292400u;
    // 0x292404: 0x24a5b148  addiu       $a1, $a1, -0x4EB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x292400u, 0x292408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292408u;
label_292408:
    // 0x292408: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x292408u;
    {
        const bool branch_taken_0x292408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292408) {
            ctx->pc = 0x29240Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292408u;
            // 0x29240c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29242Cu;
            goto label_29242c;
        }
    }
    ctx->pc = 0x292410u;
    // 0x292410: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x292410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x292414: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292414u;
    {
        const bool branch_taken_0x292414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x292418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292414u;
        // 0x292418: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292414) {
            ctx->pc = 0x292428u;
            goto label_292428;
        }
    }
    ctx->pc = 0x29241Cu;
    // 0x29241c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29241cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x292420: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x292420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x292424: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x292424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_292428:
    // 0x292428: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x292428u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_29242c:
    // 0x29242c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29242cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292430: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x292430u;
    SET_GPR_U32(ctx, 31, 0x292438u);
    ctx->pc = 0x292434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292430u;
    // 0x292434: 0x24a5b160  addiu       $a1, $a1, -0x4EA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x292430u, 0x292438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292438u;
label_292438:
    // 0x292438: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x292438u;
    {
        const bool branch_taken_0x292438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292438) {
            ctx->pc = 0x29243Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292438u;
            // 0x29243c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29245Cu;
            goto label_29245c;
        }
    }
    ctx->pc = 0x292440u;
    // 0x292440: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x292440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x292444: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292444u;
    {
        const bool branch_taken_0x292444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x292448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292444u;
        // 0x292448: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292444) {
            ctx->pc = 0x292458u;
            goto label_292458;
        }
    }
    ctx->pc = 0x29244Cu;
    // 0x29244c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29244cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x292450: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x292450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x292454: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x292454u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_292458:
    // 0x292458: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x292458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_29245c:
    // 0x29245c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29245cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292460: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x292460u;
    SET_GPR_U32(ctx, 31, 0x292468u);
    ctx->pc = 0x292464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292460u;
    // 0x292464: 0x24a5af20  addiu       $a1, $a1, -0x50E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x292460u, 0x292468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292468u;
label_292468:
    // 0x292468: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x292468u;
    {
        const bool branch_taken_0x292468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292468) {
            ctx->pc = 0x29246Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292468u;
            // 0x29246c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29248Cu;
            goto label_29248c;
        }
    }
    ctx->pc = 0x292470u;
    // 0x292470: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x292470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x292474: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292474u;
    {
        const bool branch_taken_0x292474 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x292478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292474u;
        // 0x292478: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292474) {
            ctx->pc = 0x292488u;
            goto label_292488;
        }
    }
    ctx->pc = 0x29247Cu;
    // 0x29247c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29247cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x292480: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x292480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x292484: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x292484u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_292488:
    // 0x292488: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x292488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_29248c:
    // 0x29248c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29248cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292490: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x292490u;
    SET_GPR_U32(ctx, 31, 0x292498u);
    ctx->pc = 0x292494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292490u;
    // 0x292494: 0x24a5af40  addiu       $a1, $a1, -0x50C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x292490u, 0x292498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292498u;
label_292498:
    // 0x292498: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x292498u;
    {
        const bool branch_taken_0x292498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292498) {
            ctx->pc = 0x29249Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292498u;
            // 0x29249c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2924BCu;
            goto label_2924bc;
        }
    }
    ctx->pc = 0x2924A0u;
    // 0x2924a0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2924a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2924a4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2924A4u;
    {
        const bool branch_taken_0x2924a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2924A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2924A4u;
        // 0x2924a8: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2924a4) {
            ctx->pc = 0x2924B8u;
            goto label_2924b8;
        }
    }
    ctx->pc = 0x2924ACu;
    // 0x2924ac: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2924acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2924b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2924b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2924b4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2924b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2924b8:
    // 0x2924b8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2924b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2924bc:
    // 0x2924bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2924bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2924c0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2924C0u;
    SET_GPR_U32(ctx, 31, 0x2924C8u);
    ctx->pc = 0x2924C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2924C0u;
    // 0x2924c4: 0x24a5af60  addiu       $a1, $a1, -0x50A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2924C0u, 0x2924C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2924C8u;
label_2924c8:
    // 0x2924c8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2924C8u;
    {
        const bool branch_taken_0x2924c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2924c8) {
            ctx->pc = 0x2924CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2924C8u;
            // 0x2924cc: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2924ECu;
            goto label_2924ec;
        }
    }
    ctx->pc = 0x2924D0u;
    // 0x2924d0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2924d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2924d4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2924D4u;
    {
        const bool branch_taken_0x2924d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2924D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2924D4u;
        // 0x2924d8: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2924d4) {
            ctx->pc = 0x2924E8u;
            goto label_2924e8;
        }
    }
    ctx->pc = 0x2924DCu;
    // 0x2924dc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2924dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2924e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2924e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2924e4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2924e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2924e8:
    // 0x2924e8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2924e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2924ec:
    // 0x2924ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2924ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2924f0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2924F0u;
    SET_GPR_U32(ctx, 31, 0x2924F8u);
    ctx->pc = 0x2924F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2924F0u;
    // 0x2924f4: 0x24a5af80  addiu       $a1, $a1, -0x5080 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2924F0u, 0x2924F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2924F8u;
label_2924f8:
    // 0x2924f8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2924F8u;
    {
        const bool branch_taken_0x2924f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2924f8) {
            ctx->pc = 0x2924FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2924F8u;
            // 0x2924fc: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29251Cu;
            goto label_29251c;
        }
    }
    ctx->pc = 0x292500u;
    // 0x292500: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x292500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x292504: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292504u;
    {
        const bool branch_taken_0x292504 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x292508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292504u;
        // 0x292508: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292504) {
            ctx->pc = 0x292518u;
            goto label_292518;
        }
    }
    ctx->pc = 0x29250Cu;
    // 0x29250c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29250cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x292510: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x292510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x292514: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x292514u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_292518:
    // 0x292518: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x292518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_29251c:
    // 0x29251c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29251cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292520: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x292520u;
    SET_GPR_U32(ctx, 31, 0x292528u);
    ctx->pc = 0x292524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292520u;
    // 0x292524: 0x24a5afa0  addiu       $a1, $a1, -0x5060 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x292520u, 0x292528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292528u;
label_292528:
    // 0x292528: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x292528u;
    {
        const bool branch_taken_0x292528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292528) {
            ctx->pc = 0x29252Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292528u;
            // 0x29252c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29254Cu;
            goto label_29254c;
        }
    }
    ctx->pc = 0x292530u;
    // 0x292530: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x292530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x292534: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292534u;
    {
        const bool branch_taken_0x292534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x292538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292534u;
        // 0x292538: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292534) {
            ctx->pc = 0x292548u;
            goto label_292548;
        }
    }
    ctx->pc = 0x29253Cu;
    // 0x29253c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29253cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x292540: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x292540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x292544: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x292544u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_292548:
    // 0x292548: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x292548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_29254c:
    // 0x29254c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29254cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292550: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x292550u;
    SET_GPR_U32(ctx, 31, 0x292558u);
    ctx->pc = 0x292554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292550u;
    // 0x292554: 0x24a5afc0  addiu       $a1, $a1, -0x5040 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x292550u, 0x292558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292558u;
label_292558:
    // 0x292558: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x292558u;
    {
        const bool branch_taken_0x292558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292558) {
            ctx->pc = 0x29255Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292558u;
            // 0x29255c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29257Cu;
            goto label_29257c;
        }
    }
    ctx->pc = 0x292560u;
    // 0x292560: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x292560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x292564: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292564u;
    {
        const bool branch_taken_0x292564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x292568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292564u;
        // 0x292568: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292564) {
            ctx->pc = 0x292578u;
            goto label_292578;
        }
    }
    ctx->pc = 0x29256Cu;
    // 0x29256c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29256cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x292570: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x292570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x292574: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x292574u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_292578:
    // 0x292578: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x292578u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_29257c:
    // 0x29257c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29257cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292580: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x292580u;
    SET_GPR_U32(ctx, 31, 0x292588u);
    ctx->pc = 0x292584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292580u;
    // 0x292584: 0x24a5afe0  addiu       $a1, $a1, -0x5020 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x292580u, 0x292588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292588u;
label_292588:
    // 0x292588: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x292588u;
    {
        const bool branch_taken_0x292588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292588) {
            ctx->pc = 0x29258Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292588u;
            // 0x29258c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2925ACu;
            goto label_2925ac;
        }
    }
    ctx->pc = 0x292590u;
    // 0x292590: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x292590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x292594: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292594u;
    {
        const bool branch_taken_0x292594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x292598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292594u;
        // 0x292598: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292594) {
            ctx->pc = 0x2925A8u;
            goto label_2925a8;
        }
    }
    ctx->pc = 0x29259Cu;
    // 0x29259c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29259cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2925a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2925a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2925a4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2925a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2925a8:
    // 0x2925a8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2925a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2925ac:
    // 0x2925ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2925acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2925b0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2925B0u;
    SET_GPR_U32(ctx, 31, 0x2925B8u);
    ctx->pc = 0x2925B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2925B0u;
    // 0x2925b4: 0x24a5b000  addiu       $a1, $a1, -0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2925B0u, 0x2925B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2925B8u;
label_2925b8:
    // 0x2925b8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2925B8u;
    {
        const bool branch_taken_0x2925b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2925b8) {
            ctx->pc = 0x2925BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2925B8u;
            // 0x2925bc: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2925DCu;
            goto label_2925dc;
        }
    }
    ctx->pc = 0x2925C0u;
    // 0x2925c0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2925c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2925c4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2925C4u;
    {
        const bool branch_taken_0x2925c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2925C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2925C4u;
        // 0x2925c8: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2925c4) {
            ctx->pc = 0x2925D8u;
            goto label_2925d8;
        }
    }
    ctx->pc = 0x2925CCu;
    // 0x2925cc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2925ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2925d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2925d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2925d4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2925d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2925d8:
    // 0x2925d8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2925d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2925dc:
    // 0x2925dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2925dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2925e0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2925E0u;
    SET_GPR_U32(ctx, 31, 0x2925E8u);
    ctx->pc = 0x2925E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2925E0u;
    // 0x2925e4: 0x24a5b020  addiu       $a1, $a1, -0x4FE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2925E0u, 0x2925E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2925E8u;
label_2925e8:
    // 0x2925e8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2925E8u;
    {
        const bool branch_taken_0x2925e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2925e8) {
            ctx->pc = 0x2925ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2925E8u;
            // 0x2925ec: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29260Cu;
            goto label_29260c;
        }
    }
    ctx->pc = 0x2925F0u;
    // 0x2925f0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2925f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2925f4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2925F4u;
    {
        const bool branch_taken_0x2925f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2925F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2925F4u;
        // 0x2925f8: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2925f4) {
            ctx->pc = 0x292608u;
            goto label_292608;
        }
    }
    ctx->pc = 0x2925FCu;
    // 0x2925fc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2925fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x292600: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x292600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x292604: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x292604u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_292608:
    // 0x292608: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x292608u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_29260c:
    // 0x29260c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29260cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292610: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x292610u;
    SET_GPR_U32(ctx, 31, 0x292618u);
    ctx->pc = 0x292614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292610u;
    // 0x292614: 0x24a5b040  addiu       $a1, $a1, -0x4FC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x292610u, 0x292618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292618u;
label_292618:
    // 0x292618: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x292618u;
    {
        const bool branch_taken_0x292618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292618) {
            ctx->pc = 0x29261Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292618u;
            // 0x29261c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29263Cu;
            goto label_29263c;
        }
    }
    ctx->pc = 0x292620u;
    // 0x292620: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x292620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x292624: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292624u;
    {
        const bool branch_taken_0x292624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x292628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292624u;
        // 0x292628: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292624) {
            ctx->pc = 0x292638u;
            goto label_292638;
        }
    }
    ctx->pc = 0x29262Cu;
    // 0x29262c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29262cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x292630: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x292630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x292634: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x292634u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_292638:
    // 0x292638: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x292638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_29263c:
    // 0x29263c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29263cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292640: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x292640u;
    SET_GPR_U32(ctx, 31, 0x292648u);
    ctx->pc = 0x292644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292640u;
    // 0x292644: 0x24a5b060  addiu       $a1, $a1, -0x4FA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x292640u, 0x292648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292648u;
label_292648:
    // 0x292648: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x292648u;
    {
        const bool branch_taken_0x292648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292648) {
            ctx->pc = 0x29264Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292648u;
            // 0x29264c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29266Cu;
            goto label_29266c;
        }
    }
    ctx->pc = 0x292650u;
    // 0x292650: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x292650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x292654: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292654u;
    {
        const bool branch_taken_0x292654 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x292658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292654u;
        // 0x292658: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292654) {
            ctx->pc = 0x292668u;
            goto label_292668;
        }
    }
    ctx->pc = 0x29265Cu;
    // 0x29265c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29265cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x292660: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x292660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x292664: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x292664u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_292668:
    // 0x292668: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x292668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_29266c:
    // 0x29266c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29266cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292670: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x292670u;
    SET_GPR_U32(ctx, 31, 0x292678u);
    ctx->pc = 0x292674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292670u;
    // 0x292674: 0x24a5b080  addiu       $a1, $a1, -0x4F80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x292670u, 0x292678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292678u;
label_292678:
    // 0x292678: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x292678u;
    {
        const bool branch_taken_0x292678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292678u;
        // 0x29267c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292678) {
            ctx->pc = 0x2926A0u;
            goto label_2926a0;
        }
    }
    ctx->pc = 0x292680u;
    // 0x292680: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x292680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x292684: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x292684u;
    {
        const bool branch_taken_0x292684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x292688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292684u;
        // 0x292688: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292684) {
            ctx->pc = 0x2926A0u;
            goto label_2926a0;
        }
    }
    ctx->pc = 0x29268Cu;
    // 0x29268c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29268cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x292690: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x292690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x292694: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x292694u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x292698: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x292698u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29269c: 0x0  nop
    ctx->pc = 0x29269cu;
    // NOP
label_2926a0:
    // 0x2926a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2926a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2926a4: 0x0  nop
    ctx->pc = 0x2926a4u;
    // NOP
label_2926a8:
    // 0x2926a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2926a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2926ac:
    // 0x2926ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2926acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2926b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2926b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2926b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2926b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2926b8: 0xc0a4b62  jal         func_292D88
    ctx->pc = 0x2926B8u;
    SET_GPR_U32(ctx, 31, 0x2926C0u);
    ctx->pc = 0x2926BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2926B8u;
    // 0x2926bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292D88u, 0x2926B8u, 0x2926C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2926C0u;
label_2926c0:
    // 0x2926c0: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x2926c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2926c4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2926C4u;
    {
        const bool branch_taken_0x2926c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2926C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2926C4u;
        // 0x2926c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2926c4) {
            ctx->pc = 0x2926ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2926ac;
        }
    }
    ctx->pc = 0x2926CCu;
    // 0x2926cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2926ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2926d0: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x2926d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2926d4: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x2926D4u;
    {
        const bool branch_taken_0x2926d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2926d4) {
            ctx->pc = 0x2926D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2926D4u;
            // 0x2926d8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2926A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2926a8;
        }
    }
    ctx->pc = 0x2926DCu;
    // 0x2926dc: 0xc0b7a98  jal         func_2DEA60
    ctx->pc = 0x2926DCu;
    SET_GPR_U32(ctx, 31, 0x2926E4u);
    ctx->pc = 0x2926E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2926DCu;
    // 0x2926e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DEA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEA60u, 0x2926DCu, 0x2926E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2926E4u;
label_2926e4:
    // 0x2926e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2926e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2926e8:
    // 0x2926e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2926e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2926ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2926ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2926f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2926f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2926f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2926F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2926F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2926F4u;
        // 0x2926f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2926F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2926FCu;
    // 0x2926fc: 0x0  nop
    ctx->pc = 0x2926fcu;
    // NOP
    ctx->pc = 0x292700u;
}
