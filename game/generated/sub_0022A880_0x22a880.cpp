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

// Function: sub_0022A880
// Address: 0x22a880 - 0x22a8b0
void sub_0022A880_0x22a880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A880_0x22a880");
#endif

    switch (ctx->pc) {
        case 0x22a8a0u: goto label_22a8a0;
        default: break;
    }

    ctx->pc = 0x22a880u;

    // 0x22a880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22a880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22a884: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x22a884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x22a888: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a88c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x22a88cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a890: 0x8c458880  lw          $a1, -0x7780($v0)
    ctx->pc = 0x22a890u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A8880u));
    // 0x22a894: 0x8c870038  lw          $a3, 0x38($a0)
    ctx->pc = 0x22a894u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x22a898: 0xc0923a2  jal         func_248E88
    ctx->pc = 0x22A898u;
    SET_GPR_U32(ctx, 31, 0x22A8A0u);
    ctx->pc = 0x22A89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A898u;
    // 0x22a89c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248E88u, 0x22A898u, 0x22A8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A8A0u;
label_22a8a0:
    // 0x22a8a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x22A8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A8A4u;
        // 0x22a8a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A8ACu;
    // 0x22a8ac: 0x0  nop
    ctx->pc = 0x22a8acu;
    // NOP
    ctx->pc = 0x22a8b0u;
}
