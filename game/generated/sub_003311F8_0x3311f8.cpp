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

// Function: sub_003311F8
// Address: 0x3311f8 - 0x331220
void sub_003311F8_0x3311f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003311F8_0x3311f8");
#endif

    switch (ctx->pc) {
        case 0x331208u: goto label_331208;
        case 0x331210u: goto label_331210;
        default: break;
    }

    ctx->pc = 0x3311f8u;

    // 0x3311f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3311f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3311fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3311fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x331200: 0xc0449ca  jal         func_112728
    ctx->pc = 0x331200u;
    SET_GPR_U32(ctx, 31, 0x331208u);
    ctx->pc = 0x331204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331200u;
    // 0x331204: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112728u, 0x331200u, 0x331208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331208u;
label_331208:
    // 0x331208: 0xc045d06  jal         func_117418
    ctx->pc = 0x331208u;
    SET_GPR_U32(ctx, 31, 0x331210u);
    ctx->pc = 0x117418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117418u, 0x331208u, 0x331210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331210u;
label_331210:
    // 0x331210: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x331210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331214: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x331214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331218: 0x3e00008  jr          $ra
    ctx->pc = 0x331218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331218u;
        // 0x33121c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331220u;
}
