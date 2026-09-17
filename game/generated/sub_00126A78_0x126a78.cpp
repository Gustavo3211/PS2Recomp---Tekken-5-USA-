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

// Function: sub_00126A78
// Address: 0x126a78 - 0x126aa0
void sub_00126A78_0x126a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126A78_0x126a78");
#endif

    switch (ctx->pc) {
        case 0x126a88u: goto label_126a88;
        default: break;
    }

    ctx->pc = 0x126a78u;

    // 0x126a78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x126a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x126a7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x126a80: 0xc048762  jal         func_121D88
    ctx->pc = 0x126A80u;
    SET_GPR_U32(ctx, 31, 0x126A88u);
    ctx->pc = 0x121D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121D88u, 0x126A80u, 0x126A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126A88u;
label_126a88:
    // 0x126a88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x126a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x126a8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126a90: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x126a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x126a94: 0x3e00008  jr          $ra
    ctx->pc = 0x126A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A94u;
        // 0x126a98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126A9Cu;
    // 0x126a9c: 0x0  nop
    ctx->pc = 0x126a9cu;
    // NOP
    ctx->pc = 0x126aa0u;
}
