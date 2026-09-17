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

// Function: sub_0048F7D0
// Address: 0x48f7d0 - 0x48f7e8
void sub_0048F7D0_0x48f7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048F7D0_0x48f7d0");
#endif

    ctx->pc = 0x48f7d0u;

    // 0x48f7d0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48f7d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x48f7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48f7d8: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x48f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x48f7dc: 0xa4430068  sh          $v1, 0x68($v0)
    ctx->pc = 0x48f7dcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72D6E8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D6E8u, _value); } while (0);
    // 0x48f7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x48F7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F7E0u;
        // 0x48f7e4: 0xa440006a  sh          $zero, 0x6A($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 106), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48F7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48F7E8u;
}
