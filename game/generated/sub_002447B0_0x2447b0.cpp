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

// Function: sub_002447B0
// Address: 0x2447b0 - 0x2447e8
void sub_002447B0_0x2447b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002447B0_0x2447b0");
#endif

    ctx->pc = 0x2447b0u;

    // 0x2447b0: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x2447b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x2447b4: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x2447b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x2447b8: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2447b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2447bc: 0x24426690  addiu       $v0, $v0, 0x6690
    ctx->pc = 0x2447bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26256));
    // 0x2447c0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2447c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2447c4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2447c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2447c8: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x2447c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2447cc: 0x8c440108  lw          $a0, 0x108($v0)
    ctx->pc = 0x2447ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x2447d0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2447d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2447d4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2447d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2447d8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2447d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2447dc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2447dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2447e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2447E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2447E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447E0u;
        // 0x2447e4: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2447E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2447E8u;
}
