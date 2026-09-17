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

// Function: sub_004F93B0
// Address: 0x4f93b0 - 0x4f93c8
void sub_004F93B0_0x4f93b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F93B0_0x4f93b0");
#endif

    ctx->pc = 0x4f93b0u;

    // 0x4f93b0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x4f93b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x4f93b4: 0x3c01007f  lui         $at, 0x7F
    ctx->pc = 0x4f93b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)127 << 16));
    // 0x4f93b8: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x4f93b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x4f93bc: 0xa4251280  sh          $a1, 0x1280($at)
    ctx->pc = 0x4f93bcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4736), (uint16_t)GPR_U32(ctx, 5));
    // 0x4f93c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4F93C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F93C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F93C8u;
}
