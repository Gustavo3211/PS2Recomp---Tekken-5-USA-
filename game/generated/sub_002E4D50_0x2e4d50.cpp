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

// Function: sub_002E4D50
// Address: 0x2e4d50 - 0x2e4d88
void sub_002E4D50_0x2e4d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4D50_0x2e4d50");
#endif

    ctx->pc = 0x2e4d50u;

    // 0x2e4d50: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x2e4d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2e4d54: 0x3c0257ff  lui         $v0, 0x57FF
    ctx->pc = 0x2e4d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22527 << 16));
    // 0x2e4d58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e4d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e4d5c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2e4d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2e4d60: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e4d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e4d64: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x2e4d64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2e4d68: 0x24a5ee10  addiu       $a1, $a1, -0x11F0
    ctx->pc = 0x2e4d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962704));
    // 0x2e4d6c: 0x2463fda0  addiu       $v1, $v1, -0x260
    ctx->pc = 0x2e4d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966688));
    // 0x2e4d70: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x2e4d70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x2e4d74: 0xac830038  sw          $v1, 0x38($a0)
    ctx->pc = 0x2e4d74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
    // 0x2e4d78: 0xac860040  sw          $a2, 0x40($a0)
    ctx->pc = 0x2e4d78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 6));
    // 0x2e4d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4D7Cu;
        // 0x2e4d80: 0xac800050  sw          $zero, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4D84u;
    // 0x2e4d84: 0x0  nop
    ctx->pc = 0x2e4d84u;
    // NOP
    ctx->pc = 0x2e4d88u;
}
