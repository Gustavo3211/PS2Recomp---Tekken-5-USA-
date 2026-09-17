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

// Function: sub_002D1760
// Address: 0x2d1760 - 0x2d1780
void sub_002D1760_0x2d1760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1760_0x2d1760");
#endif

    ctx->pc = 0x2d1760u;

    // 0x2d1760: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d1760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d1764: 0x3c0418ce  lui         $a0, 0x18CE
    ctx->pc = 0x2d1764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)6350 << 16));
    // 0x2d1768: 0x34847bfc  ori         $a0, $a0, 0x7BFC
    ctx->pc = 0x2d1768u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31740);
    // 0x2d176c: 0x8c43f668  lw          $v1, -0x998($v0)
    ctx->pc = 0x2d176cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EF668u));
    // 0x2d1770: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2d1770u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d1774: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2d1774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2d1778: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1778u;
        // 0x2d177c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1780u;
}
