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

// Function: sub_0033EBC8
// Address: 0x33ebc8 - 0x33ebe0
void sub_0033EBC8_0x33ebc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033EBC8_0x33ebc8");
#endif

    ctx->pc = 0x33ebc8u;

    // 0x33ebc8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x33ebc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x33ebcc: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x33ebccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x33ebd0: 0xac204000  sw          $zero, 0x4000($at)
    ctx->pc = 0x33ebd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16384), GPR_U32(ctx, 0));
    // 0x33ebd4: 0x3e00008  jr          $ra
    ctx->pc = 0x33EBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EBD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33EBDCu;
    // 0x33ebdc: 0x0  nop
    ctx->pc = 0x33ebdcu;
    // NOP
    ctx->pc = 0x33ebe0u;
}
