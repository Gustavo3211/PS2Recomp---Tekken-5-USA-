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

// Function: sub_001F96A0
// Address: 0x1f96a0 - 0x1f96d0
void sub_001F96A0_0x1f96a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F96A0_0x1f96a0");
#endif

    ctx->pc = 0x1f96a0u;

    // 0x1f96a0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f96a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f96a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f96a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f96a8: 0x9444b418  lhu         $a0, -0x4BE8($v0)
    ctx->pc = 0x1f96a8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x3AB418u));
    // 0x1f96ac: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F96ACu;
    {
        const bool branch_taken_0x1f96ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F96B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96ACu;
        // 0x1f96b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f96ac) {
            ctx->pc = 0x1F96C0u;
            goto label_1f96c0;
        }
    }
    ctx->pc = 0x1F96B4u;
    // 0x1f96b4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1f96b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1f96b8: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F96B8u;
    {
        const bool branch_taken_0x1f96b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f96b8) {
            ctx->pc = 0x1F96C4u;
            goto label_1f96c4;
        }
    }
    ctx->pc = 0x1F96C0u;
label_1f96c0:
    // 0x1f96c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f96c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f96c4:
    // 0x1f96c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F96C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F96C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96C4u;
        // 0x1f96c8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F96C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F96CCu;
    // 0x1f96cc: 0x0  nop
    ctx->pc = 0x1f96ccu;
    // NOP
    ctx->pc = 0x1f96d0u;
}
