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

// Function: sub_001FB198
// Address: 0x1fb198 - 0x1fb1d8
void sub_001FB198_0x1fb198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB198_0x1fb198");
#endif

    ctx->pc = 0x1fb198u;

    // 0x1fb198: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb19c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fb19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb1a0: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x1fb1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x1fb1a4: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb1a8: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1fb1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1fb1ac: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb1b0: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x1fb1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x1fb1b4: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb1b8: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1fb1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1fb1bc: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb1c0: 0xac600058  sw          $zero, 0x58($v1)
    ctx->pc = 0x1fb1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
    // 0x1fb1c4: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb1c8: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x1fb1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
    // 0x1fb1cc: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB1D0u;
        // 0x1fb1d4: 0xac640060  sw          $a0, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB1D8u;
}
