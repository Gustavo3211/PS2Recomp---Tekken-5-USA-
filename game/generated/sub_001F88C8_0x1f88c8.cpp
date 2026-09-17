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

// Function: sub_001F88C8
// Address: 0x1f88c8 - 0x1f88f8
void sub_001F88C8_0x1f88c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F88C8_0x1f88c8");
#endif

    ctx->pc = 0x1f88c8u;

    // 0x1f88c8: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x1f88c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x1f88cc: 0x246355b0  addiu       $v1, $v1, 0x55B0
    ctx->pc = 0x1f88ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21936));
    // 0x1f88d0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1f88d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1555BCu));
    // 0x1f88d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F88D4u;
    {
        const bool branch_taken_0x1f88d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F88D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F88D4u;
        // 0x1f88d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f88d4) {
            ctx->pc = 0x1F88E8u;
            goto label_1f88e8;
        }
    }
    ctx->pc = 0x1F88DCu;
    // 0x1f88dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f88dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f88e0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F88E0u;
    {
        const bool branch_taken_0x1f88e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f88e0) {
            ctx->pc = 0x1F88ECu;
            goto label_1f88ec;
        }
    }
    ctx->pc = 0x1F88E8u;
label_1f88e8:
    // 0x1f88e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f88e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f88ec:
    // 0x1f88ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1F88ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F88F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F88ECu;
        // 0x1f88f0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F88ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F88F4u;
    // 0x1f88f4: 0x0  nop
    ctx->pc = 0x1f88f4u;
    // NOP
    ctx->pc = 0x1f88f8u;
}
