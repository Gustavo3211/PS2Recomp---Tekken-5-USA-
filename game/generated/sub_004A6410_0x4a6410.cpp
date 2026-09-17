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

// Function: sub_004A6410
// Address: 0x4a6410 - 0x4a6430
void sub_004A6410_0x4a6410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6410_0x4a6410");
#endif

    ctx->pc = 0x4a6410u;

    // 0x4a6410: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4a6410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4a6414: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4a6414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a6418: 0x8c430c40  lw          $v1, 0xC40($v0)
    ctx->pc = 0x4a6418u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0C40u));
    // 0x4a641c: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4a641cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4a6420: 0xa4650118  sh          $a1, 0x118($v1)
    ctx->pc = 0x4a6420u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 280), (uint16_t)GPR_U32(ctx, 5));
    // 0x4a6424: 0x3e00008  jr          $ra
    ctx->pc = 0x4A6424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6424u;
        // 0x4a6428: 0xa485d734  sh          $a1, -0x28CC($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4294956852), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A642Cu;
    // 0x4a642c: 0x0  nop
    ctx->pc = 0x4a642cu;
    // NOP
    ctx->pc = 0x4a6430u;
}
