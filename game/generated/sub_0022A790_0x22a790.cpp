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

// Function: sub_0022A790
// Address: 0x22a790 - 0x22a7b8
void sub_0022A790_0x22a790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A790_0x22a790");
#endif

    switch (ctx->pc) {
        case 0x22a7acu: goto label_22a7ac;
        default: break;
    }

    ctx->pc = 0x22a790u;

    // 0x22a790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22a790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22a794: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x22a794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a79c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x22a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x22a7a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x22a7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a7a4: 0xc09262e  jal         func_2498B8
    ctx->pc = 0x22A7A4u;
    SET_GPR_U32(ctx, 31, 0x22A7ACu);
    ctx->pc = 0x22A7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A7A4u;
    // 0x22a7a8: 0x244500a4  addiu       $a1, $v0, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2498B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2498B8u, 0x22A7A4u, 0x22A7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A7ACu;
label_22a7ac:
    // 0x22a7ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a7acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x22A7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A7B0u;
        // 0x22a7b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A7B8u;
}
