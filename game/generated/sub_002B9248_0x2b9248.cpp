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

// Function: sub_002B9248
// Address: 0x2b9248 - 0x2b9290
void sub_002B9248_0x2b9248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9248_0x2b9248");
#endif

    switch (ctx->pc) {
        case 0x2b9268u: goto label_2b9268;
        default: break;
    }

    ctx->pc = 0x2b9248u;

    // 0x2b9248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b9248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b924c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b924cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9250: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b9250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b9254: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b9254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9258: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B9258u;
    {
        const bool branch_taken_0x2b9258 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9258u;
        // 0x2b925c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9258) {
            ctx->pc = 0x2B9280u;
            goto label_2b9280;
        }
    }
    ctx->pc = 0x2B9260u;
    // 0x2b9260: 0xc0ae50e  jal         func_2B9438
    ctx->pc = 0x2B9260u;
    SET_GPR_U32(ctx, 31, 0x2B9268u);
    ctx->pc = 0x2B9438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9438u, 0x2B9260u, 0x2B9268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9268u;
label_2b9268:
    // 0x2b9268: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B9268u;
    {
        const bool branch_taken_0x2b9268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9268u;
        // 0x2b926c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9268) {
            ctx->pc = 0x2B9280u;
            goto label_2b9280;
        }
    }
    ctx->pc = 0x2B9270u;
    // 0x2b9270: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b9270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9274: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b9274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9278: 0x80ae510  j           func_2B9440
    ctx->pc = 0x2B9278u;
    ctx->pc = 0x2B927Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9278u;
    // 0x2b927c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9440u, 0x2B9278u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B9280u;
label_2b9280:
    // 0x2b9280: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b9280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9284: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b9284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9288: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9288u;
        // 0x2b928c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9290u;
}
