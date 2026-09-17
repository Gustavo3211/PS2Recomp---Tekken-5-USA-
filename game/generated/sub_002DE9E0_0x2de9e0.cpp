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

// Function: sub_002DE9E0
// Address: 0x2de9e0 - 0x2dea18
void sub_002DE9E0_0x2de9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE9E0_0x2de9e0");
#endif

    switch (ctx->pc) {
        case 0x2de9f4u: goto label_2de9f4;
        case 0x2dea08u: goto label_2dea08;
        default: break;
    }

    ctx->pc = 0x2de9e0u;

    // 0x2de9e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2de9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2de9e4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2de9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2de9e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2de9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2de9ec: 0xc0b7ad8  jal         func_2DEB60
    ctx->pc = 0x2DE9ECu;
    SET_GPR_U32(ctx, 31, 0x2DE9F4u);
    ctx->pc = 0x2DE9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE9ECu;
    // 0x2de9f0: 0x8c900010  lw          $s0, 0x10($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DEB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEB60u, 0x2DE9ECu, 0x2DE9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE9F4u;
label_2de9f4:
    // 0x2de9f4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2de9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2de9f8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2de9f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de9fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2de9fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dea00: 0xc0b7c00  jal         func_2DF000
    ctx->pc = 0x2DEA00u;
    SET_GPR_U32(ctx, 31, 0x2DEA08u);
    ctx->pc = 0x2DEA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEA00u;
    // 0x2dea04: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF000u, 0x2DEA00u, 0x2DEA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEA08u;
label_2dea08:
    // 0x2dea08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dea08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dea0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2dea0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dea10: 0x3e00008  jr          $ra
    ctx->pc = 0x2DEA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA10u;
        // 0x2dea14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DEA18u;
}
