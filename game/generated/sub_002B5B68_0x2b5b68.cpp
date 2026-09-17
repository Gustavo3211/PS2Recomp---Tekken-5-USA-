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

// Function: sub_002B5B68
// Address: 0x2b5b68 - 0x2b5bc8
void sub_002B5B68_0x2b5b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5B68_0x2b5b68");
#endif

    switch (ctx->pc) {
        case 0x2b5b88u: goto label_2b5b88;
        default: break;
    }

    ctx->pc = 0x2b5b68u;

    // 0x2b5b68: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x2b5b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2b5b6c: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B5B6Cu;
    {
        const bool branch_taken_0x2b5b6c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B5B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5B6Cu;
        // 0x2b5b70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5b6c) {
            ctx->pc = 0x2B5BB8u;
            goto label_2b5bb8;
        }
    }
    ctx->pc = 0x2B5B74u;
    // 0x2b5b74: 0x8c8800a4  lw          $t0, 0xA4($a0)
    ctx->pc = 0x2b5b74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x2b5b78: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2b5b78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5b7c: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2b5b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2b5b80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b5b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5b84: 0x0  nop
    ctx->pc = 0x2b5b84u;
    // NOP
label_2b5b88:
    // 0x2b5b88: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2b5b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2b5b8c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2b5b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b5b90: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x2b5b90u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2b5b94: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2b5b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2b5b98: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2b5b98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b5b9c: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x2b5b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2b5ba0: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x2b5ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2b5ba4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2b5ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2b5ba8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5BA8u;
    {
        const bool branch_taken_0x2b5ba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5BA8u;
        // 0x2b5bac: 0xc7282a  slt         $a1, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5ba8) {
            ctx->pc = 0x2B5BBCu;
            goto label_2b5bbc;
        }
    }
    ctx->pc = 0x2B5BB0u;
    // 0x2b5bb0: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2B5BB0u;
    {
        const bool branch_taken_0x2b5bb0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5BB0u;
        // 0x2b5bb4: 0x620c0  sll         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5bb0) {
            ctx->pc = 0x2B5B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5b88;
        }
    }
    ctx->pc = 0x2B5BB8u;
label_2b5bb8:
    // 0x2b5bb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b5bb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b5bbc:
    // 0x2b5bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5BC4u;
    // 0x2b5bc4: 0x0  nop
    ctx->pc = 0x2b5bc4u;
    // NOP
    ctx->pc = 0x2b5bc8u;
}
