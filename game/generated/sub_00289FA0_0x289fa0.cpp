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

// Function: sub_00289FA0
// Address: 0x289fa0 - 0x289fc8
void sub_00289FA0_0x289fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289FA0_0x289fa0");
#endif

    ctx->pc = 0x289fa0u;

    // 0x289fa0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x289fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x289fa4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x289fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x289fa8: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x289FA8u;
    {
        const bool branch_taken_0x289fa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x289FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289FA8u;
        // 0x289fac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289fa8) {
            ctx->pc = 0x289FBCu;
            goto label_289fbc;
        }
    }
    ctx->pc = 0x289FB0u;
    // 0x289fb0: 0x3883000f  xori        $v1, $a0, 0xF
    ctx->pc = 0x289fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)15);
    // 0x289fb4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x289fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x289fb8: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x289fb8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_289fbc:
    // 0x289fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x289FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289FC4u;
    // 0x289fc4: 0x0  nop
    ctx->pc = 0x289fc4u;
    // NOP
    ctx->pc = 0x289fc8u;
}
