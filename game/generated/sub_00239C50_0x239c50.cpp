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

// Function: sub_00239C50
// Address: 0x239c50 - 0x239c68
void sub_00239C50_0x239c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239C50_0x239c50");
#endif

    ctx->pc = 0x239c50u;

    // 0x239c50: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x239c50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x239c54: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x239c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x239c58: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x239c58u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x239c5c: 0xac25d668  sw          $a1, -0x2998($at)
    ctx->pc = 0x239c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956648), GPR_U32(ctx, 5));
    // 0x239c60: 0x3e00008  jr          $ra
    ctx->pc = 0x239C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239C68u;
}
