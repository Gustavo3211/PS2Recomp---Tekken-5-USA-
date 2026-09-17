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

// Function: sub_003472E8
// Address: 0x3472e8 - 0x347310
void sub_003472E8_0x3472e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003472E8_0x3472e8");
#endif

    ctx->pc = 0x3472e8u;

    // 0x3472e8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x3472e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x3472ec: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x3472ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x3472f0: 0x2442db90  addiu       $v0, $v0, -0x2470
    ctx->pc = 0x3472f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957968));
    // 0x3472f4: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x3472f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
    // 0x3472f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3472f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3472fc: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x3472fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x347300: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x347300u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x347304: 0x3e00008  jr          $ra
    ctx->pc = 0x347304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347304u;
        // 0x347308: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34730Cu;
    // 0x34730c: 0x0  nop
    ctx->pc = 0x34730cu;
    // NOP
    ctx->pc = 0x347310u;
}
