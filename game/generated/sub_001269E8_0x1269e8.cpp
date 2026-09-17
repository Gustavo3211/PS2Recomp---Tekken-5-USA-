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

// Function: sub_001269E8
// Address: 0x1269e8 - 0x126a08
void sub_001269E8_0x1269e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001269E8_0x1269e8");
#endif

    switch (ctx->pc) {
        case 0x1269fcu: goto label_1269fc;
        default: break;
    }

    ctx->pc = 0x1269e8u;

    // 0x1269e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1269e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1269ec: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1269ECu;
    {
        const bool branch_taken_0x1269ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1269F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1269ECu;
        // 0x1269f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1269ec) {
            ctx->pc = 0x1269FCu;
            goto label_1269fc;
        }
    }
    ctx->pc = 0x1269F4u;
    // 0x1269f4: 0xc049e8e  jal         func_127A38
    ctx->pc = 0x1269F4u;
    SET_GPR_U32(ctx, 31, 0x1269FCu);
    ctx->pc = 0x127A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127A38u, 0x1269F4u, 0x1269FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1269FCu;
label_1269fc:
    // 0x1269fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1269fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126a00: 0x3e00008  jr          $ra
    ctx->pc = 0x126A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A00u;
        // 0x126a04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126A08u;
}
