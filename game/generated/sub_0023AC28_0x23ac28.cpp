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

// Function: sub_0023AC28
// Address: 0x23ac28 - 0x23ac40
void sub_0023AC28_0x23ac28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AC28_0x23ac28");
#endif

    ctx->pc = 0x23ac28u;

    // 0x23ac28: 0x8f83a918  lw          $v1, -0x56E8($gp)
    ctx->pc = 0x23ac28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945048)));
    // 0x23ac2c: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x23ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x23ac30: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x23ac30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
    // 0x23ac34: 0x3e00008  jr          $ra
    ctx->pc = 0x23AC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC34u;
        // 0x23ac38: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AC34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AC3Cu;
    // 0x23ac3c: 0x0  nop
    ctx->pc = 0x23ac3cu;
    // NOP
    ctx->pc = 0x23ac40u;
}
