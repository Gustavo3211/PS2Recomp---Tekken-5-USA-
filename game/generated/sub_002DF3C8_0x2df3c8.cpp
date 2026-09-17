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

// Function: sub_002DF3C8
// Address: 0x2df3c8 - 0x2df3e8
void sub_002DF3C8_0x2df3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF3C8_0x2df3c8");
#endif

    ctx->pc = 0x2df3c8u;

    // 0x2df3c8: 0x8c820d2c  lw          $v0, 0xD2C($a0)
    ctx->pc = 0x2df3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3372)));
    // 0x2df3cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2df3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2df3d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DF3D0u;
    {
        const bool branch_taken_0x2df3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF3D0u;
        // 0x2df3d4: 0xac820d2c  sw          $v0, 0xD2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df3d0) {
            ctx->pc = 0x2DF3E0u;
            goto label_2df3e0;
        }
    }
    ctx->pc = 0x2DF3D8u;
    // 0x2df3d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2df3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df3dc: 0xac820d2c  sw          $v0, 0xD2C($a0)
    ctx->pc = 0x2df3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3372), GPR_U32(ctx, 2));
label_2df3e0:
    // 0x2df3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF3E0u;
        // 0x2df3e4: 0x8c820d2c  lw          $v0, 0xD2C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3372)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF3E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF3E8u;
}
