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

// Function: sub_00214BA0
// Address: 0x214ba0 - 0x214bd0
void sub_00214BA0_0x214ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214BA0_0x214ba0");
#endif

    switch (ctx->pc) {
        case 0x214bb0u: goto label_214bb0;
        default: break;
    }

    ctx->pc = 0x214ba0u;

    // 0x214ba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x214ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x214ba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214ba8: 0xc0863ea  jal         func_218FA8
    ctx->pc = 0x214BA8u;
    SET_GPR_U32(ctx, 31, 0x214BB0u);
    ctx->pc = 0x218FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218FA8u, 0x214BA8u, 0x214BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214BB0u;
label_214bb0:
    // 0x214bb0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x214bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x214bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214bb8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x214bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x214bbc: 0x2421b730  addiu       $at, $at, -0x48D0
    ctx->pc = 0x214bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294948656));
    // 0x214bc0: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x214bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x214bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x214BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214BC4u;
        // 0x214bc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214BCCu;
    // 0x214bcc: 0x0  nop
    ctx->pc = 0x214bccu;
    // NOP
    ctx->pc = 0x214bd0u;
}
