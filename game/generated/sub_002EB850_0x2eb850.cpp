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

// Function: sub_002EB850
// Address: 0x2eb850 - 0x2eb880
void sub_002EB850_0x2eb850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB850_0x2eb850");
#endif

    switch (ctx->pc) {
        case 0x2eb868u: goto label_2eb868;
        case 0x2eb870u: goto label_2eb870;
        default: break;
    }

    ctx->pc = 0x2eb850u;

    // 0x2eb850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eb850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2eb854: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eb854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eb858: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2eb858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb85c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2eb85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2eb860: 0xc0a5a0c  jal         func_296830
    ctx->pc = 0x2EB860u;
    SET_GPR_U32(ctx, 31, 0x2EB868u);
    ctx->pc = 0x2EB864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB860u;
    // 0x2eb864: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296830u, 0x2EB860u, 0x2EB868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB868u;
label_2eb868:
    // 0x2eb868: 0xc0bba2a  jal         func_2EE8A8
    ctx->pc = 0x2EB868u;
    SET_GPR_U32(ctx, 31, 0x2EB870u);
    ctx->pc = 0x2EB86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB868u;
    // 0x2eb86c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE8A8u, 0x2EB868u, 0x2EB870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB870u;
label_2eb870:
    // 0x2eb870: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eb870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eb874: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2eb874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eb878: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB878u;
        // 0x2eb87c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB880u;
}
