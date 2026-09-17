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

// Function: sub_0022A620
// Address: 0x22a620 - 0x22a650
void sub_0022A620_0x22a620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A620_0x22a620");
#endif

    switch (ctx->pc) {
        case 0x22a640u: goto label_22a640;
        default: break;
    }

    ctx->pc = 0x22a620u;

    // 0x22a620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22a620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22a624: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22a624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a62c: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x22a62cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x22a630: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22A630u;
    {
        const bool branch_taken_0x22a630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x22A634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A630u;
        // 0x22a634: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a630) {
            ctx->pc = 0x22A640u;
            goto label_22a640;
        }
    }
    ctx->pc = 0x22A638u;
    // 0x22a638: 0xc096134  jal         func_2584D0
    ctx->pc = 0x22A638u;
    SET_GPR_U32(ctx, 31, 0x22A640u);
    ctx->pc = 0x2584D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2584D0u, 0x22A638u, 0x22A640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A640u;
label_22a640:
    // 0x22a640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a644: 0x3e00008  jr          $ra
    ctx->pc = 0x22A644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A644u;
        // 0x22a648: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A64Cu;
    // 0x22a64c: 0x0  nop
    ctx->pc = 0x22a64cu;
    // NOP
    ctx->pc = 0x22a650u;
}
