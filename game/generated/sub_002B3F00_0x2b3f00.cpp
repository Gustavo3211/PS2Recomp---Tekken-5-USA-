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

// Function: sub_002B3F00
// Address: 0x2b3f00 - 0x2b3f28
void sub_002B3F00_0x2b3f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3F00_0x2b3f00");
#endif

    ctx->pc = 0x2b3f00u;

    // 0x2b3f00: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2b3f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b3f04: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2b3f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b3f08: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2b3f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b3f0c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2b3f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2b3f10: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2b3f10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2b3f14: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2b3f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b3f18: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2b3f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2b3f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F1Cu;
        // 0x2b3f20: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3F24u;
    // 0x2b3f24: 0x0  nop
    ctx->pc = 0x2b3f24u;
    // NOP
    ctx->pc = 0x2b3f28u;
}
