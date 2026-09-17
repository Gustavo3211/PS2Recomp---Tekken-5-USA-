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

// Function: sub_00308D60
// Address: 0x308d60 - 0x308d80
void sub_00308D60_0x308d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308D60_0x308d60");
#endif

    switch (ctx->pc) {
        case 0x308d74u: goto label_308d74;
        default: break;
    }

    ctx->pc = 0x308d60u;

    // 0x308d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x308d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x308d64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x308d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308d68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x308d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x308d6c: 0xc0c2346  jal         func_308D18
    ctx->pc = 0x308D6Cu;
    SET_GPR_U32(ctx, 31, 0x308D74u);
    ctx->pc = 0x308D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308D6Cu;
    // 0x308d70: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x308D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308D18u, 0x308D6Cu, 0x308D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308D74u;
label_308d74:
    // 0x308d74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x308d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308d78: 0x3e00008  jr          $ra
    ctx->pc = 0x308D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D78u;
        // 0x308d7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308D80u;
}
