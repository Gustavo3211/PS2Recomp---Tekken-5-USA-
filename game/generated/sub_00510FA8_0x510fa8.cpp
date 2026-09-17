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

// Function: sub_00510FA8
// Address: 0x510fa8 - 0x510fd8
void sub_00510FA8_0x510fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00510FA8_0x510fa8");
#endif

    ctx->pc = 0x510fa8u;

    // 0x510fa8: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x510fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x510fac: 0x24a5c6d0  addiu       $a1, $a1, -0x3930
    ctx->pc = 0x510facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952656));
    // 0x510fb0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x510fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EC6D0u));
    // 0x510fb4: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x510fb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x510fb8: 0xa483002a  sh          $v1, 0x2A($a0)
    ctx->pc = 0x510fb8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x510fbc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x510fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EC6D0u));
    // 0x510fc0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x510fc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x510fc4: 0xa483002c  sh          $v1, 0x2C($a0)
    ctx->pc = 0x510fc4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x510fc8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x510fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EC6D0u));
    // 0x510fcc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x510fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x510fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x510FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x510FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510FD0u;
        // 0x510fd4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x510FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x510FD8u;
}
