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

// Function: sub_00287810
// Address: 0x287810 - 0x287830
void sub_00287810_0x287810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287810_0x287810");
#endif

    switch (ctx->pc) {
        case 0x287820u: goto label_287820;
        default: break;
    }

    ctx->pc = 0x287810u;

    // 0x287810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x287810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x287814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x287814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x287818: 0xc092940  jal         func_24A500
    ctx->pc = 0x287818u;
    SET_GPR_U32(ctx, 31, 0x287820u);
    ctx->pc = 0x28781Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287818u;
    // 0x28781c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x287818u, 0x287820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287820u;
label_287820:
    // 0x287820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x287820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x287824: 0x3e00008  jr          $ra
    ctx->pc = 0x287824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287824u;
        // 0x287828: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28782Cu;
    // 0x28782c: 0x0  nop
    ctx->pc = 0x28782cu;
    // NOP
    ctx->pc = 0x287830u;
}
