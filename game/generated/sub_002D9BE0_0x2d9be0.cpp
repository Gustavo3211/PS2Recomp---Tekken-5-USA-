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

// Function: sub_002D9BE0
// Address: 0x2d9be0 - 0x2d9c00
void sub_002D9BE0_0x2d9be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9BE0_0x2d9be0");
#endif

    ctx->pc = 0x2d9be0u;

    // 0x2d9be0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2d9be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2d9be4: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D9BE4u;
    {
        const bool branch_taken_0x2d9be4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D9BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9BE4u;
        // 0x2d9be8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9be4) {
            ctx->pc = 0x2D9BF8u;
            goto label_2d9bf8;
        }
    }
    ctx->pc = 0x2D9BECu;
    // 0x2d9bec: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D9BECu;
    {
        const bool branch_taken_0x2d9bec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D9BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9BECu;
        // 0x2d9bf0: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9bec) {
            ctx->pc = 0x2D9BF8u;
            goto label_2d9bf8;
        }
    }
    ctx->pc = 0x2D9BF4u;
    // 0x2d9bf4: 0xa4407cc4  sh          $zero, 0x7CC4($v0)
    ctx->pc = 0x2d9bf4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 31940), (uint16_t)GPR_U32(ctx, 0));
label_2d9bf8:
    // 0x2d9bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9C00u;
}
