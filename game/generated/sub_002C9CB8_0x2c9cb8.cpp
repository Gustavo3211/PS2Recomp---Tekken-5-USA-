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

// Function: sub_002C9CB8
// Address: 0x2c9cb8 - 0x2c9ce8
void sub_002C9CB8_0x2c9cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9CB8_0x2c9cb8");
#endif

    ctx->pc = 0x2c9cb8u;

    // 0x2c9cb8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c9cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c9cbc: 0x240302fd  addiu       $v1, $zero, 0x2FD
    ctx->pc = 0x2c9cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 765));
    // 0x2c9cc0: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C9CC0u;
    {
        const bool branch_taken_0x2c9cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C9CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9CC0u;
        // 0x2c9cc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9cc0) {
            ctx->pc = 0x2C9CDCu;
            goto label_2c9cdc;
        }
    }
    ctx->pc = 0x2C9CC8u;
    // 0x2c9cc8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2c9cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c9ccc: 0x240308a4  addiu       $v1, $zero, 0x8A4
    ctx->pc = 0x2c9cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2212));
    // 0x2c9cd0: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C9CD0u;
    {
        const bool branch_taken_0x2c9cd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C9CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9CD0u;
        // 0x2c9cd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9cd0) {
            ctx->pc = 0x2C9CDCu;
            goto label_2c9cdc;
        }
    }
    ctx->pc = 0x2C9CD8u;
    // 0x2c9cd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c9cd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9cdc:
    // 0x2c9cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9CE4u;
    // 0x2c9ce4: 0x0  nop
    ctx->pc = 0x2c9ce4u;
    // NOP
    ctx->pc = 0x2c9ce8u;
}
