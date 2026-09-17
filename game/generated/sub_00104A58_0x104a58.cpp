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

// Function: sub_00104A58
// Address: 0x104a58 - 0x104a80
void sub_00104A58_0x104a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104A58_0x104a58");
#endif

    switch (ctx->pc) {
        case 0x104a6cu: goto label_104a6c;
        default: break;
    }

    ctx->pc = 0x104a58u;

    // 0x104a58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x104a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x104a5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x104a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x104a60: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x104a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x104a64: 0xc042bec  jal         func_10AFB0
    ctx->pc = 0x104A64u;
    SET_GPR_U32(ctx, 31, 0x104A6Cu);
    ctx->pc = 0x104A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104A64u;
    // 0x104a68: 0x24840068  addiu       $a0, $a0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AFB0u, 0x104A64u, 0x104A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104A6Cu;
label_104a6c:
    // 0x104a6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x104a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104a70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x104a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104a74: 0x3e00008  jr          $ra
    ctx->pc = 0x104A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A74u;
        // 0x104a78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104A7Cu;
    // 0x104a7c: 0x0  nop
    ctx->pc = 0x104a7cu;
    // NOP
    ctx->pc = 0x104a80u;
}
