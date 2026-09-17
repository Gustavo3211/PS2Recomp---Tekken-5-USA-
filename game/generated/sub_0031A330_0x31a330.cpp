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

// Function: sub_0031A330
// Address: 0x31a330 - 0x31a350
void sub_0031A330_0x31a330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A330_0x31a330");
#endif

    ctx->pc = 0x31a330u;

    // 0x31a330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31a330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a334: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x31a334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x31a338: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x31a338u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x31a33c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x31a33cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x31a340: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x31a340u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x31a344: 0x3e00008  jr          $ra
    ctx->pc = 0x31A344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A344u;
        // 0x31a348: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A34Cu;
    // 0x31a34c: 0x0  nop
    ctx->pc = 0x31a34cu;
    // NOP
    ctx->pc = 0x31a350u;
}
