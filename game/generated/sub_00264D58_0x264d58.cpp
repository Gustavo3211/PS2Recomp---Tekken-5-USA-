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

// Function: sub_00264D58
// Address: 0x264d58 - 0x264d78
void sub_00264D58_0x264d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264D58_0x264d58");
#endif

    ctx->pc = 0x264d58u;

    // 0x264d58: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x264d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264d5c: 0x2486003c  addiu       $a2, $a0, 0x3C
    ctx->pc = 0x264d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
    // 0x264d60: 0xac650048  sw          $a1, 0x48($v1)
    ctx->pc = 0x264d60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 5));
    // 0x264d64: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x264d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264d68: 0xac440044  sw          $a0, 0x44($v0)
    ctx->pc = 0x264d68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 4));
    // 0x264d6c: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x264d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264d70: 0x3e00008  jr          $ra
    ctx->pc = 0x264D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264D70u;
        // 0x264d74: 0xac660054  sw          $a2, 0x54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264D78u;
}
