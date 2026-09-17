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

// Function: sub_00322190
// Address: 0x322190 - 0x3221a8
void sub_00322190_0x322190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322190_0x322190");
#endif

    ctx->pc = 0x322190u;

    // 0x322190: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x322190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x322194: 0x2463d6c0  addiu       $v1, $v1, -0x2940
    ctx->pc = 0x322194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956736));
    // 0x322198: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x322198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x32219c: 0x3e00008  jr          $ra
    ctx->pc = 0x32219Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3221A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32219Cu;
        // 0x3221a0: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32219Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3221A4u;
    // 0x3221a4: 0x0  nop
    ctx->pc = 0x3221a4u;
    // NOP
    ctx->pc = 0x3221a8u;
}
