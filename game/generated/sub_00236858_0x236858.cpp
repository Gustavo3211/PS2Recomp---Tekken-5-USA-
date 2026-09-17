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

// Function: sub_00236858
// Address: 0x236858 - 0x236880
void sub_00236858_0x236858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236858_0x236858");
#endif

    ctx->pc = 0x236858u;

    // 0x236858: 0x8ca20894  lw          $v0, 0x894($a1)
    ctx->pc = 0x236858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2196)));
    // 0x23685c: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x23685cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x236860: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x236860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x236864: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x236864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x236868: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x236868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x23686c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x23686cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x236870: 0x78a20070  lq          $v0, 0x70($a1)
    ctx->pc = 0x236870u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x236874: 0x3e00008  jr          $ra
    ctx->pc = 0x236874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236874u;
        // 0x236878: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23687Cu;
    // 0x23687c: 0x0  nop
    ctx->pc = 0x23687cu;
    // NOP
    ctx->pc = 0x236880u;
}
