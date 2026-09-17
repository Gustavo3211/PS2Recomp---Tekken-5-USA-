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

// Function: sub_0022B638
// Address: 0x22b638 - 0x22b660
void sub_0022B638_0x22b638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B638_0x22b638");
#endif

    switch (ctx->pc) {
        case 0x22b650u: goto label_22b650;
        default: break;
    }

    ctx->pc = 0x22b638u;

    // 0x22b638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22b638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22b63c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22b63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22b640: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x22b640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x22b644: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x22b644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b648: 0xc09046e  jal         func_2411B8
    ctx->pc = 0x22B648u;
    SET_GPR_U32(ctx, 31, 0x22B650u);
    ctx->pc = 0x22B64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B648u;
    // 0x22b64c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2411B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2411B8u, 0x22B648u, 0x22B650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B650u;
label_22b650:
    // 0x22b650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b654: 0x3e00008  jr          $ra
    ctx->pc = 0x22B654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B654u;
        // 0x22b658: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B65Cu;
    // 0x22b65c: 0x0  nop
    ctx->pc = 0x22b65cu;
    // NOP
    ctx->pc = 0x22b660u;
}
