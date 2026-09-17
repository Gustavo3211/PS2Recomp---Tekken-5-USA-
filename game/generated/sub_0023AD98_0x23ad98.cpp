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

// Function: sub_0023AD98
// Address: 0x23ad98 - 0x23ae80
void sub_0023AD98_0x23ad98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AD98_0x23ad98");
#endif

    switch (ctx->pc) {
        case 0x23adc8u: goto label_23adc8;
        default: break;
    }

    ctx->pc = 0x23ad98u;

    // 0x23ad98: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x23ad98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ad9c: 0xc0702d  daddu       $t6, $a2, $zero
    ctx->pc = 0x23ad9cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ada0: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x23ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x23ada4: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x23ada4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ada8: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x23ada8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23adac: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x23adacu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23adb0: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x23adb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23adb4: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x23ADB4u;
    {
        const bool branch_taken_0x23adb4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23ADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ADB4u;
        // 0x23adb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23adb4) {
            ctx->pc = 0x23AE1Cu;
            goto label_23ae1c;
        }
    }
    ctx->pc = 0x23ADBCu;
    // 0x23adbc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23adbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23adc0: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x23adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x23adc4: 0x0  nop
    ctx->pc = 0x23adc4u;
    // NOP
label_23adc8:
    // 0x23adc8: 0x462823  subu        $a1, $v0, $a2
    ctx->pc = 0x23adc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23adcc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x23adccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x23add0: 0x8a1021  addu        $v0, $a0, $t2
    ctx->pc = 0x23add0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x23add4: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x23add4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x23add8: 0x546c000d  bnel        $v1, $t4, . + 4 + (0xD << 2)
    ctx->pc = 0x23ADD8u;
    {
        const bool branch_taken_0x23add8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 12));
        if (branch_taken_0x23add8) {
            ctx->pc = 0x23ADDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23ADD8u;
            // 0x23addc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AE10u;
            goto label_23ae10;
        }
    }
    ctx->pc = 0x23ADE0u;
    // 0x23ade0: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x23ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x23ade4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x23ade4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x23ade8: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x23ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x23adec: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x23adecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23adf0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23adf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23adf4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23adf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23adf8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23adf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x23adfc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23adfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23ae00: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x23ae00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x23ae04: 0xac6d0030  sw          $t5, 0x30($v1)
    ctx->pc = 0x23ae04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 13));
    // 0x23ae08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23AE08u;
    {
        const bool branch_taken_0x23ae08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE08u;
        // 0x23ae0c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ae08) {
            ctx->pc = 0x23AE1Cu;
            goto label_23ae1c;
        }
    }
    ctx->pc = 0x23AE10u;
label_23ae10:
    // 0x23ae10: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x23ae10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x23ae14: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x23AE14u;
    {
        const bool branch_taken_0x23ae14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE14u;
        // 0x23ae18: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ae14) {
            ctx->pc = 0x23ADC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23adc8;
        }
    }
    ctx->pc = 0x23AE1Cu;
label_23ae1c:
    // 0x23ae1c: 0x5610015  bgez        $t3, . + 4 + (0x15 << 2)
    ctx->pc = 0x23AE1Cu;
    {
        const bool branch_taken_0x23ae1c = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x23AE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE1Cu;
        // 0x23ae20: 0x25440008  addiu       $a0, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ae1c) {
            ctx->pc = 0x23AE74u;
            goto label_23ae74;
        }
    }
    ctx->pc = 0x23AE24u;
    // 0x23ae24: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x23ae24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ae28: 0x8c8b0000  lw          $t3, 0x0($a0)
    ctx->pc = 0x23ae28u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23ae2c: 0xb10c0  sll         $v0, $t3, 3
    ctx->pc = 0x23ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x23ae30: 0x25630001  addiu       $v1, $t3, 0x1
    ctx->pc = 0x23ae30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x23ae34: 0x4b1023  subu        $v0, $v0, $t3
    ctx->pc = 0x23ae34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x23ae38: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x23ae38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x23ae3c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x23ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x23ae40: 0x24430050  addiu       $v1, $v0, 0x50
    ctx->pc = 0x23ae40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x23ae44: 0x4a3821  addu        $a3, $v0, $t2
    ctx->pc = 0x23ae44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x23ae48: 0x1433021  addu        $a2, $t2, $v1
    ctx->pc = 0x23ae48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x23ae4c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x23ae4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x23ae50: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x23ae50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ae54: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x23ae54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ae58: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x23ae58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ae5c: 0xac4d0030  sw          $t5, 0x30($v0)
    ctx->pc = 0x23ae5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 13));
    // 0x23ae60: 0xacac0000  sw          $t4, 0x0($a1)
    ctx->pc = 0x23ae60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
    // 0x23ae64: 0xac690004  sw          $t1, 0x4($v1)
    ctx->pc = 0x23ae64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 9));
    // 0x23ae68: 0xac8f0000  sw          $t7, 0x0($a0)
    ctx->pc = 0x23ae68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 15));
    // 0x23ae6c: 0xacce000c  sw          $t6, 0xC($a2)
    ctx->pc = 0x23ae6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 14));
    // 0x23ae70: 0xace80060  sw          $t0, 0x60($a3)
    ctx->pc = 0x23ae70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 8));
label_23ae74:
    // 0x23ae74: 0x3e00008  jr          $ra
    ctx->pc = 0x23AE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE74u;
        // 0x23ae78: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AE74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AE7Cu;
    // 0x23ae7c: 0x0  nop
    ctx->pc = 0x23ae7cu;
    // NOP
    ctx->pc = 0x23ae80u;
}
