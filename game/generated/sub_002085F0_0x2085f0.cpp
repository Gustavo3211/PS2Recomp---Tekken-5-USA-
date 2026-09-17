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

// Function: sub_002085F0
// Address: 0x2085f0 - 0x208630
void sub_002085F0_0x2085f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002085F0_0x2085f0");
#endif

    ctx->pc = 0x2085f0u;

    // 0x2085f0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2085f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2085f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2085f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2085f8: 0x24448858  addiu       $a0, $v0, -0x77A8
    ctx->pc = 0x2085f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x2085fc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2085fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A885Cu));
    // 0x208600: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x208600u;
    {
        const bool branch_taken_0x208600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x208604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208600u;
        // 0x208604: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208600) {
            ctx->pc = 0x208624u;
            goto label_208624;
        }
    }
    ctx->pc = 0x208608u;
    // 0x208608: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x208608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x20860c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x20860cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x208610: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x208610u;
    {
        const bool branch_taken_0x208610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x208610) {
            ctx->pc = 0x208624u;
            goto label_208624;
        }
    }
    ctx->pc = 0x208618u;
    // 0x208618: 0x8f82c8b8  lw          $v0, -0x3748($gp)
    ctx->pc = 0x208618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953144)));
    // 0x20861c: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x20861cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x208620: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x208620u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_208624:
    // 0x208624: 0x3e00008  jr          $ra
    ctx->pc = 0x208624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208624u;
        // 0x208628: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20862Cu;
    // 0x20862c: 0x0  nop
    ctx->pc = 0x20862cu;
    // NOP
    ctx->pc = 0x208630u;
}
