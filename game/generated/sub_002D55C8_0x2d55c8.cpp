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

// Function: sub_002D55C8
// Address: 0x2d55c8 - 0x2d55f8
void sub_002D55C8_0x2d55c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D55C8_0x2d55c8");
#endif

    switch (ctx->pc) {
        case 0x2d55dcu: goto label_2d55dc;
        case 0x2d55e8u: goto label_2d55e8;
        default: break;
    }

    ctx->pc = 0x2d55c8u;

    // 0x2d55c8: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x2d55c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x2d55cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d55ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d55d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d55d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d55d4: 0xc0b5590  jal         func_2D5640
    ctx->pc = 0x2D55D4u;
    SET_GPR_U32(ctx, 31, 0x2D55DCu);
    ctx->pc = 0x2D55D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D55D4u;
    // 0x2d55d8: 0x2484c700  addiu       $a0, $a0, -0x3900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5640u, 0x2D55D4u, 0x2D55DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D55DCu;
label_2d55dc:
    // 0x2d55dc: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x2d55dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x2d55e0: 0xc0b5590  jal         func_2D5640
    ctx->pc = 0x2D55E0u;
    SET_GPR_U32(ctx, 31, 0x2D55E8u);
    ctx->pc = 0x2D55E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D55E0u;
    // 0x2d55e4: 0x2484c730  addiu       $a0, $a0, -0x38D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5640u, 0x2D55E0u, 0x2D55E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D55E8u;
label_2d55e8:
    // 0x2d55e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d55e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d55ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2D55ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D55F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D55ECu;
        // 0x2d55f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D55ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D55F4u;
    // 0x2d55f4: 0x0  nop
    ctx->pc = 0x2d55f4u;
    // NOP
    ctx->pc = 0x2d55f8u;
}
