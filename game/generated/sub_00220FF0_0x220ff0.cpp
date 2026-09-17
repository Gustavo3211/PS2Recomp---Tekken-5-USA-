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

// Function: sub_00220FF0
// Address: 0x220ff0 - 0x221008
void sub_00220FF0_0x220ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220FF0_0x220ff0");
#endif

    ctx->pc = 0x220ff0u;

    // 0x220ff0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x220ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x220ff4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x220ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x220ff8: 0xac62ca00  sw          $v0, -0x3600($v1)
    ctx->pc = 0x220ff8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3ACA00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3ACA00u, _value); } while (0);
    // 0x220ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x220FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220FFCu;
        // 0x221000: 0xaf80a4c8  sw          $zero, -0x5B38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943944), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221004u;
    // 0x221004: 0x0  nop
    ctx->pc = 0x221004u;
    // NOP
    ctx->pc = 0x221008u;
}
