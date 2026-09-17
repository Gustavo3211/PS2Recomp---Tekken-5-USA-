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

// Function: sub_002392A8
// Address: 0x2392a8 - 0x2392c0
void sub_002392A8_0x2392a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002392A8_0x2392a8");
#endif

    ctx->pc = 0x2392a8u;

    // 0x2392a8: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x2392a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x2392ac: 0x2442d3d0  addiu       $v0, $v0, -0x2C30
    ctx->pc = 0x2392acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955984));
    // 0x2392b0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2392b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15D3D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15D3D4u, _value); } while (0);
    // 0x2392b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2392B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2392B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392B4u;
        // 0x2392b8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2392B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2392BCu;
    // 0x2392bc: 0x0  nop
    ctx->pc = 0x2392bcu;
    // NOP
    ctx->pc = 0x2392c0u;
}
