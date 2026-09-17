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

// Function: sub_00497A40
// Address: 0x497a40 - 0x497a50
void sub_00497A40_0x497a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00497A40_0x497a40");
#endif

    ctx->pc = 0x497a40u;

    // 0x497a40: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x497a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x497a44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x497a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x497a48: 0x3e00008  jr          $ra
    ctx->pc = 0x497A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x497A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497A48u;
        // 0x497a4c: 0xa462f88a  sh          $v0, -0x776($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294965386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x497A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x497A50u;
}
