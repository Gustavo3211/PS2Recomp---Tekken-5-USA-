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

// Function: sub_002492E0
// Address: 0x2492e0 - 0x249300
void sub_002492E0_0x2492e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002492E0_0x2492e0");
#endif

    ctx->pc = 0x2492e0u;

    // 0x2492e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2492e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2492e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2492e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2492e8: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x2492e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2492ec: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2492ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2492f0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2492f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2492f4: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2492f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2492f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2492F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2492FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2492F8u;
        // 0x2492fc: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2492F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249300u;
}
