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

// Function: sub_0048D728
// Address: 0x48d728 - 0x48d750
void sub_0048D728_0x48d728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048D728_0x48d728");
#endif

    ctx->pc = 0x48d728u;

    // 0x48d728: 0x84820020  lh          $v0, 0x20($a0)
    ctx->pc = 0x48d728u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x48d72c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x48D72Cu;
    {
        const bool branch_taken_0x48d72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48D730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D72Cu;
        // 0x48d730: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d72c) {
            ctx->pc = 0x48D748u;
            goto label_48d748;
        }
    }
    ctx->pc = 0x48D734u;
    // 0x48d734: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48d734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48d738: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x48d738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x48d73c: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x48d73cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x48d740: 0xa443001a  sh          $v1, 0x1A($v0)
    ctx->pc = 0x48d740u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x48d744: 0xa483001e  sh          $v1, 0x1E($a0)
    ctx->pc = 0x48d744u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 3));
label_48d748:
    // 0x48d748: 0x3e00008  jr          $ra
    ctx->pc = 0x48D748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48D750u;
}
