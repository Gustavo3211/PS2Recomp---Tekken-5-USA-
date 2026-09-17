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

// Function: sub_0022FA30
// Address: 0x22fa30 - 0x22fab0
void sub_0022FA30_0x22fa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FA30_0x22fa30");
#endif

    switch (ctx->pc) {
        case 0x22fa40u: goto label_22fa40;
        case 0x22fa70u: goto label_22fa70;
        default: break;
    }

    ctx->pc = 0x22fa30u;

    // 0x22fa30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22fa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22fa34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22fa34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22fa38: 0xc08be1a  jal         func_22F868
    ctx->pc = 0x22FA38u;
    SET_GPR_U32(ctx, 31, 0x22FA40u);
    ctx->pc = 0x22F868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F868u, 0x22FA38u, 0x22FA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FA40u;
label_22fa40:
    // 0x22fa40: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x22fa40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fa44: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x22fa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22fa48: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x22FA48u;
    {
        const bool branch_taken_0x22fa48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA48u;
        // 0x22fa4c: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa48) {
            ctx->pc = 0x22FAA0u;
            goto label_22faa0;
        }
    }
    ctx->pc = 0x22FA50u;
    // 0x22fa50: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x22fa50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x22fa54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22fa54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fa58: 0x24c80004  addiu       $t0, $a2, 0x4
    ctx->pc = 0x22fa58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x22fa5c: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x22fa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x22fa60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22fa60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22fa64: 0xac820118  sw          $v0, 0x118($a0)
    ctx->pc = 0x22fa64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 2));
    // 0x22fa68: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x22fa68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x22fa6c: 0xac600114  sw          $zero, 0x114($v1)
    ctx->pc = 0x22fa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 0));
label_22fa70:
    // 0x22fa70: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x22fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x22fa74: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22fa74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x22fa78: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x22fa78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x22fa7c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x22fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x22fa80: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x22fa80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x22fa84: 0x2ce50007  sltiu       $a1, $a3, 0x7
    ctx->pc = 0x22fa84u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x22fa88: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x22FA88u;
    {
        const bool branch_taken_0x22fa88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA88u;
        // 0x22fa8c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa88) {
            ctx->pc = 0x22FA70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22fa70;
        }
    }
    ctx->pc = 0x22FA90u;
    // 0x22fa90: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x22fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22fa94: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x22fa94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x22fa98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22fa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22fa9c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x22fa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_22faa0:
    // 0x22faa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22faa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22faa4: 0x3e00008  jr          $ra
    ctx->pc = 0x22FAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAA4u;
        // 0x22faa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FAACu;
    // 0x22faac: 0x0  nop
    ctx->pc = 0x22faacu;
    // NOP
    ctx->pc = 0x22fab0u;
}
