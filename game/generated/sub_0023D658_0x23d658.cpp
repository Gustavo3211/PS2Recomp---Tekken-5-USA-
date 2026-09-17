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

// Function: sub_0023D658
// Address: 0x23d658 - 0x23d680
void sub_0023D658_0x23d658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D658_0x23d658");
#endif

    switch (ctx->pc) {
        case 0x23d668u: goto label_23d668;
        default: break;
    }

    ctx->pc = 0x23d658u;

    // 0x23d658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23d658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23d65c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23d65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23d660: 0xc08f56c  jal         func_23D5B0
    ctx->pc = 0x23D660u;
    SET_GPR_U32(ctx, 31, 0x23D668u);
    ctx->pc = 0x23D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D5B0u, 0x23D660u, 0x23D668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D668u;
label_23d668:
    // 0x23d668: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23d668u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d66c: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23D66Cu;
    {
        const bool branch_taken_0x23d66c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d66c) {
            ctx->pc = 0x23D670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D66Cu;
            // 0x23d670: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D674u;
            goto label_23d674;
        }
    }
    ctx->pc = 0x23D674u;
label_23d674:
    // 0x23d674: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23d674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d678: 0x3e00008  jr          $ra
    ctx->pc = 0x23D678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D678u;
        // 0x23d67c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D680u;
}
