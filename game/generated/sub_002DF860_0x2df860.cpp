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

// Function: sub_002DF860
// Address: 0x2df860 - 0x2df890
void sub_002DF860_0x2df860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF860_0x2df860");
#endif

    ctx->pc = 0x2df860u;

    // 0x2df860: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x2df860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2df864: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2df864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2df868: 0x10a60006  beq         $a1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DF868u;
    {
        const bool branch_taken_0x2df868 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x2DF86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF868u;
        // 0x2df86c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df868) {
            ctx->pc = 0x2DF884u;
            goto label_2df884;
        }
    }
    ctx->pc = 0x2DF870u;
    // 0x2df870: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2df870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2df874: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2df874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df878: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x2df878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x2df87c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2df87cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2df880: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2df880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_2df884:
    // 0x2df884: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF88Cu;
    // 0x2df88c: 0x0  nop
    ctx->pc = 0x2df88cu;
    // NOP
    ctx->pc = 0x2df890u;
}
