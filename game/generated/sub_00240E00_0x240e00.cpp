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

// Function: sub_00240E00
// Address: 0x240e00 - 0x240e18
void sub_00240E00_0x240e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240E00_0x240e00");
#endif

    ctx->pc = 0x240e00u;

    // 0x240e00: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x240e00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x240e04: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x240e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x240e08: 0x244236c0  addiu       $v0, $v0, 0x36C0
    ctx->pc = 0x240e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14016));
    // 0x240e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x240E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E0Cu;
        // 0x240e10: 0x7c4300c0  sq          $v1, 0xC0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 192), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240E14u;
    // 0x240e14: 0x0  nop
    ctx->pc = 0x240e14u;
    // NOP
    ctx->pc = 0x240e18u;
}
