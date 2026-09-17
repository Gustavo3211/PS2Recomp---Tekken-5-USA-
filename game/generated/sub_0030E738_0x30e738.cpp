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

// Function: sub_0030E738
// Address: 0x30e738 - 0x30e780
void sub_0030E738_0x30e738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E738_0x30e738");
#endif

    switch (ctx->pc) {
        case 0x30e750u: goto label_30e750;
        default: break;
    }

    ctx->pc = 0x30e738u;

    // 0x30e738: 0x34098001  ori         $t1, $zero, 0x8001
    ctx->pc = 0x30e738u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x30e73c: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x30e73cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x30e740: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x30e740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30e744: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x30e744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x30e748: 0x24854580  addiu       $a1, $a0, 0x4580
    ctx->pc = 0x30e748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 17792));
    // 0x30e74c: 0x0  nop
    ctx->pc = 0x30e74cu;
    // NOP
label_30e750:
    // 0x30e750: 0x24832140  addiu       $v1, $a0, 0x2140
    ctx->pc = 0x30e750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8512));
    // 0x30e754: 0xfc670008  sd          $a3, 0x8($v1)
    ctx->pc = 0x30e754u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
    // 0x30e758: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x30e758u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x30e75c: 0xac680004  sw          $t0, 0x4($v1)
    ctx->pc = 0x30e75cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 8));
    // 0x30e760: 0x24832150  addiu       $v1, $a0, 0x2150
    ctx->pc = 0x30e760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8528));
    // 0x30e764: 0x248422c0  addiu       $a0, $a0, 0x22C0
    ctx->pc = 0x30e764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8896));
    // 0x30e768: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x30e768u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x30e76c: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x30e76cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x30e770: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x30E770u;
    {
        const bool branch_taken_0x30e770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E770u;
        // 0x30e774: 0xfc660008  sd          $a2, 0x8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e770) {
            ctx->pc = 0x30E750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e750;
        }
    }
    ctx->pc = 0x30E778u;
    // 0x30e778: 0x3e00008  jr          $ra
    ctx->pc = 0x30E778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E780u;
}
