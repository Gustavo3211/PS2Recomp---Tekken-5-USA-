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

// Function: sub_0048EDC0
// Address: 0x48edc0 - 0x48ede0
void sub_0048EDC0_0x48edc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048EDC0_0x48edc0");
#endif

    ctx->pc = 0x48edc0u;

    // 0x48edc0: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x48edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x48edc4: 0x24040049  addiu       $a0, $zero, 0x49
    ctx->pc = 0x48edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x48edc8: 0x2442f650  addiu       $v0, $v0, -0x9B0
    ctx->pc = 0x48edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964816));
    // 0x48edcc: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x48edccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x48edd0: 0xa4430402  sh          $v1, 0x402($v0)
    ctx->pc = 0x48edd0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7DFA52u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7DFA52u, _value); } while (0);
    // 0x48edd4: 0x3e00008  jr          $ra
    ctx->pc = 0x48EDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48EDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EDD4u;
        // 0x48edd8: 0xa4440400  sh          $a0, 0x400($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 1024), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48EDD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48EDDCu;
    // 0x48eddc: 0x0  nop
    ctx->pc = 0x48eddcu;
    // NOP
    ctx->pc = 0x48ede0u;
}
