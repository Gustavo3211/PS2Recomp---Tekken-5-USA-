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

// Function: sub_0028A4D0
// Address: 0x28a4d0 - 0x28a4f8
void sub_0028A4D0_0x28a4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A4D0_0x28a4d0");
#endif

    ctx->pc = 0x28a4d0u;

    // 0x28a4d0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x28a4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28a4d4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x28a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28a4d8: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28A4D8u;
    {
        const bool branch_taken_0x28a4d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x28A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A4D8u;
        // 0x28a4dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a4d8) {
            ctx->pc = 0x28A4ECu;
            goto label_28a4ec;
        }
    }
    ctx->pc = 0x28A4E0u;
    // 0x28a4e0: 0x38830007  xori        $v1, $a0, 0x7
    ctx->pc = 0x28a4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
    // 0x28a4e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28a4e8: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x28a4e8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_28a4ec:
    // 0x28a4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x28A4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A4F4u;
    // 0x28a4f4: 0x0  nop
    ctx->pc = 0x28a4f4u;
    // NOP
    ctx->pc = 0x28a4f8u;
}
