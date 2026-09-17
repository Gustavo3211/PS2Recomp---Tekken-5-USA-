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

// Function: sub_00284CA0
// Address: 0x284ca0 - 0x284cd8
void sub_00284CA0_0x284ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284CA0_0x284ca0");
#endif

    ctx->pc = 0x284ca0u;

    // 0x284ca0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x284ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x284ca4: 0x248583c0  addiu       $a1, $a0, -0x7C40
    ctx->pc = 0x284ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935488));
    // 0x284ca8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x284ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x284cac: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x284CACu;
    {
        const bool branch_taken_0x284cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x284CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284CACu;
        // 0x284cb0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284cac) {
            ctx->pc = 0x284CCCu;
            goto label_284ccc;
        }
    }
    ctx->pc = 0x284CB4u;
    // 0x284cb4: 0x8ca3019c  lw          $v1, 0x19C($a1)
    ctx->pc = 0x284cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 412)));
    // 0x284cb8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x284cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x284cbc: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x284cbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x284cc0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x284CC0u;
    {
        const bool branch_taken_0x284cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x284CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284CC0u;
        // 0x284cc4: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284cc0) {
            ctx->pc = 0x284CCCu;
            goto label_284ccc;
        }
    }
    ctx->pc = 0x284CC8u;
    // 0x284cc8: 0x8c8201a4  lw          $v0, 0x1A4($a0)
    ctx->pc = 0x284cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 420)));
label_284ccc:
    // 0x284ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x284CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284CD4u;
    // 0x284cd4: 0x0  nop
    ctx->pc = 0x284cd4u;
    // NOP
    ctx->pc = 0x284cd8u;
}
