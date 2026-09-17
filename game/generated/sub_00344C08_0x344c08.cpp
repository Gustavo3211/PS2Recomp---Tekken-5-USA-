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

// Function: sub_00344C08
// Address: 0x344c08 - 0x344c30
void sub_00344C08_0x344c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344C08_0x344c08");
#endif

    ctx->pc = 0x344c08u;

    // 0x344c08: 0x90840046  lbu         $a0, 0x46($a0)
    ctx->pc = 0x344c08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 70)));
    // 0x344c0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x344c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x344c10: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x344C10u;
    {
        const bool branch_taken_0x344c10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x344C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C10u;
        // 0x344c14: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344c10) {
            ctx->pc = 0x344C20u;
            goto label_344c20;
        }
    }
    ctx->pc = 0x344C18u;
    // 0x344c18: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x344C18u;
    {
        const bool branch_taken_0x344c18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x344C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C18u;
        // 0x344c1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344c18) {
            ctx->pc = 0x344C24u;
            goto label_344c24;
        }
    }
    ctx->pc = 0x344C20u;
label_344c20:
    // 0x344c20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x344c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_344c24:
    // 0x344c24: 0x3e00008  jr          $ra
    ctx->pc = 0x344C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344C2Cu;
    // 0x344c2c: 0x0  nop
    ctx->pc = 0x344c2cu;
    // NOP
    ctx->pc = 0x344c30u;
}
