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

// Function: sub_004F9270
// Address: 0x4f9270 - 0x4f9298
void sub_004F9270_0x4f9270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F9270_0x4f9270");
#endif

    ctx->pc = 0x4f9270u;

    // 0x4f9270: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4f9270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f9274: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4f9274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4f9278: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x4f9278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f927c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f927cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f9280: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4f9280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4f9284: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f9284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f9288: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f9288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f928c: 0x3e00008  jr          $ra
    ctx->pc = 0x4F928Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F9290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F928Cu;
        // 0x4f9290: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F928Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F9294u;
    // 0x4f9294: 0x0  nop
    ctx->pc = 0x4f9294u;
    // NOP
    ctx->pc = 0x4f9298u;
}
