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

// Function: sub_002FE618
// Address: 0x2fe618 - 0x2fe650
void sub_002FE618_0x2fe618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE618_0x2fe618");
#endif

    switch (ctx->pc) {
        case 0x2fe634u: goto label_2fe634;
        case 0x2fe640u: goto label_2fe640;
        default: break;
    }

    ctx->pc = 0x2fe618u;

    // 0x2fe618: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fe618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fe61c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fe61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fe620: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fe620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe624: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2fe624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2fe628: 0x26050038  addiu       $a1, $s0, 0x38
    ctx->pc = 0x2fe628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x2fe62c: 0xc0c1552  jal         func_305548
    ctx->pc = 0x2FE62Cu;
    SET_GPR_U32(ctx, 31, 0x2FE634u);
    ctx->pc = 0x2FE630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE62Cu;
    // 0x2fe630: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305548u, 0x2FE62Cu, 0x2FE634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE634u;
label_2fe634:
    // 0x2fe634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fe634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe638: 0xc0bf994  jal         func_2FE650
    ctx->pc = 0x2FE638u;
    SET_GPR_U32(ctx, 31, 0x2FE640u);
    ctx->pc = 0x2FE63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE638u;
    // 0x2fe63c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE650u, 0x2FE638u, 0x2FE640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE640u;
label_2fe640:
    // 0x2fe640: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fe640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe644: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2fe644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fe648: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE648u;
        // 0x2fe64c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE650u;
}
