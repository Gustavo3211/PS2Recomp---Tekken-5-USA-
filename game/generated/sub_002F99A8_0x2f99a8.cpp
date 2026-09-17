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

// Function: sub_002F99A8
// Address: 0x2f99a8 - 0x2f99c0
void sub_002F99A8_0x2f99a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F99A8_0x2f99a8");
#endif

    ctx->pc = 0x2f99a8u;

    // 0x2f99a8: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x2f99a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2f99ac: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x2f99acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2f99b0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F99B0u;
    {
        const bool branch_taken_0x2f99b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f99b0) {
            ctx->pc = 0x2F99B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F99B0u;
            // 0x2f99b4: 0xac800160  sw          $zero, 0x160($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 352), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F99B8u;
            goto label_2f99b8;
        }
    }
    ctx->pc = 0x2F99B8u;
label_2f99b8:
    // 0x2f99b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F99B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F99B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F99C0u;
}
