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

// Function: sub_002F6398
// Address: 0x2f6398 - 0x2f63b0
void sub_002F6398_0x2f6398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6398_0x2f6398");
#endif

    switch (ctx->pc) {
        case 0x2f63a8u: goto label_2f63a8;
        default: break;
    }

    ctx->pc = 0x2f6398u;

    // 0x2f6398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f6398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f639c: 0x80bd894  j           func_2F6250
    ctx->pc = 0x2F639Cu;
    ctx->pc = 0x2F63A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F639Cu;
    // 0x2f63a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6250u;
    sub_002F6250_0x2f6250(rdram, ctx, runtime); return;
    ctx->pc = 0x2F63A4u;
    // 0x2f63a4: 0x0  nop
    ctx->pc = 0x2f63a4u;
    // NOP
label_2f63a8:
    // 0x2f63a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F63A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F63ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F63A8u;
        // 0x2f63ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F63A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F63B0u;
}
