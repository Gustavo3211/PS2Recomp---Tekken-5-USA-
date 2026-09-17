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

// Function: sub_00494BF0
// Address: 0x494bf0 - 0x494c08
void sub_00494BF0_0x494bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00494BF0_0x494bf0");
#endif

    switch (ctx->pc) {
        case 0x494c00u: goto label_494c00;
        default: break;
    }

    ctx->pc = 0x494bf0u;

    // 0x494bf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x494bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x494bf4: 0x81252c2  j           func_494B08
    ctx->pc = 0x494BF4u;
    ctx->pc = 0x494BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494BF4u;
    // 0x494bf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x494B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x494B08u, 0x494BF4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x494BFCu;
    // 0x494bfc: 0x0  nop
    ctx->pc = 0x494bfcu;
    // NOP
label_494c00:
    // 0x494c00: 0x3e00008  jr          $ra
    ctx->pc = 0x494C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x494C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494C00u;
        // 0x494c04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x494C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x494C08u;
}
