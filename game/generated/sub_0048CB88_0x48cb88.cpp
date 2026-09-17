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

// Function: sub_0048CB88
// Address: 0x48cb88 - 0x48cb98
void sub_0048CB88_0x48cb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048CB88_0x48cb88");
#endif

    ctx->pc = 0x48cb88u;

    // 0x48cb88: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x48cb88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x48cb8c: 0x3e00008  jr          $ra
    ctx->pc = 0x48CB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CB8Cu;
        // 0x48cb90: 0x2442b240  addiu       $v0, $v0, -0x4DC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947392));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48CB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48CB94u;
    // 0x48cb94: 0x0  nop
    ctx->pc = 0x48cb94u;
    // NOP
    ctx->pc = 0x48cb98u;
}
