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

// Function: sub_00126A20
// Address: 0x126a20 - 0x126a60
void sub_00126A20_0x126a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126A20_0x126a20");
#endif

    switch (ctx->pc) {
        case 0x126a30u: goto label_126a30;
        default: break;
    }

    ctx->pc = 0x126a20u;

    // 0x126a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x126a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x126a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x126a28: 0xc049a82  jal         func_126A08
    ctx->pc = 0x126A28u;
    SET_GPR_U32(ctx, 31, 0x126A30u);
    ctx->pc = 0x126A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A08u, 0x126A28u, 0x126A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126A30u;
label_126a30:
    // 0x126a30: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x126a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x126a34: 0x2463437c  addiu       $v1, $v1, 0x437C
    ctx->pc = 0x126a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17276));
    // 0x126a38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x126a38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x13437Cu));
    // 0x126a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x126A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A3Cu;
        // 0x126a40: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126A44u;
    // 0x126a44: 0x0  nop
    ctx->pc = 0x126a44u;
    // NOP
    // 0x126a48: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x126a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x126a4c: 0x24634434  addiu       $v1, $v1, 0x4434
    ctx->pc = 0x126a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17460));
    // 0x126a50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x126a50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x134434u));
    // 0x126a54: 0x3e00008  jr          $ra
    ctx->pc = 0x126A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A54u;
        // 0x126a58: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126A5Cu;
    // 0x126a5c: 0x0  nop
    ctx->pc = 0x126a5cu;
    // NOP
    ctx->pc = 0x126a60u;
}
