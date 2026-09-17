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

// Function: sub_00217038
// Address: 0x217038 - 0x217168
void sub_00217038_0x217038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217038_0x217038");
#endif

    switch (ctx->pc) {
        case 0x217050u: goto label_217050;
        case 0x217070u: goto label_217070;
        case 0x2170b0u: goto label_2170b0;
        case 0x2170c0u: goto label_2170c0;
        case 0x2170d0u: goto label_2170d0;
        case 0x2170e0u: goto label_2170e0;
        case 0x2170f0u: goto label_2170f0;
        case 0x217100u: goto label_217100;
        case 0x217110u: goto label_217110;
        case 0x217140u: goto label_217140;
        case 0x217150u: goto label_217150;
        default: break;
    }

    ctx->pc = 0x217038u;

    // 0x217038: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x217038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21703c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21703cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x217040: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x217040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x217044: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x217044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x217048: 0xc07cfc8  jal         func_1F3F20
    ctx->pc = 0x217048u;
    SET_GPR_U32(ctx, 31, 0x217050u);
    ctx->pc = 0x21704Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217048u;
    // 0x21704c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3F20u, 0x217048u, 0x217050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217050u;
label_217050:
    // 0x217050: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x217050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217054: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x217054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217058: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x217058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x21705c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21705Cu;
    {
        const bool branch_taken_0x21705c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x217060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21705Cu;
        // 0x217060: 0x2a220025  slti        $v0, $s1, 0x25 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)37) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21705c) {
            ctx->pc = 0x217074u;
            goto label_217074;
        }
    }
    ctx->pc = 0x217064u;
    // 0x217064: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x217064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x217068: 0xc0c22d8  jal         func_308B60
    ctx->pc = 0x217068u;
    SET_GPR_U32(ctx, 31, 0x217070u);
    ctx->pc = 0x21706Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217068u;
    // 0x21706c: 0x8c4488d0  lw          $a0, -0x7730($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936784)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308B60u, 0x217068u, 0x217070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217070u;
label_217070:
    // 0x217070: 0x2a220025  slti        $v0, $s1, 0x25
    ctx->pc = 0x217070u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)37) ? 1 : 0);
label_217074:
    // 0x217074: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x217074u;
    {
        const bool branch_taken_0x217074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217074u;
        // 0x217078: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217074) {
            ctx->pc = 0x217128u;
            goto label_217128;
        }
    }
    ctx->pc = 0x21707Cu;
    // 0x21707c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x21707cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217080: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x217080u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x217084: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x217084u;
    {
        const bool branch_taken_0x217084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217084) {
            ctx->pc = 0x217088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217084u;
            // 0x217088: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217128u;
            goto label_217128;
        }
    }
    ctx->pc = 0x21708Cu;
    // 0x21708c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21708cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x217090: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x217090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x217094: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x217094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x217098: 0x8c635a10  lw          $v1, 0x5A10($v1)
    ctx->pc = 0x217098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23056)));
    // 0x21709c: 0x600008  jr          $v1
    ctx->pc = 0x21709Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2170A8u: goto label_2170a8;
            case 0x2170B8u: goto label_2170b8;
            case 0x2170C8u: goto label_2170c8;
            case 0x2170D8u: goto label_2170d8;
            case 0x2170E8u: goto label_2170e8;
            case 0x2170F8u: goto label_2170f8;
            case 0x217108u: goto label_217108;
            case 0x217118u: goto label_217118;
            case 0x217124u: goto label_217124;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21709Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2170A4u;
    // 0x2170a4: 0x0  nop
    ctx->pc = 0x2170a4u;
    // NOP
label_2170a8:
    // 0x2170a8: 0xc0870b6  jal         func_21C2D8
    ctx->pc = 0x2170A8u;
    SET_GPR_U32(ctx, 31, 0x2170B0u);
    ctx->pc = 0x2170ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2170A8u;
    // 0x2170ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C2D8u, 0x2170A8u, 0x2170B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2170B0u;
label_2170b0:
    // 0x2170b0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2170B0u;
    {
        const bool branch_taken_0x2170b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2170B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170B0u;
        // 0x2170b4: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2170b0) {
            ctx->pc = 0x217128u;
            goto label_217128;
        }
    }
    ctx->pc = 0x2170B8u;
label_2170b8:
    // 0x2170b8: 0xc0870fe  jal         func_21C3F8
    ctx->pc = 0x2170B8u;
    SET_GPR_U32(ctx, 31, 0x2170C0u);
    ctx->pc = 0x2170BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2170B8u;
    // 0x2170bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C3F8u, 0x2170B8u, 0x2170C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2170C0u;
label_2170c0:
    // 0x2170c0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2170C0u;
    {
        const bool branch_taken_0x2170c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2170C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170C0u;
        // 0x2170c4: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2170c0) {
            ctx->pc = 0x217128u;
            goto label_217128;
        }
    }
    ctx->pc = 0x2170C8u;
label_2170c8:
    // 0x2170c8: 0xc087448  jal         func_21D120
    ctx->pc = 0x2170C8u;
    SET_GPR_U32(ctx, 31, 0x2170D0u);
    ctx->pc = 0x2170CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2170C8u;
    // 0x2170cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D120u, 0x2170C8u, 0x2170D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2170D0u;
label_2170d0:
    // 0x2170d0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2170D0u;
    {
        const bool branch_taken_0x2170d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2170D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170D0u;
        // 0x2170d4: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2170d0) {
            ctx->pc = 0x217128u;
            goto label_217128;
        }
    }
    ctx->pc = 0x2170D8u;
label_2170d8:
    // 0x2170d8: 0xc087198  jal         func_21C660
    ctx->pc = 0x2170D8u;
    SET_GPR_U32(ctx, 31, 0x2170E0u);
    ctx->pc = 0x2170DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2170D8u;
    // 0x2170dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C660u, 0x2170D8u, 0x2170E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2170E0u;
label_2170e0:
    // 0x2170e0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2170E0u;
    {
        const bool branch_taken_0x2170e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2170E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170E0u;
        // 0x2170e4: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2170e0) {
            ctx->pc = 0x217128u;
            goto label_217128;
        }
    }
    ctx->pc = 0x2170E8u;
label_2170e8:
    // 0x2170e8: 0xc0872ee  jal         func_21CBB8
    ctx->pc = 0x2170E8u;
    SET_GPR_U32(ctx, 31, 0x2170F0u);
    ctx->pc = 0x2170ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2170E8u;
    // 0x2170ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CBB8u, 0x2170E8u, 0x2170F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2170F0u;
label_2170f0:
    // 0x2170f0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2170F0u;
    {
        const bool branch_taken_0x2170f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2170F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170F0u;
        // 0x2170f4: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2170f0) {
            ctx->pc = 0x217128u;
            goto label_217128;
        }
    }
    ctx->pc = 0x2170F8u;
label_2170f8:
    // 0x2170f8: 0xc087216  jal         func_21C858
    ctx->pc = 0x2170F8u;
    SET_GPR_U32(ctx, 31, 0x217100u);
    ctx->pc = 0x2170FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2170F8u;
    // 0x2170fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C858u, 0x2170F8u, 0x217100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217100u;
label_217100:
    // 0x217100: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x217100u;
    {
        const bool branch_taken_0x217100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217100u;
        // 0x217104: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217100) {
            ctx->pc = 0x217128u;
            goto label_217128;
        }
    }
    ctx->pc = 0x217108u;
label_217108:
    // 0x217108: 0xc087158  jal         func_21C560
    ctx->pc = 0x217108u;
    SET_GPR_U32(ctx, 31, 0x217110u);
    ctx->pc = 0x21710Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217108u;
    // 0x21710c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C560u, 0x217108u, 0x217110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217110u;
label_217110:
    // 0x217110: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x217110u;
    {
        const bool branch_taken_0x217110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217110u;
        // 0x217114: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217110) {
            ctx->pc = 0x217128u;
            goto label_217128;
        }
    }
    ctx->pc = 0x217118u;
label_217118:
    // 0x217118: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x217118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x21711c: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x21711cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x217120: 0xac62886c  sw          $v0, -0x7794($v1)
    ctx->pc = 0x217120u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3A886Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A886Cu, _value); } while (0);
label_217124:
    // 0x217124: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x217124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_217128:
    // 0x217128: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x217128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935488)));
    // 0x21712c: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x21712cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x217130: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x217130u;
    {
        const bool branch_taken_0x217130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217130) {
            ctx->pc = 0x217134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217130u;
            // 0x217134: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217154u;
            goto label_217154;
        }
    }
    ctx->pc = 0x217138u;
    // 0x217138: 0xc0c2304  jal         func_308C10
    ctx->pc = 0x217138u;
    SET_GPR_U32(ctx, 31, 0x217140u);
    ctx->pc = 0x308C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308C10u, 0x217138u, 0x217140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217140u;
label_217140:
    // 0x217140: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x217140u;
    {
        const bool branch_taken_0x217140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217140) {
            ctx->pc = 0x217144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217140u;
            // 0x217144: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217154u;
            goto label_217154;
        }
    }
    ctx->pc = 0x217148u;
    // 0x217148: 0xc0c22d4  jal         func_308B50
    ctx->pc = 0x217148u;
    SET_GPR_U32(ctx, 31, 0x217150u);
    ctx->pc = 0x21714Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217148u;
    // 0x21714c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308B50u, 0x217148u, 0x217150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217150u;
label_217150:
    // 0x217150: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_217154:
    // 0x217154: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x217154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217158: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217158u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21715c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21715cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217160: 0x3e00008  jr          $ra
    ctx->pc = 0x217160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217160u;
        // 0x217164: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217168u;
}
