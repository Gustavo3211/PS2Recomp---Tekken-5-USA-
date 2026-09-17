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

// Function: sub_004F9388
// Address: 0x4f9388 - 0x4f93b0
void sub_004F9388_0x4f9388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F9388_0x4f9388");
#endif

    ctx->pc = 0x4f9388u;

    // 0x4f9388: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x4f9388u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x4f938c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4f938cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4f9390: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4f9390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4f9394: 0x84421280  lh          $v0, 0x1280($v0)
    ctx->pc = 0x4f9394u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4736)));
    // 0x4f9398: 0x3e00008  jr          $ra
    ctx->pc = 0x4F9398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F9398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F93A0u;
    // 0x4f93a0: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x4f93a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x4f93a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4F93A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F93A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F93A4u;
        // 0x4f93a8: 0x8c62cb10  lw          $v0, -0x34F0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953744)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F93A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F93ACu;
    // 0x4f93ac: 0x0  nop
    ctx->pc = 0x4f93acu;
    // NOP
    ctx->pc = 0x4f93b0u;
}
