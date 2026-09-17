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

// Function: sub_001F3858
// Address: 0x1f3858 - 0x1f38d8
void sub_001F3858_0x1f3858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3858_0x1f3858");
#endif

    ctx->pc = 0x1f3858u;

    // 0x1f3858: 0x8ca30240  lw          $v1, 0x240($a1)
    ctx->pc = 0x1f3858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 576)));
    // 0x1f385c: 0x2482082c  addiu       $v0, $a0, 0x82C
    ctx->pc = 0x1f385cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2092));
    // 0x1f3860: 0x8ca60244  lw          $a2, 0x244($a1)
    ctx->pc = 0x1f3860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 580)));
    // 0x1f3864: 0x24870840  addiu       $a3, $a0, 0x840
    ctx->pc = 0x1f3864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x1f3868: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f3868u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1f386c: 0x24880818  addiu       $t0, $a0, 0x818
    ctx->pc = 0x1f386cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 2072));
    // 0x1f3870: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x1f3870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x1f3874: 0x24860868  addiu       $a2, $a0, 0x868
    ctx->pc = 0x1f3874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2152));
    // 0x1f3878: 0x24890854  addiu       $t1, $a0, 0x854
    ctx->pc = 0x1f3878u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 2132));
    // 0x1f387c: 0x2484087c  addiu       $a0, $a0, 0x87C
    ctx->pc = 0x1f387cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2172));
    // 0x1f3880: 0x8ca20240  lw          $v0, 0x240($a1)
    ctx->pc = 0x1f3880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 576)));
    // 0x1f3884: 0x8ca30244  lw          $v1, 0x244($a1)
    ctx->pc = 0x1f3884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 580)));
    // 0x1f3888: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1f3888u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1f388c: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x1f388cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x1f3890: 0x8ca20248  lw          $v0, 0x248($a1)
    ctx->pc = 0x1f3890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 584)));
    // 0x1f3894: 0x8ca3024c  lw          $v1, 0x24C($a1)
    ctx->pc = 0x1f3894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 588)));
    // 0x1f3898: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1f3898u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x1f389c: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x1f389cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x1f38a0: 0x8ca20250  lw          $v0, 0x250($a1)
    ctx->pc = 0x1f38a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
    // 0x1f38a4: 0x8ca30254  lw          $v1, 0x254($a1)
    ctx->pc = 0x1f38a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 596)));
    // 0x1f38a8: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x1f38a8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x1f38ac: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x1f38acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
    // 0x1f38b0: 0x8ca20258  lw          $v0, 0x258($a1)
    ctx->pc = 0x1f38b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 600)));
    // 0x1f38b4: 0x8ca3025c  lw          $v1, 0x25C($a1)
    ctx->pc = 0x1f38b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 604)));
    // 0x1f38b8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1f38b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1f38bc: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1f38bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1f38c0: 0x8ca20264  lw          $v0, 0x264($a1)
    ctx->pc = 0x1f38c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 612)));
    // 0x1f38c4: 0x8ca30260  lw          $v1, 0x260($a1)
    ctx->pc = 0x1f38c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 608)));
    // 0x1f38c8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1f38c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1f38cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F38CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F38D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F38CCu;
        // 0x1f38d0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F38CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F38D4u;
    // 0x1f38d4: 0x0  nop
    ctx->pc = 0x1f38d4u;
    // NOP
    ctx->pc = 0x1f38d8u;
}
