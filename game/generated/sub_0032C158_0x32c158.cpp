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

// Function: sub_0032C158
// Address: 0x32c158 - 0x32c188
void sub_0032C158_0x32c158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C158_0x32c158");
#endif

    switch (ctx->pc) {
        case 0x32c160u: goto label_32c160;
        default: break;
    }

    ctx->pc = 0x32c158u;

    // 0x32c158: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x32c158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x32c15c: 0x0  nop
    ctx->pc = 0x32c15cu;
    // NOP
label_32c160:
    // 0x32c160: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x32c160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32c164: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x32c164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x32c168: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32c168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x32c16c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x32c16cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x32c170: 0x0  nop
    ctx->pc = 0x32c170u;
    // NOP
    // 0x32c174: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32C174u;
    {
        const bool branch_taken_0x32c174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C174u;
        // 0x32c178: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c174) {
            ctx->pc = 0x32C160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32c160;
        }
    }
    ctx->pc = 0x32C17Cu;
    // 0x32c17c: 0x3e00008  jr          $ra
    ctx->pc = 0x32C17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C184u;
    // 0x32c184: 0x0  nop
    ctx->pc = 0x32c184u;
    // NOP
    ctx->pc = 0x32c188u;
}
