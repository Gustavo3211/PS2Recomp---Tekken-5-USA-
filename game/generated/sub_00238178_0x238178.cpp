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

// Function: sub_00238178
// Address: 0x238178 - 0x2381a0
void sub_00238178_0x238178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238178_0x238178");
#endif

    switch (ctx->pc) {
        case 0x238188u: goto label_238188;
        case 0x238190u: goto label_238190;
        default: break;
    }

    ctx->pc = 0x238178u;

    // 0x238178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x238178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23817c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23817cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x238180: 0xc08c68e  jal         func_231A38
    ctx->pc = 0x238180u;
    SET_GPR_U32(ctx, 31, 0x238188u);
    ctx->pc = 0x231A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A38u, 0x238180u, 0x238188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238188u;
label_238188:
    // 0x238188: 0xc08c692  jal         func_231A48
    ctx->pc = 0x238188u;
    SET_GPR_U32(ctx, 31, 0x238190u);
    ctx->pc = 0x231A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A48u, 0x238188u, 0x238190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238190u;
label_238190:
    // 0x238190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238194: 0x3e00008  jr          $ra
    ctx->pc = 0x238194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238194u;
        // 0x238198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23819Cu;
    // 0x23819c: 0x0  nop
    ctx->pc = 0x23819cu;
    // NOP
    ctx->pc = 0x2381a0u;
}
