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

// Function: sub_00308B28
// Address: 0x308b28 - 0x308b50
void sub_00308B28_0x308b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308B28_0x308b28");
#endif

    switch (ctx->pc) {
        case 0x308b40u: goto label_308b40;
        default: break;
    }

    ctx->pc = 0x308b28u;

    // 0x308b28: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x308b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308b2c: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x308b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x308b30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x308b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x308b34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x308b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x308b38: 0xc0c167e  jal         func_3059F8
    ctx->pc = 0x308B38u;
    SET_GPR_U32(ctx, 31, 0x308B40u);
    ctx->pc = 0x308B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308B38u;
    // 0x308b3c: 0x2484ece0  addiu       $a0, $a0, -0x1320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059F8u, 0x308B38u, 0x308B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308B40u;
label_308b40:
    // 0x308b40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x308b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308b44: 0x3e00008  jr          $ra
    ctx->pc = 0x308B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B44u;
        // 0x308b48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308B4Cu;
    // 0x308b4c: 0x0  nop
    ctx->pc = 0x308b4cu;
    // NOP
    ctx->pc = 0x308b50u;
}
