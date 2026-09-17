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

// Function: sub_0030CC80
// Address: 0x30cc80 - 0x30ccd0
void sub_0030CC80_0x30cc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CC80_0x30cc80");
#endif

    switch (ctx->pc) {
        case 0x30cc88u: goto label_30cc88;
        default: break;
    }

    ctx->pc = 0x30cc80u;

    // 0x30cc80: 0x24870220  addiu       $a3, $a0, 0x220
    ctx->pc = 0x30cc80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 544));
    // 0x30cc84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30cc84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30cc88:
    // 0x30cc88: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x30cc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x30cc8c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x30cc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x30cc90: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x30cc90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30cc94: 0x28c40100  slti        $a0, $a2, 0x100
    ctx->pc = 0x30cc94u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x30cc98: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x30cc98u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x30cc9c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30CC9Cu;
    {
        const bool branch_taken_0x30cc9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x30CCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CC9Cu;
        // 0x30cca0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cc9c) {
            ctx->pc = 0x30CC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30cc88;
        }
    }
    ctx->pc = 0x30CCA4u;
    // 0x30cca4: 0x3e00008  jr          $ra
    ctx->pc = 0x30CCA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CCA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CCACu;
    // 0x30ccac: 0x0  nop
    ctx->pc = 0x30ccacu;
    // NOP
    // 0x30ccb0: 0x50800002  beql        $a0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x30CCB0u;
    {
        const bool branch_taken_0x30ccb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ccb0) {
            ctx->pc = 0x30CCB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30CCB0u;
            // 0x30ccb4: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30CCBCu;
            goto label_30ccbc;
        }
    }
    ctx->pc = 0x30CCB8u;
    // 0x30ccb8: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x30ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_30ccbc:
    // 0x30ccbc: 0xaf82c534  sw          $v0, -0x3ACC($gp)
    ctx->pc = 0x30ccbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952244), GPR_U32(ctx, 2));
    // 0x30ccc0: 0x8f82c534  lw          $v0, -0x3ACC($gp)
    ctx->pc = 0x30ccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952244)));
    // 0x30ccc4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x30ccc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x30ccc8: 0x3e00008  jr          $ra
    ctx->pc = 0x30CCC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CCC8u;
        // 0x30cccc: 0xaf82c540  sw          $v0, -0x3AC0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CCC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CCD0u;
}
