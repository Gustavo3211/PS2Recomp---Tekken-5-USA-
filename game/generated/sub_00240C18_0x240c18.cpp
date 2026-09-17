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

// Function: sub_00240C18
// Address: 0x240c18 - 0x240c70
void sub_00240C18_0x240c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240C18_0x240c18");
#endif

    switch (ctx->pc) {
        case 0x240c30u: goto label_240c30;
        default: break;
    }

    ctx->pc = 0x240c18u;

    // 0x240c18: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x240c18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x240c1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240c1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x240c20: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x240c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x240c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x240c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x240c28: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x240C28u;
    SET_GPR_U32(ctx, 31, 0x240C30u);
    ctx->pc = 0x240C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240C28u;
    // 0x240c2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x240C28u, 0x240C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240C30u;
label_240c30:
    // 0x240c30: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x240c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x240c34: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x240c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x240c38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x240C38u;
    {
        const bool branch_taken_0x240c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C38u;
        // 0x240c3c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c38) {
            ctx->pc = 0x240C50u;
            goto label_240c50;
        }
    }
    ctx->pc = 0x240C40u;
    // 0x240c40: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x240c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x240c44: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x240c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x240c48: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x240C48u;
    {
        const bool branch_taken_0x240c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x240c48) {
            ctx->pc = 0x240C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240C48u;
            // 0x240c4c: 0x8ca20048  lw          $v0, 0x48($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240C60u;
            goto label_240c60;
        }
    }
    ctx->pc = 0x240C50u;
label_240c50:
    // 0x240c50: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x240c50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x240c54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x240c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240c58: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x240c58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x240c5c: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x240c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x48u));
label_240c60:
    // 0x240c60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240c64: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x240c64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x240c68: 0x3e00008  jr          $ra
    ctx->pc = 0x240C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C68u;
        // 0x240c6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240C70u;
}
