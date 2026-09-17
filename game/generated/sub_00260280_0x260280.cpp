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

// Function: sub_00260280
// Address: 0x260280 - 0x2602a0
void sub_00260280_0x260280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260280_0x260280");
#endif

    ctx->pc = 0x260280u;

    // 0x260280: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x260280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260284: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x260284u;
    {
        const bool branch_taken_0x260284 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x260288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260284u;
        // 0x260288: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260284) {
            ctx->pc = 0x260298u;
            goto label_260298;
        }
    }
    ctx->pc = 0x26028Cu;
    // 0x26028c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26028cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x260290: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x260290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x260294: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x260294u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_260298:
    // 0x260298: 0x3e00008  jr          $ra
    ctx->pc = 0x260298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2602A0u;
}
