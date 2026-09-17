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

// Function: sub_001237D0
// Address: 0x1237d0 - 0x123800
void sub_001237D0_0x1237d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001237D0_0x1237d0");
#endif

    switch (ctx->pc) {
        case 0x1237f0u: goto label_1237f0;
        default: break;
    }

    ctx->pc = 0x1237d0u;

    // 0x1237d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1237d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1237d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1237d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1237d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1237d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1237dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1237dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1237e0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1237e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x1237e4: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x1237e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x1237e8: 0xc049c6e  jal         func_1271B8
    ctx->pc = 0x1237E8u;
    SET_GPR_U32(ctx, 31, 0x1237F0u);
    ctx->pc = 0x1237ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1237E8u;
    // 0x1237ec: 0xffa70010  sd          $a3, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271B8u, 0x1237E8u, 0x1237F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1237F0u;
label_1237f0:
    // 0x1237f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1237f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1237f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1237F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1237F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237F4u;
        // 0x1237f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1237F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1237FCu;
    // 0x1237fc: 0x0  nop
    ctx->pc = 0x1237fcu;
    // NOP
    ctx->pc = 0x123800u;
}
