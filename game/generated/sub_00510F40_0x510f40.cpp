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

// Function: sub_00510F40
// Address: 0x510f40 - 0x510f70
void sub_00510F40_0x510f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00510F40_0x510f40");
#endif

    ctx->pc = 0x510f40u;

    // 0x510f40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x510f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x510f44: 0x24a7011a  addiu       $a3, $a1, 0x11A
    ctx->pc = 0x510f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 282));
    // 0x510f48: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x510f48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x510f4c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x510f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x510f50: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x510f50u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x510f54: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x510f54u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x510f58: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x510f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x510f5c: 0xa4a0011e  sh          $zero, 0x11E($a1)
    ctx->pc = 0x510f5cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 286), (uint16_t)GPR_U32(ctx, 0));
    // 0x510f60: 0xa4a6011c  sh          $a2, 0x11C($a1)
    ctx->pc = 0x510f60u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 284), (uint16_t)GPR_U32(ctx, 6));
    // 0x510f64: 0xa4a30120  sh          $v1, 0x120($a1)
    ctx->pc = 0x510f64u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 288), (uint16_t)GPR_U32(ctx, 3));
    // 0x510f68: 0x3e00008  jr          $ra
    ctx->pc = 0x510F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x510F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510F68u;
        // 0x510f6c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x510F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x510F70u;
}
