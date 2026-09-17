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

// Function: sub_00214C30
// Address: 0x214c30 - 0x214c60
void sub_00214C30_0x214c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214C30_0x214c30");
#endif

    switch (ctx->pc) {
        case 0x214c40u: goto label_214c40;
        default: break;
    }

    ctx->pc = 0x214c30u;

    // 0x214c30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x214c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x214c34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214c38: 0xc0863ea  jal         func_218FA8
    ctx->pc = 0x214C38u;
    SET_GPR_U32(ctx, 31, 0x214C40u);
    ctx->pc = 0x218FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218FA8u, 0x214C38u, 0x214C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214C40u;
label_214c40:
    // 0x214c40: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x214c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x214c44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214c48: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x214c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x214c4c: 0x2421b738  addiu       $at, $at, -0x48C8
    ctx->pc = 0x214c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294948664));
    // 0x214c50: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x214c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x214c54: 0x3e00008  jr          $ra
    ctx->pc = 0x214C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C54u;
        // 0x214c58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214C5Cu;
    // 0x214c5c: 0x0  nop
    ctx->pc = 0x214c5cu;
    // NOP
    ctx->pc = 0x214c60u;
}
