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

// Function: sub_0022A650
// Address: 0x22a650 - 0x22a680
void sub_0022A650_0x22a650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A650_0x22a650");
#endif

    switch (ctx->pc) {
        case 0x22a670u: goto label_22a670;
        default: break;
    }

    ctx->pc = 0x22a650u;

    // 0x22a650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22a650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22a654: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22a654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a65c: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x22a65cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x22a660: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22A660u;
    {
        const bool branch_taken_0x22a660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x22A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A660u;
        // 0x22a664: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a660) {
            ctx->pc = 0x22A670u;
            goto label_22a670;
        }
    }
    ctx->pc = 0x22A668u;
    // 0x22a668: 0xc09531a  jal         func_254C68
    ctx->pc = 0x22A668u;
    SET_GPR_U32(ctx, 31, 0x22A670u);
    ctx->pc = 0x254C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254C68u, 0x22A668u, 0x22A670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A670u;
label_22a670:
    // 0x22a670: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a674: 0x3e00008  jr          $ra
    ctx->pc = 0x22A674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A674u;
        // 0x22a678: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A67Cu;
    // 0x22a67c: 0x0  nop
    ctx->pc = 0x22a67cu;
    // NOP
    ctx->pc = 0x22a680u;
}
