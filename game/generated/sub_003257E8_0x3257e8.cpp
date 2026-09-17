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

// Function: sub_003257E8
// Address: 0x3257e8 - 0x325808
void sub_003257E8_0x3257e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003257E8_0x3257e8");
#endif

    switch (ctx->pc) {
        case 0x3257f8u: goto label_3257f8;
        case 0x325800u: goto label_325800;
        default: break;
    }

    ctx->pc = 0x3257e8u;

    // 0x3257e8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x3257e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x3257ec: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x3257ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x3257f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3257F0u;
    {
        const bool branch_taken_0x3257f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3257F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3257F0u;
        // 0x3257f4: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3257f0) {
            ctx->pc = 0x325800u;
            goto label_325800;
        }
    }
    ctx->pc = 0x3257F8u;
label_3257f8:
    // 0x3257f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3257F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3257FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3257F8u;
        // 0x3257fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3257F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325800u;
label_325800:
    // 0x325800: 0x3e00008  jr          $ra
    ctx->pc = 0x325800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325800u;
        // 0x325804: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325808u;
}
