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

// Function: sub_0027A788
// Address: 0x27a788 - 0x27a7c8
void sub_0027A788_0x27a788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A788_0x27a788");
#endif

    ctx->pc = 0x27a788u;

    // 0x27a788: 0x8c830310  lw          $v1, 0x310($a0)
    ctx->pc = 0x27a788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 784)));
    // 0x27a78c: 0x94620044  lhu         $v0, 0x44($v1)
    ctx->pc = 0x27a78cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x27a790: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27A790u;
    {
        const bool branch_taken_0x27a790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A790u;
        // 0x27a794: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a790) {
            ctx->pc = 0x27A7BCu;
            goto label_27a7bc;
        }
    }
    ctx->pc = 0x27A798u;
    // 0x27a798: 0x848202fe  lh          $v0, 0x2FE($a0)
    ctx->pc = 0x27a798u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x27a79c: 0x94640046  lhu         $a0, 0x46($v1)
    ctx->pc = 0x27a79cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
    // 0x27a7a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27a7a4: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x27a7a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x27a7a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A7A8u;
    {
        const bool branch_taken_0x27a7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a7a8) {
            ctx->pc = 0x27A7BCu;
            goto label_27a7bc;
        }
    }
    ctx->pc = 0x27A7B0u;
    // 0x27a7b0: 0x94620024  lhu         $v0, 0x24($v1)
    ctx->pc = 0x27a7b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x27a7b4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x27a7b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x27a7b8: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x27a7b8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_27a7bc:
    // 0x27a7bc: 0x3e00008  jr          $ra
    ctx->pc = 0x27A7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A7BCu;
        // 0x27a7c0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A7BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A7C4u;
    // 0x27a7c4: 0x0  nop
    ctx->pc = 0x27a7c4u;
    // NOP
    ctx->pc = 0x27a7c8u;
}
