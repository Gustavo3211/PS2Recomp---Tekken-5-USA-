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

// Function: sub_003455C0
// Address: 0x3455c0 - 0x3455e0
void sub_003455C0_0x3455c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003455C0_0x3455c0");
#endif

    ctx->pc = 0x3455c0u;

    // 0x3455c0: 0x2484ffdf  addiu       $a0, $a0, -0x21
    ctx->pc = 0x3455c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967263));
    // 0x3455c4: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x3455c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3455c8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3455c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3455cc: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x3455ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x3455d0: 0x24210f28  addiu       $at, $at, 0xF28
    ctx->pc = 0x3455d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 3880));
    // 0x3455d4: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x3455d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x3455d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3455D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3455D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3455E0u;
}
