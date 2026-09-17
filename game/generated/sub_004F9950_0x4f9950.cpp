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

// Function: sub_004F9950
// Address: 0x4f9950 - 0x4f9970
void sub_004F9950_0x4f9950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F9950_0x4f9950");
#endif

    switch (ctx->pc) {
        case 0x4f9960u: goto label_4f9960;
        default: break;
    }

    ctx->pc = 0x4f9950u;

    // 0x4f9950: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4f9950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4f9954: 0x3e00008  jr          $ra
    ctx->pc = 0x4F9954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F9958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9954u;
        // 0x4f9958: 0x24421380  addiu       $v0, $v0, 0x1380 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F9954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F995Cu;
    // 0x4f995c: 0x0  nop
    ctx->pc = 0x4f995cu;
    // NOP
label_4f9960:
    // 0x4f9960: 0x3c020083  lui         $v0, 0x83
    ctx->pc = 0x4f9960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)131 << 16));
    // 0x4f9964: 0x3e00008  jr          $ra
    ctx->pc = 0x4F9964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F9968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9964u;
        // 0x4f9968: 0xa4441380  sh          $a0, 0x1380($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4992), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F9964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F996Cu;
    // 0x4f996c: 0x0  nop
    ctx->pc = 0x4f996cu;
    // NOP
    ctx->pc = 0x4f9970u;
}
