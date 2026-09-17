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

// Function: sub_002EE308
// Address: 0x2ee308 - 0x2ee350
void sub_002EE308_0x2ee308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE308_0x2ee308");
#endif

    ctx->pc = 0x2ee308u;

    // 0x2ee308: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ee308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ee30c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ee30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ee310: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ee310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ee314: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2ee314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ee318: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EE318u;
    {
        const bool branch_taken_0x2ee318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EE31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE318u;
        // 0x2ee31c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee318) {
            ctx->pc = 0x2EE340u;
            goto label_2ee340;
        }
    }
    ctx->pc = 0x2EE320u;
    // 0x2ee320: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ee320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ee324: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE324u;
    {
        const bool branch_taken_0x2ee324 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ee324) {
            ctx->pc = 0x2EE328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE324u;
            // 0x2ee328: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE338u;
            goto label_2ee338;
        }
    }
    ctx->pc = 0x2EE32Cu;
    // 0x2ee32c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ee32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee330: 0x808e6d4  j           func_239B50
    ctx->pc = 0x2EE330u;
    ctx->pc = 0x2EE334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE330u;
    // 0x2ee334: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239B50u;
    sub_00239B50_0x239b50(rdram, ctx, runtime); return;
    ctx->pc = 0x2EE338u;
label_2ee338:
    // 0x2ee338: 0x7c1021  addu        $v0, $v1, $gp
    ctx->pc = 0x2ee338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x2ee33c: 0x8c42a858  lw          $v0, -0x57A8($v0)
    ctx->pc = 0x2ee33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944856)));
label_2ee340:
    // 0x2ee340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ee340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee344: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE344u;
        // 0x2ee348: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE34Cu;
    // 0x2ee34c: 0x0  nop
    ctx->pc = 0x2ee34cu;
    // NOP
    ctx->pc = 0x2ee350u;
}
