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

// Function: sub_002E4F98
// Address: 0x2e4f98 - 0x2e4fd8
void sub_002E4F98_0x2e4f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4F98_0x2e4f98");
#endif

    switch (ctx->pc) {
        case 0x2e4fb0u: goto label_2e4fb0;
        case 0x2e4fbcu: goto label_2e4fbc;
        default: break;
    }

    ctx->pc = 0x2e4f98u;

    // 0x2e4f98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e4f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e4f9c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e4f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e4fa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e4fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e4fa4: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x2e4fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x2e4fa8: 0x2604fe30  addiu       $a0, $s0, -0x1D0
    ctx->pc = 0x2e4fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966832));
    // 0x2e4fac: 0x0  nop
    ctx->pc = 0x2e4facu;
    // NOP
label_2e4fb0:
    // 0x2e4fb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e4fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4fb4: 0xc0460da  jal         func_118368
    ctx->pc = 0x2E4FB4u;
    SET_GPR_U32(ctx, 31, 0x2E4FBCu);
    ctx->pc = 0x2E4FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4FB4u;
    // 0x2e4fb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118368u, 0x2E4FB4u, 0x2E4FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4FBCu;
label_2e4fbc:
    // 0x2e4fbc: 0x440fffc  bltz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2E4FBCu;
    {
        const bool branch_taken_0x2e4fbc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E4FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4FBCu;
        // 0x2e4fc0: 0x2604fe30  addiu       $a0, $s0, -0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4fbc) {
            ctx->pc = 0x2E4FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4fb0;
        }
    }
    ctx->pc = 0x2E4FC4u;
    // 0x2e4fc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e4fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4fc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e4fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e4fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4FCCu;
        // 0x2e4fd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4FD4u;
    // 0x2e4fd4: 0x0  nop
    ctx->pc = 0x2e4fd4u;
    // NOP
    ctx->pc = 0x2e4fd8u;
}
