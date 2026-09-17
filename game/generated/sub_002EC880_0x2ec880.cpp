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

// Function: sub_002EC880
// Address: 0x2ec880 - 0x2ec8b0
void sub_002EC880_0x2ec880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC880_0x2ec880");
#endif

    switch (ctx->pc) {
        case 0x2ec8a0u: goto label_2ec8a0;
        default: break;
    }

    ctx->pc = 0x2ec880u;

    // 0x2ec880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ec880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ec884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ec884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ec888: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x2ec888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2ec88c: 0x2842003c  slti        $v0, $v0, 0x3C
    ctx->pc = 0x2ec88cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x2ec890: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC890u;
    {
        const bool branch_taken_0x2ec890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec890) {
            ctx->pc = 0x2EC894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC890u;
            // 0x2ec894: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC8A4u;
            goto label_2ec8a4;
        }
    }
    ctx->pc = 0x2EC898u;
    // 0x2ec898: 0xc0bb22c  jal         func_2EC8B0
    ctx->pc = 0x2EC898u;
    SET_GPR_U32(ctx, 31, 0x2EC8A0u);
    ctx->pc = 0x2EC89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC898u;
    // 0x2ec89c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC8B0u, 0x2EC898u, 0x2EC8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC8A0u;
label_2ec8a0:
    // 0x2ec8a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ec8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ec8a4:
    // 0x2ec8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC8A4u;
        // 0x2ec8a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC8ACu;
    // 0x2ec8ac: 0x0  nop
    ctx->pc = 0x2ec8acu;
    // NOP
    ctx->pc = 0x2ec8b0u;
}
