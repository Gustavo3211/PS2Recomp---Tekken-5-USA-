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

// Function: sub_00510F70
// Address: 0x510f70 - 0x510f90
void sub_00510F70_0x510f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00510F70_0x510f70");
#endif

    ctx->pc = 0x510f70u;

    // 0x510f70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x510f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x510f74: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x510f74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x510f78: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x510f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x510f7c: 0xa4a0004a  sh          $zero, 0x4A($a1)
    ctx->pc = 0x510f7cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 74), (uint16_t)GPR_U32(ctx, 0));
    // 0x510f80: 0xa4a30048  sh          $v1, 0x48($a1)
    ctx->pc = 0x510f80u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 72), (uint16_t)GPR_U32(ctx, 3));
    // 0x510f84: 0xa4a00046  sh          $zero, 0x46($a1)
    ctx->pc = 0x510f84u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 70), (uint16_t)GPR_U32(ctx, 0));
    // 0x510f88: 0x3e00008  jr          $ra
    ctx->pc = 0x510F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x510F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510F88u;
        // 0x510f8c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x510F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x510F90u;
}
