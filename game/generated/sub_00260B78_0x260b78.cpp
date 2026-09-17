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

// Function: sub_00260B78
// Address: 0x260b78 - 0x260bb0
void sub_00260B78_0x260b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260B78_0x260b78");
#endif

    ctx->pc = 0x260b78u;

    // 0x260b78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x260b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x260b7c: 0x28a40003  slti        $a0, $a1, 0x3
    ctx->pc = 0x260b7cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x260b80: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x260B80u;
    {
        const bool branch_taken_0x260b80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x260B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B80u;
        // 0x260b84: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260b80) {
            ctx->pc = 0x260BA4u;
            goto label_260ba4;
        }
    }
    ctx->pc = 0x260B88u;
    // 0x260b88: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x260B88u;
    {
        const bool branch_taken_0x260b88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x260b88) {
            ctx->pc = 0x260B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260B88u;
            // 0x260b8c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260B98u;
            goto label_260b98;
        }
    }
    ctx->pc = 0x260B90u;
    // 0x260b90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x260B90u;
    {
        const bool branch_taken_0x260b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B90u;
        // 0x260b94: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260b90) {
            ctx->pc = 0x260B9Cu;
            goto label_260b9c;
        }
    }
    ctx->pc = 0x260B98u;
label_260b98:
    // 0x260b98: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x260b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_260b9c:
    // 0x260b9c: 0x54a30001  bnel        $a1, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x260B9Cu;
    {
        const bool branch_taken_0x260b9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x260b9c) {
            ctx->pc = 0x260BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260B9Cu;
            // 0x260ba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260BA4u;
            goto label_260ba4;
        }
    }
    ctx->pc = 0x260BA4u;
label_260ba4:
    // 0x260ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x260BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260BACu;
    // 0x260bac: 0x0  nop
    ctx->pc = 0x260bacu;
    // NOP
    ctx->pc = 0x260bb0u;
}
