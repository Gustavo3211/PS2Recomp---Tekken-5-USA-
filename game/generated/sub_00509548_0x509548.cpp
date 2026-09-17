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

// Function: sub_00509548
// Address: 0x509548 - 0x509558
void sub_00509548_0x509548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00509548_0x509548");
#endif

    ctx->pc = 0x509548u;

    // 0x509548: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x509548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x50954c: 0x3e00008  jr          $ra
    ctx->pc = 0x50954Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x509550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50954Cu;
        // 0x509550: 0xa4403e7c  sh          $zero, 0x3E7C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 15996), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50954Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x509554u;
    // 0x509554: 0x0  nop
    ctx->pc = 0x509554u;
    // NOP
    ctx->pc = 0x509558u;
}
