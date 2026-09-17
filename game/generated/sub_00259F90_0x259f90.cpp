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

// Function: sub_00259F90
// Address: 0x259f90 - 0x259fb8
void sub_00259F90_0x259f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259F90_0x259f90");
#endif

    ctx->pc = 0x259f90u;

    // 0x259f90: 0x84820012  lh          $v0, 0x12($a0)
    ctx->pc = 0x259f90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x259f94: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x259f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x259f98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x259f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x259f9c: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x259f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x259fa0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x259fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259fa4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x259fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x259fa8: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x259fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x259fac: 0x2421d960  addiu       $at, $at, -0x26A0
    ctx->pc = 0x259facu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294957408));
    // 0x259fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x259FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259FB0u;
        // 0x259fb4: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259FB8u;
}
