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

// Function: sub_0023AC80
// Address: 0x23ac80 - 0x23ac98
void sub_0023AC80_0x23ac80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AC80_0x23ac80");
#endif

    ctx->pc = 0x23ac80u;

    // 0x23ac80: 0x8f83a918  lw          $v1, -0x56E8($gp)
    ctx->pc = 0x23ac80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945048)));
    // 0x23ac84: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x23ac84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x23ac88: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x23ac88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x23ac8c: 0x3e00008  jr          $ra
    ctx->pc = 0x23AC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC8Cu;
        // 0x23ac90: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AC94u;
    // 0x23ac94: 0x0  nop
    ctx->pc = 0x23ac94u;
    // NOP
    ctx->pc = 0x23ac98u;
}
