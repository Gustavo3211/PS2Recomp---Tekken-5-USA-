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

// Function: sub_00346308
// Address: 0x346308 - 0x346328
void sub_00346308_0x346308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346308_0x346308");
#endif

    switch (ctx->pc) {
        case 0x346318u: goto label_346318;
        default: break;
    }

    ctx->pc = 0x346308u;

    // 0x346308: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x346308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34630c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34630cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x346310: 0xc0d1874  jal         func_3461D0
    ctx->pc = 0x346310u;
    SET_GPR_U32(ctx, 31, 0x346318u);
    ctx->pc = 0x3461D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3461D0u, 0x346310u, 0x346318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346318u;
label_346318:
    // 0x346318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x346318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34631c: 0x3e00008  jr          $ra
    ctx->pc = 0x34631Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34631Cu;
        // 0x346320: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34631Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346324u;
    // 0x346324: 0x0  nop
    ctx->pc = 0x346324u;
    // NOP
    ctx->pc = 0x346328u;
}
