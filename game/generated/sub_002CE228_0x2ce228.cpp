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

// Function: sub_002CE228
// Address: 0x2ce228 - 0x2ce260
void sub_002CE228_0x2ce228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE228_0x2ce228");
#endif

    switch (ctx->pc) {
        case 0x2ce230u: goto label_2ce230;
        default: break;
    }

    ctx->pc = 0x2ce228u;

    // 0x2ce228: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2ce228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ce22c: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x2ce22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2ce230:
    // 0x2ce230: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2ce230u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ce234: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE234u;
    {
        const bool branch_taken_0x2ce234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE234u;
        // 0x2ce238: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce234) {
            ctx->pc = 0x2CE248u;
            goto label_2ce248;
        }
    }
    ctx->pc = 0x2CE23Cu;
    // 0x2ce23c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CE23Cu;
    {
        const bool branch_taken_0x2ce23c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ce23c) {
            ctx->pc = 0x2CE254u;
            goto label_2ce254;
        }
    }
    ctx->pc = 0x2CE244u;
    // 0x2ce244: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2ce244u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_2ce248:
    // 0x2ce248: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2ce248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2ce24c: 0x4c1fff8  bgez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2CE24Cu;
    {
        const bool branch_taken_0x2ce24c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2CE250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE24Cu;
        // 0x2ce250: 0xa62021  addu        $a0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce24c) {
            ctx->pc = 0x2CE230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ce230;
        }
    }
    ctx->pc = 0x2CE254u;
label_2ce254:
    // 0x2ce254: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE25Cu;
    // 0x2ce25c: 0x0  nop
    ctx->pc = 0x2ce25cu;
    // NOP
    ctx->pc = 0x2ce260u;
}
