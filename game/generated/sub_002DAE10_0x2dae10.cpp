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

// Function: sub_002DAE10
// Address: 0x2dae10 - 0x2dae28
void sub_002DAE10_0x2dae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAE10_0x2dae10");
#endif

    ctx->pc = 0x2dae10u;

    // 0x2dae10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2dae10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dae14: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2dae14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2dae18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2dae18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2dae1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE1Cu;
        // 0x2dae20: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAE24u;
    // 0x2dae24: 0x0  nop
    ctx->pc = 0x2dae24u;
    // NOP
    ctx->pc = 0x2dae28u;
}
