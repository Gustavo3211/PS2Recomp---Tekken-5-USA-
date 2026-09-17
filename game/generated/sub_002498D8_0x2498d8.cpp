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

// Function: sub_002498D8
// Address: 0x2498d8 - 0x2498f8
void sub_002498D8_0x2498d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002498D8_0x2498d8");
#endif

    ctx->pc = 0x2498d8u;

    // 0x2498d8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2498d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2498dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2498dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2498e0: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x2498e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x2498e4: 0x242172b0  addiu       $at, $at, 0x72B0
    ctx->pc = 0x2498e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 29360));
    // 0x2498e8: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x2498e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x2498ec: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2498ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2498f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2498F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2498F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2498F0u;
        // 0x2498f4: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2498F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2498F8u;
}
