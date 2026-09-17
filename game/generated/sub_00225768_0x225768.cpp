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

// Function: sub_00225768
// Address: 0x225768 - 0x2257a0
void sub_00225768_0x225768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225768_0x225768");
#endif

    ctx->pc = 0x225768u;

    // 0x225768: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x225768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22576c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22576cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x225770: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x225770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x225774: 0x3c010015  lui         $at, 0x15
    ctx->pc = 0x225774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21 << 16));
    // 0x225778: 0x242161b0  addiu       $at, $at, 0x61B0
    ctx->pc = 0x225778u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 25008));
    // 0x22577c: 0x3e00008  jr          $ra
    ctx->pc = 0x22577Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22577Cu;
        // 0x225780: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22577Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225784u;
    // 0x225784: 0x0  nop
    ctx->pc = 0x225784u;
    // NOP
    // 0x225788: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x225788u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22578c: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x22578cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x225790: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x225790u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x225794: 0xac2590a8  sw          $a1, -0x6F58($at)
    ctx->pc = 0x225794u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938792), GPR_U32(ctx, 5));
    // 0x225798: 0x3e00008  jr          $ra
    ctx->pc = 0x225798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2257A0u;
}
