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

// Function: sub_002271F0
// Address: 0x2271f0 - 0x227208
void sub_002271F0_0x2271f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002271F0_0x2271f0");
#endif

    ctx->pc = 0x2271f0u;

    // 0x2271f0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2271f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2271f4: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x2271f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x2271f8: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x2271f8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x2271fc: 0xac209090  sw          $zero, -0x6F70($at)
    ctx->pc = 0x2271fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938768), GPR_U32(ctx, 0));
    // 0x227200: 0x3e00008  jr          $ra
    ctx->pc = 0x227200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227208u;
}
