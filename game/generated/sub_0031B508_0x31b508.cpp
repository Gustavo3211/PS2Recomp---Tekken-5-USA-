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

// Function: sub_0031B508
// Address: 0x31b508 - 0x31b528
void sub_0031B508_0x31b508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B508_0x31b508");
#endif

    switch (ctx->pc) {
        case 0x31b518u: goto label_31b518;
        default: break;
    }

    ctx->pc = 0x31b508u;

    // 0x31b508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31b508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31b50c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31b50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31b510: 0xc0cd61c  jal         func_335870
    ctx->pc = 0x31B510u;
    SET_GPR_U32(ctx, 31, 0x31B518u);
    ctx->pc = 0x31B514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B510u;
    // 0x31b514: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335870u, 0x31B510u, 0x31B518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B518u;
label_31b518:
    // 0x31b518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31b518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b51c: 0x3e00008  jr          $ra
    ctx->pc = 0x31B51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B51Cu;
        // 0x31b520: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B524u;
    // 0x31b524: 0x0  nop
    ctx->pc = 0x31b524u;
    // NOP
    ctx->pc = 0x31b528u;
}
