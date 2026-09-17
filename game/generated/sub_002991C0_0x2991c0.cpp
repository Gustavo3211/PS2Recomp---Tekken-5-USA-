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

// Function: sub_002991C0
// Address: 0x2991c0 - 0x299200
void sub_002991C0_0x2991c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002991C0_0x2991c0");
#endif

    switch (ctx->pc) {
        case 0x2991d0u: goto label_2991d0;
        default: break;
    }

    ctx->pc = 0x2991c0u;

    // 0x2991c0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2991c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2991c4: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2991c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2991c8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2991c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2991cc: 0x0  nop
    ctx->pc = 0x2991ccu;
    // NOP
label_2991d0:
    // 0x2991d0: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x2991d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2991d4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2991d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2991d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2991D8u;
    {
        const bool branch_taken_0x2991d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2991d8) {
            ctx->pc = 0x2991F8u;
            goto label_2991f8;
        }
    }
    ctx->pc = 0x2991E0u;
    // 0x2991e0: 0x14470003  bne         $v0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2991E0u;
    {
        const bool branch_taken_0x2991e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x2991e0) {
            ctx->pc = 0x2991F0u;
            goto label_2991f0;
        }
    }
    ctx->pc = 0x2991E8u;
    // 0x2991e8: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x2991E8u;
    {
        const bool branch_taken_0x2991e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2991ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2991E8u;
        // 0x2991ec: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2991e8) {
            ctx->pc = 0x2991D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2991d0;
        }
    }
    ctx->pc = 0x2991F0u;
label_2991f0:
    // 0x2991f0: 0x54a60001  bnel        $a1, $a2, . + 4 + (0x1 << 2)
    ctx->pc = 0x2991F0u;
    {
        const bool branch_taken_0x2991f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x2991f0) {
            ctx->pc = 0x2991F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2991F0u;
            // 0x2991f4: 0xa0600001  sb          $zero, 0x1($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2991F8u;
            goto label_2991f8;
        }
    }
    ctx->pc = 0x2991F8u;
label_2991f8:
    // 0x2991f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2991F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2991F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299200u;
}
