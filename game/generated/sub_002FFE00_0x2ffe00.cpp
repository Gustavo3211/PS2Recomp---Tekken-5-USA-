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

// Function: sub_002FFE00
// Address: 0x2ffe00 - 0x2ffe38
void sub_002FFE00_0x2ffe00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FFE00_0x2ffe00");
#endif

    switch (ctx->pc) {
        case 0x2ffe1cu: goto label_2ffe1c;
        case 0x2ffe28u: goto label_2ffe28;
        default: break;
    }

    ctx->pc = 0x2ffe00u;

    // 0x2ffe00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ffe00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ffe04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ffe04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ffe08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ffe08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffe0c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ffe0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ffe10: 0x26050038  addiu       $a1, $s0, 0x38
    ctx->pc = 0x2ffe10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x2ffe14: 0xc0c1552  jal         func_305548
    ctx->pc = 0x2FFE14u;
    SET_GPR_U32(ctx, 31, 0x2FFE1Cu);
    ctx->pc = 0x2FFE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFE14u;
    // 0x2ffe18: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305548u, 0x2FFE14u, 0x2FFE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFE1Cu;
label_2ffe1c:
    // 0x2ffe1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ffe1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffe20: 0xc0bf994  jal         func_2FE650
    ctx->pc = 0x2FFE20u;
    SET_GPR_U32(ctx, 31, 0x2FFE28u);
    ctx->pc = 0x2FFE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFE20u;
    // 0x2ffe24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE650u, 0x2FFE20u, 0x2FFE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFE28u;
label_2ffe28:
    // 0x2ffe28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ffe28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ffe2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ffe2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ffe30: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE30u;
        // 0x2ffe34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFE38u;
}
