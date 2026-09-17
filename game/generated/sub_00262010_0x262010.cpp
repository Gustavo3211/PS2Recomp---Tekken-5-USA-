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

// Function: sub_00262010
// Address: 0x262010 - 0x262030
void sub_00262010_0x262010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262010_0x262010");
#endif

    switch (ctx->pc) {
        case 0x262024u: goto label_262024;
        default: break;
    }

    ctx->pc = 0x262010u;

    // 0x262010: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x262010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x262014: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x262014u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x262018: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x262018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26201c: 0xc08b380  jal         func_22CE00
    ctx->pc = 0x26201Cu;
    SET_GPR_U32(ctx, 31, 0x262024u);
    ctx->pc = 0x262020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26201Cu;
    // 0x262020: 0x2484ebe8  addiu       $a0, $a0, -0x1418 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CE00u, 0x26201Cu, 0x262024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262024u;
label_262024:
    // 0x262024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x262024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262028: 0x3e00008  jr          $ra
    ctx->pc = 0x262028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262028u;
        // 0x26202c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262030u;
}
