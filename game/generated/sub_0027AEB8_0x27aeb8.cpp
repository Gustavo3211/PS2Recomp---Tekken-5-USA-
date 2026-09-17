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

// Function: sub_0027AEB8
// Address: 0x27aeb8 - 0x27aee0
void sub_0027AEB8_0x27aeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027AEB8_0x27aeb8");
#endif

    switch (ctx->pc) {
        case 0x27aec0u: goto label_27aec0;
        default: break;
    }

    ctx->pc = 0x27aeb8u;

    // 0x27aeb8: 0x8cc40020  lw          $a0, 0x20($a2)
    ctx->pc = 0x27aeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x27aebc: 0x24030141  addiu       $v1, $zero, 0x141
    ctx->pc = 0x27aebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
label_27aec0:
    // 0x27aec0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x27aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27aec4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x27aec4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27aec8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27AEC8u;
    {
        const bool branch_taken_0x27aec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27aec8) {
            ctx->pc = 0x27AED8u;
            goto label_27aed8;
        }
    }
    ctx->pc = 0x27AED0u;
    // 0x27aed0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x27AED0u;
    {
        const bool branch_taken_0x27aed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27aed0) {
            ctx->pc = 0x27AED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27AED0u;
            // 0x27aed4: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27AEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27aec0;
        }
    }
    ctx->pc = 0x27AED8u;
label_27aed8:
    // 0x27aed8: 0x3e00008  jr          $ra
    ctx->pc = 0x27AED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AED8u;
        // 0x27aedc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AEE0u;
}
