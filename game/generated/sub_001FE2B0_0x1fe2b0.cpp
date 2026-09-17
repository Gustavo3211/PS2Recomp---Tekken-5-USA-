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

// Function: sub_001FE2B0
// Address: 0x1fe2b0 - 0x1fe2e8
void sub_001FE2B0_0x1fe2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE2B0_0x1fe2b0");
#endif

    ctx->pc = 0x1fe2b0u;

    // 0x1fe2b0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1fe2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1fe2b4: 0x51823  negu        $v1, $a1
    ctx->pc = 0x1fe2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x1fe2b8: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x1fe2b8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1fe2bc: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1fe2bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fe2c0: 0xa4302a  slt         $a2, $a1, $a0
    ctx->pc = 0x1fe2c0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fe2c4: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE2C4u;
    {
        const bool branch_taken_0x1fe2c4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1FE2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2C4u;
        // 0x1fe2c8: 0x82180a  movz        $v1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe2c4) {
            ctx->pc = 0x1FE2D8u;
            goto label_1fe2d8;
        }
    }
    ctx->pc = 0x1FE2CCu;
    // 0x1fe2cc: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x1fe2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1fe2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2D0u;
        // 0x1fe2d4: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE2D8u;
label_1fe2d8:
    // 0x1fe2d8: 0x86280a  movz        $a1, $a0, $a2
    ctx->pc = 0x1fe2d8u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x1fe2dc: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x1fe2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1fe2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2E0u;
        // 0x1fe2e4: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE2E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE2E8u;
}
