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

// Function: sub_002F0668
// Address: 0x2f0668 - 0x2f0690
void sub_002F0668_0x2f0668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0668_0x2f0668");
#endif

    switch (ctx->pc) {
        case 0x2f0680u: goto label_2f0680;
        default: break;
    }

    ctx->pc = 0x2f0668u;

    // 0x2f0668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f0668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f066c: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x2f066cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2f0670: 0x24065780  addiu       $a2, $zero, 0x5780
    ctx->pc = 0x2f0670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22400));
    // 0x2f0674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f0674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f0678: 0xc04a125  jal         func_128494
    ctx->pc = 0x2F0678u;
    SET_GPR_U32(ctx, 31, 0x2F0680u);
    ctx->pc = 0x2F067Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0678u;
    // 0x2f067c: 0x248457a0  addiu       $a0, $a0, 0x57A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x2F0678u, 0x2F0680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0680u;
label_2f0680:
    // 0x2f0680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f0680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0684: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0684u;
        // 0x2f0688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F068Cu;
    // 0x2f068c: 0x0  nop
    ctx->pc = 0x2f068cu;
    // NOP
    ctx->pc = 0x2f0690u;
}
