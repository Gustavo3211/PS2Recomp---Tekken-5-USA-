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

// Function: sub_002EED38
// Address: 0x2eed38 - 0x2eed58
void sub_002EED38_0x2eed38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EED38_0x2eed38");
#endif

    switch (ctx->pc) {
        case 0x2eed48u: goto label_2eed48;
        default: break;
    }

    ctx->pc = 0x2eed38u;

    // 0x2eed38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eed38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2eed3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eed3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2eed40: 0xc0bbb0c  jal         func_2EEC30
    ctx->pc = 0x2EED40u;
    SET_GPR_U32(ctx, 31, 0x2EED48u);
    ctx->pc = 0x2EEC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEC30u, 0x2EED40u, 0x2EED48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EED48u;
label_2eed48:
    // 0x2eed48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eed48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eed4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EED4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED4Cu;
        // 0x2eed50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EED4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EED54u;
    // 0x2eed54: 0x0  nop
    ctx->pc = 0x2eed54u;
    // NOP
    ctx->pc = 0x2eed58u;
}
