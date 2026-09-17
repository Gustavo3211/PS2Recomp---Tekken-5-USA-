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

// Function: sub_00512EA8
// Address: 0x512ea8 - 0x512ec8
void sub_00512EA8_0x512ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00512EA8_0x512ea8");
#endif

    ctx->pc = 0x512ea8u;

    // 0x512ea8: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x512ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x512eac: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x512eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x512eb0: 0x2442f650  addiu       $v0, $v0, -0x9B0
    ctx->pc = 0x512eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964816));
    // 0x512eb4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x512eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x512eb8: 0xa443040e  sh          $v1, 0x40E($v0)
    ctx->pc = 0x512eb8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7DFA5Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7DFA5Eu, _value); } while (0);
    // 0x512ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x512EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512EBCu;
        // 0x512ec0: 0xa444040c  sh          $a0, 0x40C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 1036), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x512EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x512EC4u;
    // 0x512ec4: 0x0  nop
    ctx->pc = 0x512ec4u;
    // NOP
    ctx->pc = 0x512ec8u;
}
