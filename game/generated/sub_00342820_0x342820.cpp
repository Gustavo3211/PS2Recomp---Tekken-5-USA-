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

// Function: sub_00342820
// Address: 0x342820 - 0x342868
void sub_00342820_0x342820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342820_0x342820");
#endif

    switch (ctx->pc) {
        case 0x342834u: goto label_342834;
        case 0x34283cu: goto label_34283c;
        case 0x342844u: goto label_342844;
        case 0x34284cu: goto label_34284c;
        case 0x342854u: goto label_342854;
        default: break;
    }

    ctx->pc = 0x342820u;

    // 0x342820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x342824: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x342824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x342828: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x342828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34282c: 0xc0d093e  jal         func_3424F8
    ctx->pc = 0x34282Cu;
    SET_GPR_U32(ctx, 31, 0x342834u);
    ctx->pc = 0x342830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34282Cu;
    // 0x342830: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3424F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3424F8u, 0x34282Cu, 0x342834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342834u;
label_342834:
    // 0x342834: 0xc0d076a  jal         func_341DA8
    ctx->pc = 0x342834u;
    SET_GPR_U32(ctx, 31, 0x34283Cu);
    ctx->pc = 0x342838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342834u;
    // 0x342838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341DA8u, 0x342834u, 0x34283Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34283Cu;
label_34283c:
    // 0x34283c: 0xc0d094c  jal         func_342530
    ctx->pc = 0x34283Cu;
    SET_GPR_U32(ctx, 31, 0x342844u);
    ctx->pc = 0x342840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34283Cu;
    // 0x342840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342530u, 0x34283Cu, 0x342844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342844u;
label_342844:
    // 0x342844: 0xc0d0958  jal         func_342560
    ctx->pc = 0x342844u;
    SET_GPR_U32(ctx, 31, 0x34284Cu);
    ctx->pc = 0x342848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342844u;
    // 0x342848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342560u, 0x342844u, 0x34284Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34284Cu;
label_34284c:
    // 0x34284c: 0xc0d09ca  jal         func_342728
    ctx->pc = 0x34284Cu;
    SET_GPR_U32(ctx, 31, 0x342854u);
    ctx->pc = 0x342850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34284Cu;
    // 0x342850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342728u, 0x34284Cu, 0x342854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342854u;
label_342854:
    // 0x342854: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x342854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342858: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x342858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34285c: 0x3e00008  jr          $ra
    ctx->pc = 0x34285Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34285Cu;
        // 0x342860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34285Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342864u;
    // 0x342864: 0x0  nop
    ctx->pc = 0x342864u;
    // NOP
    ctx->pc = 0x342868u;
}
