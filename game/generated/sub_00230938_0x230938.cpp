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

// Function: sub_00230938
// Address: 0x230938 - 0x230948
void sub_00230938_0x230938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230938_0x230938");
#endif

    ctx->pc = 0x230938u;

    // 0x230938: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x230938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x23093c: 0x3e00008  jr          $ra
    ctx->pc = 0x23093Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23093Cu;
        // 0x230940: 0xac44d0dc  sw          $a0, -0x2F24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294955228), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23093Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230944u;
    // 0x230944: 0x0  nop
    ctx->pc = 0x230944u;
    // NOP
    ctx->pc = 0x230948u;
}
