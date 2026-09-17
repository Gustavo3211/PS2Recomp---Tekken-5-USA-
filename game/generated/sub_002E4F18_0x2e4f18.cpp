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

// Function: sub_002E4F18
// Address: 0x2e4f18 - 0x2e4f58
void sub_002E4F18_0x2e4f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4F18_0x2e4f18");
#endif

    switch (ctx->pc) {
        case 0x2e4f30u: goto label_2e4f30;
        case 0x2e4f3cu: goto label_2e4f3c;
        default: break;
    }

    ctx->pc = 0x2e4f18u;

    // 0x2e4f18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e4f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e4f1c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e4f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e4f20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e4f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e4f24: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x2e4f24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x2e4f28: 0x2604fe10  addiu       $a0, $s0, -0x1F0
    ctx->pc = 0x2e4f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966800));
    // 0x2e4f2c: 0x0  nop
    ctx->pc = 0x2e4f2cu;
    // NOP
label_2e4f30:
    // 0x2e4f30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e4f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4f34: 0xc0460da  jal         func_118368
    ctx->pc = 0x2E4F34u;
    SET_GPR_U32(ctx, 31, 0x2E4F3Cu);
    ctx->pc = 0x2E4F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4F34u;
    // 0x2e4f38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118368u, 0x2E4F34u, 0x2E4F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4F3Cu;
label_2e4f3c:
    // 0x2e4f3c: 0x440fffc  bltz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2E4F3Cu;
    {
        const bool branch_taken_0x2e4f3c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E4F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4F3Cu;
        // 0x2e4f40: 0x2604fe10  addiu       $a0, $s0, -0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4f3c) {
            ctx->pc = 0x2E4F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4f30;
        }
    }
    ctx->pc = 0x2E4F44u;
    // 0x2e4f44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e4f44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4f48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e4f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e4f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4F4Cu;
        // 0x2e4f50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4F54u;
    // 0x2e4f54: 0x0  nop
    ctx->pc = 0x2e4f54u;
    // NOP
    ctx->pc = 0x2e4f58u;
}
