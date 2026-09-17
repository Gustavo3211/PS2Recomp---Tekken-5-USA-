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

// Function: sub_00240C70
// Address: 0x240c70 - 0x240cd0
void sub_00240C70_0x240c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240C70_0x240c70");
#endif

    switch (ctx->pc) {
        case 0x240c88u: goto label_240c88;
        default: break;
    }

    ctx->pc = 0x240c70u;

    // 0x240c70: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x240c70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x240c74: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240c74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x240c78: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x240c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x240c7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x240c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x240c80: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x240C80u;
    SET_GPR_U32(ctx, 31, 0x240C88u);
    ctx->pc = 0x240C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240C80u;
    // 0x240c84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x240C80u, 0x240C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240C88u;
label_240c88:
    // 0x240c88: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x240c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x240c8c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x240c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x240c90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x240C90u;
    {
        const bool branch_taken_0x240c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C90u;
        // 0x240c94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c90) {
            ctx->pc = 0x240CA8u;
            goto label_240ca8;
        }
    }
    ctx->pc = 0x240C98u;
    // 0x240c98: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x240c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x240c9c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x240c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x240ca0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x240CA0u;
    {
        const bool branch_taken_0x240ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x240ca0) {
            ctx->pc = 0x240CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240CA0u;
            // 0x240ca4: 0x8ca20048  lw          $v0, 0x48($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240CB8u;
            goto label_240cb8;
        }
    }
    ctx->pc = 0x240CA8u;
label_240ca8:
    // 0x240ca8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x240ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x240cac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x240cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240cb0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x240cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x240cb4: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x240cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x48u));
label_240cb8:
    // 0x240cb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240cbc: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x240cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x240cc0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x240cc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x240cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x240CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240CC4u;
        // 0x240cc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240CCCu;
    // 0x240ccc: 0x0  nop
    ctx->pc = 0x240cccu;
    // NOP
    ctx->pc = 0x240cd0u;
}
