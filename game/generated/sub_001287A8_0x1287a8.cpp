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

// Function: sub_001287A8
// Address: 0x1287a8 - 0x1287c0
void sub_001287A8_0x1287a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001287A8_0x1287a8");
#endif

    ctx->pc = 0x1287a8u;

    // 0x1287a8: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x1287a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x1287ac: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1287acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1287b0: 0x8c434728  lw          $v1, 0x4728($v0)
    ctx->pc = 0x1287b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18216)));
    // 0x1287b4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1287b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1287b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1287B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1287BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1287B8u;
        // 0x1287bc: 0xfc6400a8  sd          $a0, 0xA8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 168), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1287B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1287C0u;
}
