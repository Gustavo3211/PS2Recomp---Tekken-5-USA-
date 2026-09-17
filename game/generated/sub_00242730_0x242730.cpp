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

// Function: sub_00242730
// Address: 0x242730 - 0x242760
void sub_00242730_0x242730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242730_0x242730");
#endif

    switch (ctx->pc) {
        case 0x242740u: goto label_242740;
        default: break;
    }

    ctx->pc = 0x242730u;

    // 0x242730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x242730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x242734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x242734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x242738: 0xc0905a8  jal         func_2416A0
    ctx->pc = 0x242738u;
    SET_GPR_U32(ctx, 31, 0x242740u);
    ctx->pc = 0x2416A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2416A0u, 0x242738u, 0x242740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242740u;
label_242740:
    // 0x242740: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x242740u;
    {
        const bool branch_taken_0x242740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242740u;
        // 0x242744: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242740) {
            ctx->pc = 0x24274Cu;
            goto label_24274c;
        }
    }
    ctx->pc = 0x242748u;
    // 0x242748: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x242748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_24274c:
    // 0x24274c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24274cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242750: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x242750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242754: 0x3e00008  jr          $ra
    ctx->pc = 0x242754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242754u;
        // 0x242758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24275Cu;
    // 0x24275c: 0x0  nop
    ctx->pc = 0x24275cu;
    // NOP
    ctx->pc = 0x242760u;
}
