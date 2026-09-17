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

// Function: sub_002470F0
// Address: 0x2470f0 - 0x247128
void sub_002470F0_0x2470f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002470F0_0x2470f0");
#endif

    switch (ctx->pc) {
        case 0x247108u: goto label_247108;
        default: break;
    }

    ctx->pc = 0x2470f0u;

    // 0x2470f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2470f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2470f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2470f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2470f8: 0x18800007  blez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2470F8u;
    {
        const bool branch_taken_0x2470f8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2470FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470F8u;
        // 0x2470fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2470f8) {
            ctx->pc = 0x247118u;
            goto label_247118;
        }
    }
    ctx->pc = 0x247100u;
    // 0x247100: 0xc091c1a  jal         func_247068
    ctx->pc = 0x247100u;
    SET_GPR_U32(ctx, 31, 0x247108u);
    ctx->pc = 0x247068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247068u, 0x247100u, 0x247108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247108u;
label_247108:
    // 0x247108: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x247108u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24710c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x24710Cu;
    {
        const bool branch_taken_0x24710c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x247110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24710Cu;
        // 0x247110: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24710c) {
            ctx->pc = 0x247118u;
            goto label_247118;
        }
    }
    ctx->pc = 0x247114u;
    // 0x247114: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x247114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_247118:
    // 0x247118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24711c: 0x3e00008  jr          $ra
    ctx->pc = 0x24711Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24711Cu;
        // 0x247120: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24711Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247124u;
    // 0x247124: 0x0  nop
    ctx->pc = 0x247124u;
    // NOP
    ctx->pc = 0x247128u;
}
