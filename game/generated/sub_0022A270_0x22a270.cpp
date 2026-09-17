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

// Function: sub_0022A270
// Address: 0x22a270 - 0x22a290
void sub_0022A270_0x22a270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A270_0x22a270");
#endif

    switch (ctx->pc) {
        case 0x22a280u: goto label_22a280;
        default: break;
    }

    ctx->pc = 0x22a270u;

    // 0x22a270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22a270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22a274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a278: 0xc08b4d0  jal         func_22D340
    ctx->pc = 0x22A278u;
    SET_GPR_U32(ctx, 31, 0x22A280u);
    ctx->pc = 0x22A27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A278u;
    // 0x22a27c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D340u, 0x22A278u, 0x22A280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A280u;
label_22a280:
    // 0x22a280: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a284: 0x3e00008  jr          $ra
    ctx->pc = 0x22A284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A284u;
        // 0x22a288: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A28Cu;
    // 0x22a28c: 0x0  nop
    ctx->pc = 0x22a28cu;
    // NOP
    ctx->pc = 0x22a290u;
}
