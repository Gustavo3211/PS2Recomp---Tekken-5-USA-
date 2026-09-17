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

// Function: sub_002C9E08
// Address: 0x2c9e08 - 0x2c9e20
void sub_002C9E08_0x2c9e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9E08_0x2c9e08");
#endif

    ctx->pc = 0x2c9e08u;

    // 0x2c9e08: 0x8f82bb18  lw          $v0, -0x44E8($gp)
    ctx->pc = 0x2c9e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949656)));
    // 0x2c9e0c: 0x38430000  xori        $v1, $v0, 0x0
    ctx->pc = 0x2c9e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x2c9e10: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x2c9e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2c9e14: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9E14u;
        // 0x2c9e18: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9E1Cu;
    // 0x2c9e1c: 0x0  nop
    ctx->pc = 0x2c9e1cu;
    // NOP
    ctx->pc = 0x2c9e20u;
}
