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

// Function: sub_002498F8
// Address: 0x2498f8 - 0x249920
void sub_002498F8_0x2498f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002498F8_0x2498f8");
#endif

    ctx->pc = 0x2498f8u;

    // 0x2498f8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2498f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2498fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2498fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x249900: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x249900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x249904: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x249904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x249908: 0x24217180  addiu       $at, $at, 0x7180
    ctx->pc = 0x249908u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 29056));
    // 0x24990c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x24990cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x249910: 0xac46003c  sw          $a2, 0x3C($v0)
    ctx->pc = 0x249910u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 6));
    // 0x249914: 0x3e00008  jr          $ra
    ctx->pc = 0x249914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249914u;
        // 0x249918: 0xac450004  sw          $a1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24991Cu;
    // 0x24991c: 0x0  nop
    ctx->pc = 0x24991cu;
    // NOP
    ctx->pc = 0x249920u;
}
