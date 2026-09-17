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

// Function: sub_002A2734
// Address: 0x2a2734 - 0x2a2760
void sub_002A2734_0x2a2734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2734_0x2a2734");
#endif

    switch (ctx->pc) {
        case 0x2a2738u: goto label_2a2738;
        default: break;
    }

    ctx->pc = 0x2a2734u;

    // 0x2a2734: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a2734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2a2738:
    // 0x2a2738: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2a2738u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a273c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x2A273Cu;
    {
        const bool branch_taken_0x2a273c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A273Cu;
        // 0x2a2740: 0x26310070  addiu       $s1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a273c) {
            ctx->pc = 0x2A26A0u;
            return;
        }
    }
    ctx->pc = 0x2A2744u;
    // 0x2a2744: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a2744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2748: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a2748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a274c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a274cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2750: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2750u;
        // 0x2a2754: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2758u;
    // 0x2a2758: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2760u;
}
