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

// Function: sub_0032FEB8
// Address: 0x32feb8 - 0x32fed8
void sub_0032FEB8_0x32feb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FEB8_0x32feb8");
#endif

    switch (ctx->pc) {
        case 0x32feccu: goto label_32fecc;
        default: break;
    }

    ctx->pc = 0x32feb8u;

    // 0x32feb8: 0x8f84c594  lw          $a0, -0x3A6C($gp)
    ctx->pc = 0x32feb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952340)));
    // 0x32febc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32febcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32fec0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32fec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32fec4: 0xc0c6c38  jal         func_31B0E0
    ctx->pc = 0x32FEC4u;
    SET_GPR_U32(ctx, 31, 0x32FECCu);
    ctx->pc = 0x31B0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B0E0u, 0x32FEC4u, 0x32FECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FECCu;
label_32fecc:
    // 0x32fecc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32feccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32fed0: 0x3e00008  jr          $ra
    ctx->pc = 0x32FED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FED0u;
        // 0x32fed4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FED8u;
}
