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

// Function: sub_002884E0
// Address: 0x2884e0 - 0x288510
void sub_002884E0_0x2884e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002884E0_0x2884e0");
#endif

    ctx->pc = 0x2884e0u;

    // 0x2884e0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2884e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2884e4: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2884e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2884e8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2884E8u;
    {
        const bool branch_taken_0x2884e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2884ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884E8u;
        // 0x2884ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884e8) {
            ctx->pc = 0x288508u;
            goto label_288508;
        }
    }
    ctx->pc = 0x2884F0u;
    // 0x2884f0: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x2884f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2884f4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2884F4u;
    {
        const bool branch_taken_0x2884f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2884F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884F4u;
        // 0x2884f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884f4) {
            ctx->pc = 0x288508u;
            goto label_288508;
        }
    }
    ctx->pc = 0x2884FCu;
    // 0x2884fc: 0x3883001d  xori        $v1, $a0, 0x1D
    ctx->pc = 0x2884fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)29);
    // 0x288500: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x288500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x288504: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x288504u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_288508:
    // 0x288508: 0x3e00008  jr          $ra
    ctx->pc = 0x288508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288510u;
}
