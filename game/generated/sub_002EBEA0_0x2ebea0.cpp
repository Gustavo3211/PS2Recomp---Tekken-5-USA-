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

// Function: sub_002EBEA0
// Address: 0x2ebea0 - 0x2ebec0
void sub_002EBEA0_0x2ebea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBEA0_0x2ebea0");
#endif

    switch (ctx->pc) {
        case 0x2ebeb0u: goto label_2ebeb0;
        default: break;
    }

    ctx->pc = 0x2ebea0u;

    // 0x2ebea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ebea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ebea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ebea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ebea8: 0xc0badf2  jal         func_2EB7C8
    ctx->pc = 0x2EBEA8u;
    SET_GPR_U32(ctx, 31, 0x2EBEB0u);
    ctx->pc = 0x2EB7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB7C8u, 0x2EBEA8u, 0x2EBEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBEB0u;
label_2ebeb0:
    // 0x2ebeb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ebeb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebeb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBEB4u;
        // 0x2ebeb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBEBCu;
    // 0x2ebebc: 0x0  nop
    ctx->pc = 0x2ebebcu;
    // NOP
    ctx->pc = 0x2ebec0u;
}
