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

// Function: sub_002A5180
// Address: 0x2a5180 - 0x2a51a0
void sub_002A5180_0x2a5180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5180_0x2a5180");
#endif

    ctx->pc = 0x2a5180u;

    // 0x2a5180: 0x9383b85d  lbu         $v1, -0x47A3($gp)
    ctx->pc = 0x2a5180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948957)));
    // 0x2a5184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a5184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5188: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A5188u;
    {
        const bool branch_taken_0x2a5188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5188u;
        // 0x2a518c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5188) {
            ctx->pc = 0x2A5198u;
            goto label_2a5198;
        }
    }
    ctx->pc = 0x2A5190u;
    // 0x2a5190: 0xa383b85e  sb          $v1, -0x47A2($gp)
    ctx->pc = 0x2a5190u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948958), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a5194: 0xa382b85d  sb          $v0, -0x47A3($gp)
    ctx->pc = 0x2a5194u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948957), (uint8_t)GPR_U32(ctx, 2));
label_2a5198:
    // 0x2a5198: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A51A0u;
}
