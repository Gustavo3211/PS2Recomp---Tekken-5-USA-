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

// Function: sub_0010A9C8
// Address: 0x10a9c8 - 0x10aa00
void sub_0010A9C8_0x10a9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A9C8_0x10a9c8");
#endif

    ctx->pc = 0x10a9c8u;

    // 0x10a9c8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10a9cc: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10a9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x10a9d0: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x10a9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x10a9d4: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x10a9d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x10a9d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10a9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x10a9dc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x10a9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x10a9e0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x10a9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x10a9e4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A9E4u;
    {
        const bool branch_taken_0x10a9e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10a9e4) {
            ctx->pc = 0x10A9F4u;
            goto label_10a9f4;
        }
    }
    ctx->pc = 0x10A9ECu;
    // 0x10a9ec: 0x80420e8  j           func_1083A0
    ctx->pc = 0x10A9ECu;
    ctx->pc = 0x1083A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1083A0u, 0x10A9ECu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x10A9F4u;
label_10a9f4:
    // 0x10a9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x10A9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A9FCu;
    // 0x10a9fc: 0x0  nop
    ctx->pc = 0x10a9fcu;
    // NOP
    ctx->pc = 0x10aa00u;
}
