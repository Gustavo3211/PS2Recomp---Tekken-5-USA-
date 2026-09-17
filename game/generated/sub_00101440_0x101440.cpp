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

// Function: sub_00101440
// Address: 0x101440 - 0x101488
void sub_00101440_0x101440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101440_0x101440");
#endif

    switch (ctx->pc) {
        case 0x101460u: goto label_101460;
        default: break;
    }

    ctx->pc = 0x101440u;

    // 0x101440: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x101440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x101444: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x101444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x101448: 0x8c44885c  lw          $a0, -0x77A4($v0)
    ctx->pc = 0x101448u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A885Cu));
    // 0x10144c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10144cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x101450: 0x8c6583c0  lw          $a1, -0x7C40($v1)
    ctx->pc = 0x101450u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x101454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101458: 0xc04007c  jal         func_1001F0
    ctx->pc = 0x101458u;
    SET_GPR_U32(ctx, 31, 0x101460u);
    ctx->pc = 0x1001F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1001F0u, 0x101458u, 0x101460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101460u;
label_101460:
    // 0x101460: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x101460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101464: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x101464u;
    {
        const bool branch_taken_0x101464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x101468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101464u;
        // 0x101468: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101464) {
            ctx->pc = 0x101474u;
            goto label_101474;
        }
    }
    ctx->pc = 0x10146Cu;
    // 0x10146c: 0x3c020156  lui         $v0, 0x156
    ctx->pc = 0x10146cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)342 << 16));
    // 0x101470: 0x2444a980  addiu       $a0, $v0, -0x5680
    ctx->pc = 0x101470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945152));
label_101474:
    // 0x101474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101478: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x101478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10147c: 0x3e00008  jr          $ra
    ctx->pc = 0x10147Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10147Cu;
        // 0x101480: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10147Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101484u;
    // 0x101484: 0x0  nop
    ctx->pc = 0x101484u;
    // NOP
    ctx->pc = 0x101488u;
}
