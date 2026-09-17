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

// Function: sub_00248740
// Address: 0x248740 - 0x248778
void sub_00248740_0x248740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248740_0x248740");
#endif

    switch (ctx->pc) {
        case 0x248750u: goto label_248750;
        case 0x248758u: goto label_248758;
        case 0x248760u: goto label_248760;
        case 0x248768u: goto label_248768;
        default: break;
    }

    ctx->pc = 0x248740u;

    // 0x248740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x248744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x248744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x248748: 0xc092486  jal         func_249218
    ctx->pc = 0x248748u;
    SET_GPR_U32(ctx, 31, 0x248750u);
    ctx->pc = 0x24874Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248748u;
    // 0x24874c: 0x240403e8  addiu       $a0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249218u, 0x248748u, 0x248750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248750u;
label_248750:
    // 0x248750: 0xc092490  jal         func_249240
    ctx->pc = 0x248750u;
    SET_GPR_U32(ctx, 31, 0x248758u);
    ctx->pc = 0x248754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248750u;
    // 0x248754: 0x240403e8  addiu       $a0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249240u, 0x248750u, 0x248758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248758u;
label_248758:
    // 0x248758: 0xc091b96  jal         func_246E58
    ctx->pc = 0x248758u;
    SET_GPR_U32(ctx, 31, 0x248760u);
    ctx->pc = 0x24875Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248758u;
    // 0x24875c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246E58u, 0x248758u, 0x248760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248760u;
label_248760:
    // 0x248760: 0xc092108  jal         func_248420
    ctx->pc = 0x248760u;
    SET_GPR_U32(ctx, 31, 0x248768u);
    ctx->pc = 0x248420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248420u, 0x248760u, 0x248768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248768u;
label_248768:
    // 0x248768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24876c: 0x3e00008  jr          $ra
    ctx->pc = 0x24876Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24876Cu;
        // 0x248770: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24876Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248774u;
    // 0x248774: 0x0  nop
    ctx->pc = 0x248774u;
    // NOP
    ctx->pc = 0x248778u;
}
