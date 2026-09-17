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

// Function: sub_0032A140
// Address: 0x32a140 - 0x32a170
void sub_0032A140_0x32a140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A140_0x32a140");
#endif

    switch (ctx->pc) {
        case 0x32a148u: goto label_32a148;
        default: break;
    }

    ctx->pc = 0x32a140u;

    // 0x32a140: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x32a140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x32a144: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x32a144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_32a148:
    // 0x32a148: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x32a148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32a14c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x32a14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x32a150: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32a150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x32a154: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x32a154u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x32a158: 0x0  nop
    ctx->pc = 0x32a158u;
    // NOP
    // 0x32a15c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32A15Cu;
    {
        const bool branch_taken_0x32a15c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A15Cu;
        // 0x32a160: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a15c) {
            ctx->pc = 0x32A148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a148;
        }
    }
    ctx->pc = 0x32A164u;
    // 0x32a164: 0x3e00008  jr          $ra
    ctx->pc = 0x32A164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A16Cu;
    // 0x32a16c: 0x0  nop
    ctx->pc = 0x32a16cu;
    // NOP
    ctx->pc = 0x32a170u;
}
