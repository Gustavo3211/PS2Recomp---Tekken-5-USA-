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

// Function: sub_002EE2C0
// Address: 0x2ee2c0 - 0x2ee308
void sub_002EE2C0_0x2ee2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE2C0_0x2ee2c0");
#endif

    ctx->pc = 0x2ee2c0u;

    // 0x2ee2c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ee2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ee2c4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ee2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ee2c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ee2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ee2cc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2ee2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ee2d0: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EE2D0u;
    {
        const bool branch_taken_0x2ee2d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EE2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE2D0u;
        // 0x2ee2d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee2d0) {
            ctx->pc = 0x2EE2F8u;
            goto label_2ee2f8;
        }
    }
    ctx->pc = 0x2EE2D8u;
    // 0x2ee2d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ee2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ee2dc: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE2DCu;
    {
        const bool branch_taken_0x2ee2dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ee2dc) {
            ctx->pc = 0x2EE2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE2DCu;
            // 0x2ee2e0: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE2F0u;
            goto label_2ee2f0;
        }
    }
    ctx->pc = 0x2EE2E4u;
    // 0x2ee2e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ee2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee2e8: 0x808e6d2  j           func_239B48
    ctx->pc = 0x2EE2E8u;
    ctx->pc = 0x2EE2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE2E8u;
    // 0x2ee2ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239B48u;
    sub_00239B48_0x239b48(rdram, ctx, runtime); return;
    ctx->pc = 0x2EE2F0u;
label_2ee2f0:
    // 0x2ee2f0: 0x7c1021  addu        $v0, $v1, $gp
    ctx->pc = 0x2ee2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x2ee2f4: 0x8c42a850  lw          $v0, -0x57B0($v0)
    ctx->pc = 0x2ee2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944848)));
label_2ee2f8:
    // 0x2ee2f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ee2f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE2FCu;
        // 0x2ee300: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE304u;
    // 0x2ee304: 0x0  nop
    ctx->pc = 0x2ee304u;
    // NOP
    ctx->pc = 0x2ee308u;
}
