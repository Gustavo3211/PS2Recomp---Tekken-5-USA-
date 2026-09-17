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

// Function: sub_004A6430
// Address: 0x4a6430 - 0x4a6440
void sub_004A6430_0x4a6430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6430_0x4a6430");
#endif

    ctx->pc = 0x4a6430u;

    // 0x4a6430: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4a6430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4a6434: 0x3e00008  jr          $ra
    ctx->pc = 0x4A6434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6434u;
        // 0x4a6438: 0xa440f88c  sh          $zero, -0x774($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294965388), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A643Cu;
    // 0x4a643c: 0x0  nop
    ctx->pc = 0x4a643cu;
    // NOP
    ctx->pc = 0x4a6440u;
}
