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

// Function: sub_00240F30
// Address: 0x240f30 - 0x240f58
void sub_00240F30_0x240f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240F30_0x240f30");
#endif

    switch (ctx->pc) {
        case 0x240f40u: goto label_240f40;
        default: break;
    }

    ctx->pc = 0x240f30u;

    // 0x240f30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x240f34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x240f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x240f38: 0xc090f96  jal         func_243E58
    ctx->pc = 0x240F38u;
    SET_GPR_U32(ctx, 31, 0x240F40u);
    ctx->pc = 0x243E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E58u, 0x240F38u, 0x240F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240F40u;
label_240f40:
    // 0x240f40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x240F40u;
    {
        const bool branch_taken_0x240f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F40u;
        // 0x240f44: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240f40) {
            ctx->pc = 0x240F50u;
            goto label_240f50;
        }
    }
    ctx->pc = 0x240F48u;
    // 0x240f48: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x240f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x240f4c: 0x244236c0  addiu       $v0, $v0, 0x36C0
    ctx->pc = 0x240f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14016));
label_240f50:
    // 0x240f50: 0x3e00008  jr          $ra
    ctx->pc = 0x240F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F50u;
        // 0x240f54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240F58u;
}
