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

// Function: sub_00260CB8
// Address: 0x260cb8 - 0x260cd8
void sub_00260CB8_0x260cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260CB8_0x260cb8");
#endif

    ctx->pc = 0x260cb8u;

    // 0x260cb8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x260cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x260cbc: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x260CBCu;
    {
        const bool branch_taken_0x260cbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x260CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260CBCu;
        // 0x260cc0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260cbc) {
            ctx->pc = 0x260CD0u;
            goto label_260cd0;
        }
    }
    ctx->pc = 0x260CC4u;
    // 0x260cc4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x260cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x260cc8: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x260cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x260ccc: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x260cccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_260cd0:
    // 0x260cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x260CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260CD8u;
}
