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

// Function: sub_00250358
// Address: 0x250358 - 0x250370
void sub_00250358_0x250358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250358_0x250358");
#endif

    ctx->pc = 0x250358u;

    // 0x250358: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x250358u;
    {
        const bool branch_taken_0x250358 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250358u;
        // 0x25035c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250358) {
            ctx->pc = 0x250368u;
            goto label_250368;
        }
    }
    ctx->pc = 0x250360u;
    // 0x250360: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x250360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x250364: 0x24427da8  addiu       $v0, $v0, 0x7DA8
    ctx->pc = 0x250364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32168));
label_250368:
    // 0x250368: 0x3e00008  jr          $ra
    ctx->pc = 0x250368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250370u;
}
