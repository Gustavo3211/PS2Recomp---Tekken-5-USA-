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

// Function: sub_00118A90
// Address: 0x118a90 - 0x118ac8
void sub_00118A90_0x118a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118A90_0x118a90");
#endif

    switch (ctx->pc) {
        case 0x118aa0u: goto label_118aa0;
        default: break;
    }

    ctx->pc = 0x118a90u;

    // 0x118a90: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x118a90u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x118a94: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x118A94u;
    {
        const bool branch_taken_0x118a94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x118A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118A94u;
        // 0x118a98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118a94) {
            ctx->pc = 0x118AC0u;
            goto label_118ac0;
        }
    }
    ctx->pc = 0x118A9Cu;
    // 0x118a9c: 0x0  nop
    ctx->pc = 0x118a9cu;
    // NOP
label_118aa0:
    // 0x118aa0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x118aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x118aa4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x118aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x118aa8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x118aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x118aac: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x118aacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x118ab0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x118ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x118ab4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x118ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x118ab8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x118AB8u;
    {
        const bool branch_taken_0x118ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118ab8) {
            ctx->pc = 0x118AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118aa0;
        }
    }
    ctx->pc = 0x118AC0u;
label_118ac0:
    // 0x118ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x118AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118AC0u;
        // 0x118ac4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118AC8u;
}
