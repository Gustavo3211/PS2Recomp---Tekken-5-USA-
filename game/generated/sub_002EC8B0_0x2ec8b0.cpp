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

// Function: sub_002EC8B0
// Address: 0x2ec8b0 - 0x2ec8f8
void sub_002EC8B0_0x2ec8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC8B0_0x2ec8b0");
#endif

    switch (ctx->pc) {
        case 0x2ec8ecu: goto label_2ec8ec;
        default: break;
    }

    ctx->pc = 0x2ec8b0u;

    // 0x2ec8b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ec8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ec8b4: 0x24860140  addiu       $a2, $a0, 0x140
    ctx->pc = 0x2ec8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    // 0x2ec8b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ec8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ec8bc: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2ec8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ec8c0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC8C0u;
    {
        const bool branch_taken_0x2ec8c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec8c0) {
            ctx->pc = 0x2EC8C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC8C0u;
            // 0x2ec8c4: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC8DCu;
            goto label_2ec8dc;
        }
    }
    ctx->pc = 0x2EC8C8u;
    // 0x2ec8c8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ec8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ec8cc: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2ec8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2ec8d0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC8D0u;
    {
        const bool branch_taken_0x2ec8d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ec8d0) {
            ctx->pc = 0x2EC8E4u;
            goto label_2ec8e4;
        }
    }
    ctx->pc = 0x2EC8D8u;
    // 0x2ec8d8: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2ec8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_2ec8dc:
    // 0x2ec8dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ec8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec8e0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2ec8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_2ec8e4:
    // 0x2ec8e4: 0xc0bb4ac  jal         func_2ED2B0
    ctx->pc = 0x2EC8E4u;
    SET_GPR_U32(ctx, 31, 0x2EC8ECu);
    ctx->pc = 0x2ED2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED2B0u, 0x2EC8E4u, 0x2EC8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC8ECu;
label_2ec8ec:
    // 0x2ec8ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ec8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC8F0u;
        // 0x2ec8f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC8F8u;
}
