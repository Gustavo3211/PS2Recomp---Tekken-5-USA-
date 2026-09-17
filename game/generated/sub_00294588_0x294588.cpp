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

// Function: sub_00294588
// Address: 0x294588 - 0x2945b8
void sub_00294588_0x294588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294588_0x294588");
#endif

    switch (ctx->pc) {
        case 0x294590u: goto label_294590;
        default: break;
    }

    ctx->pc = 0x294588u;

    // 0x294588: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x294588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29458c: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x29458cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_294590:
    // 0x294590: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x294590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x294594: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x294594u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x294598: 0x28a2005b  slti        $v0, $a1, 0x5B
    ctx->pc = 0x294598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)91) ? 1 : 0);
    // 0x29459c: 0x0  nop
    ctx->pc = 0x29459cu;
    // NOP
    // 0x2945a0: 0x0  nop
    ctx->pc = 0x2945a0u;
    // NOP
    // 0x2945a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2945A4u;
    {
        const bool branch_taken_0x2945a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2945A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2945A4u;
        // 0x2945a8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2945a4) {
            ctx->pc = 0x294590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294590;
        }
    }
    ctx->pc = 0x2945ACu;
    // 0x2945ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2945ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2945B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2945ACu;
        // 0x2945b0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2945ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2945B4u;
    // 0x2945b4: 0x0  nop
    ctx->pc = 0x2945b4u;
    // NOP
    ctx->pc = 0x2945b8u;
}
