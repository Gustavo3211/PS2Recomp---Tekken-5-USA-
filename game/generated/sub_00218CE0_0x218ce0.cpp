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

// Function: sub_00218CE0
// Address: 0x218ce0 - 0x218d18
void sub_00218CE0_0x218ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218CE0_0x218ce0");
#endif

    ctx->pc = 0x218ce0u;

    // 0x218ce0: 0x84820042  lh          $v0, 0x42($a0)
    ctx->pc = 0x218ce0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 66)));
    // 0x218ce4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x218ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x218ce8: 0x2c440050  sltiu       $a0, $v0, 0x50
    ctx->pc = 0x218ce8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x218cec: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x218CECu;
    {
        const bool branch_taken_0x218cec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x218CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218CECu;
        // 0x218cf0: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218cec) {
            ctx->pc = 0x218D00u;
            goto label_218d00;
        }
    }
    ctx->pc = 0x218CF4u;
    // 0x218cf4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x218cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x218cf8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x218CF8u;
    {
        const bool branch_taken_0x218cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218CF8u;
        // 0x218cfc: 0x24425b68  addiu       $v0, $v0, 0x5B68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218cf8) {
            ctx->pc = 0x218D10u;
            goto label_218d10;
        }
    }
    ctx->pc = 0x218D00u;
label_218d00:
    // 0x218d00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x218d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x218d04: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x218d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x218d08: 0x24215b68  addiu       $at, $at, 0x5B68
    ctx->pc = 0x218d08u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 23400));
    // 0x218d0c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x218d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_218d10:
    // 0x218d10: 0x3e00008  jr          $ra
    ctx->pc = 0x218D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D10u;
        // 0x218d14: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218D18u;
}
