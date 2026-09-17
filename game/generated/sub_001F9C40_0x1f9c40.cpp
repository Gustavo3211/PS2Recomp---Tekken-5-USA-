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

// Function: sub_001F9C40
// Address: 0x1f9c40 - 0x1f9cc0
void sub_001F9C40_0x1f9c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9C40_0x1f9c40");
#endif

    ctx->pc = 0x1f9c40u;

    // 0x1f9c40: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F9C40u;
    {
        const bool branch_taken_0x1f9c40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C40u;
        // 0x1f9c44: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9c40) {
            ctx->pc = 0x1F9C60u;
            goto label_1f9c60;
        }
    }
    ctx->pc = 0x1F9C48u;
    // 0x1f9c48: 0x2442b400  addiu       $v0, $v0, -0x4C00
    ctx->pc = 0x1f9c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947840));
    // 0x1f9c4c: 0xa440003a  sh          $zero, 0x3A($v0)
    ctx->pc = 0x1f9c4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 58), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f9c50: 0xa4400034  sh          $zero, 0x34($v0)
    ctx->pc = 0x1f9c50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f9c54: 0xa4400038  sh          $zero, 0x38($v0)
    ctx->pc = 0x1f9c54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 56), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f9c58: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C58u;
        // 0x1f9c5c: 0xa4400036  sh          $zero, 0x36($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 54), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9C60u;
label_1f9c60:
    // 0x1f9c60: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f9c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f9c64: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1f9c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1f9c68: 0x244588d0  addiu       $a1, $v0, -0x7730
    ctx->pc = 0x1f9c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x1f9c6c: 0x2464b400  addiu       $a0, $v1, -0x4C00
    ctx->pc = 0x1f9c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947840));
    // 0x1f9c70: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1f9c70u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x1f9c74: 0x8483003c  lh          $v1, 0x3C($a0)
    ctx->pc = 0x1f9c74u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3AB43Cu));
    // 0x1f9c78: 0x84c2003e  lh          $v0, 0x3E($a2)
    ctx->pc = 0x1f9c78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 62)));
    // 0x1f9c7c: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9C7Cu;
    {
        const bool branch_taken_0x1f9c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f9c7c) {
            ctx->pc = 0x1F9C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9C7Cu;
            // 0x1f9c80: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9C90u;
            goto label_1f9c90;
        }
    }
    ctx->pc = 0x1F9C84u;
    // 0x1f9c84: 0xa4800034  sh          $zero, 0x34($a0)
    ctx->pc = 0x1f9c84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f9c88: 0xa4800038  sh          $zero, 0x38($a0)
    ctx->pc = 0x1f9c88u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 56), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f9c8c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x1f9c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1f9c90:
    // 0x1f9c90: 0x8483003e  lh          $v1, 0x3E($a0)
    ctx->pc = 0x1f9c90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 62)));
    // 0x1f9c94: 0x84a2003e  lh          $v0, 0x3E($a1)
    ctx->pc = 0x1f9c94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 62)));
    // 0x1f9c98: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9C98u;
    {
        const bool branch_taken_0x1f9c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f9c98) {
            ctx->pc = 0x1F9C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9C98u;
            // 0x1f9c9c: 0x94c2003e  lhu         $v0, 0x3E($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 62)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9CACu;
            goto label_1f9cac;
        }
    }
    ctx->pc = 0x1F9CA0u;
    // 0x1f9ca0: 0xa4800036  sh          $zero, 0x36($a0)
    ctx->pc = 0x1f9ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 54), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f9ca4: 0xa480003a  sh          $zero, 0x3A($a0)
    ctx->pc = 0x1f9ca4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 58), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f9ca8: 0x94c2003e  lhu         $v0, 0x3E($a2)
    ctx->pc = 0x1f9ca8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 62)));
label_1f9cac:
    // 0x1f9cac: 0xa482003c  sh          $v0, 0x3C($a0)
    ctx->pc = 0x1f9cacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f9cb0: 0x94a3003e  lhu         $v1, 0x3E($a1)
    ctx->pc = 0x1f9cb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 62)));
    // 0x1f9cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9CB4u;
        // 0x1f9cb8: 0xa483003e  sh          $v1, 0x3E($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 62), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9CBCu;
    // 0x1f9cbc: 0x0  nop
    ctx->pc = 0x1f9cbcu;
    // NOP
    ctx->pc = 0x1f9cc0u;
}
