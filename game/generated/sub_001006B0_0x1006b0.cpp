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

// Function: sub_001006B0
// Address: 0x1006b0 - 0x1006c8
void sub_001006B0_0x1006b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001006B0_0x1006b0");
#endif

    ctx->pc = 0x1006b0u;

    // 0x1006b0: 0x3c0201bd  lui         $v0, 0x1BD
    ctx->pc = 0x1006b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)445 << 16));
    // 0x1006b4: 0x2442a1c0  addiu       $v0, $v0, -0x5E40
    ctx->pc = 0x1006b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943168));
    // 0x1006b8: 0xac40012c  sw          $zero, 0x12C($v0)
    ctx->pc = 0x1006b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1BCA2ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA2ECu, _value); } while (0);
    // 0x1006bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1006BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1006C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006BCu;
        // 0x1006c0: 0xac400128  sw          $zero, 0x128($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1006BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1006C4u;
    // 0x1006c4: 0x0  nop
    ctx->pc = 0x1006c4u;
    // NOP
    ctx->pc = 0x1006c8u;
}
