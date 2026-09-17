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

// Function: sub_0028A5F0
// Address: 0x28a5f0 - 0x28aa20
void sub_0028A5F0_0x28a5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A5F0_0x28a5f0");
#endif

    switch (ctx->pc) {
        case 0x28a664u: goto label_28a664;
        case 0x28a678u: goto label_28a678;
        case 0x28a688u: goto label_28a688;
        case 0x28a694u: goto label_28a694;
        case 0x28a6b4u: goto label_28a6b4;
        case 0x28a6c8u: goto label_28a6c8;
        case 0x28a6e8u: goto label_28a6e8;
        case 0x28a704u: goto label_28a704;
        case 0x28a714u: goto label_28a714;
        case 0x28a738u: goto label_28a738;
        case 0x28a768u: goto label_28a768;
        case 0x28a798u: goto label_28a798;
        case 0x28a7c8u: goto label_28a7c8;
        case 0x28a7f8u: goto label_28a7f8;
        case 0x28a828u: goto label_28a828;
        case 0x28a858u: goto label_28a858;
        case 0x28a888u: goto label_28a888;
        case 0x28a8b8u: goto label_28a8b8;
        case 0x28a8e8u: goto label_28a8e8;
        case 0x28a924u: goto label_28a924;
        case 0x28a948u: goto label_28a948;
        case 0x28a9a4u: goto label_28a9a4;
        case 0x28a9c0u: goto label_28a9c0;
        case 0x28a9d8u: goto label_28a9d8;
        case 0x28a9ecu: goto label_28a9ec;
        default: break;
    }

    ctx->pc = 0x28a5f0u;

    // 0x28a5f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28a5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28a5f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x28a5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x28a5f8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28a5f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28a5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28a600: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28a600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28a604: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28a604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28a608: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x28a608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x28a60c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x28a60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x28a610: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28a610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28a614: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x28a614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x28a618: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x28a618u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x28a61c: 0x504000f6  beql        $v0, $zero, . + 4 + (0xF6 << 2)
    ctx->pc = 0x28A61Cu;
    {
        const bool branch_taken_0x28a61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a61c) {
            ctx->pc = 0x28A620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A61Cu;
            // 0x28a620: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A9F8u;
            goto label_28a9f8;
        }
    }
    ctx->pc = 0x28A624u;
    // 0x28a624: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x28a624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28a628: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x28a628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x28a62c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28a62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28a630: 0x8c639a90  lw          $v1, -0x6570($v1)
    ctx->pc = 0x28a630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941328)));
    // 0x28a634: 0x600008  jr          $v1
    ctx->pc = 0x28A634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28A640u: goto label_28a640;
            case 0x28A6C0u: goto label_28a6c0;
            case 0x28A918u: goto label_28a918;
            case 0x28A9D0u: goto label_28a9d0;
            case 0x28A9F4u: goto label_28a9f4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A634u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28A63Cu;
    // 0x28a63c: 0x0  nop
    ctx->pc = 0x28a63cu;
    // NOP
label_28a640:
    // 0x28a640: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x28a640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x28a644: 0x28422a30  slti        $v0, $v0, 0x2A30
    ctx->pc = 0x28a644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10800) ? 1 : 0);
    // 0x28a648: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28A648u;
    {
        const bool branch_taken_0x28a648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a648) {
            ctx->pc = 0x28A670u;
            goto label_28a670;
        }
    }
    ctx->pc = 0x28A650u;
    // 0x28a650: 0x8e620154  lw          $v0, 0x154($s3)
    ctx->pc = 0x28a650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 340)));
    // 0x28a654: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x28a654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x28a658: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28a658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28a65c: 0xc08b882  jal         func_22E208
    ctx->pc = 0x28A65Cu;
    SET_GPR_U32(ctx, 31, 0x28A664u);
    ctx->pc = 0x28A660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A65Cu;
    // 0x28a660: 0xae620154  sw          $v0, 0x154($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 340), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E208u, 0x28A65Cu, 0x28A664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A664u;
label_28a664:
    // 0x28a664: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x28a664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28a668: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x28A668u;
    {
        const bool branch_taken_0x28a668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A668u;
        // 0x28a66c: 0xae620048  sw          $v0, 0x48($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a668) {
            ctx->pc = 0x28A9F4u;
            goto label_28a9f4;
        }
    }
    ctx->pc = 0x28A670u;
label_28a670:
    // 0x28a670: 0xc089622  jal         func_225888
    ctx->pc = 0x28A670u;
    SET_GPR_U32(ctx, 31, 0x28A678u);
    ctx->pc = 0x28A674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A670u;
    // 0x28a674: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x28A670u, 0x28A678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A678u;
label_28a678:
    // 0x28a678: 0x104000df  beqz        $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x28A678u;
    {
        const bool branch_taken_0x28a678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A678u;
        // 0x28a67c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a678) {
            ctx->pc = 0x28A9F8u;
            goto label_28a9f8;
        }
    }
    ctx->pc = 0x28A680u;
    // 0x28a680: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x28A680u;
    SET_GPR_U32(ctx, 31, 0x28A688u);
    ctx->pc = 0x28A684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A680u;
    // 0x28a684: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x28A680u, 0x28A688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A688u;
label_28a688:
    // 0x28a688: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x28a688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x28a68c: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x28A68Cu;
    SET_GPR_U32(ctx, 31, 0x28A694u);
    ctx->pc = 0x28A690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A68Cu;
    // 0x28a690: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x28A68Cu, 0x28A694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A694u;
label_28a694:
    // 0x28a694: 0x3c094000  lui         $t1, 0x4000
    ctx->pc = 0x28a694u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16384 << 16));
    // 0x28a698: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28a698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a69c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28a69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a6a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28a6a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a6a4: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x28a6a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x28a6a8: 0x240800f2  addiu       $t0, $zero, 0xF2
    ctx->pc = 0x28a6a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
    // 0x28a6ac: 0xc0a5adc  jal         func_296B70
    ctx->pc = 0x28A6ACu;
    SET_GPR_U32(ctx, 31, 0x28A6B4u);
    ctx->pc = 0x28A6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A6ACu;
    // 0x28a6b0: 0x35290800  ori         $t1, $t1, 0x800 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x296B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296B70u, 0x28A6ACu, 0x28A6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A6B4u;
label_28a6b4:
    // 0x28a6b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28a6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a6b8: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x28A6B8u;
    {
        const bool branch_taken_0x28a6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A6B8u;
        // 0x28a6bc: 0xae620048  sw          $v0, 0x48($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a6b8) {
            ctx->pc = 0x28A9F4u;
            goto label_28a9f4;
        }
    }
    ctx->pc = 0x28A6C0u;
label_28a6c0:
    // 0x28a6c0: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x28A6C0u;
    SET_GPR_U32(ctx, 31, 0x28A6C8u);
    ctx->pc = 0x28A6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A6C0u;
    // 0x28a6c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x28A6C0u, 0x28A6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A6C8u;
label_28a6c8:
    // 0x28a6c8: 0x8e62013c  lw          $v0, 0x13C($s3)
    ctx->pc = 0x28a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 316)));
    // 0x28a6cc: 0x104000c9  beqz        $v0, . + 4 + (0xC9 << 2)
    ctx->pc = 0x28A6CCu;
    {
        const bool branch_taken_0x28a6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A6CCu;
        // 0x28a6d0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a6cc) {
            ctx->pc = 0x28A9F4u;
            goto label_28a9f4;
        }
    }
    ctx->pc = 0x28A6D4u;
    // 0x28a6d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28a6d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a6d8: 0x24559b30  addiu       $s5, $v0, -0x64D0
    ctx->pc = 0x28a6d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941488));
    // 0x28a6dc: 0x26740008  addiu       $s4, $s3, 0x8
    ctx->pc = 0x28a6dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x28a6e0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x28a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x28a6e4: 0x0  nop
    ctx->pc = 0x28a6e4u;
    // NOP
label_28a6e8:
    // 0x28a6e8: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x28a6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x28a6ec: 0x24420150  addiu       $v0, $v0, 0x150
    ctx->pc = 0x28a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x28a6f0: 0x2828821  addu        $s1, $s4, $v0
    ctx->pc = 0x28a6f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x28a6f4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x28a6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28a6f8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x28a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x28a6fc: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x28A6FCu;
    SET_GPR_U32(ctx, 31, 0x28A704u);
    ctx->pc = 0x28A700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A6FCu;
    // 0x28a700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x28A6FCu, 0x28A704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A704u;
label_28a704:
    // 0x28a704: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28A704u;
    {
        const bool branch_taken_0x28a704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A704u;
        // 0x28a708: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a704) {
            ctx->pc = 0x28A718u;
            goto label_28a718;
        }
    }
    ctx->pc = 0x28A70Cu;
    // 0x28a70c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28A70Cu;
    SET_GPR_U32(ctx, 31, 0x28A714u);
    ctx->pc = 0x28A710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A70Cu;
    // 0x28a710: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28A70Cu, 0x28A714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A714u;
label_28a714:
    // 0x28a714: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x28a714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_28a718:
    // 0x28a718: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x28a718u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x28a71c: 0x2a420007  slti        $v0, $s2, 0x7
    ctx->pc = 0x28a71cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x28a720: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x28A720u;
    {
        const bool branch_taken_0x28a720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a720) {
            ctx->pc = 0x28A724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A720u;
            // 0x28a724: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28a6e8;
        }
    }
    ctx->pc = 0x28A728u;
    // 0x28a728: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28a728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28a72c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28a72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a730: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28A730u;
    SET_GPR_U32(ctx, 31, 0x28A738u);
    ctx->pc = 0x28A734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A730u;
    // 0x28a734: 0x24a599e0  addiu       $a1, $a1, -0x6620 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28A730u, 0x28A738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A738u;
label_28a738:
    // 0x28a738: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28A738u;
    {
        const bool branch_taken_0x28a738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a738) {
            ctx->pc = 0x28A73Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A738u;
            // 0x28a73c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A75Cu;
            goto label_28a75c;
        }
    }
    ctx->pc = 0x28A740u;
    // 0x28a740: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28a740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28a744: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28A744u;
    {
        const bool branch_taken_0x28a744 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A744u;
        // 0x28a748: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a744) {
            ctx->pc = 0x28A758u;
            goto label_28a758;
        }
    }
    ctx->pc = 0x28A74Cu;
    // 0x28a74c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28a750: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28a750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28a754: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28a754u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28a758:
    // 0x28a758: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28a758u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28a75c:
    // 0x28a75c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28a75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a760: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28A760u;
    SET_GPR_U32(ctx, 31, 0x28A768u);
    ctx->pc = 0x28A764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A760u;
    // 0x28a764: 0x24a59a00  addiu       $a1, $a1, -0x6600 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28A760u, 0x28A768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A768u;
label_28a768:
    // 0x28a768: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28A768u;
    {
        const bool branch_taken_0x28a768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a768) {
            ctx->pc = 0x28A76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A768u;
            // 0x28a76c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A78Cu;
            goto label_28a78c;
        }
    }
    ctx->pc = 0x28A770u;
    // 0x28a770: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28a770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28a774: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28A774u;
    {
        const bool branch_taken_0x28a774 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A774u;
        // 0x28a778: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a774) {
            ctx->pc = 0x28A788u;
            goto label_28a788;
        }
    }
    ctx->pc = 0x28A77Cu;
    // 0x28a77c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28a780: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28a780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28a784: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28a784u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28a788:
    // 0x28a788: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28a788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28a78c:
    // 0x28a78c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28a78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a790: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28A790u;
    SET_GPR_U32(ctx, 31, 0x28A798u);
    ctx->pc = 0x28A794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A790u;
    // 0x28a794: 0x24a59a20  addiu       $a1, $a1, -0x65E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28A790u, 0x28A798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A798u;
label_28a798:
    // 0x28a798: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28A798u;
    {
        const bool branch_taken_0x28a798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a798) {
            ctx->pc = 0x28A79Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A798u;
            // 0x28a79c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A7BCu;
            goto label_28a7bc;
        }
    }
    ctx->pc = 0x28A7A0u;
    // 0x28a7a0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28a7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28a7a4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28A7A4u;
    {
        const bool branch_taken_0x28a7a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A7A4u;
        // 0x28a7a8: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a7a4) {
            ctx->pc = 0x28A7B8u;
            goto label_28a7b8;
        }
    }
    ctx->pc = 0x28A7ACu;
    // 0x28a7ac: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28a7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28a7b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28a7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28a7b4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28a7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28a7b8:
    // 0x28a7b8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28a7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28a7bc:
    // 0x28a7bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28a7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a7c0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28A7C0u;
    SET_GPR_U32(ctx, 31, 0x28A7C8u);
    ctx->pc = 0x28A7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A7C0u;
    // 0x28a7c4: 0x24a59a40  addiu       $a1, $a1, -0x65C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28A7C0u, 0x28A7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A7C8u;
label_28a7c8:
    // 0x28a7c8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28A7C8u;
    {
        const bool branch_taken_0x28a7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a7c8) {
            ctx->pc = 0x28A7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A7C8u;
            // 0x28a7cc: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A7ECu;
            goto label_28a7ec;
        }
    }
    ctx->pc = 0x28A7D0u;
    // 0x28a7d0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28a7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28a7d4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28A7D4u;
    {
        const bool branch_taken_0x28a7d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A7D4u;
        // 0x28a7d8: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a7d4) {
            ctx->pc = 0x28A7E8u;
            goto label_28a7e8;
        }
    }
    ctx->pc = 0x28A7DCu;
    // 0x28a7dc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28a7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28a7e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28a7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28a7e4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28a7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28a7e8:
    // 0x28a7e8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28a7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28a7ec:
    // 0x28a7ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28a7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a7f0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28A7F0u;
    SET_GPR_U32(ctx, 31, 0x28A7F8u);
    ctx->pc = 0x28A7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A7F0u;
    // 0x28a7f4: 0x24a59a60  addiu       $a1, $a1, -0x65A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28A7F0u, 0x28A7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A7F8u;
label_28a7f8:
    // 0x28a7f8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28A7F8u;
    {
        const bool branch_taken_0x28a7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a7f8) {
            ctx->pc = 0x28A7FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A7F8u;
            // 0x28a7fc: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A81Cu;
            goto label_28a81c;
        }
    }
    ctx->pc = 0x28A800u;
    // 0x28a800: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28a800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28a804: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28A804u;
    {
        const bool branch_taken_0x28a804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A804u;
        // 0x28a808: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a804) {
            ctx->pc = 0x28A818u;
            goto label_28a818;
        }
    }
    ctx->pc = 0x28A80Cu;
    // 0x28a80c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28a810: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28a810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28a814: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28a814u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28a818:
    // 0x28a818: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28a818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28a81c:
    // 0x28a81c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28a81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a820: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28A820u;
    SET_GPR_U32(ctx, 31, 0x28A828u);
    ctx->pc = 0x28A824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A820u;
    // 0x28a824: 0x24a59a70  addiu       $a1, $a1, -0x6590 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28A820u, 0x28A828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A828u;
label_28a828:
    // 0x28a828: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28A828u;
    {
        const bool branch_taken_0x28a828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a828) {
            ctx->pc = 0x28A82Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A828u;
            // 0x28a82c: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A84Cu;
            goto label_28a84c;
        }
    }
    ctx->pc = 0x28A830u;
    // 0x28a830: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28a830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28a834: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28A834u;
    {
        const bool branch_taken_0x28a834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A834u;
        // 0x28a838: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a834) {
            ctx->pc = 0x28A848u;
            goto label_28a848;
        }
    }
    ctx->pc = 0x28A83Cu;
    // 0x28a83c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28a840: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28a840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28a844: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28a844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28a848:
    // 0x28a848: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x28a848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_28a84c:
    // 0x28a84c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28a84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a850: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28A850u;
    SET_GPR_U32(ctx, 31, 0x28A858u);
    ctx->pc = 0x28A854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A850u;
    // 0x28a854: 0x24a53c08  addiu       $a1, $a1, 0x3C08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28A850u, 0x28A858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A858u;
label_28a858:
    // 0x28a858: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28A858u;
    {
        const bool branch_taken_0x28a858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a858) {
            ctx->pc = 0x28A85Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A858u;
            // 0x28a85c: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A87Cu;
            goto label_28a87c;
        }
    }
    ctx->pc = 0x28A860u;
    // 0x28a860: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28a860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28a864: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28A864u;
    {
        const bool branch_taken_0x28a864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A864u;
        // 0x28a868: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a864) {
            ctx->pc = 0x28A878u;
            goto label_28a878;
        }
    }
    ctx->pc = 0x28A86Cu;
    // 0x28a86c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28a870: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28a870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28a874: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28a874u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28a878:
    // 0x28a878: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x28a878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_28a87c:
    // 0x28a87c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28a87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a880: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28A880u;
    SET_GPR_U32(ctx, 31, 0x28A888u);
    ctx->pc = 0x28A884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A880u;
    // 0x28a884: 0x24a53c10  addiu       $a1, $a1, 0x3C10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28A880u, 0x28A888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A888u;
label_28a888:
    // 0x28a888: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28A888u;
    {
        const bool branch_taken_0x28a888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a888) {
            ctx->pc = 0x28A88Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A888u;
            // 0x28a88c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A8ACu;
            goto label_28a8ac;
        }
    }
    ctx->pc = 0x28A890u;
    // 0x28a890: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28a890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28a894: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28A894u;
    {
        const bool branch_taken_0x28a894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A894u;
        // 0x28a898: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a894) {
            ctx->pc = 0x28A8A8u;
            goto label_28a8a8;
        }
    }
    ctx->pc = 0x28A89Cu;
    // 0x28a89c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28a8a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28a8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28a8a4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28a8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28a8a8:
    // 0x28a8a8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28a8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28a8ac:
    // 0x28a8ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28a8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a8b0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28A8B0u;
    SET_GPR_U32(ctx, 31, 0x28A8B8u);
    ctx->pc = 0x28A8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A8B0u;
    // 0x28a8b4: 0x24a59a80  addiu       $a1, $a1, -0x6580 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28A8B0u, 0x28A8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A8B8u;
label_28a8b8:
    // 0x28a8b8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28A8B8u;
    {
        const bool branch_taken_0x28a8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a8b8) {
            ctx->pc = 0x28A8BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A8B8u;
            // 0x28a8bc: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A8DCu;
            goto label_28a8dc;
        }
    }
    ctx->pc = 0x28A8C0u;
    // 0x28a8c0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28a8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28a8c4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28A8C4u;
    {
        const bool branch_taken_0x28a8c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A8C4u;
        // 0x28a8c8: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a8c4) {
            ctx->pc = 0x28A8D8u;
            goto label_28a8d8;
        }
    }
    ctx->pc = 0x28A8CCu;
    // 0x28a8cc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28a8d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28a8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28a8d4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28a8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28a8d8:
    // 0x28a8d8: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x28a8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_28a8dc:
    // 0x28a8dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28a8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a8e0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28A8E0u;
    SET_GPR_U32(ctx, 31, 0x28A8E8u);
    ctx->pc = 0x28A8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A8E0u;
    // 0x28a8e4: 0x24a53c18  addiu       $a1, $a1, 0x3C18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28A8E0u, 0x28A8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A8E8u;
label_28a8e8:
    // 0x28a8e8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x28a8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a8ec: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x28a8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x28a8f0: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x28a8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x28a8f4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x28a8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28a8f8: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x28a8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x28a8fc: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x28a8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
    // 0x28a900: 0xae640048  sw          $a0, 0x48($s3)
    ctx->pc = 0x28a900u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 4));
    // 0x28a904: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x28a904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x28a908: 0xae660150  sw          $a2, 0x150($s3)
    ctx->pc = 0x28a908u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 336), GPR_U32(ctx, 6));
    // 0x28a90c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x28a90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x28a910: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x28A910u;
    {
        const bool branch_taken_0x28a910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A910u;
        // 0x28a914: 0xae620040  sw          $v0, 0x40($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a910) {
            ctx->pc = 0x28A9F4u;
            goto label_28a9f4;
        }
    }
    ctx->pc = 0x28A918u;
label_28a918:
    // 0x28a918: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28a918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a91c: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x28A91Cu;
    SET_GPR_U32(ctx, 31, 0x28A924u);
    ctx->pc = 0x28A920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A91Cu;
    // 0x28a920: 0x3c11003c  lui         $s1, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x28A91Cu, 0x28A924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A924u;
label_28a924:
    // 0x28a924: 0x2622bed8  addiu       $v0, $s1, -0x4128
    ctx->pc = 0x28a924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950616));
    // 0x28a928: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x28a928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28a92c: 0x8e630150  lw          $v1, 0x150($s3)
    ctx->pc = 0x28a92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 336)));
    // 0x28a930: 0x10640030  beq         $v1, $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x28A930u;
    {
        const bool branch_taken_0x28a930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x28A934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A930u;
        // 0x28a934: 0x26740008  addiu       $s4, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a930) {
            ctx->pc = 0x28A9F4u;
            goto label_28a9f4;
        }
    }
    ctx->pc = 0x28A938u;
    // 0x28a938: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28a938u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a93c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28a93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a940: 0x2405efff  addiu       $a1, $zero, -0x1001
    ctx->pc = 0x28a940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28a944: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x28a944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_28a948:
    // 0x28a948: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x28a948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28a94c: 0x8c420150  lw          $v0, 0x150($v0)
    ctx->pc = 0x28a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x28a950: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28A950u;
    {
        const bool branch_taken_0x28a950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A950u;
        // 0x28a954: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a950) {
            ctx->pc = 0x28A968u;
            goto label_28a968;
        }
    }
    ctx->pc = 0x28A958u;
    // 0x28a958: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x28a958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28a95c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28a960: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x28a960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x28a964: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x28a964u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_28a968:
    // 0x28a968: 0x2a420007  slti        $v0, $s2, 0x7
    ctx->pc = 0x28a968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x28a96c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x28A96Cu;
    {
        const bool branch_taken_0x28a96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A96Cu;
        // 0x28a970: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a96c) {
            ctx->pc = 0x28A948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28a948;
        }
    }
    ctx->pc = 0x28A974u;
    // 0x28a974: 0x2623bed8  addiu       $v1, $s1, -0x4128
    ctx->pc = 0x28a974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950616));
    // 0x28a978: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x28a978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x28a97c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28a980: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x28a980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x28a984: 0x8c500150  lw          $s0, 0x150($v0)
    ctx->pc = 0x28a984u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x28a988: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x28A988u;
    {
        const bool branch_taken_0x28a988 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A988u;
        // 0x28a98c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a988) {
            ctx->pc = 0x28A9C0u;
            goto label_28a9c0;
        }
    }
    ctx->pc = 0x28A990u;
    // 0x28a990: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x28a990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28a994: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28a994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28a998: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x28a998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x28a99c: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x28A99Cu;
    SET_GPR_U32(ctx, 31, 0x28A9A4u);
    ctx->pc = 0x28A9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A99Cu;
    // 0x28a9a0: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x28A99Cu, 0x28A9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A9A4u;
label_28a9a4:
    // 0x28a9a4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x28A9A4u;
    {
        const bool branch_taken_0x28a9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a9a4) {
            ctx->pc = 0x28A9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A9A4u;
            // 0x28a9a8: 0x2622bed8  addiu       $v0, $s1, -0x4128 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950616));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A9C4u;
            goto label_28a9c4;
        }
    }
    ctx->pc = 0x28A9ACu;
    // 0x28a9ac: 0x8e640130  lw          $a0, 0x130($s3)
    ctx->pc = 0x28a9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x28a9b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28a9b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a9b4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x28a9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a9b8: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x28A9B8u;
    SET_GPR_U32(ctx, 31, 0x28A9C0u);
    ctx->pc = 0x28A9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A9B8u;
    // 0x28a9bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x28A9B8u, 0x28A9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A9C0u;
label_28a9c0:
    // 0x28a9c0: 0x2622bed8  addiu       $v0, $s1, -0x4128
    ctx->pc = 0x28a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950616));
label_28a9c4:
    // 0x28a9c4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x28a9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28a9c8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28A9C8u;
    {
        const bool branch_taken_0x28a9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9C8u;
        // 0x28a9cc: 0xae630150  sw          $v1, 0x150($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 336), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a9c8) {
            ctx->pc = 0x28A9F4u;
            goto label_28a9f4;
        }
    }
    ctx->pc = 0x28A9D0u;
label_28a9d0:
    // 0x28a9d0: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x28A9D0u;
    SET_GPR_U32(ctx, 31, 0x28A9D8u);
    ctx->pc = 0x28A9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A9D0u;
    // 0x28a9d4: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x28A9D0u, 0x28A9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A9D8u;
label_28a9d8:
    // 0x28a9d8: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x28a9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x28a9dc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x28a9dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a9e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a9e4: 0xc089636  jal         func_2258D8
    ctx->pc = 0x28A9E4u;
    SET_GPR_U32(ctx, 31, 0x28A9ECu);
    ctx->pc = 0x28A9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A9E4u;
    // 0x28a9e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x28A9E4u, 0x28A9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A9ECu;
label_28a9ec:
    // 0x28a9ec: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x28a9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
    // 0x28a9f0: 0xae600048  sw          $zero, 0x48($s3)
    ctx->pc = 0x28a9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 0));
label_28a9f4:
    // 0x28a9f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28a9f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28a9f8:
    // 0x28a9f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28a9f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a9fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28a9fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28aa00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28aa00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28aa04: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x28aa04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28aa08: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x28aa08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28aa0c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x28aa0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x28aa10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28aa10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28aa14: 0x3e00008  jr          $ra
    ctx->pc = 0x28AA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA14u;
        // 0x28aa18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AA1Cu;
    // 0x28aa1c: 0x0  nop
    ctx->pc = 0x28aa1cu;
    // NOP
    ctx->pc = 0x28aa20u;
}
