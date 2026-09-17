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

// Function: sub_002A82B0
// Address: 0x2a82b0 - 0x2a82e8
void sub_002A82B0_0x2a82b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A82B0_0x2a82b0");
#endif

    switch (ctx->pc) {
        case 0x2a82b8u: goto label_2a82b8;
        default: break;
    }

    ctx->pc = 0x2a82b0u;

    // 0x2a82b0: 0x18c0000b  blez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x2A82B0u;
    {
        const bool branch_taken_0x2a82b0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2A82B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A82B0u;
        // 0x2a82b4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a82b0) {
            ctx->pc = 0x2A82E0u;
            goto label_2a82e0;
        }
    }
    ctx->pc = 0x2A82B8u;
label_2a82b8:
    // 0x2a82b8: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x2a82b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2a82bc: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2a82bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2a82c0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2a82c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2a82c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a82c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a82c8: 0x106202a  slt         $a0, $t0, $a2
    ctx->pc = 0x2a82c8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2a82cc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2a82ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a82d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a82d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a82d4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2a82d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2a82d8: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2A82D8u;
    {
        const bool branch_taken_0x2a82d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A82DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A82D8u;
        // 0x2a82dc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a82d8) {
            ctx->pc = 0x2A82B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a82b8;
        }
    }
    ctx->pc = 0x2A82E0u;
label_2a82e0:
    // 0x2a82e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A82E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A82E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A82E8u;
}
