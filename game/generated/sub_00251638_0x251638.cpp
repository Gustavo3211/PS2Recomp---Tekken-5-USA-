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

// Function: sub_00251638
// Address: 0x251638 - 0x251650
void sub_00251638_0x251638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251638_0x251638");
#endif

    ctx->pc = 0x251638u;

    // 0x251638: 0xa4a00060  sh          $zero, 0x60($a1)
    ctx->pc = 0x251638u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 96), (uint16_t)GPR_U32(ctx, 0));
    // 0x25163c: 0x9482011c  lhu         $v0, 0x11C($a0)
    ctx->pc = 0x25163cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 284)));
    // 0x251640: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x251640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x251644: 0x3e00008  jr          $ra
    ctx->pc = 0x251644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251644u;
        // 0x251648: 0xa482011c  sh          $v0, 0x11C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 284), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25164Cu;
    // 0x25164c: 0x0  nop
    ctx->pc = 0x25164cu;
    // NOP
    ctx->pc = 0x251650u;
}
