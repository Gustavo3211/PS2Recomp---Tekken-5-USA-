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

// Function: sub_0023D600
// Address: 0x23d600 - 0x23d628
void sub_0023D600_0x23d600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D600_0x23d600");
#endif

    switch (ctx->pc) {
        case 0x23d610u: goto label_23d610;
        default: break;
    }

    ctx->pc = 0x23d600u;

    // 0x23d600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23d600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23d604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23d604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23d608: 0xc08f56c  jal         func_23D5B0
    ctx->pc = 0x23D608u;
    SET_GPR_U32(ctx, 31, 0x23D610u);
    ctx->pc = 0x23D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D5B0u, 0x23D608u, 0x23D610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D610u;
label_23d610:
    // 0x23d610: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23d610u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d614: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23D614u;
    {
        const bool branch_taken_0x23d614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d614) {
            ctx->pc = 0x23D618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D614u;
            // 0x23d618: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D61Cu;
            goto label_23d61c;
        }
    }
    ctx->pc = 0x23D61Cu;
label_23d61c:
    // 0x23d61c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23d61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d620: 0x3e00008  jr          $ra
    ctx->pc = 0x23D620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D620u;
        // 0x23d624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D628u;
}
