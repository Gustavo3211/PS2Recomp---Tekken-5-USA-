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

// Function: sub_002D0AF8
// Address: 0x2d0af8 - 0x2d0b18
void sub_002D0AF8_0x2d0af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0AF8_0x2d0af8");
#endif

    switch (ctx->pc) {
        case 0x2d0b08u: goto label_2d0b08;
        default: break;
    }

    ctx->pc = 0x2d0af8u;

    // 0x2d0af8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d0af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d0afc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0b00: 0xc0b428c  jal         func_2D0A30
    ctx->pc = 0x2D0B00u;
    SET_GPR_U32(ctx, 31, 0x2D0B08u);
    ctx->pc = 0x2D0A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0A30u, 0x2D0B00u, 0x2D0B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0B08u;
label_2d0b08:
    // 0x2d0b08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0B0Cu;
        // 0x2d0b10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0B14u;
    // 0x2d0b14: 0x0  nop
    ctx->pc = 0x2d0b14u;
    // NOP
    ctx->pc = 0x2d0b18u;
}
