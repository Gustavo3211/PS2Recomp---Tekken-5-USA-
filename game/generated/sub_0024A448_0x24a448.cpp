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

// Function: sub_0024A448
// Address: 0x24a448 - 0x24a478
void sub_0024A448_0x24a448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A448_0x24a448");
#endif

    switch (ctx->pc) {
        case 0x24a460u: goto label_24a460;
        default: break;
    }

    ctx->pc = 0x24a448u;

    // 0x24a448: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24a44c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x24a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24a450: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A450u;
    {
        const bool branch_taken_0x24a450 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A450u;
        // 0x24a454: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a450) {
            ctx->pc = 0x24A460u;
            goto label_24a460;
        }
    }
    ctx->pc = 0x24A458u;
    // 0x24a458: 0xc0d63c0  jal         func_358F00
    ctx->pc = 0x24A458u;
    SET_GPR_U32(ctx, 31, 0x24A460u);
    ctx->pc = 0x358F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358F00u, 0x24A458u, 0x24A460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A460u;
label_24a460:
    // 0x24a460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24a460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a464: 0x3e00008  jr          $ra
    ctx->pc = 0x24A464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A464u;
        // 0x24a468: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A46Cu;
    // 0x24a46c: 0x0  nop
    ctx->pc = 0x24a46cu;
    // NOP
    // 0x24a470: 0x3e00008  jr          $ra
    ctx->pc = 0x24A470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A478u;
}
