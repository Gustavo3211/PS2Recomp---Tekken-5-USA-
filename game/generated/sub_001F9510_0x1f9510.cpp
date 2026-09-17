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

// Function: sub_001F9510
// Address: 0x1f9510 - 0x1f9560
void sub_001F9510_0x1f9510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9510_0x1f9510");
#endif

    ctx->pc = 0x1f9510u;

    // 0x1f9510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f9510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f9514: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x1f9514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x1f9518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f9518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f951c: 0x244255b0  addiu       $v0, $v0, 0x55B0
    ctx->pc = 0x1f951cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21936));
    // 0x1f9520: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1f9520u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1555CCu));
    // 0x1f9524: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F9524u;
    {
        const bool branch_taken_0x1f9524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9524u;
        // 0x1f9528: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9524) {
            ctx->pc = 0x1F9558u;
            goto label_1f9558;
        }
    }
    ctx->pc = 0x1F952Cu;
    // 0x1f952c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1f952cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1f9530: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9530u;
    {
        const bool branch_taken_0x1f9530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9530) {
            ctx->pc = 0x1F9558u;
            goto label_1f9558;
        }
    }
    ctx->pc = 0x1F9538u;
    // 0x1f9538: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f9538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f953c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1f953cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f9540: 0x8c4383c0  lw          $v1, -0x7C40($v0)
    ctx->pc = 0x1f9540u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x1f9544: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9544u;
    {
        const bool branch_taken_0x1f9544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1F9548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9544u;
        // 0x1f9548: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9544) {
            ctx->pc = 0x1F9558u;
            goto label_1f9558;
        }
    }
    ctx->pc = 0x1F954Cu;
    // 0x1f954c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f954cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9550: 0x807e368  j           func_1F8DA0
    ctx->pc = 0x1F9550u;
    ctx->pc = 0x1F9554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9550u;
    // 0x1f9554: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8DA0u;
    sub_001F8DA0_0x1f8da0(rdram, ctx, runtime); return;
    ctx->pc = 0x1F9558u;
label_1f9558:
    // 0x1f9558: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9558u;
        // 0x1f955c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9560u;
}
