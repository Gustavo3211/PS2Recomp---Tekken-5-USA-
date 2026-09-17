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

// Function: sub_00124F28
// Address: 0x124f28 - 0x124f48
void sub_00124F28_0x124f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124F28_0x124f28");
#endif

    ctx->pc = 0x124f28u;

    // 0x124f28: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x124F28u;
    {
        const bool branch_taken_0x124f28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F28u;
        // 0x124f2c: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f28) {
            ctx->pc = 0x124F40u;
            goto label_124f40;
        }
    }
    ctx->pc = 0x124F30u;
    // 0x124f30: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x124f30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x124f34: 0x24424bc8  addiu       $v0, $v0, 0x4BC8
    ctx->pc = 0x124f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19400));
    // 0x124f38: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x124f38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x124f3c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x124f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_124f40:
    // 0x124f40: 0x3e00008  jr          $ra
    ctx->pc = 0x124F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124F48u;
}
