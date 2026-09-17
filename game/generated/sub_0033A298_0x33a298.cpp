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

// Function: sub_0033A298
// Address: 0x33a298 - 0x33a308
void sub_0033A298_0x33a298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A298_0x33a298");
#endif

    switch (ctx->pc) {
        case 0x33a2a8u: goto label_33a2a8;
        case 0x33a2d0u: goto label_33a2d0;
        case 0x33a2f8u: goto label_33a2f8;
        default: break;
    }

    ctx->pc = 0x33a298u;

    // 0x33a298: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x33a298u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x33a29c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x33a29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x33a2a0: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x33a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x33a2a4: 0x0  nop
    ctx->pc = 0x33a2a4u;
    // NOP
label_33a2a8:
    // 0x33a2a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33a2ac: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x33a2acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x33a2b0: 0x0  nop
    ctx->pc = 0x33a2b0u;
    // NOP
    // 0x33a2b4: 0x0  nop
    ctx->pc = 0x33a2b4u;
    // NOP
    // 0x33a2b8: 0x0  nop
    ctx->pc = 0x33a2b8u;
    // NOP
    // 0x33a2bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x33A2BCu;
    {
        const bool branch_taken_0x33a2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A2BCu;
        // 0x33a2c0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a2bc) {
            ctx->pc = 0x33A2A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a2a8;
        }
    }
    ctx->pc = 0x33A2C4u;
    // 0x33a2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x33A2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A2CCu;
    // 0x33a2cc: 0x0  nop
    ctx->pc = 0x33a2ccu;
    // NOP
label_33a2d0:
    // 0x33a2d0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x33a2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x33a2d4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x33a2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33a2d8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x33a2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33a2dc: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x33a2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x33a2e0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33a2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33a2e4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x33a2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x33a2e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x33a2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33a2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x33A2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A2ECu;
        // 0x33a2f0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A2F4u;
    // 0x33a2f4: 0x0  nop
    ctx->pc = 0x33a2f4u;
    // NOP
label_33a2f8:
    // 0x33a2f8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x33a2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x33a2fc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33a2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33a300: 0x3e00008  jr          $ra
    ctx->pc = 0x33A300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A300u;
        // 0x33a304: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A308u;
}
