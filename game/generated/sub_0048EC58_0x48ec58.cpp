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

// Function: sub_0048EC58
// Address: 0x48ec58 - 0x48ec70
void sub_0048EC58_0x48ec58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048EC58_0x48ec58");
#endif

    switch (ctx->pc) {
        case 0x48ec64u: goto label_48ec64;
        default: break;
    }

    ctx->pc = 0x48ec58u;

    // 0x48ec58: 0x24c2f650  addiu       $v0, $a2, -0x9B0
    ctx->pc = 0x48ec58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964816));
    // 0x48ec5c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x48ec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x48ec60: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x48ec60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
label_48ec64:
    // 0x48ec64: 0x3e00008  jr          $ra
    ctx->pc = 0x48EC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48EC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48EC6Cu;
    // 0x48ec6c: 0x0  nop
    ctx->pc = 0x48ec6cu;
    // NOP
    ctx->pc = 0x48ec70u;
}
