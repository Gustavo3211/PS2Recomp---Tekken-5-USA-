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

// Function: sub_00510FD8
// Address: 0x510fd8 - 0x510ff8
void sub_00510FD8_0x510fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00510FD8_0x510fd8");
#endif

    ctx->pc = 0x510fd8u;

    // 0x510fd8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x510fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x510fdc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x510fdcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x510fe0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x510fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x510fe4: 0xa4a0000e  sh          $zero, 0xE($a1)
    ctx->pc = 0x510fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x510fe8: 0xa4a3004c  sh          $v1, 0x4C($a1)
    ctx->pc = 0x510fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 76), (uint16_t)GPR_U32(ctx, 3));
    // 0x510fec: 0x3e00008  jr          $ra
    ctx->pc = 0x510FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x510FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510FECu;
        // 0x510ff0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x510FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x510FF4u;
    // 0x510ff4: 0x0  nop
    ctx->pc = 0x510ff4u;
    // NOP
    ctx->pc = 0x510ff8u;
}
