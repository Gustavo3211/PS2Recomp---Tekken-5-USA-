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

// Function: sub_00240DE0
// Address: 0x240de0 - 0x240e00
void sub_00240DE0_0x240de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240DE0_0x240de0");
#endif

    ctx->pc = 0x240de0u;

    // 0x240de0: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x240de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x240de4: 0x4282b  sltu        $a1, $zero, $a0
    ctx->pc = 0x240de4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x240de8: 0x246336c0  addiu       $v1, $v1, 0x36C0
    ctx->pc = 0x240de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14016));
    // 0x240dec: 0xac6500d0  sw          $a1, 0xD0($v1)
    ctx->pc = 0x240decu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 208), GPR_U32(ctx, 5));
    // 0x240df0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x240df0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x240df4: 0x3e00008  jr          $ra
    ctx->pc = 0x240DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DF4u;
        // 0x240df8: 0x7c6200b0  sq          $v0, 0xB0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240DFCu;
    // 0x240dfc: 0x0  nop
    ctx->pc = 0x240dfcu;
    // NOP
    ctx->pc = 0x240e00u;
}
