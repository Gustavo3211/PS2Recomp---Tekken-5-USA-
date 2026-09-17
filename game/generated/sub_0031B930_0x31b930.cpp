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

// Function: sub_0031B930
// Address: 0x31b930 - 0x31b950
void sub_0031B930_0x31b930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B930_0x31b930");
#endif

    switch (ctx->pc) {
        case 0x31b940u: goto label_31b940;
        default: break;
    }

    ctx->pc = 0x31b930u;

    // 0x31b930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31b930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31b934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31b934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31b938: 0xc0cd638  jal         func_3358E0
    ctx->pc = 0x31B938u;
    SET_GPR_U32(ctx, 31, 0x31B940u);
    ctx->pc = 0x31B93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B938u;
    // 0x31b93c: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3358E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3358E0u, 0x31B938u, 0x31B940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B940u;
label_31b940:
    // 0x31b940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31b940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b944: 0x3e00008  jr          $ra
    ctx->pc = 0x31B944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B944u;
        // 0x31b948: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B94Cu;
    // 0x31b94c: 0x0  nop
    ctx->pc = 0x31b94cu;
    // NOP
    ctx->pc = 0x31b950u;
}
