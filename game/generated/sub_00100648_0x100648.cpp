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

// Function: sub_00100648
// Address: 0x100648 - 0x100678
void sub_00100648_0x100648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100648_0x100648");
#endif

    switch (ctx->pc) {
        case 0x100658u: goto label_100658;
        case 0x100660u: goto label_100660;
        case 0x100668u: goto label_100668;
        default: break;
    }

    ctx->pc = 0x100648u;

    // 0x100648: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10064c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10064cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100650: 0xc040104  jal         func_100410
    ctx->pc = 0x100650u;
    SET_GPR_U32(ctx, 31, 0x100658u);
    ctx->pc = 0x100654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100650u;
    // 0x100654: 0x24040049  addiu       $a0, $zero, 0x49 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100410u, 0x100650u, 0x100658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100658u;
label_100658:
    // 0x100658: 0xc04011c  jal         func_100470
    ctx->pc = 0x100658u;
    SET_GPR_U32(ctx, 31, 0x100660u);
    ctx->pc = 0x100470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100470u, 0x100658u, 0x100660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100660u;
label_100660:
    // 0x100660: 0xc040144  jal         func_100510
    ctx->pc = 0x100660u;
    SET_GPR_U32(ctx, 31, 0x100668u);
    ctx->pc = 0x100510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100510u, 0x100660u, 0x100668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100668u;
label_100668:
    // 0x100668: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10066c: 0x3e00008  jr          $ra
    ctx->pc = 0x10066Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10066Cu;
        // 0x100670: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10066Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100674u;
    // 0x100674: 0x0  nop
    ctx->pc = 0x100674u;
    // NOP
    ctx->pc = 0x100678u;
}
