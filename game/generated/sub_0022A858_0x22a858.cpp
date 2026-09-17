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

// Function: sub_0022A858
// Address: 0x22a858 - 0x22a880
void sub_0022A858_0x22a858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A858_0x22a858");
#endif

    switch (ctx->pc) {
        case 0x22a874u: goto label_22a874;
        default: break;
    }

    ctx->pc = 0x22a858u;

    // 0x22a858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22a858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22a85c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x22a85cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a864: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x22a864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22a868: 0x8c870038  lw          $a3, 0x38($a0)
    ctx->pc = 0x22a868u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x22a86c: 0xc0923a2  jal         func_248E88
    ctx->pc = 0x22A86Cu;
    SET_GPR_U32(ctx, 31, 0x22A874u);
    ctx->pc = 0x22A870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A86Cu;
    // 0x22a870: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248E88u, 0x22A86Cu, 0x22A874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A874u;
label_22a874:
    // 0x22a874: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a878: 0x3e00008  jr          $ra
    ctx->pc = 0x22A878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A878u;
        // 0x22a87c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A880u;
}
