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

// Function: sub_0023FA48
// Address: 0x23fa48 - 0x23fbd0
void sub_0023FA48_0x23fa48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FA48_0x23fa48");
#endif

    switch (ctx->pc) {
        case 0x23faa8u: goto label_23faa8;
        case 0x23fadcu: goto label_23fadc;
        case 0x23fb10u: goto label_23fb10;
        case 0x23fb58u: goto label_23fb58;
        case 0x23fba0u: goto label_23fba0;
        default: break;
    }

    ctx->pc = 0x23fa48u;

    // 0x23fa48: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x23fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x23fa4c: 0x24463580  addiu       $a2, $v0, 0x3580
    ctx->pc = 0x23fa4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 13696));
    // 0x23fa50: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x23fa50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa54: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x23fa54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x163594u));
    // 0x23fa58: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x23FA58u;
    {
        const bool branch_taken_0x23fa58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fa58) {
            ctx->pc = 0x23FAA0u;
            goto label_23faa0;
        }
    }
    ctx->pc = 0x23FA60u;
    // 0x23fa60: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23FA60u;
    {
        const bool branch_taken_0x23fa60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA60u;
        // 0x23fa64: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fa60) {
            ctx->pc = 0x23FA80u;
            goto label_23fa80;
        }
    }
    ctx->pc = 0x23FA68u;
    // 0x23fa68: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x23fa68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x23fa6c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23fa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x23fa70: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x23fa70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x23fa74: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x23fa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x23fa78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23FA78u;
    {
        const bool branch_taken_0x23fa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA78u;
        // 0x23fa7c: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fa78) {
            ctx->pc = 0x23FA90u;
            goto label_23fa90;
        }
    }
    ctx->pc = 0x23FA80u;
label_23fa80:
    // 0x23fa80: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x23fa80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23fa84: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23fa84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x23fa88: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x23fa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x23fa8c: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x23fa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_23fa90:
    // 0x23fa90: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x23fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x23fa94: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x23fa94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x23fa98: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x23fa98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x23fa9c: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x23fa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
label_23faa0:
    // 0x23faa0: 0x3e00008  jr          $ra
    ctx->pc = 0x23FAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FAA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FAA8u;
label_23faa8:
    // 0x23faa8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23faa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23faac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23faacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23fab0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23fab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23fab4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23fab4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fab8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23fab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23fabc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23fabcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fac0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23fac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x23fac4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x23fac4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fac8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x23fac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x23facc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23faccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23fad0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23fad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23fad4: 0xc08fcc4  jal         func_23F310
    ctx->pc = 0x23FAD4u;
    SET_GPR_U32(ctx, 31, 0x23FADCu);
    ctx->pc = 0x23FAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FAD4u;
    // 0x23fad8: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F310u, 0x23FAD4u, 0x23FADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FADCu;
label_23fadc:
    // 0x23fadc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23fadcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fae0: 0x52000027  beql        $s0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x23FAE0u;
    {
        const bool branch_taken_0x23fae0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fae0) {
            ctx->pc = 0x23FAE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FAE0u;
            // 0x23fae4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FB80u;
            goto label_23fb80;
        }
    }
    ctx->pc = 0x23FAE8u;
    // 0x23fae8: 0x2e430623  sltiu       $v1, $s2, 0x623
    ctx->pc = 0x23fae8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1571) ? 1 : 0);
    // 0x23faec: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x23FAECu;
    {
        const bool branch_taken_0x23faec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FAECu;
        // 0x23faf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23faec) {
            ctx->pc = 0x23FB7Cu;
            goto label_23fb7c;
        }
    }
    ctx->pc = 0x23FAF4u;
    // 0x23faf4: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x23faf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x23faf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23faf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fafc: 0x24713580  addiu       $s1, $v1, 0x3580
    ctx->pc = 0x23fafcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 13696));
    // 0x23fb00: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x23fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x163590u));
    // 0x23fb04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23fb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23fb08: 0xc08fc88  jal         func_23F220
    ctx->pc = 0x23FB08u;
    SET_GPR_U32(ctx, 31, 0x23FB10u);
    ctx->pc = 0x23FB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FB08u;
    // 0x23fb0c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F220u, 0x23FB08u, 0x23FB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FB10u;
label_23fb10:
    // 0x23fb10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23fb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23fb14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23fb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23fb18: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x23fb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x23fb1c: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x23fb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x23fb20: 0xae140010  sw          $s4, 0x10($s0)
    ctx->pc = 0x23fb20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
    // 0x23fb24: 0xae15000c  sw          $s5, 0xC($s0)
    ctx->pc = 0x23fb24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
    // 0x23fb28: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x23fb28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x23fb2c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x23fb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x23fb30: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x23fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x23fb34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23FB34u;
    {
        const bool branch_taken_0x23fb34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB34u;
        // 0x23fb38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fb34) {
            ctx->pc = 0x23FB48u;
            goto label_23fb48;
        }
    }
    ctx->pc = 0x23FB3Cu;
    // 0x23fb3c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x23FB3Cu;
    {
        const bool branch_taken_0x23fb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB3Cu;
        // 0x23fb40: 0xae300014  sw          $s0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fb3c) {
            ctx->pc = 0x23FB78u;
            goto label_23fb78;
        }
    }
    ctx->pc = 0x23FB44u;
    // 0x23fb44: 0x0  nop
    ctx->pc = 0x23fb44u;
    // NOP
label_23fb48:
    // 0x23fb48: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x23fb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x23fb4c: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x23FB4Cu;
    {
        const bool branch_taken_0x23fb4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fb4c) {
            ctx->pc = 0x23FB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FB4Cu;
            // 0x23fb50: 0xac900020  sw          $s0, 0x20($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FB78u;
            goto label_23fb78;
        }
    }
    ctx->pc = 0x23FB54u;
    // 0x23fb54: 0x0  nop
    ctx->pc = 0x23fb54u;
    // NOP
label_23fb58:
    // 0x23fb58: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x23fb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fb5c: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x23fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x23fb60: 0x0  nop
    ctx->pc = 0x23fb60u;
    // NOP
    // 0x23fb64: 0x0  nop
    ctx->pc = 0x23fb64u;
    // NOP
    // 0x23fb68: 0x0  nop
    ctx->pc = 0x23fb68u;
    // NOP
    // 0x23fb6c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23FB6Cu;
    {
        const bool branch_taken_0x23fb6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB6Cu;
        // 0x23fb70: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fb6c) {
            ctx->pc = 0x23FB58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fb58;
        }
    }
    ctx->pc = 0x23FB74u;
    // 0x23fb74: 0xac900020  sw          $s0, 0x20($a0)
    ctx->pc = 0x23fb74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 16));
label_23fb78:
    // 0x23fb78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23fb78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23fb7c:
    // 0x23fb7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23fb7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23fb80:
    // 0x23fb80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23fb80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23fb84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23fb84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fb88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23fb88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23fb8c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23fb8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fb90: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x23fb90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23fb94: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23fb94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23fb98: 0x3e00008  jr          $ra
    ctx->pc = 0x23FB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB98u;
        // 0x23fb9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FBA0u;
label_23fba0:
    // 0x23fba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23fba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23fba4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23fba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fba8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23fba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23fbac: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x23fbacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fbb0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x23fbb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fbb4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x23fbb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fbb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23fbb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fbbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23fbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23fbc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23fbc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fbc4: 0x808feaa  j           func_23FAA8
    ctx->pc = 0x23FBC4u;
    ctx->pc = 0x23FBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FBC4u;
    // 0x23fbc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FAA8u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_23faa8;
    ctx->pc = 0x23FBCCu;
    // 0x23fbcc: 0x0  nop
    ctx->pc = 0x23fbccu;
    // NOP
    ctx->pc = 0x23fbd0u;
}
