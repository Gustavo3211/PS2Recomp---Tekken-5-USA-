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

// Function: sub_002D9C20
// Address: 0x2d9c20 - 0x2d9c40
void sub_002D9C20_0x2d9c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9C20_0x2d9c20");
#endif

    switch (ctx->pc) {
        case 0x2d9c34u: goto label_2d9c34;
        default: break;
    }

    ctx->pc = 0x2d9c20u;

    // 0x2d9c20: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2d9c20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2d9c24: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d9c24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d9c28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d9c2c: 0xc0b6720  jal         func_2D9C80
    ctx->pc = 0x2D9C2Cu;
    SET_GPR_U32(ctx, 31, 0x2D9C34u);
    ctx->pc = 0x2D9C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9C2Cu;
    // 0x2d9c30: 0x24847d80  addiu       $a0, $a0, 0x7D80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9C80u, 0x2D9C2Cu, 0x2D9C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9C34u;
label_2d9c34:
    // 0x2d9c34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9c38: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C38u;
        // 0x2d9c3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9C40u;
}
