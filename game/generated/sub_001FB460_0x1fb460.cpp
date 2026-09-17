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

// Function: sub_001FB460
// Address: 0x1fb460 - 0x1fb498
void sub_001FB460_0x1fb460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB460_0x1fb460");
#endif

    switch (ctx->pc) {
        case 0x1fb470u: goto label_1fb470;
        case 0x1fb478u: goto label_1fb478;
        case 0x1fb480u: goto label_1fb480;
        case 0x1fb488u: goto label_1fb488;
        default: break;
    }

    ctx->pc = 0x1fb460u;

    // 0x1fb460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fb460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fb464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fb464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fb468: 0xc07f106  jal         func_1FC418
    ctx->pc = 0x1FB468u;
    SET_GPR_U32(ctx, 31, 0x1FB470u);
    ctx->pc = 0x1FB46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB468u;
    // 0x1fb46c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC418u, 0x1FB468u, 0x1FB470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB470u;
label_1fb470:
    // 0x1fb470: 0xc07f0fe  jal         func_1FC3F8
    ctx->pc = 0x1FB470u;
    SET_GPR_U32(ctx, 31, 0x1FB478u);
    ctx->pc = 0x1FB474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB470u;
    // 0x1fb474: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC3F8u, 0x1FB470u, 0x1FB478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB478u;
label_1fb478:
    // 0x1fb478: 0xc07e57c  jal         func_1F95F0
    ctx->pc = 0x1FB478u;
    SET_GPR_U32(ctx, 31, 0x1FB480u);
    ctx->pc = 0x1FB47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB478u;
    // 0x1fb47c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F95F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F95F0u, 0x1FB478u, 0x1FB480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB480u;
label_1fb480:
    // 0x1fb480: 0xc08f236  jal         func_23C8D8
    ctx->pc = 0x1FB480u;
    SET_GPR_U32(ctx, 31, 0x1FB488u);
    ctx->pc = 0x23C8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C8D8u, 0x1FB480u, 0x1FB488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB488u;
label_1fb488:
    // 0x1fb488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fb488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb48c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB48Cu;
        // 0x1fb490: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB48Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB494u;
    // 0x1fb494: 0x0  nop
    ctx->pc = 0x1fb494u;
    // NOP
    ctx->pc = 0x1fb498u;
}
