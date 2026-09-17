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

// Function: sub_002D1D18
// Address: 0x2d1d18 - 0x2d1d38
void sub_002D1D18_0x2d1d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1D18_0x2d1d18");
#endif

    switch (ctx->pc) {
        case 0x2d1d2cu: goto label_2d1d2c;
        default: break;
    }

    ctx->pc = 0x2d1d18u;

    // 0x2d1d18: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2d1d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2d1d1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d1d1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d1d20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1d24: 0xc0a13ac  jal         func_284EB0
    ctx->pc = 0x2D1D24u;
    SET_GPR_U32(ctx, 31, 0x2D1D2Cu);
    ctx->pc = 0x2D1D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1D24u;
    // 0x2d1d28: 0x24843370  addiu       $a0, $a0, 0x3370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284EB0u, 0x2D1D24u, 0x2D1D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1D2Cu;
label_2d1d2c:
    // 0x2d1d2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1d30: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D30u;
        // 0x2d1d34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1D38u;
}
