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

// Function: sub_00214BD0
// Address: 0x214bd0 - 0x214c00
void sub_00214BD0_0x214bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214BD0_0x214bd0");
#endif

    switch (ctx->pc) {
        case 0x214be0u: goto label_214be0;
        default: break;
    }

    ctx->pc = 0x214bd0u;

    // 0x214bd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x214bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x214bd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214bd8: 0xc0863ea  jal         func_218FA8
    ctx->pc = 0x214BD8u;
    SET_GPR_U32(ctx, 31, 0x214BE0u);
    ctx->pc = 0x218FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218FA8u, 0x214BD8u, 0x214BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214BE0u;
label_214be0:
    // 0x214be0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x214be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x214be4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214be8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x214be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x214bec: 0x2421b740  addiu       $at, $at, -0x48C0
    ctx->pc = 0x214becu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294948672));
    // 0x214bf0: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x214bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x214bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x214BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214BF4u;
        // 0x214bf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214BFCu;
    // 0x214bfc: 0x0  nop
    ctx->pc = 0x214bfcu;
    // NOP
    ctx->pc = 0x214c00u;
}
