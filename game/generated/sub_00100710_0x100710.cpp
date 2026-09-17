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

// Function: sub_00100710
// Address: 0x100710 - 0x100720
void sub_00100710_0x100710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100710_0x100710");
#endif

    ctx->pc = 0x100710u;

    // 0x100710: 0x3c0201bd  lui         $v0, 0x1BD
    ctx->pc = 0x100710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)445 << 16));
    // 0x100714: 0x2442a1c0  addiu       $v0, $v0, -0x5E40
    ctx->pc = 0x100714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943168));
    // 0x100718: 0xac4000bc  sw          $zero, 0xBC($v0)
    ctx->pc = 0x100718u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1BCA27Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA27Cu, _value); } while (0);
    // 0x10071c: 0x3e00008  jr          $ra
    ctx->pc = 0x10071Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10071Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100724u;
}
