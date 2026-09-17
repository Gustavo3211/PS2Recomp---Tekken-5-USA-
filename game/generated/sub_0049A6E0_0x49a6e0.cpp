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

// Function: sub_0049A6E0
// Address: 0x49a6e0 - 0x49a7e8
void sub_0049A6E0_0x49a6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049A6E0_0x49a6e0");
#endif

    switch (ctx->pc) {
        case 0x49a7b0u: goto label_49a7b0;
        case 0x49a7c0u: goto label_49a7c0;
        case 0x49a7d0u: goto label_49a7d0;
        case 0x49a7e0u: goto label_49a7e0;
        default: break;
    }

    ctx->pc = 0x49a6e0u;

    // 0x49a6e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49a6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x49a6e4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x49a6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x49a6e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49a6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49a6ec: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x49a6ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x49a6f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x49a6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x49a6f4: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x49a6f4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x49a6f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49a6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x49a6fc: 0x2604d680  addiu       $a0, $s0, -0x2980
    ctx->pc = 0x49a6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x49a700: 0x24690b3c  addiu       $t1, $v1, 0xB3C
    ctx->pc = 0x49a700u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 2876));
    // 0x49a704: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x49a704u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x49a708: 0x9482000e  lhu         $v0, 0xE($a0)
    ctx->pc = 0x49a708u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72D68Eu));
    // 0x49a70c: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x49a70cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x49a710: 0x84860016  lh          $a2, 0x16($a0)
    ctx->pc = 0x49a710u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x72D696u));
    // 0x49a714: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49a714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49a718: 0x84830010  lh          $v1, 0x10($a0)
    ctx->pc = 0x49a718u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x49a71c: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x49a71cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49a720: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49a720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49a724: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x49a724u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x49a728: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x49a728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x49a72c: 0x34e2ffff  ori         $v0, $a3, 0xFFFF
    ctx->pc = 0x49a72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x49a730: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x49a730u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x49a734: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x49a734u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x49a738: 0x433824  and         $a3, $v0, $v1
    ctx->pc = 0x49a738u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49a73c: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x49a73cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x49a740: 0x26260b60  addiu       $a2, $s1, 0xB60
    ctx->pc = 0x49a740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2912));
    // 0x49a744: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x49a744u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x49a748: 0x24e40002  addiu       $a0, $a3, 0x2
    ctx->pc = 0x49a748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x49a74c: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x49a74cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x49a750: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x49a750u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49a754: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x49a754u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49a758: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x49a758u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x49a75c: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x49A75Cu;
    {
        const bool branch_taken_0x49a75c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A75Cu;
        // 0x49a760: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a75c) {
            ctx->pc = 0x49A824u;
            return;
        }
    }
    ctx->pc = 0x49A764u;
    // 0x49a764: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x49a764u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49a768: 0x24e40004  addiu       $a0, $a3, 0x4
    ctx->pc = 0x49a768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x49a76c: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x49a76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x49a770: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x49a770u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x49a774: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x49a774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x49a778: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49a778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49a77c: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x49a77cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x49a780: 0x85230000  lh          $v1, 0x0($t1)
    ctx->pc = 0x49a780u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49a784: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x49a784u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x49a788: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x49A788u;
    {
        const bool branch_taken_0x49a788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A788u;
        // 0x49a78c: 0x26220b60  addiu       $v0, $s1, 0xB60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a788) {
            ctx->pc = 0x49A810u;
            return;
        }
    }
    ctx->pc = 0x49A790u;
    // 0x49a790: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x49a790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x49a794: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x49a794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x49a798: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49a798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x49a79c: 0x8c63ade0  lw          $v1, -0x5220($v1)
    ctx->pc = 0x49a79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946272)));
    // 0x49a7a0: 0x600008  jr          $v1
    ctx->pc = 0x49A7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x49A7A8u: goto label_49a7a8;
            case 0x49A7B8u: goto label_49a7b8;
            case 0x49A7C8u: goto label_49a7c8;
            case 0x49A7D8u: goto label_49a7d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A7A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x49A7A8u;
label_49a7a8:
    // 0x49a7a8: 0xc126804  jal         func_49A010
    ctx->pc = 0x49A7A8u;
    SET_GPR_U32(ctx, 31, 0x49A7B0u);
    ctx->pc = 0x49A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A010u, 0x49A7A8u, 0x49A7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A7B0u;
label_49a7b0:
    // 0x49a7b0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x49A7B0u;
    {
        const bool branch_taken_0x49a7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A7B0u;
        // 0x49a7b4: 0x26220b60  addiu       $v0, $s1, 0xB60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a7b0) {
            ctx->pc = 0x49A810u;
            return;
        }
    }
    ctx->pc = 0x49A7B8u;
label_49a7b8:
    // 0x49a7b8: 0xc1267cc  jal         func_499F30
    ctx->pc = 0x49A7B8u;
    SET_GPR_U32(ctx, 31, 0x49A7C0u);
    ctx->pc = 0x499F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499F30u, 0x49A7B8u, 0x49A7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A7C0u;
label_49a7c0:
    // 0x49a7c0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x49A7C0u;
    {
        const bool branch_taken_0x49a7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A7C0u;
        // 0x49a7c4: 0x26220b60  addiu       $v0, $s1, 0xB60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a7c0) {
            ctx->pc = 0x49A810u;
            return;
        }
    }
    ctx->pc = 0x49A7C8u;
label_49a7c8:
    // 0x49a7c8: 0xc1267c4  jal         func_499F10
    ctx->pc = 0x49A7C8u;
    SET_GPR_U32(ctx, 31, 0x49A7D0u);
    ctx->pc = 0x499F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499F10u, 0x49A7C8u, 0x49A7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A7D0u;
label_49a7d0:
    // 0x49a7d0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x49A7D0u;
    {
        const bool branch_taken_0x49a7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A7D0u;
        // 0x49a7d4: 0x26220b60  addiu       $v0, $s1, 0xB60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a7d0) {
            ctx->pc = 0x49A810u;
            return;
        }
    }
    ctx->pc = 0x49A7D8u;
label_49a7d8:
    // 0x49a7d8: 0xc1267e0  jal         func_499F80
    ctx->pc = 0x49A7D8u;
    SET_GPR_U32(ctx, 31, 0x49A7E0u);
    ctx->pc = 0x499F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499F80u, 0x49A7D8u, 0x49A7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A7E0u;
label_49a7e0:
    // 0x49a7e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x49A7E0u;
    {
        const bool branch_taken_0x49a7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A7E0u;
        // 0x49a7e4: 0x26220b60  addiu       $v0, $s1, 0xB60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a7e0) {
            ctx->pc = 0x49A810u;
            return;
        }
    }
    ctx->pc = 0x49A7E8u;
}
