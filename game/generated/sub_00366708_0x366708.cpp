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

// Function: sub_00366708
// Address: 0x366708 - 0x366748
void sub_00366708_0x366708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366708_0x366708");
#endif

    switch (ctx->pc) {
        case 0x366720u: goto label_366720;
        default: break;
    }

    ctx->pc = 0x366708u;

    // 0x366708: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x366708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x36670c: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x36670cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x366710: 0xac25a800  sw          $a1, -0x5800($at)
    ctx->pc = 0x366710u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944768), GPR_U32(ctx, 5));
    // 0x366714: 0x18a00009  blez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x366714u;
    {
        const bool branch_taken_0x366714 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x366718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366714u;
        // 0x366718: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366714) {
            ctx->pc = 0x36673Cu;
            goto label_36673c;
        }
    }
    ctx->pc = 0x36671Cu;
    // 0x36671c: 0x0  nop
    ctx->pc = 0x36671cu;
    // NOP
label_366720:
    // 0x366720: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x366720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x366724: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x366724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x366728: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x366728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x36672c: 0x0  nop
    ctx->pc = 0x36672cu;
    // NOP
    // 0x366730: 0x0  nop
    ctx->pc = 0x366730u;
    // NOP
    // 0x366734: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x366734u;
    {
        const bool branch_taken_0x366734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x366738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366734u;
        // 0x366738: 0x24841500  addiu       $a0, $a0, 0x1500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366734) {
            ctx->pc = 0x366720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366720;
        }
    }
    ctx->pc = 0x36673Cu;
label_36673c:
    // 0x36673c: 0x3e00008  jr          $ra
    ctx->pc = 0x36673Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36673Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366744u;
    // 0x366744: 0x0  nop
    ctx->pc = 0x366744u;
    // NOP
    ctx->pc = 0x366748u;
}
