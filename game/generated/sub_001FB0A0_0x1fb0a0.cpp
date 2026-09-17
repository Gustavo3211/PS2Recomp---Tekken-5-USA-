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

// Function: sub_001FB0A0
// Address: 0x1fb0a0 - 0x1fb0d0
void sub_001FB0A0_0x1fb0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB0A0_0x1fb0a0");
#endif

    ctx->pc = 0x1fb0a0u;

    // 0x1fb0a0: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb0a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fb0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb0a8: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x1fb0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x1fb0ac: 0x8f8597c8  lw          $a1, -0x6838($gp)
    ctx->pc = 0x1fb0acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb0b0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB0B0u;
    {
        const bool branch_taken_0x1fb0b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB0B0u;
        // 0x1fb0b4: 0xa4a00038  sh          $zero, 0x38($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 56), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb0b0) {
            ctx->pc = 0x1FB0C4u;
            goto label_1fb0c4;
        }
    }
    ctx->pc = 0x1FB0B8u;
    // 0x1fb0b8: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb0bc: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1fb0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1fb0c0: 0xa462003a  sh          $v0, 0x3A($v1)
    ctx->pc = 0x1fb0c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 58), (uint16_t)GPR_U32(ctx, 2));
label_1fb0c4:
    // 0x1fb0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB0CCu;
    // 0x1fb0cc: 0x0  nop
    ctx->pc = 0x1fb0ccu;
    // NOP
    ctx->pc = 0x1fb0d0u;
}
