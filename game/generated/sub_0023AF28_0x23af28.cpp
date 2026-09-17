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

// Function: sub_0023AF28
// Address: 0x23af28 - 0x23af50
void sub_0023AF28_0x23af28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AF28_0x23af28");
#endif

    switch (ctx->pc) {
        case 0x23af40u: goto label_23af40;
        default: break;
    }

    ctx->pc = 0x23af28u;

    // 0x23af28: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x23af28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x23af2c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23af2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23af30: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x23af30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23af34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23af34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23af38: 0xc08eba0  jal         func_23AE80
    ctx->pc = 0x23AF38u;
    SET_GPR_U32(ctx, 31, 0x23AF40u);
    ctx->pc = 0x23AF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AF38u;
    // 0x23af3c: 0x2484d748  addiu       $a0, $a0, -0x28B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AE80u, 0x23AF38u, 0x23AF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AF40u;
label_23af40:
    // 0x23af40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23af40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23af44: 0x3e00008  jr          $ra
    ctx->pc = 0x23AF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF44u;
        // 0x23af48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AF4Cu;
    // 0x23af4c: 0x0  nop
    ctx->pc = 0x23af4cu;
    // NOP
    ctx->pc = 0x23af50u;
}
