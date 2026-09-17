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

// Function: sub_0048CB68
// Address: 0x48cb68 - 0x48cb88
void sub_0048CB68_0x48cb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048CB68_0x48cb68");
#endif

    switch (ctx->pc) {
        case 0x48cb78u: goto label_48cb78;
        default: break;
    }

    ctx->pc = 0x48cb68u;

    // 0x48cb68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48cb68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48cb6c: 0x812327a  j           func_48C9E8
    ctx->pc = 0x48CB6Cu;
    ctx->pc = 0x48CB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48CB6Cu;
    // 0x48cb70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C9E8u, 0x48CB6Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x48CB74u;
    // 0x48cb74: 0x0  nop
    ctx->pc = 0x48cb74u;
    // NOP
label_48cb78:
    // 0x48cb78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48cb78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48cb7c: 0x3e00008  jr          $ra
    ctx->pc = 0x48CB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48CB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CB7Cu;
        // 0x48cb80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48CB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48CB84u;
    // 0x48cb84: 0x0  nop
    ctx->pc = 0x48cb84u;
    // NOP
    ctx->pc = 0x48cb88u;
}
