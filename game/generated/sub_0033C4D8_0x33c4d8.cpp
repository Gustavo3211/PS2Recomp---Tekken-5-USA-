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

// Function: sub_0033C4D8
// Address: 0x33c4d8 - 0x33c508
void sub_0033C4D8_0x33c4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C4D8_0x33c4d8");
#endif

    switch (ctx->pc) {
        case 0x33c4f0u: goto label_33c4f0;
        default: break;
    }

    ctx->pc = 0x33c4d8u;

    // 0x33c4d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33c4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33c4dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33c4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33c4e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33c4e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c4e4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33c4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33c4e8: 0xc0dd85e  jal         func_376178
    ctx->pc = 0x33C4E8u;
    SET_GPR_U32(ctx, 31, 0x33C4F0u);
    ctx->pc = 0x33C4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C4E8u;
    // 0x33c4ec: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376178u, 0x33C4E8u, 0x33C4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C4F0u;
label_33c4f0:
    // 0x33c4f0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x33c4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x33c4f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33c4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33c4f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33c4f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x33C4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C4FCu;
        // 0x33c500: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C504u;
    // 0x33c504: 0x0  nop
    ctx->pc = 0x33c504u;
    // NOP
    ctx->pc = 0x33c508u;
}
