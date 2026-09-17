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

// Function: sub_0022A290
// Address: 0x22a290 - 0x22a2b8
void sub_0022A290_0x22a290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A290_0x22a290");
#endif

    switch (ctx->pc) {
        case 0x22a2a8u: goto label_22a2a8;
        default: break;
    }

    ctx->pc = 0x22a290u;

    // 0x22a290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22a290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22a294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a298: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x22a298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x22a29c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x22a29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a2a0: 0xc090f9c  jal         func_243E70
    ctx->pc = 0x22A2A0u;
    SET_GPR_U32(ctx, 31, 0x22A2A8u);
    ctx->pc = 0x22A2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A2A0u;
    // 0x22a2a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E70u, 0x22A2A0u, 0x22A2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A2A8u;
label_22a2a8:
    // 0x22a2a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x22A2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A2ACu;
        // 0x22a2b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A2B4u;
    // 0x22a2b4: 0x0  nop
    ctx->pc = 0x22a2b4u;
    // NOP
    ctx->pc = 0x22a2b8u;
}
