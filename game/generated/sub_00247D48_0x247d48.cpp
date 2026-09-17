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

// Function: sub_00247D48
// Address: 0x247d48 - 0x247d60
void sub_00247D48_0x247d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247D48_0x247d48");
#endif

    ctx->pc = 0x247d48u;

    // 0x247d48: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x247d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x247d4c: 0x24426fe0  addiu       $v0, $v0, 0x6FE0
    ctx->pc = 0x247d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28640));
    // 0x247d50: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x247d50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x166FF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x166FF8u, _value); } while (0);
    // 0x247d54: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x247d54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x166FF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x166FF4u, _value); } while (0);
    // 0x247d58: 0x3e00008  jr          $ra
    ctx->pc = 0x247D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247D58u;
        // 0x247d5c: 0xac800084  sw          $zero, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247D60u;
}
