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

// Function: sub_00113EC8
// Address: 0x113ec8 - 0x113ef8
void sub_00113EC8_0x113ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113EC8_0x113ec8");
#endif

    switch (ctx->pc) {
        case 0x113ed8u: goto label_113ed8;
        case 0x113ee4u: goto label_113ee4;
        default: break;
    }

    ctx->pc = 0x113ec8u;

    // 0x113ec8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x113ecc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113ed0: 0xc044f9c  jal         func_113E70
    ctx->pc = 0x113ED0u;
    SET_GPR_U32(ctx, 31, 0x113ED8u);
    ctx->pc = 0x113E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113E70u, 0x113ED0u, 0x113ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113ED8u;
label_113ed8:
    // 0x113ed8: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x113ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x113edc: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x113EDCu;
    SET_GPR_U32(ctx, 31, 0x113EE4u);
    ctx->pc = 0x113EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113EDCu;
    // 0x113ee0: 0x8c44119c  lw          $a0, 0x119C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4508)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x113EDCu, 0x113EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113EE4u;
label_113ee4:
    // 0x113ee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113ee8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x113ee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113eec: 0x3e00008  jr          $ra
    ctx->pc = 0x113EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113EECu;
        // 0x113ef0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113EF4u;
    // 0x113ef4: 0x0  nop
    ctx->pc = 0x113ef4u;
    // NOP
    ctx->pc = 0x113ef8u;
}
