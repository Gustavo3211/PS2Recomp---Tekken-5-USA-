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

// Function: sub_00308D80
// Address: 0x308d80 - 0x308d90
void sub_00308D80_0x308d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308D80_0x308d80");
#endif

    ctx->pc = 0x308d80u;

    // 0x308d80: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x308d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x308d84: 0x3e00008  jr          $ra
    ctx->pc = 0x308D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D84u;
        // 0x308d88: 0x34426e40  ori         $v0, $v0, 0x6E40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28224);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308D8Cu;
    // 0x308d8c: 0x0  nop
    ctx->pc = 0x308d8cu;
    // NOP
    ctx->pc = 0x308d90u;
}
