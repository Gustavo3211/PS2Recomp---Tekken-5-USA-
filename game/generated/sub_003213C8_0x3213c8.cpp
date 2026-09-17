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

// Function: sub_003213C8
// Address: 0x3213c8 - 0x3213e8
void sub_003213C8_0x3213c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003213C8_0x3213c8");
#endif

    switch (ctx->pc) {
        case 0x3213d8u: goto label_3213d8;
        default: break;
    }

    ctx->pc = 0x3213c8u;

    // 0x3213c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3213c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3213cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3213ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3213d0: 0xc0ceb0e  jal         func_33AC38
    ctx->pc = 0x3213D0u;
    SET_GPR_U32(ctx, 31, 0x3213D8u);
    ctx->pc = 0x3213D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3213D0u;
    // 0x3213d4: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AC38u, 0x3213D0u, 0x3213D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3213D8u;
label_3213d8:
    // 0x3213d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3213d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3213dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3213dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3213e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3213E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3213E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3213E0u;
        // 0x3213e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3213E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3213E8u;
}
