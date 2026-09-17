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

// Function: sub_0010B640
// Address: 0x10b640 - 0x10b668
void sub_0010B640_0x10b640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B640_0x10b640");
#endif

    ctx->pc = 0x10b640u;

    // 0x10b640: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10b640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10b644: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x10b644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x10b648: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x10b648u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x10b64c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x10b64cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x10b650: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10b650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10b654: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x10b654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x10b658: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x10b658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x10b65c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x10b65cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x10b660: 0x3e00008  jr          $ra
    ctx->pc = 0x10B660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B660u;
        // 0x10b664: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B668u;
}
