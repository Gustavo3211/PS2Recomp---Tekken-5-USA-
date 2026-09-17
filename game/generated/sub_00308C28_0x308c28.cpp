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

// Function: sub_00308C28
// Address: 0x308c28 - 0x308c50
void sub_00308C28_0x308c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308C28_0x308c28");
#endif

    switch (ctx->pc) {
        case 0x308c40u: goto label_308c40;
        default: break;
    }

    ctx->pc = 0x308c28u;

    // 0x308c28: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x308c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308c2c: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x308c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x308c30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x308c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x308c34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x308c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x308c38: 0xc0c16be  jal         func_305AF8
    ctx->pc = 0x308C38u;
    SET_GPR_U32(ctx, 31, 0x308C40u);
    ctx->pc = 0x308C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308C38u;
    // 0x308c3c: 0x2484ece0  addiu       $a0, $a0, -0x1320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305AF8u, 0x308C38u, 0x308C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308C40u;
label_308c40:
    // 0x308c40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x308c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308c44: 0x3e00008  jr          $ra
    ctx->pc = 0x308C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C44u;
        // 0x308c48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308C4Cu;
    // 0x308c4c: 0x0  nop
    ctx->pc = 0x308c4cu;
    // NOP
    ctx->pc = 0x308c50u;
}
