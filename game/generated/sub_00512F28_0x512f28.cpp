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

// Function: sub_00512F28
// Address: 0x512f28 - 0x512f48
void sub_00512F28_0x512f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00512F28_0x512f28");
#endif

    ctx->pc = 0x512f28u;

    // 0x512f28: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x512f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x512f2c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x512f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x512f30: 0x2442f650  addiu       $v0, $v0, -0x9B0
    ctx->pc = 0x512f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964816));
    // 0x512f34: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x512f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x512f38: 0xa443040e  sh          $v1, 0x40E($v0)
    ctx->pc = 0x512f38u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7DFA5Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7DFA5Eu, _value); } while (0);
    // 0x512f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x512F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512F3Cu;
        // 0x512f40: 0xa444040c  sh          $a0, 0x40C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 1036), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x512F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x512F44u;
    // 0x512f44: 0x0  nop
    ctx->pc = 0x512f44u;
    // NOP
    ctx->pc = 0x512f48u;
}
