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

// Function: sub_0048EC40
// Address: 0x48ec40 - 0x48ec58
void sub_0048EC40_0x48ec40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048EC40_0x48ec40");
#endif

    switch (ctx->pc) {
        case 0x48ec48u: goto label_48ec48;
        default: break;
    }

    ctx->pc = 0x48ec40u;

    // 0x48ec40: 0x24c2f650  addiu       $v0, $a2, -0x9B0
    ctx->pc = 0x48ec40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964816));
    // 0x48ec44: 0x24030081  addiu       $v1, $zero, 0x81
    ctx->pc = 0x48ec44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_48ec48:
    // 0x48ec48: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x48ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x48ec4c: 0x3e00008  jr          $ra
    ctx->pc = 0x48EC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48EC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EC4Cu;
        // 0x48ec50: 0xa4430002  sh          $v1, 0x2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48EC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48EC54u;
    // 0x48ec54: 0x0  nop
    ctx->pc = 0x48ec54u;
    // NOP
    ctx->pc = 0x48ec58u;
}
