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

// Function: sub_002B7C80
// Address: 0x2b7c80 - 0x2b7cc0
void sub_002B7C80_0x2b7c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7C80_0x2b7c80");
#endif

    switch (ctx->pc) {
        case 0x2b7c98u: goto label_2b7c98;
        default: break;
    }

    ctx->pc = 0x2b7c80u;

    // 0x2b7c80: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2B7C80u;
    {
        const bool branch_taken_0x2b7c80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7c80) {
            ctx->pc = 0x2B7CB4u;
            goto label_2b7cb4;
        }
    }
    ctx->pc = 0x2B7C88u;
    // 0x2b7c88: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2b7c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b7c8c: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B7C8Cu;
    {
        const bool branch_taken_0x2b7c8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7c8c) {
            ctx->pc = 0x2B7C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7C8Cu;
            // 0x2b7c90: 0xaca60008  sw          $a2, 0x8($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7CB4u;
            goto label_2b7cb4;
        }
    }
    ctx->pc = 0x2B7C94u;
    // 0x2b7c94: 0x0  nop
    ctx->pc = 0x2b7c94u;
    // NOP
label_2b7c98:
    // 0x2b7c98: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2b7c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7c9c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B7C9Cu;
    {
        const bool branch_taken_0x2b7c9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7c9c) {
            ctx->pc = 0x2B7CB4u;
            goto label_2b7cb4;
        }
    }
    ctx->pc = 0x2B7CA4u;
    // 0x2b7ca4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2b7ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b7ca8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2B7CA8u;
    {
        const bool branch_taken_0x2b7ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7CA8u;
        // 0x2b7cac: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7ca8) {
            ctx->pc = 0x2B7C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b7c98;
        }
    }
    ctx->pc = 0x2B7CB0u;
    // 0x2b7cb0: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x2b7cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
label_2b7cb4:
    // 0x2b7cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7CBCu;
    // 0x2b7cbc: 0x0  nop
    ctx->pc = 0x2b7cbcu;
    // NOP
    ctx->pc = 0x2b7cc0u;
}
