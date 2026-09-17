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

// Function: sub_00512E20
// Address: 0x512e20 - 0x512e38
void sub_00512E20_0x512e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00512E20_0x512e20");
#endif

    ctx->pc = 0x512e20u;

    // 0x512e20: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x512e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x512e24: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x512e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x512e28: 0x2442f650  addiu       $v0, $v0, -0x9B0
    ctx->pc = 0x512e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964816));
    // 0x512e2c: 0xa4430204  sh          $v1, 0x204($v0)
    ctx->pc = 0x512e2cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7DF854u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7DF854u, _value); } while (0);
    // 0x512e30: 0x3e00008  jr          $ra
    ctx->pc = 0x512E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512E30u;
        // 0x512e34: 0xa4400206  sh          $zero, 0x206($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 518), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x512E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x512E38u;
}
