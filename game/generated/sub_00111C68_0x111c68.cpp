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

// Function: sub_00111C68
// Address: 0x111c68 - 0x111cc0
void sub_00111C68_0x111c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111C68_0x111c68");
#endif

    ctx->pc = 0x111c68u;

    // 0x111c68: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x111c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x111c6c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x111C6Cu;
    {
        const bool branch_taken_0x111c6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x111C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C6Cu;
        // 0x111c70: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111c6c) {
            ctx->pc = 0x111C7Cu;
            goto label_111c7c;
        }
    }
    ctx->pc = 0x111C74u;
    // 0x111c74: 0x3e00008  jr          $ra
    ctx->pc = 0x111C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C74u;
        // 0x111c78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111C7Cu;
label_111c7c:
    // 0x111c7c: 0x28c20100  slti        $v0, $a2, 0x100
    ctx->pc = 0x111c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x111c80: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x111C80u;
    {
        const bool branch_taken_0x111c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x111c80) {
            ctx->pc = 0x111C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111C80u;
            // 0x111c84: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111CB4u;
            goto label_111cb4;
        }
    }
    ctx->pc = 0x111C88u;
    // 0x111c88: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x111c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x111c8c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x111c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x111c90: 0x2300a  movz        $a2, $zero, $v0
    ctx->pc = 0x111c90u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x111c94: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x111c94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x111c98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x111c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111c9c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x111c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x111ca0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x111ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x111ca4: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x111ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x111ca8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x111ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x111cac: 0x3e00008  jr          $ra
    ctx->pc = 0x111CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111CACu;
        // 0x111cb0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111CB4u;
label_111cb4:
    // 0x111cb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x111cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x111CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111CB8u;
        // 0x111cbc: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111CC0u;
}
