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

// Function: sub_0036B650
// Address: 0x36b650 - 0x36b6a8
void sub_0036B650_0x36b650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B650_0x36b650");
#endif

    ctx->pc = 0x36b650u;

    // 0x36b650: 0x3e00008  jr          $ra
    ctx->pc = 0x36B650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B658u;
    // 0x36b658: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36b658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36b65c: 0xac850050  sw          $a1, 0x50($a0)
    ctx->pc = 0x36b65cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 5));
    // 0x36b660: 0x2442e270  addiu       $v0, $v0, -0x1D90
    ctx->pc = 0x36b660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959728));
    // 0x36b664: 0xac860054  sw          $a2, 0x54($a0)
    ctx->pc = 0x36b664u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 6));
    // 0x36b668: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x36b668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x36b66c: 0x2526000c  addiu       $a2, $t1, 0xC
    ctx->pc = 0x36b66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
    // 0x36b670: 0xac870058  sw          $a3, 0x58($a0)
    ctx->pc = 0x36b670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 7));
    // 0x36b674: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36b674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36b678: 0xac88005c  sw          $t0, 0x5C($a0)
    ctx->pc = 0x36b678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 8));
    // 0x36b67c: 0x24a5ba88  addiu       $a1, $a1, -0x4578
    ctx->pc = 0x36b67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949512));
    // 0x36b680: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x36b680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x36b684: 0xac820060  sw          $v0, 0x60($a0)
    ctx->pc = 0x36b684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
    // 0x36b688: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x36b688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x36b68c: 0xac860068  sw          $a2, 0x68($a0)
    ctx->pc = 0x36b68cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 6));
    // 0x36b690: 0xac830064  sw          $v1, 0x64($a0)
    ctx->pc = 0x36b690u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 3));
    // 0x36b694: 0xac8a006c  sw          $t2, 0x6C($a0)
    ctx->pc = 0x36b694u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 10));
    // 0x36b698: 0x8d230038  lw          $v1, 0x38($t1)
    ctx->pc = 0x36b698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 56)));
    // 0x36b69c: 0xac850038  sw          $a1, 0x38($a0)
    ctx->pc = 0x36b69cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
    // 0x36b6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x36B6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B6A0u;
        // 0x36b6a4: 0xac830070  sw          $v1, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B6A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B6A8u;
}
