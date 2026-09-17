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

// Function: sub_0024A838
// Address: 0x24a838 - 0x24a858
void sub_0024A838_0x24a838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A838_0x24a838");
#endif

    switch (ctx->pc) {
        case 0x24a848u: goto label_24a848;
        default: break;
    }

    ctx->pc = 0x24a838u;

    // 0x24a838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24a83c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24a83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24a840: 0xc09291e  jal         func_24A478
    ctx->pc = 0x24A840u;
    SET_GPR_U32(ctx, 31, 0x24A848u);
    ctx->pc = 0x24A844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A840u;
    // 0x24a844: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A478u, 0x24A840u, 0x24A848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A848u;
label_24a848:
    // 0x24a848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24a848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a84c: 0x3e00008  jr          $ra
    ctx->pc = 0x24A84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A84Cu;
        // 0x24a850: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A854u;
    // 0x24a854: 0x0  nop
    ctx->pc = 0x24a854u;
    // NOP
    ctx->pc = 0x24a858u;
}
