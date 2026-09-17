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

// Function: sub_00239C68
// Address: 0x239c68 - 0x239c80
void sub_00239C68_0x239c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239C68_0x239c68");
#endif

    ctx->pc = 0x239c68u;

    // 0x239c68: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x239c68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x239c6c: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x239c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x239c70: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x239c70u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x239c74: 0xac25d66c  sw          $a1, -0x2994($at)
    ctx->pc = 0x239c74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956652), GPR_U32(ctx, 5));
    // 0x239c78: 0x3e00008  jr          $ra
    ctx->pc = 0x239C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239C80u;
}
