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

// Function: sub_002F5C20
// Address: 0x2f5c20 - 0x2f5c78
void sub_002F5C20_0x2f5c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5C20_0x2f5c20");
#endif

    switch (ctx->pc) {
        case 0x2f5c48u: goto label_2f5c48;
        default: break;
    }

    ctx->pc = 0x2f5c20u;

    // 0x2f5c20: 0x8c850104  lw          $a1, 0x104($a0)
    ctx->pc = 0x2f5c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x2f5c24: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5C24u;
    {
        const bool branch_taken_0x2f5c24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5c24) {
            ctx->pc = 0x2F5C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5C24u;
            // 0x2f5c28: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5C38u;
            goto label_2f5c38;
        }
    }
    ctx->pc = 0x2F5C2Cu;
    // 0x2f5c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C2Cu;
        // 0x2f5c30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5C34u;
    // 0x2f5c34: 0x0  nop
    ctx->pc = 0x2f5c34u;
    // NOP
label_2f5c38:
    // 0x2f5c38: 0x18a0000d  blez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2F5C38u;
    {
        const bool branch_taken_0x2f5c38 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2F5C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C38u;
        // 0x2f5c3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c38) {
            ctx->pc = 0x2F5C70u;
            goto label_2f5c70;
        }
    }
    ctx->pc = 0x2F5C40u;
    // 0x2f5c40: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x2f5c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2f5c44: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x2f5c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2f5c48:
    // 0x2f5c48: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f5c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5c4c: 0x80640150  lb          $a0, 0x150($v1)
    ctx->pc = 0x2f5c4cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2f5c50: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F5C50u;
    {
        const bool branch_taken_0x2f5c50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C50u;
        // 0x2f5c54: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c50) {
            ctx->pc = 0x2F5C70u;
            goto label_2f5c70;
        }
    }
    ctx->pc = 0x2F5C58u;
    // 0x2f5c58: 0x0  nop
    ctx->pc = 0x2f5c58u;
    // NOP
    // 0x2f5c5c: 0x0  nop
    ctx->pc = 0x2f5c5cu;
    // NOP
    // 0x2f5c60: 0x0  nop
    ctx->pc = 0x2f5c60u;
    // NOP
    // 0x2f5c64: 0x1ca0fff8  bgtz        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2F5C64u;
    {
        const bool branch_taken_0x2f5c64 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2F5C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C64u;
        // 0x2f5c68: 0xa61821  addu        $v1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c64) {
            ctx->pc = 0x2F5C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5c48;
        }
    }
    ctx->pc = 0x2F5C6Cu;
    // 0x2f5c6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f5c6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5c70:
    // 0x2f5c70: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5C78u;
}
