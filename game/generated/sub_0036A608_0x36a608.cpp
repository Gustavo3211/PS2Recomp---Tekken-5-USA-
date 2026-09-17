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

// Function: sub_0036A608
// Address: 0x36a608 - 0x36a658
void sub_0036A608_0x36a608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A608_0x36a608");
#endif

    switch (ctx->pc) {
        case 0x36a62cu: goto label_36a62c;
        case 0x36a640u: goto label_36a640;
        default: break;
    }

    ctx->pc = 0x36a608u;

    // 0x36a608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36a608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36a60c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36a60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36a610: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36a610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36a614: 0x24506cf8  addiu       $s0, $v0, 0x6CF8
    ctx->pc = 0x36a614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27896));
    // 0x36a618: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36a618u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6CF8u));
    // 0x36a61c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x36A61Cu;
    {
        const bool branch_taken_0x36a61c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A61Cu;
        // 0x36a620: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a61c) {
            ctx->pc = 0x36A640u;
            goto label_36a640;
        }
    }
    ctx->pc = 0x36A624u;
    // 0x36a624: 0xc0da950  jal         func_36A540
    ctx->pc = 0x36A624u;
    SET_GPR_U32(ctx, 31, 0x36A62Cu);
    ctx->pc = 0x36A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A540u, 0x36A624u, 0x36A62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A62Cu;
label_36a62c:
    // 0x36a62c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x36a62cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x36a630: 0x24a52728  addiu       $a1, $a1, 0x2728
    ctx->pc = 0x36a630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10024));
    // 0x36a634: 0x2786cc70  addiu       $a2, $gp, -0x3390
    ctx->pc = 0x36a634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294954096));
    // 0x36a638: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36A638u;
    SET_GPR_U32(ctx, 31, 0x36A640u);
    ctx->pc = 0x36A63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A638u;
    // 0x36a63c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36A638u, 0x36A640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A640u;
label_36a640:
    // 0x36a640: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36a640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a644: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36a644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a648: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36a648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36a64c: 0x3e00008  jr          $ra
    ctx->pc = 0x36A64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A64Cu;
        // 0x36a650: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A654u;
    // 0x36a654: 0x0  nop
    ctx->pc = 0x36a654u;
    // NOP
    ctx->pc = 0x36a658u;
}
