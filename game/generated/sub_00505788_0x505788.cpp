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

// Function: sub_00505788
// Address: 0x505788 - 0x5057c0
void sub_00505788_0x505788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00505788_0x505788");
#endif

    switch (ctx->pc) {
        case 0x5057a0u: goto label_5057a0;
        case 0x5057b0u: goto label_5057b0;
        default: break;
    }

    ctx->pc = 0x505788u;

    // 0x505788: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x505788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50578c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x50578cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x505790: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x505790u;
    {
        const bool branch_taken_0x505790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x505794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505790u;
        // 0x505794: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505790) {
            ctx->pc = 0x5057A8u;
            goto label_5057a8;
        }
    }
    ctx->pc = 0x505798u;
    // 0x505798: 0xc1415dc  jal         func_505770
    ctx->pc = 0x505798u;
    SET_GPR_U32(ctx, 31, 0x5057A0u);
    ctx->pc = 0x505770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x505770u, 0x505798u, 0x5057A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5057A0u;
label_5057a0:
    // 0x5057a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x5057A0u;
    {
        const bool branch_taken_0x5057a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5057A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5057A0u;
        // 0x5057a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5057a0) {
            ctx->pc = 0x5057B4u;
            goto label_5057b4;
        }
    }
    ctx->pc = 0x5057A8u;
label_5057a8:
    // 0x5057a8: 0xc1415d4  jal         func_505750
    ctx->pc = 0x5057A8u;
    SET_GPR_U32(ctx, 31, 0x5057B0u);
    ctx->pc = 0x505750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x505750u, 0x5057A8u, 0x5057B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5057B0u;
label_5057b0:
    // 0x5057b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5057b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5057b4:
    // 0x5057b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x5057b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5057b8: 0x3e00008  jr          $ra
    ctx->pc = 0x5057B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5057BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5057B8u;
        // 0x5057bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5057B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5057C0u;
}
