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

// Function: sub_0021EAA0
// Address: 0x21eaa0 - 0x21eaf0
void sub_0021EAA0_0x21eaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EAA0_0x21eaa0");
#endif

    switch (ctx->pc) {
        case 0x21eac0u: goto label_21eac0;
        default: break;
    }

    ctx->pc = 0x21eaa0u;

    // 0x21eaa0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21eaa4: 0x2443c0f8  addiu       $v1, $v0, -0x3F08
    ctx->pc = 0x21eaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951160));
    // 0x21eaa8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3AC0F8u));
    // 0x21eaac: 0x1044000d  beq         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x21EAACu;
    {
        const bool branch_taken_0x21eaac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x21EAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EAACu;
        // 0x21eab0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eaac) {
            ctx->pc = 0x21EAE4u;
            goto label_21eae4;
        }
    }
    ctx->pc = 0x21EAB4u;
    // 0x21eab4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x21eab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eab8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21eab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21eabc: 0x0  nop
    ctx->pc = 0x21eabcu;
    // NOP
label_21eac0:
    // 0x21eac0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x21eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x21eac4: 0x28a30006  slti        $v1, $a1, 0x6
    ctx->pc = 0x21eac4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x21eac8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21EAC8u;
    {
        const bool branch_taken_0x21eac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EAC8u;
        // 0x21eacc: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eac8) {
            ctx->pc = 0x21EAE4u;
            goto label_21eae4;
        }
    }
    ctx->pc = 0x21EAD0u;
    // 0x21ead0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21ead0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21ead4: 0x0  nop
    ctx->pc = 0x21ead4u;
    // NOP
    // 0x21ead8: 0x0  nop
    ctx->pc = 0x21ead8u;
    // NOP
    // 0x21eadc: 0x5444fff8  bnel        $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21EADCu;
    {
        const bool branch_taken_0x21eadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x21eadc) {
            ctx->pc = 0x21EAE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21EADCu;
            // 0x21eae0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21EAC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21eac0;
        }
    }
    ctx->pc = 0x21EAE4u;
label_21eae4:
    // 0x21eae4: 0x3e00008  jr          $ra
    ctx->pc = 0x21EAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EAE4u;
        // 0x21eae8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EAECu;
    // 0x21eaec: 0x0  nop
    ctx->pc = 0x21eaecu;
    // NOP
    ctx->pc = 0x21eaf0u;
}
