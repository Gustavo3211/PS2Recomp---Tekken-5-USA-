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

// Function: sub_0050F208
// Address: 0x50f208 - 0x50f228
void sub_0050F208_0x50f208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050F208_0x50f208");
#endif

    switch (ctx->pc) {
        case 0x50f218u: goto label_50f218;
        default: break;
    }

    ctx->pc = 0x50f208u;

    // 0x50f208: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50f208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50f20c: 0x8143c64  j           func_50F190
    ctx->pc = 0x50F20Cu;
    ctx->pc = 0x50F210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50F20Cu;
    // 0x50f210: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50F190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50F190u, 0x50F20Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x50F214u;
    // 0x50f214: 0x0  nop
    ctx->pc = 0x50f214u;
    // NOP
label_50f218:
    // 0x50f218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50f218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50f21c: 0x3e00008  jr          $ra
    ctx->pc = 0x50F21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F21Cu;
        // 0x50f220: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50F21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50F224u;
    // 0x50f224: 0x0  nop
    ctx->pc = 0x50f224u;
    // NOP
    ctx->pc = 0x50f228u;
}
