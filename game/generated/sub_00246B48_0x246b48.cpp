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

// Function: sub_00246B48
// Address: 0x246b48 - 0x246b68
void sub_00246B48_0x246b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246B48_0x246b48");
#endif

    switch (ctx->pc) {
        case 0x246b58u: goto label_246b58;
        default: break;
    }

    ctx->pc = 0x246b48u;

    // 0x246b48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x246b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x246b4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x246b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x246b50: 0xc092928  jal         func_24A4A0
    ctx->pc = 0x246B50u;
    SET_GPR_U32(ctx, 31, 0x246B58u);
    ctx->pc = 0x246B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246B50u;
    // 0x246b54: 0x24840043  addiu       $a0, $a0, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A4A0u, 0x246B50u, 0x246B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B58u;
label_246b58:
    // 0x246b58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x246b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x246B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B5Cu;
        // 0x246b60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246B64u;
    // 0x246b64: 0x0  nop
    ctx->pc = 0x246b64u;
    // NOP
    ctx->pc = 0x246b68u;
}
