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

// Function: sub_00219740
// Address: 0x219740 - 0x219760
void sub_00219740_0x219740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219740_0x219740");
#endif

    switch (ctx->pc) {
        case 0x219750u: goto label_219750;
        default: break;
    }

    ctx->pc = 0x219740u;

    // 0x219740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x219740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x219744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x219744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x219748: 0xc0821d0  jal         func_208740
    ctx->pc = 0x219748u;
    SET_GPR_U32(ctx, 31, 0x219750u);
    ctx->pc = 0x208740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208740u, 0x219748u, 0x219750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219750u;
label_219750:
    // 0x219750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x219750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219754: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x219754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x219758: 0x3e00008  jr          $ra
    ctx->pc = 0x219758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219758u;
        // 0x21975c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219760u;
}
