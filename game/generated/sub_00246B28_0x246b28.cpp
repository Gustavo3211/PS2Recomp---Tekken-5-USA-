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

// Function: sub_00246B28
// Address: 0x246b28 - 0x246b48
void sub_00246B28_0x246b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246B28_0x246b28");
#endif

    switch (ctx->pc) {
        case 0x246b38u: goto label_246b38;
        default: break;
    }

    ctx->pc = 0x246b28u;

    // 0x246b28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x246b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x246b2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x246b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x246b30: 0xc092958  jal         func_24A560
    ctx->pc = 0x246B30u;
    SET_GPR_U32(ctx, 31, 0x246B38u);
    ctx->pc = 0x246B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246B30u;
    // 0x246b34: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A560u, 0x246B30u, 0x246B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B38u;
label_246b38:
    // 0x246b38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x246b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x246B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B3Cu;
        // 0x246b40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246B44u;
    // 0x246b44: 0x0  nop
    ctx->pc = 0x246b44u;
    // NOP
    ctx->pc = 0x246b48u;
}
