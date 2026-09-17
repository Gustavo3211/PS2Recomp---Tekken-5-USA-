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

// Function: sub_0023DB30
// Address: 0x23db30 - 0x23db48
void sub_0023DB30_0x23db30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DB30_0x23db30");
#endif

    switch (ctx->pc) {
        case 0x23db34u: goto label_23db34;
        default: break;
    }

    ctx->pc = 0x23db30u;

    // 0x23db30: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x23db30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23db34:
    // 0x23db34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23db34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23db38: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23db38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23db3c: 0x3e00008  jr          $ra
    ctx->pc = 0x23DB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB3Cu;
        // 0x23db40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23DB44u;
    // 0x23db44: 0x0  nop
    ctx->pc = 0x23db44u;
    // NOP
    ctx->pc = 0x23db48u;
}
