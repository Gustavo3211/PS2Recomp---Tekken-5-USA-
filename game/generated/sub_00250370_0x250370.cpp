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

// Function: sub_00250370
// Address: 0x250370 - 0x2503b0
void sub_00250370_0x250370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250370_0x250370");
#endif

    switch (ctx->pc) {
        case 0x250380u: goto label_250380;
        case 0x250388u: goto label_250388;
        case 0x250390u: goto label_250390;
        case 0x250398u: goto label_250398;
        case 0x2503a0u: goto label_2503a0;
        default: break;
    }

    ctx->pc = 0x250370u;

    // 0x250370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x250370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x250374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x250374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x250378: 0xc0940ec  jal         func_2503B0
    ctx->pc = 0x250378u;
    SET_GPR_U32(ctx, 31, 0x250380u);
    ctx->pc = 0x25037Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250378u;
    // 0x25037c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2503B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2503B0u, 0x250378u, 0x250380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250380u;
label_250380:
    // 0x250380: 0xc0940ec  jal         func_2503B0
    ctx->pc = 0x250380u;
    SET_GPR_U32(ctx, 31, 0x250388u);
    ctx->pc = 0x250384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250380u;
    // 0x250384: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2503B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2503B0u, 0x250380u, 0x250388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250388u;
label_250388:
    // 0x250388: 0xc0940ec  jal         func_2503B0
    ctx->pc = 0x250388u;
    SET_GPR_U32(ctx, 31, 0x250390u);
    ctx->pc = 0x25038Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250388u;
    // 0x25038c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2503B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2503B0u, 0x250388u, 0x250390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250390u;
label_250390:
    // 0x250390: 0xc040596  jal         func_101658
    ctx->pc = 0x250390u;
    SET_GPR_U32(ctx, 31, 0x250398u);
    ctx->pc = 0x101658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101658u, 0x250390u, 0x250398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250398u;
label_250398:
    // 0x250398: 0xc04059a  jal         func_101668
    ctx->pc = 0x250398u;
    SET_GPR_U32(ctx, 31, 0x2503A0u);
    ctx->pc = 0x25039Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250398u;
    // 0x25039c: 0xaf82a9d4  sw          $v0, -0x562C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101668u, 0x250398u, 0x2503A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2503A0u;
label_2503a0:
    // 0x2503a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2503a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2503a4: 0xaf82a9d8  sw          $v0, -0x5628($gp)
    ctx->pc = 0x2503a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945240), GPR_U32(ctx, 2));
    // 0x2503a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2503A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2503ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2503A8u;
        // 0x2503ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2503A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2503B0u;
}
