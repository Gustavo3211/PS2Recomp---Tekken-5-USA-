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

// Function: sub_00286008
// Address: 0x286008 - 0x286028
void sub_00286008_0x286008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286008_0x286008");
#endif

    switch (ctx->pc) {
        case 0x286018u: goto label_286018;
        default: break;
    }

    ctx->pc = 0x286008u;

    // 0x286008: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x286008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28600c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28600cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x286010: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x286010u;
    SET_GPR_U32(ctx, 31, 0x286018u);
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x286010u, 0x286018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286018u;
label_286018:
    // 0x286018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x286018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28601c: 0x3e00008  jr          $ra
    ctx->pc = 0x28601Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28601Cu;
        // 0x286020: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28601Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286024u;
    // 0x286024: 0x0  nop
    ctx->pc = 0x286024u;
    // NOP
    ctx->pc = 0x286028u;
}
