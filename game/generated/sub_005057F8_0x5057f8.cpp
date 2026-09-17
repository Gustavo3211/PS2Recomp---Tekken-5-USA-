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

// Function: sub_005057F8
// Address: 0x5057f8 - 0x505838
void sub_005057F8_0x5057f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005057F8_0x5057f8");
#endif

    switch (ctx->pc) {
        case 0x505818u: goto label_505818;
        case 0x505828u: goto label_505828;
        default: break;
    }

    ctx->pc = 0x5057f8u;

    // 0x5057f8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x5057f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x5057fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5057fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x505800: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x505800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x505804: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x505804u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x505808: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x505808u;
    {
        const bool branch_taken_0x505808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x50580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505808u;
        // 0x50580c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505808) {
            ctx->pc = 0x505820u;
            goto label_505820;
        }
    }
    ctx->pc = 0x505810u;
    // 0x505810: 0xc1415dc  jal         func_505770
    ctx->pc = 0x505810u;
    SET_GPR_U32(ctx, 31, 0x505818u);
    ctx->pc = 0x505770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x505770u, 0x505810u, 0x505818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x505818u;
label_505818:
    // 0x505818: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x505818u;
    {
        const bool branch_taken_0x505818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505818u;
        // 0x50581c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505818) {
            ctx->pc = 0x50582Cu;
            goto label_50582c;
        }
    }
    ctx->pc = 0x505820u;
label_505820:
    // 0x505820: 0xc1415d4  jal         func_505750
    ctx->pc = 0x505820u;
    SET_GPR_U32(ctx, 31, 0x505828u);
    ctx->pc = 0x505750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x505750u, 0x505820u, 0x505828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x505828u;
label_505828:
    // 0x505828: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x505828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50582c:
    // 0x50582c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50582cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x505830: 0x3e00008  jr          $ra
    ctx->pc = 0x505830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x505834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505830u;
        // 0x505834: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x505830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x505838u;
}
