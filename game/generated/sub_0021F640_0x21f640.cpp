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

// Function: sub_0021F640
// Address: 0x21f640 - 0x21f660
void sub_0021F640_0x21f640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F640_0x21f640");
#endif

    switch (ctx->pc) {
        case 0x21f650u: goto label_21f650;
        default: break;
    }

    ctx->pc = 0x21f640u;

    // 0x21f640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21f644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21f648: 0xc0c4ec6  jal         func_313B18
    ctx->pc = 0x21F648u;
    SET_GPR_U32(ctx, 31, 0x21F650u);
    ctx->pc = 0x313B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313B18u, 0x21F648u, 0x21F650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F650u;
label_21f650:
    // 0x21f650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21f650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f654: 0x3e00008  jr          $ra
    ctx->pc = 0x21F654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F654u;
        // 0x21f658: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F65Cu;
    // 0x21f65c: 0x0  nop
    ctx->pc = 0x21f65cu;
    // NOP
    ctx->pc = 0x21f660u;
}
