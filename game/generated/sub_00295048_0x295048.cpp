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

// Function: sub_00295048
// Address: 0x295048 - 0x295088
void sub_00295048_0x295048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295048_0x295048");
#endif

    switch (ctx->pc) {
        case 0x295078u: goto label_295078;
        default: break;
    }

    ctx->pc = 0x295048u;

    // 0x295048: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x295048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29504c: 0x2ca50005  sltiu       $a1, $a1, 0x5
    ctx->pc = 0x29504cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x295050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x295050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x295054: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x295054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x295058: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x295058u;
    {
        const bool branch_taken_0x295058 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x29505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295058u;
        // 0x29505c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295058) {
            ctx->pc = 0x295078u;
            goto label_295078;
        }
    }
    ctx->pc = 0x295060u;
    // 0x295060: 0x8c420148  lw          $v0, 0x148($v0)
    ctx->pc = 0x295060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x295064: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x295064u;
    {
        const bool branch_taken_0x295064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x295064) {
            ctx->pc = 0x295068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295064u;
            // 0x295068: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29507Cu;
            goto label_29507c;
        }
    }
    ctx->pc = 0x29506Cu;
    // 0x29506c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x29506cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x295070: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x295070u;
    SET_GPR_U32(ctx, 31, 0x295078u);
    ctx->pc = 0x295074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295070u;
    // 0x295074: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x295070u, 0x295078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295078u;
label_295078:
    // 0x295078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x295078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29507c:
    // 0x29507c: 0x3e00008  jr          $ra
    ctx->pc = 0x29507Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29507Cu;
        // 0x295080: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29507Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295084u;
    // 0x295084: 0x0  nop
    ctx->pc = 0x295084u;
    // NOP
    ctx->pc = 0x295088u;
}
