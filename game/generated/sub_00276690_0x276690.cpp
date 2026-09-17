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

// Function: sub_00276690
// Address: 0x276690 - 0x2766a0
void sub_00276690_0x276690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276690_0x276690");
#endif

    ctx->pc = 0x276690u;

    // 0x276690: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x276690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x276694: 0x3e00008  jr          $ra
    ctx->pc = 0x276694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276694u;
        // 0x276698: 0x90620273  lbu         $v0, 0x273($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 627)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27669Cu;
    // 0x27669c: 0x0  nop
    ctx->pc = 0x27669cu;
    // NOP
    ctx->pc = 0x2766a0u;
}
