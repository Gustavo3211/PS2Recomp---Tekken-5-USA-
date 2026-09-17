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

// Function: sub_003432A0
// Address: 0x3432a0 - 0x3432c8
void sub_003432A0_0x3432a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003432A0_0x3432a0");
#endif

    ctx->pc = 0x3432a0u;

    // 0x3432a0: 0x30a50040  andi        $a1, $a1, 0x40
    ctx->pc = 0x3432a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
    // 0x3432a4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3432a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3432a8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3432A8u;
    {
        const bool branch_taken_0x3432a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3432ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3432A8u;
        // 0x3432ac: 0x5180a  movz        $v1, $zero, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3432a8) {
            ctx->pc = 0x3432C0u;
            goto label_3432c0;
        }
    }
    ctx->pc = 0x3432B0u;
    // 0x3432b0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x3432b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3432b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3432B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3432B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3432B4u;
        // 0x3432b8: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3432B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3432BCu;
    // 0x3432bc: 0x0  nop
    ctx->pc = 0x3432bcu;
    // NOP
label_3432c0:
    // 0x3432c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3432C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3432C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3432C0u;
        // 0x3432c4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3432C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3432C8u;
}
