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

// Function: sub_002AEB20
// Address: 0x2aeb20 - 0x2aeb60
void sub_002AEB20_0x2aeb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AEB20_0x2aeb20");
#endif

    switch (ctx->pc) {
        case 0x2aeb38u: goto label_2aeb38;
        default: break;
    }

    ctx->pc = 0x2aeb20u;

    // 0x2aeb20: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x2aeb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2aeb24: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2AEB24u;
    {
        const bool branch_taken_0x2aeb24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aeb24) {
            ctx->pc = 0x2AEB54u;
            goto label_2aeb54;
        }
    }
    ctx->pc = 0x2AEB2Cu;
    // 0x2aeb2c: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x2aeb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2aeb30: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x2aeb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x2aeb34: 0x0  nop
    ctx->pc = 0x2aeb34u;
    // NOP
label_2aeb38:
    // 0x2aeb38: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2aeb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2aeb3c: 0xac620074  sw          $v0, 0x74($v1)
    ctx->pc = 0x2aeb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 2));
    // 0x2aeb40: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2aeb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2aeb44: 0x0  nop
    ctx->pc = 0x2aeb44u;
    // NOP
    // 0x2aeb48: 0x0  nop
    ctx->pc = 0x2aeb48u;
    // NOP
    // 0x2aeb4c: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2AEB4Cu;
    {
        const bool branch_taken_0x2aeb4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aeb4c) {
            ctx->pc = 0x2AEB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEB4Cu;
            // 0x2aeb50: 0x8c620074  lw          $v0, 0x74($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aeb38;
        }
    }
    ctx->pc = 0x2AEB54u;
label_2aeb54:
    // 0x2aeb54: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEB54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEB5Cu;
    // 0x2aeb5c: 0x0  nop
    ctx->pc = 0x2aeb5cu;
    // NOP
    ctx->pc = 0x2aeb60u;
}
