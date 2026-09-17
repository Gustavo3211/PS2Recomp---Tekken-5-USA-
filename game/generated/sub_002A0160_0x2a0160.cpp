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

// Function: sub_002A0160
// Address: 0x2a0160 - 0x2a0198
void sub_002A0160_0x2a0160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0160_0x2a0160");
#endif

    switch (ctx->pc) {
        case 0x2a0170u: goto label_2a0170;
        default: break;
    }

    ctx->pc = 0x2a0160u;

    // 0x2a0160: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a0160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0164: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a0164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0168: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x2a0168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
    // 0x2a016c: 0x0  nop
    ctx->pc = 0x2a016cu;
    // NOP
label_2a0170:
    // 0x2a0170: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2a0170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a0174: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2a0174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2a0178: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a0178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a017c: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x2a017cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2a0180: 0x0  nop
    ctx->pc = 0x2a0180u;
    // NOP
    // 0x2a0184: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A0184u;
    {
        const bool branch_taken_0x2a0184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0184u;
        // 0x2a0188: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0184) {
            ctx->pc = 0x2A0170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0170;
        }
    }
    ctx->pc = 0x2A018Cu;
    // 0x2a018c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A018Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A018Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0194u;
    // 0x2a0194: 0x0  nop
    ctx->pc = 0x2a0194u;
    // NOP
    ctx->pc = 0x2a0198u;
}
