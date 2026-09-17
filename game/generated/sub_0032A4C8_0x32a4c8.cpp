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

// Function: sub_0032A4C8
// Address: 0x32a4c8 - 0x32a4f8
void sub_0032A4C8_0x32a4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A4C8_0x32a4c8");
#endif

    switch (ctx->pc) {
        case 0x32a4d0u: goto label_32a4d0;
        default: break;
    }

    ctx->pc = 0x32a4c8u;

    // 0x32a4c8: 0x248400a0  addiu       $a0, $a0, 0xA0
    ctx->pc = 0x32a4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x32a4cc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x32a4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_32a4d0:
    // 0x32a4d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x32a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32a4d4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x32a4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x32a4d8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32a4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x32a4dc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x32a4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x32a4e0: 0x0  nop
    ctx->pc = 0x32a4e0u;
    // NOP
    // 0x32a4e4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32A4E4u;
    {
        const bool branch_taken_0x32a4e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A4E4u;
        // 0x32a4e8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a4e4) {
            ctx->pc = 0x32A4D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a4d0;
        }
    }
    ctx->pc = 0x32A4ECu;
    // 0x32a4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x32A4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A4F4u;
    // 0x32a4f4: 0x0  nop
    ctx->pc = 0x32a4f4u;
    // NOP
    ctx->pc = 0x32a4f8u;
}
