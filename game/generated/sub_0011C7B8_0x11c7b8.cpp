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

// Function: sub_0011C7B8
// Address: 0x11c7b8 - 0x11c9d0
void sub_0011C7B8_0x11c7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C7B8_0x11c7b8");
#endif

    switch (ctx->pc) {
        case 0x11c7fcu: goto label_11c7fc;
        case 0x11c804u: goto label_11c804;
        case 0x11c81cu: goto label_11c81c;
        case 0x11c824u: goto label_11c824;
        case 0x11c830u: goto label_11c830;
        case 0x11c844u: goto label_11c844;
        case 0x11c854u: goto label_11c854;
        case 0x11c870u: goto label_11c870;
        case 0x11c878u: goto label_11c878;
        case 0x11c898u: goto label_11c898;
        case 0x11c8acu: goto label_11c8ac;
        case 0x11c8ccu: goto label_11c8cc;
        case 0x11c8d8u: goto label_11c8d8;
        case 0x11c928u: goto label_11c928;
        case 0x11c954u: goto label_11c954;
        case 0x11c968u: goto label_11c968;
        case 0x11c98cu: goto label_11c98c;
        case 0x11c9a0u: goto label_11c9a0;
        default: break;
    }

    ctx->pc = 0x11c7b8u;

    // 0x11c7b8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x11c7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x11c7bc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x11c7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x11c7c0: 0x3c160013  lui         $s6, 0x13
    ctx->pc = 0x11c7c0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)19 << 16));
    // 0x11c7c4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11c7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11c7c8: 0x8ec227d0  lw          $v0, 0x27D0($s6)
    ctx->pc = 0x11c7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1327D0u));
    // 0x11c7cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11c7ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c7d0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x11c7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x11c7d4: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x11c7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x11c7d8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x11c7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x11c7dc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x11c7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11c7e0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x11c7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11c7e4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11c7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11c7e8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11C7E8u;
    {
        const bool branch_taken_0x11c7e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7E8u;
        // 0x11c7ec: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c7e8) {
            ctx->pc = 0x11C7FCu;
            goto label_11c7fc;
        }
    }
    ctx->pc = 0x11C7F0u;
    // 0x11c7f0: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x11c7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x11c7f4: 0xc044794  jal         func_111E50
    ctx->pc = 0x11C7F4u;
    SET_GPR_U32(ctx, 31, 0x11C7FCu);
    ctx->pc = 0x11C7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C7F4u;
    // 0x11c7f8: 0x2484e710  addiu       $a0, $a0, -0x18F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111E50u, 0x11C7F4u, 0x11C7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C7FCu;
label_11c7fc:
    // 0x11c7fc: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x11C7FCu;
    SET_GPR_U32(ctx, 31, 0x11C804u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x11C7FCu, 0x11C804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C804u;
label_11c804:
    // 0x11c804: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x11c804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x11c808: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11c808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c80c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C80Cu;
    {
        const bool branch_taken_0x11c80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C80Cu;
        // 0x11c810: 0xac832800  sw          $v1, 0x2800($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 10240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c80c) {
            ctx->pc = 0x11C81Cu;
            goto label_11c81c;
        }
    }
    ctx->pc = 0x11C814u;
    // 0x11c814: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x11C814u;
    SET_GPR_U32(ctx, 31, 0x11C81Cu);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x11C814u, 0x11C81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C81Cu;
label_11c81c:
    // 0x11c81c: 0xc046e74  jal         func_11B9D0
    ctx->pc = 0x11C81Cu;
    SET_GPR_U32(ctx, 31, 0x11C824u);
    ctx->pc = 0x11C820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C81Cu;
    // 0x11c820: 0x3c130013  lui         $s3, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)19 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B9D0u, 0x11C81Cu, 0x11C824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C824u;
label_11c824:
    // 0x11c824: 0x8e6427ec  lw          $a0, 0x27EC($s3)
    ctx->pc = 0x11c824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10220)));
    // 0x11c828: 0xc043cfc  jal         func_10F3F0
    ctx->pc = 0x11C828u;
    SET_GPR_U32(ctx, 31, 0x11C830u);
    ctx->pc = 0x10F3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3F0u, 0x11C828u, 0x11C830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C830u;
label_11c830:
    // 0x11c830: 0x8e6327ec  lw          $v1, 0x27EC($s3)
    ctx->pc = 0x11c830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10220)));
    // 0x11c834: 0x1462005b  bne         $v1, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x11C834u;
    {
        const bool branch_taken_0x11c834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C834u;
        // 0x11c838: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c834) {
            ctx->pc = 0x11C9A4u;
            goto label_11c9a4;
        }
    }
    ctx->pc = 0x11C83Cu;
    // 0x11c83c: 0xc047096  jal         func_11C258
    ctx->pc = 0x11C83Cu;
    SET_GPR_U32(ctx, 31, 0x11C844u);
    ctx->pc = 0x11C840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C83Cu;
    // 0x11c840: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C258u, 0x11C83Cu, 0x11C844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C844u;
label_11c844:
    // 0x11c844: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x11C844u;
    {
        const bool branch_taken_0x11c844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C844u;
        // 0x11c848: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c844) {
            ctx->pc = 0x11C95Cu;
            goto label_11c95c;
        }
    }
    ctx->pc = 0x11C84Cu;
    // 0x11c84c: 0xc0449ca  jal         func_112728
    ctx->pc = 0x11C84Cu;
    SET_GPR_U32(ctx, 31, 0x11C854u);
    ctx->pc = 0x11C850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C84Cu;
    // 0x11c850: 0x3c110013  lui         $s1, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)19 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112728u, 0x11C84Cu, 0x11C854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C854u;
label_11c854:
    // 0x11c854: 0x8e222810  lw          $v0, 0x2810($s1)
    ctx->pc = 0x11c854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10256)));
    // 0x11c858: 0x441002c  bgez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x11C858u;
    {
        const bool branch_taken_0x11c858 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C858u;
        // 0x11c85c: 0x3c15001f  lui         $s5, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c858) {
            ctx->pc = 0x11C90Cu;
            goto label_11c90c;
        }
    }
    ctx->pc = 0x11C860u;
    // 0x11c860: 0x3c14001f  lui         $s4, 0x1F
    ctx->pc = 0x11c860u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31 << 16));
    // 0x11c864: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11C864u;
    {
        const bool branch_taken_0x11c864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C864u;
        // 0x11c868: 0x3c170013  lui         $s7, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c864) {
            ctx->pc = 0x11C894u;
            goto label_11c894;
        }
    }
    ctx->pc = 0x11C86Cu;
    // 0x11c86c: 0x0  nop
    ctx->pc = 0x11c86cu;
    // NOP
label_11c870:
    // 0x11c870: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11c870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11c874: 0x0  nop
    ctx->pc = 0x11c874u;
    // NOP
label_11c878:
    // 0x11c878: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11c878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11c87c: 0x0  nop
    ctx->pc = 0x11c87cu;
    // NOP
    // 0x11c880: 0x0  nop
    ctx->pc = 0x11c880u;
    // NOP
    // 0x11c884: 0x0  nop
    ctx->pc = 0x11c884u;
    // NOP
    // 0x11c888: 0x0  nop
    ctx->pc = 0x11c888u;
    // NOP
    // 0x11c88c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11C88Cu;
    {
        const bool branch_taken_0x11c88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11c88c) {
            ctx->pc = 0x11C878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c878;
        }
    }
    ctx->pc = 0x11C894u;
label_11c894:
    // 0x11c894: 0x26b0fa90  addiu       $s0, $s5, -0x570
    ctx->pc = 0x11c894u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965904));
label_11c898:
    // 0x11c898: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x11c898u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x11c89c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c8a0: 0x34a5059a  ori         $a1, $a1, 0x59A
    ctx->pc = 0x11c8a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1434);
    // 0x11c8a4: 0xc044bb4  jal         func_112ED0
    ctx->pc = 0x11C8A4u;
    SET_GPR_U32(ctx, 31, 0x11C8ACu);
    ctx->pc = 0x11C8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C8A4u;
    // 0x11c8a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112ED0u, 0x11C8A4u, 0x11C8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C8ACu;
label_11c8ac:
    // 0x11c8ac: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11C8ACu;
    {
        const bool branch_taken_0x11c8ac = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11c8ac) {
            ctx->pc = 0x11C8B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C8ACu;
            // 0x11c8b0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C8FCu;
            goto label_11c8fc;
        }
    }
    ctx->pc = 0x11C8B4u;
    // 0x11c8b4: 0x8ec227d0  lw          $v0, 0x27D0($s6)
    ctx->pc = 0x11c8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10192)));
    // 0x11c8b8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C8B8u;
    {
        const bool branch_taken_0x11c8b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C8B8u;
        // 0x11c8bc: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c8b8) {
            ctx->pc = 0x11C8D0u;
            goto label_11c8d0;
        }
    }
    ctx->pc = 0x11C8C0u;
    // 0x11c8c0: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x11c8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x11c8c4: 0xc044794  jal         func_111E50
    ctx->pc = 0x11C8C4u;
    SET_GPR_U32(ctx, 31, 0x11C8CCu);
    ctx->pc = 0x11C8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C8C4u;
    // 0x11c8c8: 0x2484e728  addiu       $a0, $a0, -0x18D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111E50u, 0x11C8C4u, 0x11C8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C8CCu;
label_11c8cc:
    // 0x11c8cc: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x11c8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_11c8d0:
    // 0x11c8d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11c8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11c8d4: 0x0  nop
    ctx->pc = 0x11c8d4u;
    // NOP
label_11c8d8:
    // 0x11c8d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11c8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11c8dc: 0x0  nop
    ctx->pc = 0x11c8dcu;
    // NOP
    // 0x11c8e0: 0x0  nop
    ctx->pc = 0x11c8e0u;
    // NOP
    // 0x11c8e4: 0x0  nop
    ctx->pc = 0x11c8e4u;
    // NOP
    // 0x11c8e8: 0x0  nop
    ctx->pc = 0x11c8e8u;
    // NOP
    // 0x11c8ec: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11C8ECu;
    {
        const bool branch_taken_0x11c8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11c8ec) {
            ctx->pc = 0x11C8D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c8d8;
        }
    }
    ctx->pc = 0x11C8F4u;
    // 0x11c8f4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x11C8F4u;
    {
        const bool branch_taken_0x11c8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C8F4u;
        // 0x11c8f8: 0x26b0fa90  addiu       $s0, $s5, -0x570 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c8f4) {
            ctx->pc = 0x11C898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c898;
        }
    }
    ctx->pc = 0x11C8FCu;
label_11c8fc:
    // 0x11c8fc: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x11C8FCu;
    {
        const bool branch_taken_0x11c8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C8FCu;
        // 0x11c900: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c8fc) {
            ctx->pc = 0x11C870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c870;
        }
    }
    ctx->pc = 0x11C904u;
    // 0x11c904: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11C904u;
    {
        const bool branch_taken_0x11c904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C904u;
        // 0x11c908: 0xae202810  sw          $zero, 0x2810($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c904) {
            ctx->pc = 0x11C914u;
            goto label_11c914;
        }
    }
    ctx->pc = 0x11C90Cu;
label_11c90c:
    // 0x11c90c: 0x3c14001f  lui         $s4, 0x1F
    ctx->pc = 0x11c90cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31 << 16));
    // 0x11c910: 0x3c170013  lui         $s7, 0x13
    ctx->pc = 0x11c910u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)19 << 16));
label_11c914:
    // 0x11c914: 0x2690fad0  addiu       $s0, $s4, -0x530
    ctx->pc = 0x11c914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965968));
    // 0x11c918: 0xae92fad0  sw          $s2, -0x530($s4)
    ctx->pc = 0x11c918u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294965968), GPR_U32(ctx, 18));
    // 0x11c91c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c920: 0xc04499e  jal         func_112678
    ctx->pc = 0x11C920u;
    SET_GPR_U32(ctx, 31, 0x11C928u);
    ctx->pc = 0x11C924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C920u;
    // 0x11c924: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112678u, 0x11C920u, 0x11C928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C928u;
label_11c928:
    // 0x11c928: 0x26f139c0  addiu       $s1, $s7, 0x39C0
    ctx->pc = 0x11c928u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 14784));
    // 0x11c92c: 0x26a4fa90  addiu       $a0, $s5, -0x570
    ctx->pc = 0x11c92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965904));
    // 0x11c930: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11c930u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c934: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11c934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11c938: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11c938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c93c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11c93cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c940: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x11c940u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11c944: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x11c944u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c948: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x11c948u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11c94c: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x11C94Cu;
    SET_GPR_U32(ctx, 31, 0x11C954u);
    ctx->pc = 0x11C950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C94Cu;
    // 0x11c950: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130B0u, 0x11C94Cu, 0x11C954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C954u;
label_11c954:
    // 0x11c954: 0x4430009  bgezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11C954u;
    {
        const bool branch_taken_0x11c954 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11c954) {
            ctx->pc = 0x11C958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C954u;
            // 0x11c958: 0x8ec227d0  lw          $v0, 0x27D0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C97Cu;
            goto label_11c97c;
        }
    }
    ctx->pc = 0x11C95Cu;
label_11c95c:
    // 0x11c95c: 0x8e6427ec  lw          $a0, 0x27EC($s3)
    ctx->pc = 0x11c95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10220)));
    // 0x11c960: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x11C960u;
    SET_GPR_U32(ctx, 31, 0x11C968u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x11C960u, 0x11C968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C968u;
label_11c968:
    // 0x11c968: 0x3a440008  xori        $a0, $s2, 0x8
    ctx->pc = 0x11c968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)8);
    // 0x11c96c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11c96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11c970: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x11c970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x11c974: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11C974u;
    {
        const bool branch_taken_0x11c974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C974u;
        // 0x11c978: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c974) {
            ctx->pc = 0x11C9A4u;
            goto label_11c9a4;
        }
    }
    ctx->pc = 0x11C97Cu;
label_11c97c:
    // 0x11c97c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C97Cu;
    {
        const bool branch_taken_0x11c97c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C97Cu;
        // 0x11c980: 0x3c040015  lui         $a0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c97c) {
            ctx->pc = 0x11C98Cu;
            goto label_11c98c;
        }
    }
    ctx->pc = 0x11C984u;
    // 0x11c984: 0xc044794  jal         func_111E50
    ctx->pc = 0x11C984u;
    SET_GPR_U32(ctx, 31, 0x11C98Cu);
    ctx->pc = 0x11C988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C984u;
    // 0x11c988: 0x2484e748  addiu       $a0, $a0, -0x18B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111E50u, 0x11C984u, 0x11C98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C98Cu;
label_11c98c:
    // 0x11c98c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x11c98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x11c990: 0x8e6427ec  lw          $a0, 0x27EC($s3)
    ctx->pc = 0x11c990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10220)));
    // 0x11c994: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x11c994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x11c998: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x11C998u;
    SET_GPR_U32(ctx, 31, 0x11C9A0u);
    ctx->pc = 0x11C99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C998u;
    // 0x11c99c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x11C998u, 0x11C9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C9A0u;
label_11c9a0:
    // 0x11c9a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11c9a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11c9a4:
    // 0x11c9a4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x11c9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11c9a8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x11c9a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11c9ac: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x11c9acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11c9b0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x11c9b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11c9b4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x11c9b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11c9b8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x11c9b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11c9bc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11c9bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c9c0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11c9c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c9c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11c9c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c9c8: 0x3e00008  jr          $ra
    ctx->pc = 0x11C9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C9C8u;
        // 0x11c9cc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C9C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C9D0u;
}
