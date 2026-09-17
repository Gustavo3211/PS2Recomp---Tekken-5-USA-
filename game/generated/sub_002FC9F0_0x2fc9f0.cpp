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

// Function: sub_002FC9F0
// Address: 0x2fc9f0 - 0x2fcab8
void sub_002FC9F0_0x2fc9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC9F0_0x2fc9f0");
#endif

    switch (ctx->pc) {
        case 0x2fca28u: goto label_2fca28;
        case 0x2fca64u: goto label_2fca64;
        case 0x2fca8cu: goto label_2fca8c;
        default: break;
    }

    ctx->pc = 0x2fc9f0u;

    // 0x2fc9f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fc9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fc9f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2fc9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2fc9f8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2fc9f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc9fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fc9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fca00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fca00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fca04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2fca04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2fca08: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2fca08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2fca0c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2fca0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2fca10: 0x9492001c  lhu         $s2, 0x1C($a0)
    ctx->pc = 0x2fca10u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2fca14: 0x12400020  beqz        $s2, . + 4 + (0x20 << 2)
    ctx->pc = 0x2FCA14u;
    {
        const bool branch_taken_0x2fca14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCA14u;
        // 0x2fca18: 0x8c910020  lw          $s1, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fca14) {
            ctx->pc = 0x2FCA98u;
            goto label_2fca98;
        }
    }
    ctx->pc = 0x2FCA1Cu;
    // 0x2fca1c: 0x3c14001b  lui         $s4, 0x1B
    ctx->pc = 0x2fca1cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)27 << 16));
    // 0x2fca20: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2fca20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2fca24: 0x0  nop
    ctx->pc = 0x2fca24u;
    // NOP
label_2fca28:
    // 0x2fca28: 0xcc400000  pref        0x00, 0x0($v0)
    ctx->pc = 0x2fca28u;
    // PREF instruction (ignored)
    // 0x2fca2c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2fca2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fca30: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2fca30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2fca34: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2fca34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2fca38: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2FCA38u;
    {
        const bool branch_taken_0x2fca38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCA38u;
        // 0x2fca3c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fca38) {
            ctx->pc = 0x2FCA8Cu;
            goto label_2fca8c;
        }
    }
    ctx->pc = 0x2FCA40u;
    // 0x2fca40: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2fca40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2fca44: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2fca44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2fca48: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FCA48u;
    {
        const bool branch_taken_0x2fca48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fca48) {
            ctx->pc = 0x2FCA4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FCA48u;
            // 0x2fca4c: 0x8c620050  lw          $v0, 0x50($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FCA6Cu;
            goto label_2fca6c;
        }
    }
    ctx->pc = 0x2FCA50u;
    // 0x2fca50: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2fca50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2fca54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FCA54u;
    {
        const bool branch_taken_0x2fca54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCA54u;
        // 0x2fca58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fca54) {
            ctx->pc = 0x2FCA68u;
            goto label_2fca68;
        }
    }
    ctx->pc = 0x2FCA5Cu;
    // 0x2fca5c: 0xc0bf550  jal         func_2FD540
    ctx->pc = 0x2FCA5Cu;
    SET_GPR_U32(ctx, 31, 0x2FCA64u);
    ctx->pc = 0x2FCA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCA5Cu;
    // 0x2fca60: 0x2685ecb0  addiu       $a1, $s4, -0x1350 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD540u, 0x2FCA5Cu, 0x2FCA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCA64u;
label_2fca64:
    // 0x2fca64: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2fca64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2fca68:
    // 0x2fca68: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2fca68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_2fca6c:
    // 0x2fca6c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x2fca6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x2fca70: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FCA70u;
    {
        const bool branch_taken_0x2fca70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fca70) {
            ctx->pc = 0x2FCA74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FCA70u;
            // 0x2fca74: 0x272102a  slt         $v0, $s3, $s2 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FCA90u;
            goto label_2fca90;
        }
    }
    ctx->pc = 0x2FCA78u;
    // 0x2fca78: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x2fca78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2fca7c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FCA7Cu;
    {
        const bool branch_taken_0x2fca7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fca7c) {
            ctx->pc = 0x2FCA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FCA7Cu;
            // 0x2fca80: 0x272102a  slt         $v0, $s3, $s2 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FCA90u;
            goto label_2fca90;
        }
    }
    ctx->pc = 0x2FCA84u;
    // 0x2fca84: 0xc0bf56a  jal         func_2FD5A8
    ctx->pc = 0x2FCA84u;
    SET_GPR_U32(ctx, 31, 0x2FCA8Cu);
    ctx->pc = 0x2FCA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCA84u;
    // 0x2fca88: 0x2685ecb0  addiu       $a1, $s4, -0x1350 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD5A8u, 0x2FCA84u, 0x2FCA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCA8Cu;
label_2fca8c:
    // 0x2fca8c: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x2fca8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2fca90:
    // 0x2fca90: 0x5440ffe5  bnel        $v0, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2FCA90u;
    {
        const bool branch_taken_0x2fca90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fca90) {
            ctx->pc = 0x2FCA94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FCA90u;
            // 0x2fca94: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FCA28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fca28;
        }
    }
    ctx->pc = 0x2FCA98u;
label_2fca98:
    // 0x2fca98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fca98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fca9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fca9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fcaa0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2fcaa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fcaa4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2fcaa4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fcaa8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2fcaa8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fcaac: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2fcaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fcab0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCAB0u;
        // 0x2fcab4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCAB8u;
}
