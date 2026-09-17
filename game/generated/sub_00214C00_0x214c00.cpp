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

// Function: sub_00214C00
// Address: 0x214c00 - 0x214c30
void sub_00214C00_0x214c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214C00_0x214c00");
#endif

    switch (ctx->pc) {
        case 0x214c10u: goto label_214c10;
        default: break;
    }

    ctx->pc = 0x214c00u;

    // 0x214c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x214c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x214c04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214c08: 0xc0863ea  jal         func_218FA8
    ctx->pc = 0x214C08u;
    SET_GPR_U32(ctx, 31, 0x214C10u);
    ctx->pc = 0x218FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218FA8u, 0x214C08u, 0x214C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214C10u;
label_214c10:
    // 0x214c10: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x214c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x214c14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214c18: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x214c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x214c1c: 0x2421b728  addiu       $at, $at, -0x48D8
    ctx->pc = 0x214c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294948648));
    // 0x214c20: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x214c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x214c24: 0x3e00008  jr          $ra
    ctx->pc = 0x214C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C24u;
        // 0x214c28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214C2Cu;
    // 0x214c2c: 0x0  nop
    ctx->pc = 0x214c2cu;
    // NOP
    ctx->pc = 0x214c30u;
}
