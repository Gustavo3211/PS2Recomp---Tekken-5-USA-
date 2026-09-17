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

// Function: sub_0035ADC0
// Address: 0x35adc0 - 0x35af08
void sub_0035ADC0_0x35adc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035ADC0_0x35adc0");
#endif

    switch (ctx->pc) {
        case 0x35ae00u: goto label_35ae00;
        case 0x35ae0cu: goto label_35ae0c;
        case 0x35ae20u: goto label_35ae20;
        case 0x35ae4cu: goto label_35ae4c;
        case 0x35ae7cu: goto label_35ae7c;
        case 0x35aea0u: goto label_35aea0;
        case 0x35aeccu: goto label_35aecc;
        case 0x35aed8u: goto label_35aed8;
        default: break;
    }

    ctx->pc = 0x35adc0u;

    // 0x35adc0: 0x8f83c7bc  lw          $v1, -0x3844($gp)
    ctx->pc = 0x35adc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952892)));
    // 0x35adc4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35adc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35adc8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x35adc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x35adcc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x35adccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35add0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35add0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35add4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35add4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35add8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35add8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35addc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35addcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35ade0: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x35ADE0u;
    {
        const bool branch_taken_0x35ade0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ADE0u;
        // 0x35ade4: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ade0) {
            ctx->pc = 0x35AE64u;
            goto label_35ae64;
        }
    }
    ctx->pc = 0x35ADE8u;
    // 0x35ade8: 0x8f85c7c0  lw          $a1, -0x3840($gp)
    ctx->pc = 0x35ade8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952896)));
    // 0x35adec: 0x18a0001d  blez        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x35ADECu;
    {
        const bool branch_taken_0x35adec = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x35ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ADECu;
        // 0x35adf0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35adec) {
            ctx->pc = 0x35AE64u;
            goto label_35ae64;
        }
    }
    ctx->pc = 0x35ADF4u;
    // 0x35adf4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x35ADF4u;
    {
        const bool branch_taken_0x35adf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ADF4u;
        // 0x35adf8: 0x111140  sll         $v0, $s1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35adf4) {
            ctx->pc = 0x35AE28u;
            goto label_35ae28;
        }
    }
    ctx->pc = 0x35ADFCu;
    // 0x35adfc: 0x0  nop
    ctx->pc = 0x35adfcu;
    // NOP
label_35ae00:
    // 0x35ae00: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x35ae00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ae04: 0xc04a48c  jal         func_129230
    ctx->pc = 0x35AE04u;
    SET_GPR_U32(ctx, 31, 0x35AE0Cu);
    ctx->pc = 0x35AE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AE04u;
    // 0x35ae08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129230u, 0x35AE04u, 0x35AE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AE0Cu;
label_35ae0c:
    // 0x35ae0c: 0xae130100  sw          $s3, 0x100($s0)
    ctx->pc = 0x35ae0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 19));
    // 0x35ae10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35ae10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ae14: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x35ae14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ae18: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x35AE18u;
    {
        const bool branch_taken_0x35ae18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AE18u;
        // 0x35ae1c: 0xae030104  sw          $v1, 0x104($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ae18) {
            ctx->pc = 0x35AEE8u;
            goto label_35aee8;
        }
    }
    ctx->pc = 0x35AE20u;
label_35ae20:
    // 0x35ae20: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x35ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x35ae24: 0x0  nop
    ctx->pc = 0x35ae24u;
    // NOP
label_35ae28:
    // 0x35ae28: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x35ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x35ae2c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x35ae2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x35ae30: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x35ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x35ae34: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x35ae34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35ae38: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x35ae38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x35ae3c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x35AE3Cu;
    {
        const bool branch_taken_0x35ae3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AE3Cu;
        // 0x35ae40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ae3c) {
            ctx->pc = 0x35AE58u;
            goto label_35ae58;
        }
    }
    ctx->pc = 0x35AE44u;
    // 0x35ae44: 0xc04a43b  jal         func_1290EC
    ctx->pc = 0x35AE44u;
    SET_GPR_U32(ctx, 31, 0x35AE4Cu);
    ctx->pc = 0x35AE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AE44u;
    // 0x35ae48: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1290ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1290ECu, 0x35AE44u, 0x35AE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AE4Cu;
label_35ae4c:
    // 0x35ae4c: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x35AE4Cu;
    {
        const bool branch_taken_0x35ae4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ae4c) {
            ctx->pc = 0x35AE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35AE4Cu;
            // 0x35ae50: 0x8e020100  lw          $v0, 0x100($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35AEE8u;
            goto label_35aee8;
        }
    }
    ctx->pc = 0x35AE54u;
    // 0x35ae54: 0x8f85c7c0  lw          $a1, -0x3840($gp)
    ctx->pc = 0x35ae54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952896)));
label_35ae58:
    // 0x35ae58: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x35ae58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x35ae5c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x35AE5Cu;
    {
        const bool branch_taken_0x35ae5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AE5Cu;
        // 0x35ae60: 0x8f83c7bc  lw          $v1, -0x3844($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ae5c) {
            ctx->pc = 0x35AE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ae20;
        }
    }
    ctx->pc = 0x35AE64u;
label_35ae64:
    // 0x35ae64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x35ae64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ae68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35ae68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ae6c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x35ae6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35ae70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35ae70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ae74: 0xc0d2f8e  jal         func_34BE38
    ctx->pc = 0x35AE74u;
    SET_GPR_U32(ctx, 31, 0x35AE7Cu);
    ctx->pc = 0x35AE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AE74u;
    // 0x35ae78: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BE38u, 0x35AE74u, 0x35AE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AE7Cu;
label_35ae7c:
    // 0x35ae7c: 0x8f92c7bc  lw          $s2, -0x3844($gp)
    ctx->pc = 0x35ae7cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952892)));
    // 0x35ae80: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x35AE80u;
    {
        const bool branch_taken_0x35ae80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AE80u;
        // 0x35ae84: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ae80) {
            ctx->pc = 0x35AEE8u;
            goto label_35aee8;
        }
    }
    ctx->pc = 0x35AE88u;
    // 0x35ae88: 0x8f82c7c0  lw          $v0, -0x3840($gp)
    ctx->pc = 0x35ae88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952896)));
    // 0x35ae8c: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x35AE8Cu;
    {
        const bool branch_taken_0x35ae8c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x35AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AE8Cu;
        // 0x35ae90: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ae8c) {
            ctx->pc = 0x35AEC4u;
            goto label_35aec4;
        }
    }
    ctx->pc = 0x35AE94u;
    // 0x35ae94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35ae94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ae98: 0x26430104  addiu       $v1, $s2, 0x104
    ctx->pc = 0x35ae98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x35ae9c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x35ae9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35aea0:
    // 0x35aea0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35aea4: 0x1040ffd6  beqz        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x35AEA4u;
    {
        const bool branch_taken_0x35aea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AEA4u;
        // 0x35aea8: 0x24630108  addiu       $v1, $v1, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35aea4) {
            ctx->pc = 0x35AE00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ae00;
        }
    }
    ctx->pc = 0x35AEACu;
    // 0x35aeac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x35aeacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x35aeb0: 0x224102a  slt         $v0, $s1, $a0
    ctx->pc = 0x35aeb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x35aeb4: 0x0  nop
    ctx->pc = 0x35aeb4u;
    // NOP
    // 0x35aeb8: 0x0  nop
    ctx->pc = 0x35aeb8u;
    // NOP
    // 0x35aebc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x35AEBCu;
    {
        const bool branch_taken_0x35aebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35AEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AEBCu;
        // 0x35aec0: 0x26100108  addiu       $s0, $s0, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35aebc) {
            ctx->pc = 0x35AEA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35aea0;
        }
    }
    ctx->pc = 0x35AEC4u;
label_35aec4:
    // 0x35aec4: 0xc0d2fcf  jal         func_34BF3C
    ctx->pc = 0x35AEC4u;
    SET_GPR_U32(ctx, 31, 0x35AECCu);
    ctx->pc = 0x35AEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AEC4u;
    // 0x35aec8: 0x8e440100  lw          $a0, 0x100($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BF3Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BF3Cu, 0x35AEC4u, 0x35AECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AECCu;
label_35aecc:
    // 0x35aecc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35aeccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aed0: 0xc04a48c  jal         func_129230
    ctx->pc = 0x35AED0u;
    SET_GPR_U32(ctx, 31, 0x35AED8u);
    ctx->pc = 0x35AED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AED0u;
    // 0x35aed4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129230u, 0x35AED0u, 0x35AED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AED8u;
label_35aed8:
    // 0x35aed8: 0xae530100  sw          $s3, 0x100($s2)
    ctx->pc = 0x35aed8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 19));
    // 0x35aedc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35aedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35aee0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x35aee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aee4: 0xae430104  sw          $v1, 0x104($s2)
    ctx->pc = 0x35aee4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 3));
label_35aee8:
    // 0x35aee8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35aee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35aeec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35aeecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35aef0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35aef0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35aef4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35aef4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35aef8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x35aef8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35aefc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x35aefcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35af00: 0x3e00008  jr          $ra
    ctx->pc = 0x35AF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AF00u;
        // 0x35af04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AF08u;
}
