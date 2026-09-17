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

// Function: sub_00264388
// Address: 0x264388 - 0x2643a0
void sub_00264388_0x264388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264388_0x264388");
#endif

    ctx->pc = 0x264388u;

    // 0x264388: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x264388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x26438c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x26438cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x264390: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x264390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x264394: 0x3e00008  jr          $ra
    ctx->pc = 0x264394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264394u;
        // 0x264398: 0x8ca200a8  lw          $v0, 0xA8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26439Cu;
    // 0x26439c: 0x0  nop
    ctx->pc = 0x26439cu;
    // NOP
    ctx->pc = 0x2643a0u;
}
