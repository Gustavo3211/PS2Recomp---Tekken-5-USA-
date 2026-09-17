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

// Function: sub_002B8020
// Address: 0x2b8020 - 0x2b8060
void sub_002B8020_0x2b8020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8020_0x2b8020");
#endif

    switch (ctx->pc) {
        case 0x2b8038u: goto label_2b8038;
        default: break;
    }

    ctx->pc = 0x2b8020u;

    // 0x2b8020: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2b8020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2b8024: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b8024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8028: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2b8028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2b802c: 0x2486000c  addiu       $a2, $a0, 0xC
    ctx->pc = 0x2b802cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2b8030: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2b8030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2b8034: 0x0  nop
    ctx->pc = 0x2b8034u;
    // NOP
label_2b8038:
    // 0x2b8038: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2b8038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b803c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b803cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b8040: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2b8040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b8044: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2b8044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2b8048: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b8048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b804c: 0x18a0fffa  blez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B804Cu;
    {
        const bool branch_taken_0x2b804c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2B8050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B804Cu;
        // 0x2b8050: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b804c) {
            ctx->pc = 0x2B8038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b8038;
        }
    }
    ctx->pc = 0x2B8054u;
    // 0x2b8054: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B805Cu;
    // 0x2b805c: 0x0  nop
    ctx->pc = 0x2b805cu;
    // NOP
    ctx->pc = 0x2b8060u;
}
