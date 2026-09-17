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

// Function: sub_001F6BD0
// Address: 0x1f6bd0 - 0x1f6bf8
void sub_001F6BD0_0x1f6bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6BD0_0x1f6bd0");
#endif

    switch (ctx->pc) {
        case 0x1f6be0u: goto label_1f6be0;
        default: break;
    }

    ctx->pc = 0x1f6bd0u;

    // 0x1f6bd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f6bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f6bd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f6bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f6bd8: 0xc091726  jal         func_245C98
    ctx->pc = 0x1F6BD8u;
    SET_GPR_U32(ctx, 31, 0x1F6BE0u);
    ctx->pc = 0x1F6BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6BD8u;
    // 0x1f6bdc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245C98u, 0x1F6BD8u, 0x1F6BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6BE0u;
label_1f6be0:
    // 0x1f6be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6be4: 0xaf80c89c  sw          $zero, -0x3764($gp)
    ctx->pc = 0x1f6be4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953116), GPR_U32(ctx, 0));
    // 0x1f6be8: 0xaf80c898  sw          $zero, -0x3768($gp)
    ctx->pc = 0x1f6be8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953112), GPR_U32(ctx, 0));
    // 0x1f6bec: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6BECu;
        // 0x1f6bf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6BF4u;
    // 0x1f6bf4: 0x0  nop
    ctx->pc = 0x1f6bf4u;
    // NOP
    ctx->pc = 0x1f6bf8u;
}
