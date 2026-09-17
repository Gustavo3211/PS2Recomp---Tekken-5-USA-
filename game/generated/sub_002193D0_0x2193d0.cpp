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

// Function: sub_002193D0
// Address: 0x2193d0 - 0x2193f0
void sub_002193D0_0x2193d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002193D0_0x2193d0");
#endif

    switch (ctx->pc) {
        case 0x2193e0u: goto label_2193e0;
        default: break;
    }

    ctx->pc = 0x2193d0u;

    // 0x2193d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2193d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2193d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2193d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2193d8: 0xc08b882  jal         func_22E208
    ctx->pc = 0x2193D8u;
    SET_GPR_U32(ctx, 31, 0x2193E0u);
    ctx->pc = 0x2193DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2193D8u;
    // 0x2193dc: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E208u, 0x2193D8u, 0x2193E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2193E0u;
label_2193e0:
    // 0x2193e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2193e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2193e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2193E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2193E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2193E4u;
        // 0x2193e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2193E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2193ECu;
    // 0x2193ec: 0x0  nop
    ctx->pc = 0x2193ecu;
    // NOP
    ctx->pc = 0x2193f0u;
}
