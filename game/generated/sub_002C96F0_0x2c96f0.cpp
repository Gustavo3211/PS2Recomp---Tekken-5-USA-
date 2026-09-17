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

// Function: sub_002C96F0
// Address: 0x2c96f0 - 0x2c98b8
void sub_002C96F0_0x2c96f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C96F0_0x2c96f0");
#endif

    switch (ctx->pc) {
        case 0x2c9720u: goto label_2c9720;
        case 0x2c976cu: goto label_2c976c;
        case 0x2c9788u: goto label_2c9788;
        case 0x2c97e8u: goto label_2c97e8;
        case 0x2c97f0u: goto label_2c97f0;
        case 0x2c9810u: goto label_2c9810;
        case 0x2c9840u: goto label_2c9840;
        case 0x2c989cu: goto label_2c989c;
        default: break;
    }

    ctx->pc = 0x2c96f0u;

    // 0x2c96f0: 0x8f82cb1c  lw          $v0, -0x34E4($gp)
    ctx->pc = 0x2c96f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953756)));
    // 0x2c96f4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c96f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c96f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c96f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c96fc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c96fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2c9700: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x2C9700u;
    {
        const bool branch_taken_0x2c9700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9700u;
        // 0x2c9704: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9700) {
            ctx->pc = 0x2C98A4u;
            goto label_2c98a4;
        }
    }
    ctx->pc = 0x2C9708u;
    // 0x2c9708: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x2c9708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x2c970c: 0x3c030018  lui         $v1, 0x18
    ctx->pc = 0x2c970cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
    // 0x2c9710: 0x244b8d44  addiu       $t3, $v0, -0x72BC
    ctx->pc = 0x2c9710u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937924));
    // 0x2c9714: 0x246a8dc8  addiu       $t2, $v1, -0x7238
    ctx->pc = 0x2c9714u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938056));
    // 0x2c9718: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c9718u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c971c: 0x0  nop
    ctx->pc = 0x2c971cu;
    // NOP
label_2c9720:
    // 0x2c9720: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x2c9720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x2c9724: 0x3a94021  addu        $t0, $sp, $t1
    ctx->pc = 0x2c9724u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 9)));
    // 0x2c9728: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2c9728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2c972c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2c972cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2c9730: 0x691023  subu        $v0, $v1, $t1
    ctx->pc = 0x2c9730u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2c9734: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2c9734u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2c9738: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c9738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c973c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2c973cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2c9740: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2c9740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2c9744: 0x29270002  slti        $a3, $t1, 0x2
    ctx->pc = 0x2c9744u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c9748: 0x9045000a  lbu         $a1, 0xA($v0)
    ctx->pc = 0x2c9748u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2c974c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2c974cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c9750: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x2c9750u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c9754: 0xa1050000  sb          $a1, 0x0($t0)
    ctx->pc = 0x2c9754u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c9758: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2c9758u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2c975c: 0x14e0fff0  bnez        $a3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2C975Cu;
    {
        const bool branch_taken_0x2c975c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C975Cu;
        // 0x2c9760: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c975c) {
            ctx->pc = 0x2C9720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9720;
        }
    }
    ctx->pc = 0x2C9764u;
    // 0x2c9764: 0xc0b262e  jal         func_2C98B8
    ctx->pc = 0x2C9764u;
    SET_GPR_U32(ctx, 31, 0x2C976Cu);
    ctx->pc = 0x2C98B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C98B8u, 0x2C9764u, 0x2C976Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C976Cu;
label_2c976c:
    // 0x2c976c: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2C976Cu;
    {
        const bool branch_taken_0x2c976c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C976Cu;
        // 0x2c9770: 0x3c020018  lui         $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c976c) {
            ctx->pc = 0x2C98A4u;
            goto label_2c98a4;
        }
    }
    ctx->pc = 0x2C9774u;
    // 0x2c9774: 0x3c030018  lui         $v1, 0x18
    ctx->pc = 0x2c9774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
    // 0x2c9778: 0x8f89cb18  lw          $t1, -0x34E8($gp)
    ctx->pc = 0x2c9778u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953752)));
    // 0x2c977c: 0x244b8d44  addiu       $t3, $v0, -0x72BC
    ctx->pc = 0x2c977cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937924));
    // 0x2c9780: 0x246a8dc8  addiu       $t2, $v1, -0x7238
    ctx->pc = 0x2c9780u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938056));
    // 0x2c9784: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c9784u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9788:
    // 0x2c9788: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x2c9788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x2c978c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2c978cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2c9790: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c9790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c9794: 0x481823  subu        $v1, $v0, $t0
    ctx->pc = 0x2c9794u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2c9798: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2c9798u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2c979c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c979cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c97a0: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2c97a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2c97a4: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x2c97a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2c97a8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2c97a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c97ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c97acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c97b0: 0x29070002  slti        $a3, $t0, 0x2
    ctx->pc = 0x2c97b0u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c97b4: 0x84650008  lh          $a1, 0x8($v1)
    ctx->pc = 0x2c97b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c97b8: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x2c97b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2c97bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2c97bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c97c0: 0x89001b  divu        $zero, $a0, $t1
    ctx->pc = 0x2c97c0u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2c97c4: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x2c97c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2c97c8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x2c97c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x2c97cc: 0x2012  mflo        $a0
    ctx->pc = 0x2c97ccu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2c97d0: 0x14e0ffed  bnez        $a3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2C97D0u;
    {
        const bool branch_taken_0x2c97d0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C97D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C97D0u;
        // 0x2c97d4: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c97d0) {
            ctx->pc = 0x2C9788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9788;
        }
    }
    ctx->pc = 0x2C97D8u;
    // 0x2c97d8: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x2c97d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x2c97dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c97dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c97e0: 0x24518d10  addiu       $s1, $v0, -0x72F0
    ctx->pc = 0x2c97e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937872));
    // 0x2c97e4: 0x0  nop
    ctx->pc = 0x2c97e4u;
    // NOP
label_2c97e8:
    // 0x2c97e8: 0xc0b279c  jal         func_2C9E70
    ctx->pc = 0x2C97E8u;
    SET_GPR_U32(ctx, 31, 0x2C97F0u);
    ctx->pc = 0x2C97ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C97E8u;
    // 0x2c97ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E70u, 0x2C97E8u, 0x2C97F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C97F0u;
label_2c97f0:
    // 0x2c97f0: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2c97f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2c97f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C97F4u;
    {
        const bool branch_taken_0x2c97f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C97F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C97F4u;
        // 0x2c97f8: 0x701821  addu        $v1, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c97f4) {
            ctx->pc = 0x2C9810u;
            goto label_2c9810;
        }
    }
    ctx->pc = 0x2C97FCu;
    // 0x2c97fc: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x2c97fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2c9800: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x2c9800u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2c9804: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2c9804u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c9808: 0xc0b2078  jal         func_2C81E0
    ctx->pc = 0x2C9808u;
    SET_GPR_U32(ctx, 31, 0x2C9810u);
    ctx->pc = 0x2C980Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9808u;
    // 0x2c980c: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C81E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C81E0u, 0x2C9808u, 0x2C9810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9810u;
label_2c9810:
    // 0x2c9810: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c9810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c9814: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2c9814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c9818: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2C9818u;
    {
        const bool branch_taken_0x2c9818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9818u;
        // 0x2c981c: 0x3c020018  lui         $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9818) {
            ctx->pc = 0x2C97E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c97e8;
        }
    }
    ctx->pc = 0x2C9820u;
    // 0x2c9820: 0x3c030018  lui         $v1, 0x18
    ctx->pc = 0x2c9820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
    // 0x2c9824: 0x244c8d44  addiu       $t4, $v0, -0x72BC
    ctx->pc = 0x2c9824u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937924));
    // 0x2c9828: 0x246b8dc8  addiu       $t3, $v1, -0x7238
    ctx->pc = 0x2c9828u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938056));
    // 0x2c982c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c982cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9830: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x2c9830u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c9834: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2c9834u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9838: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x2c9838u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2c983c: 0x0  nop
    ctx->pc = 0x2c983cu;
    // NOP
label_2c9840:
    // 0x2c9840: 0x3a71021  addu        $v0, $sp, $a3
    ctx->pc = 0x2c9840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 7)));
    // 0x2c9844: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2c9844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2c9848: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x2c9848u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c984c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2c984cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2c9850: 0x871023  subu        $v0, $a0, $a3
    ctx->pc = 0x2c9850u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2c9854: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2c9854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2c9858: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c9858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c985c: 0x28e80002  slti        $t0, $a3, 0x2
    ctx->pc = 0x2c985cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c9860: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x2c9860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2c9864: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x2c9864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x2c9868: 0x9043000a  lbu         $v1, 0xA($v0)
    ctx->pc = 0x2c9868u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2c986c: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C986Cu;
    {
        const bool branch_taken_0x2c986c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C9870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C986Cu;
        // 0x2c9870: 0x65302b  sltu        $a2, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c986c) {
            ctx->pc = 0x2C9880u;
            goto label_2c9880;
        }
    }
    ctx->pc = 0x2C9874u;
    // 0x2c9874: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9874u;
    {
        const bool branch_taken_0x2c9874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9874u;
        // 0x2c9878: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9874) {
            ctx->pc = 0x2C988Cu;
            goto label_2c988c;
        }
    }
    ctx->pc = 0x2C987Cu;
    // 0x2c987c: 0x0  nop
    ctx->pc = 0x2c987cu;
    // NOP
label_2c9880:
    // 0x2c9880: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x2c9880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9884: 0x126100a  movz        $v0, $t1, $a2
    ctx->pc = 0x2c9884u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 9));
    // 0x2c9888: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2c9888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_2c988c:
    // 0x2c988c: 0x1500ffec  bnez        $t0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2C988Cu;
    {
        const bool branch_taken_0x2c988c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C988Cu;
        // 0x2c9890: 0x72040  sll         $a0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c988c) {
            ctx->pc = 0x2C9840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9840;
        }
    }
    ctx->pc = 0x2C9894u;
    // 0x2c9894: 0xc0b285a  jal         func_2CA168
    ctx->pc = 0x2C9894u;
    SET_GPR_U32(ctx, 31, 0x2C989Cu);
    ctx->pc = 0x2CA168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA168u, 0x2C9894u, 0x2C989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C989Cu;
label_2c989c:
    // 0x2c989c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c989cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c98a0: 0xaf82cb1c  sw          $v0, -0x34E4($gp)
    ctx->pc = 0x2c98a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953756), GPR_U32(ctx, 2));
label_2c98a4:
    // 0x2c98a4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c98a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c98a8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c98a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c98ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c98acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c98b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C98B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C98B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C98B0u;
        // 0x2c98b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C98B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C98B8u;
}
