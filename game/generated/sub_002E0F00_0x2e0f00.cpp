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

// Function: sub_002E0F00
// Address: 0x2e0f00 - 0x2e0f50
void sub_002E0F00_0x2e0f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0F00_0x2e0f00");
#endif

    switch (ctx->pc) {
        case 0x2e0f44u: goto label_2e0f44;
        default: break;
    }

    ctx->pc = 0x2e0f00u;

    // 0x2e0f00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e0f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e0f04: 0x24860094  addiu       $a2, $a0, 0x94
    ctx->pc = 0x2e0f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 148));
    // 0x2e0f08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e0f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e0f0c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2e0f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e0f10: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E0F10u;
    {
        const bool branch_taken_0x2e0f10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0f10) {
            ctx->pc = 0x2E0F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0F10u;
            // 0x2e0f14: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0F2Cu;
            goto label_2e0f2c;
        }
    }
    ctx->pc = 0x2E0F18u;
    // 0x2e0f18: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e0f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e0f1c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2e0f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2e0f20: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0F20u;
    {
        const bool branch_taken_0x2e0f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0f20) {
            ctx->pc = 0x2E0F34u;
            goto label_2e0f34;
        }
    }
    ctx->pc = 0x2E0F28u;
    // 0x2e0f28: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2e0f28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_2e0f2c:
    // 0x2e0f2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e0f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0f30: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2e0f30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_2e0f34:
    // 0x2e0f34: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0F34u;
    {
        const bool branch_taken_0x2e0f34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0F34u;
        // 0x2e0f38: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0f34) {
            ctx->pc = 0x2E0F48u;
            goto label_2e0f48;
        }
    }
    ctx->pc = 0x2E0F3Cu;
    // 0x2e0f3c: 0xc0b90ca  jal         func_2E4328
    ctx->pc = 0x2E0F3Cu;
    SET_GPR_U32(ctx, 31, 0x2E0F44u);
    ctx->pc = 0x2E4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4328u, 0x2E0F3Cu, 0x2E0F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0F44u;
label_2e0f44:
    // 0x2e0f44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e0f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e0f48:
    // 0x2e0f48: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0F48u;
        // 0x2e0f4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0F50u;
}
