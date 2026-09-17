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

// Function: sub_00104A30
// Address: 0x104a30 - 0x104a58
void sub_00104A30_0x104a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104A30_0x104a30");
#endif

    switch (ctx->pc) {
        case 0x104a44u: goto label_104a44;
        default: break;
    }

    ctx->pc = 0x104a30u;

    // 0x104a30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x104a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x104a34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x104a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x104a38: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x104a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x104a3c: 0xc042bb2  jal         func_10AEC8
    ctx->pc = 0x104A3Cu;
    SET_GPR_U32(ctx, 31, 0x104A44u);
    ctx->pc = 0x104A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104A3Cu;
    // 0x104a40: 0x24840068  addiu       $a0, $a0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AEC8u, 0x104A3Cu, 0x104A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104A44u;
label_104a44:
    // 0x104a44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x104a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104a48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x104a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x104A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A4Cu;
        // 0x104a50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104A54u;
    // 0x104a54: 0x0  nop
    ctx->pc = 0x104a54u;
    // NOP
    ctx->pc = 0x104a58u;
}
