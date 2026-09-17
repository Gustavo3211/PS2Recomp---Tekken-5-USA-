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

// Function: sub_0033DE20
// Address: 0x33de20 - 0x33de50
void sub_0033DE20_0x33de20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033DE20_0x33de20");
#endif

    switch (ctx->pc) {
        case 0x33de40u: goto label_33de40;
        default: break;
    }

    ctx->pc = 0x33de20u;

    // 0x33de20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33de20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33de24: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x33de24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x33de28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33de28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33de2c: 0x94830014  lhu         $v1, 0x14($a0)
    ctx->pc = 0x33de2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x33de30: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33DE30u;
    {
        const bool branch_taken_0x33de30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33de30) {
            ctx->pc = 0x33DE34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DE30u;
            // 0x33de34: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DE44u;
            goto label_33de44;
        }
    }
    ctx->pc = 0x33DE38u;
    // 0x33de38: 0xc0cef18  jal         func_33BC60
    ctx->pc = 0x33DE38u;
    SET_GPR_U32(ctx, 31, 0x33DE40u);
    ctx->pc = 0x33DE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DE38u;
    // 0x33de3c: 0x8f84ccd4  lw          $a0, -0x332C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BC60u, 0x33DE38u, 0x33DE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DE40u;
label_33de40:
    // 0x33de40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33de40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33de44:
    // 0x33de44: 0x3e00008  jr          $ra
    ctx->pc = 0x33DE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33DE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DE44u;
        // 0x33de48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33DE4Cu;
    // 0x33de4c: 0x0  nop
    ctx->pc = 0x33de4cu;
    // NOP
    ctx->pc = 0x33de50u;
}
