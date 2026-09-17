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

// Function: sub_00248628
// Address: 0x248628 - 0x248658
void sub_00248628_0x248628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248628_0x248628");
#endif

    switch (ctx->pc) {
        case 0x248638u: goto label_248638;
        case 0x248640u: goto label_248640;
        case 0x248648u: goto label_248648;
        default: break;
    }

    ctx->pc = 0x248628u;

    // 0x248628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24862c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24862cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x248630: 0xc0d639a  jal         func_358E68
    ctx->pc = 0x248630u;
    SET_GPR_U32(ctx, 31, 0x248638u);
    ctx->pc = 0x358E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358E68u, 0x248630u, 0x248638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248638u;
label_248638:
    // 0x248638: 0xc0d686e  jal         func_35A1B8
    ctx->pc = 0x248638u;
    SET_GPR_U32(ctx, 31, 0x248640u);
    ctx->pc = 0x24863Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248638u;
    // 0x24863c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1B8u, 0x248638u, 0x248640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248640u;
label_248640:
    // 0x248640: 0xc092750  jal         func_249D40
    ctx->pc = 0x248640u;
    SET_GPR_U32(ctx, 31, 0x248648u);
    ctx->pc = 0x249D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249D40u, 0x248640u, 0x248648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248648u;
label_248648:
    // 0x248648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24864c: 0x3e00008  jr          $ra
    ctx->pc = 0x24864Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24864Cu;
        // 0x248650: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24864Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248654u;
    // 0x248654: 0x0  nop
    ctx->pc = 0x248654u;
    // NOP
    ctx->pc = 0x248658u;
}
