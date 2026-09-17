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

// Function: sub_00248C30
// Address: 0x248c30 - 0x248c80
void sub_00248C30_0x248c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248C30_0x248c30");
#endif

    switch (ctx->pc) {
        case 0x248c50u: goto label_248c50;
        default: break;
    }

    ctx->pc = 0x248c30u;

    // 0x248c30: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x248c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x248c34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x248c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248c38: 0x24447000  addiu       $a0, $v0, 0x7000
    ctx->pc = 0x248c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x248c3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x248c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248c40: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x248c40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x167008u));
    // 0x248c44: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x248C44u;
    {
        const bool branch_taken_0x248c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C44u;
        // 0x248c48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c44) {
            ctx->pc = 0x248C64u;
            goto label_248c64;
        }
    }
    ctx->pc = 0x248C4Cu;
    // 0x248c4c: 0x0  nop
    ctx->pc = 0x248c4cu;
    // NOP
label_248c50:
    // 0x248c50: 0x28a20007  slti        $v0, $a1, 0x7
    ctx->pc = 0x248c50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x248c54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x248C54u;
    {
        const bool branch_taken_0x248c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C54u;
        // 0x248c58: 0x2484002c  addiu       $a0, $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c54) {
            ctx->pc = 0x248C78u;
            goto label_248c78;
        }
    }
    ctx->pc = 0x248C5Cu;
    // 0x248c5c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x248c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x248c60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x248c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248c64:
    // 0x248c64: 0x0  nop
    ctx->pc = 0x248c64u;
    // NOP
    // 0x248c68: 0x0  nop
    ctx->pc = 0x248c68u;
    // NOP
    // 0x248c6c: 0x5462fff8  bnel        $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x248C6Cu;
    {
        const bool branch_taken_0x248c6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x248c6c) {
            ctx->pc = 0x248C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248C6Cu;
            // 0x248c70: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248c50;
        }
    }
    ctx->pc = 0x248C74u;
    // 0x248c74: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x248c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_248c78:
    // 0x248c78: 0x3e00008  jr          $ra
    ctx->pc = 0x248C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C78u;
        // 0x248c7c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248C80u;
}
