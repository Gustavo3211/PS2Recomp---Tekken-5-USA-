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

// Function: sub_00210C78
// Address: 0x210c78 - 0x210cd0
void sub_00210C78_0x210c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210C78_0x210c78");
#endif

    switch (ctx->pc) {
        case 0x210c90u: goto label_210c90;
        case 0x210c98u: goto label_210c98;
        default: break;
    }

    ctx->pc = 0x210c78u;

    // 0x210c78: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x210c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x210c7c: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x210C7Cu;
    {
        const bool branch_taken_0x210c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x210C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C7Cu;
        // 0x210c80: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c7c) {
            ctx->pc = 0x210CACu;
            goto label_210cac;
        }
    }
    ctx->pc = 0x210C84u;
    // 0x210c84: 0x3e00008  jr          $ra
    ctx->pc = 0x210C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C84u;
        // 0x210c88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210C8Cu;
    // 0x210c8c: 0x0  nop
    ctx->pc = 0x210c8cu;
    // NOP
label_210c90:
    // 0x210c90: 0x3e00008  jr          $ra
    ctx->pc = 0x210C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C90u;
        // 0x210c94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210C98u;
label_210c98:
    // 0x210c98: 0x0  nop
    ctx->pc = 0x210c98u;
    // NOP
    // 0x210c9c: 0x0  nop
    ctx->pc = 0x210c9cu;
    // NOP
    // 0x210ca0: 0x0  nop
    ctx->pc = 0x210ca0u;
    // NOP
    // 0x210ca4: 0x1045fffa  beq         $v0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x210CA4u;
    {
        const bool branch_taken_0x210ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x210CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CA4u;
        // 0x210ca8: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ca4) {
            ctx->pc = 0x210C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210c90;
        }
    }
    ctx->pc = 0x210CACu;
label_210cac:
    // 0x210cac: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x210cacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x210cb0: 0x0  nop
    ctx->pc = 0x210cb0u;
    // NOP
    // 0x210cb4: 0x0  nop
    ctx->pc = 0x210cb4u;
    // NOP
    // 0x210cb8: 0x0  nop
    ctx->pc = 0x210cb8u;
    // NOP
    // 0x210cbc: 0x0  nop
    ctx->pc = 0x210cbcu;
    // NOP
    // 0x210cc0: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x210CC0u;
    {
        const bool branch_taken_0x210cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210cc0) {
            ctx->pc = 0x210CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210CC0u;
            // 0x210cc4: 0x94620002  lhu         $v0, 0x2($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210c98;
        }
    }
    ctx->pc = 0x210CC8u;
    // 0x210cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x210CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CC8u;
        // 0x210ccc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210CD0u;
}
