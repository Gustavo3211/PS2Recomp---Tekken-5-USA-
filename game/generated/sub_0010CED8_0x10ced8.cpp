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

// Function: sub_0010CED8
// Address: 0x10ced8 - 0x10d030
void sub_0010CED8_0x10ced8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CED8_0x10ced8");
#endif

    switch (ctx->pc) {
        case 0x10cf28u: goto label_10cf28;
        case 0x10cf4cu: goto label_10cf4c;
        case 0x10cf88u: goto label_10cf88;
        case 0x10cfacu: goto label_10cfac;
        case 0x10cfbcu: goto label_10cfbc;
        case 0x10cfd4u: goto label_10cfd4;
        case 0x10d000u: goto label_10d000;
        default: break;
    }

    ctx->pc = 0x10ced8u;

    // 0x10ced8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10ced8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10cedc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x10cedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x10cee0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x10cee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x10cee4: 0x3c120013  lui         $s2, 0x13
    ctx->pc = 0x10cee4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)19 << 16));
    // 0x10cee8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x10cee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x10ceec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x10ceecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cef0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x10cef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x10cef4: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x10cef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x10cef8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x10cef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x10cefc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10cefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10cf00: 0x16800016  bnez        $s4, . + 4 + (0x16 << 2)
    ctx->pc = 0x10CF00u;
    {
        const bool branch_taken_0x10cf00 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x10CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CF00u;
        // 0x10cf04: 0x8e511068  lw          $s1, 0x1068($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cf00) {
            ctx->pc = 0x10CF5Cu;
            goto label_10cf5c;
        }
    }
    ctx->pc = 0x10CF08u;
    // 0x10cf08: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x10cf08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x10cf0c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x10cf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10cf10: 0xac626480  sw          $v0, 0x6480($v1)
    ctx->pc = 0x10cf10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1E6480u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1E6480u, _value); } while (0);
    // 0x10cf14: 0x24706480  addiu       $s0, $v1, 0x6480
    ctx->pc = 0x10cf14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25728));
    // 0x10cf18: 0xae401068  sw          $zero, 0x1068($s2)
    ctx->pc = 0x10cf18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4200), GPR_U32(ctx, 0));
    // 0x10cf1c: 0x3c13001e  lui         $s3, 0x1E
    ctx->pc = 0x10cf1cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)30 << 16));
    // 0x10cf20: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x10cf20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1E6484u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1E6484u, _value); } while (0);
    // 0x10cf24: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10cf24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_10cf28:
    // 0x10cf28: 0x26646240  addiu       $a0, $s3, 0x6240
    ctx->pc = 0x10cf28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 25152));
    // 0x10cf2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10cf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10cf30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10cf30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf34: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10cf34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf38: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x10cf38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x10cf3c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x10cf3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf40: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x10cf40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x10cf44: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x10CF44u;
    SET_GPR_U32(ctx, 31, 0x10CF4Cu);
    ctx->pc = 0x10CF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CF44u;
    // 0x10cf48: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130B0u, 0x10CF44u, 0x10CF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CF4Cu;
label_10cf4c:
    // 0x10cf4c: 0x442fff6  bltzl       $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x10CF4Cu;
    {
        const bool branch_taken_0x10cf4c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10cf4c) {
            ctx->pc = 0x10CF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CF4Cu;
            // 0x10cf50: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CF28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10cf28;
        }
    }
    ctx->pc = 0x10CF54u;
    // 0x10cf54: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x10CF54u;
    {
        const bool branch_taken_0x10cf54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CF54u;
        // 0x10cf58: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cf54) {
            ctx->pc = 0x10CFD8u;
            goto label_10cfd8;
        }
    }
    ctx->pc = 0x10CF5Cu;
label_10cf5c:
    // 0x10cf5c: 0x16200015  bnez        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x10CF5Cu;
    {
        const bool branch_taken_0x10cf5c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x10CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CF5Cu;
        // 0x10cf60: 0x3c15001e  lui         $s5, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cf5c) {
            ctx->pc = 0x10CFB4u;
            goto label_10cfb4;
        }
    }
    ctx->pc = 0x10CF64u;
    // 0x10cf64: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x10cf64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x10cf68: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x10cf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10cf6c: 0xac436480  sw          $v1, 0x6480($v0)
    ctx->pc = 0x10cf6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1E6480u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1E6480u, _value); } while (0);
    // 0x10cf70: 0x24506480  addiu       $s0, $v0, 0x6480
    ctx->pc = 0x10cf70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25728));
    // 0x10cf74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10cf74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10cf78: 0x3c13001e  lui         $s3, 0x1E
    ctx->pc = 0x10cf78u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)30 << 16));
    // 0x10cf7c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x10cf7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1E6484u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1E6484u, _value); } while (0);
    // 0x10cf80: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10cf80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10cf84: 0x0  nop
    ctx->pc = 0x10cf84u;
    // NOP
label_10cf88:
    // 0x10cf88: 0x26646240  addiu       $a0, $s3, 0x6240
    ctx->pc = 0x10cf88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 25152));
    // 0x10cf8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10cf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10cf90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10cf90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf94: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10cf94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf98: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x10cf98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x10cf9c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x10cf9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cfa0: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x10cfa0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x10cfa4: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x10CFA4u;
    SET_GPR_U32(ctx, 31, 0x10CFACu);
    ctx->pc = 0x10CFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CFA4u;
    // 0x10cfa8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130B0u, 0x10CFA4u, 0x10CFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CFACu;
label_10cfac:
    // 0x10cfac: 0x442fff6  bltzl       $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x10CFACu;
    {
        const bool branch_taken_0x10cfac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10cfac) {
            ctx->pc = 0x10CFB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CFACu;
            // 0x10cfb0: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CF88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10cf88;
        }
    }
    ctx->pc = 0x10CFB4u;
label_10cfb4:
    // 0x10cfb4: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x10CFB4u;
    SET_GPR_U32(ctx, 31, 0x10CFBCu);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x10CFB4u, 0x10CFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CFBCu;
label_10cfbc:
    // 0x10cfbc: 0xaebc6500  sw          $gp, 0x6500($s5)
    ctx->pc = 0x10cfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 25856), GPR_U32(ctx, 28));
    // 0x10cfc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10cfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10cfc4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CFC4u;
    {
        const bool branch_taken_0x10cfc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10CFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CFC4u;
        // 0x10cfc8: 0xae541068  sw          $s4, 0x1068($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4200), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cfc4) {
            ctx->pc = 0x10CFD4u;
            goto label_10cfd4;
        }
    }
    ctx->pc = 0x10CFCCu;
    // 0x10cfcc: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x10CFCCu;
    SET_GPR_U32(ctx, 31, 0x10CFD4u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x10CFCCu, 0x10CFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CFD4u;
label_10cfd4:
    // 0x10cfd4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10cfd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10cfd8:
    // 0x10cfd8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x10cfd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10cfdc: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x10cfdcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10cfe0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x10cfe0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10cfe4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x10cfe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10cfe8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x10cfe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10cfec: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x10cfecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10cff0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10cff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cff4: 0x3e00008  jr          $ra
    ctx->pc = 0x10CFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CFF4u;
        // 0x10cff8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CFF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CFFCu;
    // 0x10cffc: 0x0  nop
    ctx->pc = 0x10cffcu;
    // NOP
label_10d000:
    // 0x10d000: 0x3402c348  ori         $v0, $zero, 0xC348
    ctx->pc = 0x10d000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49992);
    // 0x10d004: 0x2483bedd  addiu       $v1, $a0, -0x4123
    ctx->pc = 0x10d004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950621));
    // 0x10d008: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x10d008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x10d00c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10D00Cu;
    {
        const bool branch_taken_0x10d00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D00Cu;
        // 0x10d010: 0x3c030013  lui         $v1, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d00c) {
            ctx->pc = 0x10D024u;
            goto label_10d024;
        }
    }
    ctx->pc = 0x10D014u;
    // 0x10d014: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D014u;
    {
        const bool branch_taken_0x10d014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D014u;
        // 0x10d018: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d014) {
            ctx->pc = 0x10D028u;
            goto label_10d028;
        }
    }
    ctx->pc = 0x10D01Cu;
    // 0x10d01c: 0x3e00008  jr          $ra
    ctx->pc = 0x10D01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D01Cu;
        // 0x10d020: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D01Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D024u;
label_10d024:
    // 0x10d024: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10d024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10d028:
    // 0x10d028: 0x3e00008  jr          $ra
    ctx->pc = 0x10D028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D028u;
        // 0x10d02c: 0xac64106c  sw          $a0, 0x106C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4204), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D030u;
}
