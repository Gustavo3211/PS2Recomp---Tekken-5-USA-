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

// Function: sub_0010F230
// Address: 0x10f230 - 0x10f250
void sub_0010F230_0x10f230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F230_0x10f230");
#endif

    switch (ctx->pc) {
        case 0x10f238u: goto label_10f238;
        case 0x10f248u: goto label_10f248;
        default: break;
    }

    ctx->pc = 0x10f230u;

    // 0x10f230: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x10f230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x10f234: 0xc  syscall     0
    ctx->pc = 0x10f234u;
    ctx->pc = 0x10F238u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f238:
    // 0x10f238: 0x3e00008  jr          $ra
    ctx->pc = 0x10F238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F240u;
    // 0x10f240: 0x2403ffd6  addiu       $v1, $zero, -0x2A
    ctx->pc = 0x10f240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967254));
    // 0x10f244: 0xc  syscall     0
    ctx->pc = 0x10f244u;
    ctx->pc = 0x10F248u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f248:
    // 0x10f248: 0x3e00008  jr          $ra
    ctx->pc = 0x10F248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F250u;
}
