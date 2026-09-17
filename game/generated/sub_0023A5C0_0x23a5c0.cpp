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

// Function: sub_0023A5C0
// Address: 0x23a5c0 - 0x23a5e0
void sub_0023A5C0_0x23a5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A5C0_0x23a5c0");
#endif

    switch (ctx->pc) {
        case 0x23a5d4u: goto label_23a5d4;
        default: break;
    }

    ctx->pc = 0x23a5c0u;

    // 0x23a5c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23a5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23a5c4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x23a5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23a5c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23a5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23a5cc: 0xc08e79c  jal         func_239E70
    ctx->pc = 0x23A5CCu;
    SET_GPR_U32(ctx, 31, 0x23A5D4u);
    ctx->pc = 0x23A5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A5CCu;
    // 0x23a5d0: 0x84840012  lh          $a0, 0x12($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x23A5CCu, 0x23A5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A5D4u;
label_23a5d4:
    // 0x23a5d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23a5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x23A5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A5D8u;
        // 0x23a5dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A5E0u;
}
