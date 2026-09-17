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

// Function: sub_002ECF58
// Address: 0x2ecf58 - 0x2ecf78
void sub_002ECF58_0x2ecf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ECF58_0x2ecf58");
#endif

    switch (ctx->pc) {
        case 0x2ecf68u: goto label_2ecf68;
        default: break;
    }

    ctx->pc = 0x2ecf58u;

    // 0x2ecf58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ecf58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ecf5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ecf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ecf60: 0xc0c96de  jal         func_325B78
    ctx->pc = 0x2ECF60u;
    SET_GPR_U32(ctx, 31, 0x2ECF68u);
    ctx->pc = 0x2ECF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECF60u;
    // 0x2ecf64: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325B78u, 0x2ECF60u, 0x2ECF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECF68u;
label_2ecf68:
    // 0x2ecf68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ecf68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ecf6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF6Cu;
        // 0x2ecf70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECF74u;
    // 0x2ecf74: 0x0  nop
    ctx->pc = 0x2ecf74u;
    // NOP
    ctx->pc = 0x2ecf78u;
}
