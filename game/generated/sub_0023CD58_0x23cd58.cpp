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

// Function: sub_0023CD58
// Address: 0x23cd58 - 0x23cd78
void sub_0023CD58_0x23cd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CD58_0x23cd58");
#endif

    switch (ctx->pc) {
        case 0x23cd68u: goto label_23cd68;
        default: break;
    }

    ctx->pc = 0x23cd58u;

    // 0x23cd58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23cd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23cd5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23cd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23cd60: 0xc08f384  jal         func_23CE10
    ctx->pc = 0x23CD60u;
    SET_GPR_U32(ctx, 31, 0x23CD68u);
    ctx->pc = 0x23CD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CD60u;
    // 0x23cd64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CE10u, 0x23CD60u, 0x23CD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CD68u;
label_23cd68:
    // 0x23cd68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23cd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23cd6c: 0x3e00008  jr          $ra
    ctx->pc = 0x23CD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD6Cu;
        // 0x23cd70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CD6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CD74u;
    // 0x23cd74: 0x0  nop
    ctx->pc = 0x23cd74u;
    // NOP
    ctx->pc = 0x23cd78u;
}
