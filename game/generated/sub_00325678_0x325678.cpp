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

// Function: sub_00325678
// Address: 0x325678 - 0x325698
void sub_00325678_0x325678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325678_0x325678");
#endif

    switch (ctx->pc) {
        case 0x325688u: goto label_325688;
        case 0x325690u: goto label_325690;
        default: break;
    }

    ctx->pc = 0x325678u;

    // 0x325678: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x325678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32567c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32567Cu;
    {
        const bool branch_taken_0x32567c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32567Cu;
        // 0x325680: 0xa0820001  sb          $v0, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32567c) {
            ctx->pc = 0x325690u;
            goto label_325690;
        }
    }
    ctx->pc = 0x325684u;
    // 0x325684: 0x0  nop
    ctx->pc = 0x325684u;
    // NOP
label_325688:
    // 0x325688: 0x3e00008  jr          $ra
    ctx->pc = 0x325688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325688u;
        // 0x32568c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325690u;
label_325690:
    // 0x325690: 0x3e00008  jr          $ra
    ctx->pc = 0x325690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325690u;
        // 0x325694: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325698u;
}
