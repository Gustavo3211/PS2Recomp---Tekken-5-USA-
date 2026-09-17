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

// Function: sub_002EE6A0
// Address: 0x2ee6a0 - 0x2ee6e0
void sub_002EE6A0_0x2ee6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE6A0_0x2ee6a0");
#endif

    ctx->pc = 0x2ee6a0u;

    // 0x2ee6a0: 0x248500e8  addiu       $a1, $a0, 0xE8
    ctx->pc = 0x2ee6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x2ee6a4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2ee6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ee6a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EE6A8u;
    {
        const bool branch_taken_0x2ee6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE6A8u;
        // 0x2ee6ac: 0x8c860050  lw          $a2, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee6a8) {
            ctx->pc = 0x2EE6C4u;
            goto label_2ee6c4;
        }
    }
    ctx->pc = 0x2EE6B0u;
    // 0x2ee6b0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2ee6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ee6b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ee6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee6b8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ee6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ee6bc: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE6BCu;
    {
        const bool branch_taken_0x2ee6bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee6bc) {
            ctx->pc = 0x2EE6C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE6BCu;
            // 0x2ee6c0: 0x8c820104  lw          $v0, 0x104($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE6D4u;
            goto label_2ee6d4;
        }
    }
    ctx->pc = 0x2EE6C4u;
label_2ee6c4:
    // 0x2ee6c4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ee6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2ee6c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ee6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee6cc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ee6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2ee6d0: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x2ee6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x104u));
label_2ee6d4:
    // 0x2ee6d4: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x2ee6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x2ee6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE6D8u;
        // 0x2ee6dc: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE6E0u;
}
