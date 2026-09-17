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

// Function: sub_0023BA88
// Address: 0x23ba88 - 0x23bc50
void sub_0023BA88_0x23ba88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BA88_0x23ba88");
#endif

    switch (ctx->pc) {
        case 0x23baccu: goto label_23bacc;
        case 0x23bae0u: goto label_23bae0;
        case 0x23bae8u: goto label_23bae8;
        case 0x23bb00u: goto label_23bb00;
        case 0x23bb50u: goto label_23bb50;
        case 0x23bb70u: goto label_23bb70;
        case 0x23bb80u: goto label_23bb80;
        case 0x23bb88u: goto label_23bb88;
        case 0x23bb9cu: goto label_23bb9c;
        case 0x23bbb8u: goto label_23bbb8;
        case 0x23bbc0u: goto label_23bbc0;
        case 0x23bbc8u: goto label_23bbc8;
        case 0x23bbf0u: goto label_23bbf0;
        case 0x23bc00u: goto label_23bc00;
        default: break;
    }

    ctx->pc = 0x23ba88u;

    // 0x23ba88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23ba88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23ba8c: 0x8f85a948  lw          $a1, -0x56B8($gp)
    ctx->pc = 0x23ba8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945096)));
    // 0x23ba90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23ba90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23ba94: 0x3c110016  lui         $s1, 0x16
    ctx->pc = 0x23ba94u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)22 << 16));
    // 0x23ba98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23ba98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23ba9c: 0x2630d748  addiu       $s0, $s1, -0x28B8
    ctx->pc = 0x23ba9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956872));
    // 0x23baa0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x23baa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x23baa4: 0x8f9ea94c  lw          $fp, -0x56B4($gp)
    ctx->pc = 0x23baa4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945100)));
    // 0x23baa8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23baa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23baac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23baacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23bab0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23bab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x23bab4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x23bab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x23bab8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x23bab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x23babc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x23babcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x23bac0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x23bac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x23bac4: 0xc08eba0  jal         func_23AE80
    ctx->pc = 0x23BAC4u;
    SET_GPR_U32(ctx, 31, 0x23BACCu);
    ctx->pc = 0x23BAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BAC4u;
    // 0x23bac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AE80u, 0x23BAC4u, 0x23BACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BACCu;
label_23bacc:
    // 0x23bacc: 0x13c00053  beqz        $fp, . + 4 + (0x53 << 2)
    ctx->pc = 0x23BACCu;
    {
        const bool branch_taken_0x23bacc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BACCu;
        // 0x23bad0: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bacc) {
            ctx->pc = 0x23BC1Cu;
            goto label_23bc1c;
        }
    }
    ctx->pc = 0x23BAD4u;
    // 0x23bad4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23bad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23bad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23badc: 0x0  nop
    ctx->pc = 0x23badcu;
    // NOP
label_23bae0:
    // 0x23bae0: 0xc097d16  jal         func_25F458
    ctx->pc = 0x23BAE0u;
    SET_GPR_U32(ctx, 31, 0x23BAE8u);
    ctx->pc = 0x23BAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BAE0u;
    // 0x23bae4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F458u, 0x23BAE0u, 0x23BAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BAE8u;
label_23bae8:
    // 0x23bae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23bae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23baec: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x23baecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23baf0: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23BAF0u;
    {
        const bool branch_taken_0x23baf0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BAF0u;
        // 0x23baf4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23baf0) {
            ctx->pc = 0x23BB10u;
            goto label_23bb10;
        }
    }
    ctx->pc = 0x23BAF8u;
    // 0x23baf8: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x23BAF8u;
    SET_GPR_U32(ctx, 31, 0x23BB00u);
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x23BAF8u, 0x23BB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BB00u;
label_23bb00:
    // 0x23bb00: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x23bb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x23bb04: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23bb04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23bb08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23bb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23bb0c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x23bb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_23bb10:
    // 0x23bb10: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x23bb10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x23bb14: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x23BB14u;
    {
        const bool branch_taken_0x23bb14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB14u;
        // 0x23bb18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb14) {
            ctx->pc = 0x23BAE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23bae0;
        }
    }
    ctx->pc = 0x23BB1Cu;
    // 0x23bb1c: 0x2631d748  addiu       $s1, $s1, -0x28B8
    ctx->pc = 0x23bb1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956872));
    // 0x23bb20: 0x3c100015  lui         $s0, 0x15
    ctx->pc = 0x23bb20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)21 << 16));
    // 0x23bb24: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x23bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23bb28: 0x261031c0  addiu       $s0, $s0, 0x31C0
    ctx->pc = 0x23bb28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12736));
    // 0x23bb2c: 0x3c060006  lui         $a2, 0x6
    ctx->pc = 0x23bb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)6 << 16));
    // 0x23bb30: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x23bb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23bb34: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x23bb34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23bb38: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x23bb38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x23bb3c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x23bb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x23bb40: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x23bb40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bb44: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x23bb44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x23bb48: 0xc089248  jal         func_224920
    ctx->pc = 0x23BB48u;
    SET_GPR_U32(ctx, 31, 0x23BB50u);
    ctx->pc = 0x23BB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BB48u;
    // 0x23bb4c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x23BB48u, 0x23BB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BB50u;
label_23bb50:
    // 0x23bb50: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x23bb50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23bb54: 0x3c060006  lui         $a2, 0x6
    ctx->pc = 0x23bb54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)6 << 16));
    // 0x23bb58: 0xae221c30  sw          $v0, 0x1C30($s1)
    ctx->pc = 0x23bb58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7216), GPR_U32(ctx, 2));
    // 0x23bb5c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x23bb5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bb60: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x23bb60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x23bb64: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x23bb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23bb68: 0xc089248  jal         func_224920
    ctx->pc = 0x23BB68u;
    SET_GPR_U32(ctx, 31, 0x23BB70u);
    ctx->pc = 0x23BB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BB68u;
    // 0x23bb6c: 0x34c60002  ori         $a2, $a2, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x23BB68u, 0x23BB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BB70u;
label_23bb70:
    // 0x23bb70: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x23bb70u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bb74: 0xae221c34  sw          $v0, 0x1C34($s1)
    ctx->pc = 0x23bb74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7220), GPR_U32(ctx, 2));
    // 0x23bb78: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x23bb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bb7c: 0x0  nop
    ctx->pc = 0x23bb7cu;
    // NOP
label_23bb80:
    // 0x23bb80: 0xc097d16  jal         func_25F458
    ctx->pc = 0x23BB80u;
    SET_GPR_U32(ctx, 31, 0x23BB88u);
    ctx->pc = 0x23BB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BB80u;
    // 0x23bb84: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F458u, 0x23BB80u, 0x23BB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BB88u;
label_23bb88:
    // 0x23bb88: 0x58400021  blezl       $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x23BB88u;
    {
        const bool branch_taken_0x23bb88 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23bb88) {
            ctx->pc = 0x23BB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BB88u;
            // 0x23bb8c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BC10u;
            goto label_23bc10;
        }
    }
    ctx->pc = 0x23BB90u;
    // 0x23bb90: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x23bb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bb94: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x23BB94u;
    SET_GPR_U32(ctx, 31, 0x23BB9Cu);
    ctx->pc = 0x23BB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BB94u;
    // 0x23bb98: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x23BB94u, 0x23BB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BB9Cu;
label_23bb9c:
    // 0x23bb9c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x23bb9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bba0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23bba0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bba4: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x23bba4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23bba8: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x23bba8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bbac: 0x1aa00017  blez        $s5, . + 4 + (0x17 << 2)
    ctx->pc = 0x23BBACu;
    {
        const bool branch_taken_0x23bbac = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x23BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BBACu;
        // 0x23bbb0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bbac) {
            ctx->pc = 0x23BC0Cu;
            goto label_23bc0c;
        }
    }
    ctx->pc = 0x23BBB4u;
    // 0x23bbb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23bbb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23bbb8:
    // 0x23bbb8: 0xc08ebb8  jal         func_23AEE0
    ctx->pc = 0x23BBB8u;
    SET_GPR_U32(ctx, 31, 0x23BBC0u);
    ctx->pc = 0x23BBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BBB8u;
    // 0x23bbbc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AEE0u, 0x23BBB8u, 0x23BBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BBC0u;
label_23bbc0:
    // 0x23bbc0: 0xc08ebc2  jal         func_23AF08
    ctx->pc = 0x23BBC0u;
    SET_GPR_U32(ctx, 31, 0x23BBC8u);
    ctx->pc = 0x23BBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BBC0u;
    // 0x23bbc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AF08u, 0x23BBC0u, 0x23BBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BBC8u;
label_23bbc8:
    // 0x23bbc8: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x23bbc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23bbcc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23bbccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bbd0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x23bbd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bbd4: 0xae330094  sw          $s3, 0x94($s1)
    ctx->pc = 0x23bbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 19));
    // 0x23bbd8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x23bbd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x23bbdc: 0x2f08021  addu        $s0, $s7, $s0
    ctx->pc = 0x23bbdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x23bbe0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23bbe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bbe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23bbe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bbe8: 0xc08ebd4  jal         func_23AF50
    ctx->pc = 0x23BBE8u;
    SET_GPR_U32(ctx, 31, 0x23BBF0u);
    ctx->pc = 0x23BBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BBE8u;
    // 0x23bbec: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AF50u, 0x23BBE8u, 0x23BBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BBF0u;
label_23bbf0:
    // 0x23bbf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23bbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bbf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23bbf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bbf8: 0xc08ebe0  jal         func_23AF80
    ctx->pc = 0x23BBF8u;
    SET_GPR_U32(ctx, 31, 0x23BC00u);
    ctx->pc = 0x23BBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BBF8u;
    // 0x23bbfc: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AF80u, 0x23BBF8u, 0x23BC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BC00u;
label_23bc00:
    // 0x23bc00: 0x295102a  slt         $v0, $s4, $s5
    ctx->pc = 0x23bc00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x23bc04: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x23BC04u;
    {
        const bool branch_taken_0x23bc04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC04u;
        // 0x23bc08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc04) {
            ctx->pc = 0x23BBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23bbb8;
        }
    }
    ctx->pc = 0x23BC0Cu;
label_23bc0c:
    // 0x23bc0c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x23bc0cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_23bc10:
    // 0x23bc10: 0x2ac20005  slti        $v0, $s6, 0x5
    ctx->pc = 0x23bc10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x23bc14: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x23BC14u;
    {
        const bool branch_taken_0x23bc14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC14u;
        // 0x23bc18: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc14) {
            ctx->pc = 0x23BB80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23bb80;
        }
    }
    ctx->pc = 0x23BC1Cu;
label_23bc1c:
    // 0x23bc1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23bc1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bc20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23bc20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23bc24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23bc24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bc28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23bc28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23bc2c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23bc2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23bc30: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x23bc30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23bc34: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x23bc34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23bc38: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x23bc38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23bc3c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x23bc3cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23bc40: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x23bc40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23bc44: 0x3e00008  jr          $ra
    ctx->pc = 0x23BC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC44u;
        // 0x23bc48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BC44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BC4Cu;
    // 0x23bc4c: 0x0  nop
    ctx->pc = 0x23bc4cu;
    // NOP
    ctx->pc = 0x23bc50u;
}
