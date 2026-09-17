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

// Function: sub_0033C728
// Address: 0x33c728 - 0x33c748
void sub_0033C728_0x33c728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C728_0x33c728");
#endif

    switch (ctx->pc) {
        case 0x33c738u: goto label_33c738;
        default: break;
    }

    ctx->pc = 0x33c728u;

    // 0x33c728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33c728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33c72c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33c72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33c730: 0xc0cb1a6  jal         func_32C698
    ctx->pc = 0x33C730u;
    SET_GPR_U32(ctx, 31, 0x33C738u);
    ctx->pc = 0x33C734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C730u;
    // 0x33c734: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C698u, 0x33C730u, 0x33C738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C738u;
label_33c738:
    // 0x33c738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33c738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c73c: 0x3e00008  jr          $ra
    ctx->pc = 0x33C73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C73Cu;
        // 0x33c740: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C744u;
    // 0x33c744: 0x0  nop
    ctx->pc = 0x33c744u;
    // NOP
    ctx->pc = 0x33c748u;
}
