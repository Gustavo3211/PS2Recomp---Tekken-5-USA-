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

// Function: sub_002EB8D0
// Address: 0x2eb8d0 - 0x2eb900
void sub_002EB8D0_0x2eb8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB8D0_0x2eb8d0");
#endif

    switch (ctx->pc) {
        case 0x2eb8e4u: goto label_2eb8e4;
        case 0x2eb8f0u: goto label_2eb8f0;
        default: break;
    }

    ctx->pc = 0x2eb8d0u;

    // 0x2eb8d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eb8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2eb8d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eb8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eb8d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2eb8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2eb8dc: 0xc0bade4  jal         func_2EB790
    ctx->pc = 0x2EB8DCu;
    SET_GPR_U32(ctx, 31, 0x2EB8E4u);
    ctx->pc = 0x2EB8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB8DCu;
    // 0x2eb8e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB790u, 0x2EB8DCu, 0x2EB8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB8E4u;
label_2eb8e4:
    // 0x2eb8e4: 0x8e050110  lw          $a1, 0x110($s0)
    ctx->pc = 0x2eb8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2eb8e8: 0xc0bb22c  jal         func_2EC8B0
    ctx->pc = 0x2EB8E8u;
    SET_GPR_U32(ctx, 31, 0x2EB8F0u);
    ctx->pc = 0x2EB8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB8E8u;
    // 0x2eb8ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC8B0u, 0x2EB8E8u, 0x2EB8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB8F0u;
label_2eb8f0:
    // 0x2eb8f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eb8f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eb8f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2eb8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eb8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8F8u;
        // 0x2eb8fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB900u;
}
