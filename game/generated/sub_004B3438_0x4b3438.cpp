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

// Function: sub_004B3438
// Address: 0x4b3438 - 0x4b3468
void sub_004B3438_0x4b3438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3438_0x4b3438");
#endif

    ctx->pc = 0x4b3438u;

    // 0x4b3438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b3438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b343c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b343cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4b3440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b3440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b3444: 0x8c820140  lw          $v0, 0x140($a0)
    ctx->pc = 0x4b3444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x4b3448: 0xac620d4c  sw          $v0, 0xD4C($v1)
    ctx->pc = 0x4b3448u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0D4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0D4Cu, _value); } while (0);
    // 0x4b344c: 0x844501b4  lh          $a1, 0x1B4($v0)
    ctx->pc = 0x4b344cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 436)));
    // 0x4b3450: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B3450u;
    {
        const bool branch_taken_0x4b3450 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x4B3454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3450u;
        // 0x4b3454: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3450) {
            ctx->pc = 0x4B3460u;
            goto label_4b3460;
        }
    }
    ctx->pc = 0x4B3458u;
    // 0x4b3458: 0x812d9fe  j           func_4B67F8
    ctx->pc = 0x4B3458u;
    ctx->pc = 0x4B345Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3458u;
    // 0x4b345c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B67F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B67F8u, 0x4B3458u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B3460u;
label_4b3460:
    // 0x4b3460: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3460u;
        // 0x4b3464: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3468u;
}
