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

// Function: sub_002B8130
// Address: 0x2b8130 - 0x2b8168
void sub_002B8130_0x2b8130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8130_0x2b8130");
#endif

    ctx->pc = 0x2b8130u;

    // 0x2b8130: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2B8130u;
    {
        const bool branch_taken_0x2b8130 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8130u;
        // 0x2b8134: 0x2488000c  addiu       $t0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8130) {
            ctx->pc = 0x2B815Cu;
            goto label_2b815c;
        }
    }
    ctx->pc = 0x2B8138u;
    // 0x2b8138: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2b8138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2b813c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2b813cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2b8140: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2b8140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2b8144: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b8144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b8148: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x2b8148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x2b814c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x2b814cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x2b8150: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2b8150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2b8154: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b8154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b8158: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x2b8158u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_2b815c:
    // 0x2b815c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B815Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B815Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8164u;
    // 0x2b8164: 0x0  nop
    ctx->pc = 0x2b8164u;
    // NOP
    ctx->pc = 0x2b8168u;
}
