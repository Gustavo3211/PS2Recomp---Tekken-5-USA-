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

// Function: sub_002DD820
// Address: 0x2dd820 - 0x2dd840
void sub_002DD820_0x2dd820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD820_0x2dd820");
#endif

    ctx->pc = 0x2dd820u;

    // 0x2dd820: 0x24020280  addiu       $v0, $zero, 0x280
    ctx->pc = 0x2dd820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x2dd824: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x2dd824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x2dd828: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2dd828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2dd82c: 0xac850064  sw          $a1, 0x64($a0)
    ctx->pc = 0x2dd82cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 5));
    // 0x2dd830: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x2dd830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
    // 0x2dd834: 0xac830058  sw          $v1, 0x58($a0)
    ctx->pc = 0x2dd834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 3));
    // 0x2dd838: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD838u;
        // 0x2dd83c: 0xac86005c  sw          $a2, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD840u;
}
