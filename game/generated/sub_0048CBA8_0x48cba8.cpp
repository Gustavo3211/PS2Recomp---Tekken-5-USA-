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

// Function: sub_0048CBA8
// Address: 0x48cba8 - 0x48cbc8
void sub_0048CBA8_0x48cba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048CBA8_0x48cba8");
#endif

    ctx->pc = 0x48cba8u;

    // 0x48cba8: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x48cba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x48cbac: 0x3e00008  jr          $ra
    ctx->pc = 0x48CBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48CBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CBACu;
        // 0x48cbb0: 0x2442b640  addiu       $v0, $v0, -0x49C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48CBACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48CBB4u;
    // 0x48cbb4: 0x0  nop
    ctx->pc = 0x48cbb4u;
    // NOP
    // 0x48cbb8: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x48cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x48cbbc: 0x3e00008  jr          $ra
    ctx->pc = 0x48CBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CBBCu;
        // 0x48cbc0: 0x2442b840  addiu       $v0, $v0, -0x47C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948928));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48CBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48CBC4u;
    // 0x48cbc4: 0x0  nop
    ctx->pc = 0x48cbc4u;
    // NOP
    ctx->pc = 0x48cbc8u;
}
