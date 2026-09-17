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

// Function: sub_00256FB0
// Address: 0x256fb0 - 0x256fe0
void sub_00256FB0_0x256fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256FB0_0x256fb0");
#endif

    switch (ctx->pc) {
        case 0x256fb8u: goto label_256fb8;
        default: break;
    }

    ctx->pc = 0x256fb0u;

    // 0x256fb0: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x256fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x256fb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x256fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256fb8:
    // 0x256fb8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x256fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x256fbc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x256fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x256fc0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x256fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x256fc4: 0x28a30008  slti        $v1, $a1, 0x8
    ctx->pc = 0x256fc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x256fc8: 0x0  nop
    ctx->pc = 0x256fc8u;
    // NOP
    // 0x256fcc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x256FCCu;
    {
        const bool branch_taken_0x256fcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x256FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256FCCu;
        // 0x256fd0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256fcc) {
            ctx->pc = 0x256FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256fb8;
        }
    }
    ctx->pc = 0x256FD4u;
    // 0x256fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x256FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256FDCu;
    // 0x256fdc: 0x0  nop
    ctx->pc = 0x256fdcu;
    // NOP
    ctx->pc = 0x256fe0u;
}
