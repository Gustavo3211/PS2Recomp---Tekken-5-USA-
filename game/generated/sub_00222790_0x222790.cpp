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

// Function: sub_00222790
// Address: 0x222790 - 0x2227c0
void sub_00222790_0x222790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222790_0x222790");
#endif

    ctx->pc = 0x222790u;

    // 0x222790: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x222790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x222794: 0x3e00008  jr          $ra
    ctx->pc = 0x222794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222794u;
        // 0x222798: 0x24426020  addiu       $v0, $v0, 0x6020 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22279Cu;
    // 0x22279c: 0x0  nop
    ctx->pc = 0x22279cu;
    // NOP
    // 0x2227a0: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x2227a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x2227a4: 0x24426020  addiu       $v0, $v0, 0x6020
    ctx->pc = 0x2227a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24608));
    // 0x2227a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2227a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x156020u));
    // 0x2227ac: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2227acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2227b0: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x2227b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x2227b4: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x2227b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x2227b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2227B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2227BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2227B8u;
        // 0x2227bc: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2227B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2227C0u;
}
