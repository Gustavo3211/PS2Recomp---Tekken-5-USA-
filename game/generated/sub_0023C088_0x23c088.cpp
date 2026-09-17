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

// Function: sub_0023C088
// Address: 0x23c088 - 0x23c098
void sub_0023C088_0x23c088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C088_0x23c088");
#endif

    ctx->pc = 0x23c088u;

    // 0x23c088: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x23c088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x23c08c: 0x3e00008  jr          $ra
    ctx->pc = 0x23C08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C08Cu;
        // 0x23c090: 0xac44e110  sw          $a0, -0x1EF0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294959376), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C094u;
    // 0x23c094: 0x0  nop
    ctx->pc = 0x23c094u;
    // NOP
    ctx->pc = 0x23c098u;
}
