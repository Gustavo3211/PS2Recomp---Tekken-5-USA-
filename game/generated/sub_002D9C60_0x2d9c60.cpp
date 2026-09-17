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

// Function: sub_002D9C60
// Address: 0x2d9c60 - 0x2d9c80
void sub_002D9C60_0x2d9c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9C60_0x2d9c60");
#endif

    switch (ctx->pc) {
        case 0x2d9c74u: goto label_2d9c74;
        default: break;
    }

    ctx->pc = 0x2d9c60u;

    // 0x2d9c60: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2d9c60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2d9c64: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d9c64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d9c68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d9c6c: 0xc0b672e  jal         func_2D9CB8
    ctx->pc = 0x2D9C6Cu;
    SET_GPR_U32(ctx, 31, 0x2D9C74u);
    ctx->pc = 0x2D9C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9C6Cu;
    // 0x2d9c70: 0x24847d80  addiu       $a0, $a0, 0x7D80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9CB8u, 0x2D9C6Cu, 0x2D9C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9C74u;
label_2d9c74:
    // 0x2d9c74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9c78: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C78u;
        // 0x2d9c7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9C80u;
}
