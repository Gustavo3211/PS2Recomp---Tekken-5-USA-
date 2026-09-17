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

// Function: sub_00497400
// Address: 0x497400 - 0x497418
void sub_00497400_0x497400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00497400_0x497400");
#endif

    switch (ctx->pc) {
        case 0x497404u: goto label_497404;
        default: break;
    }

    ctx->pc = 0x497400u;

    // 0x497400: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x497400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_497404:
    // 0x497404: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x497404u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x497408: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x497408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49740c: 0x3e00008  jr          $ra
    ctx->pc = 0x49740Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x497410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49740Cu;
        // 0x497410: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49740Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x497414u;
    // 0x497414: 0x0  nop
    ctx->pc = 0x497414u;
    // NOP
    ctx->pc = 0x497418u;
}
