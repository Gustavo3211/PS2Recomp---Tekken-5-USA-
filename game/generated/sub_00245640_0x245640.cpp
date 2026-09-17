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

// Function: sub_00245640
// Address: 0x245640 - 0x245668
void sub_00245640_0x245640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245640_0x245640");
#endif

    switch (ctx->pc) {
        case 0x245654u: goto label_245654;
        case 0x24565cu: goto label_24565c;
        default: break;
    }

    ctx->pc = 0x245640u;

    // 0x245640: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x245640u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x245644: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x245644u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x245648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x245648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24564c: 0xc09158c  jal         func_245630
    ctx->pc = 0x24564Cu;
    SET_GPR_U32(ctx, 31, 0x245654u);
    ctx->pc = 0x245650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24564Cu;
    // 0x245650: 0x248468d0  addiu       $a0, $a0, 0x68D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245630u, 0x24564Cu, 0x245654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245654u;
label_245654:
    // 0x245654: 0xc08820a  jal         func_220828
    ctx->pc = 0x245654u;
    SET_GPR_U32(ctx, 31, 0x24565Cu);
    ctx->pc = 0x220828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220828u, 0x245654u, 0x24565Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24565Cu;
label_24565c:
    // 0x24565c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24565cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245660: 0x3e00008  jr          $ra
    ctx->pc = 0x245660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245660u;
        // 0x245664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245668u;
}
