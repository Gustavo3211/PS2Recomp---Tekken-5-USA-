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

// Function: sub_0036A3B0
// Address: 0x36a3b0 - 0x36a3d0
void sub_0036A3B0_0x36a3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A3B0_0x36a3b0");
#endif

    switch (ctx->pc) {
        case 0x36a3c4u: goto label_36a3c4;
        default: break;
    }

    ctx->pc = 0x36a3b0u;

    // 0x36a3b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36a3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36a3b4: 0x24850050  addiu       $a1, $a0, 0x50
    ctx->pc = 0x36a3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x36a3b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36a3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36a3bc: 0xc0928fa  jal         func_24A3E8
    ctx->pc = 0x36A3BCu;
    SET_GPR_U32(ctx, 31, 0x36A3C4u);
    ctx->pc = 0x36A3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A3BCu;
    // 0x36a3c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A3E8u, 0x36A3BCu, 0x36A3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A3C4u;
label_36a3c4:
    // 0x36a3c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36a3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x36A3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A3C8u;
        // 0x36a3cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A3D0u;
}
