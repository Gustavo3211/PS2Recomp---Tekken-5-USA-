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

// Function: sub_00218C58
// Address: 0x218c58 - 0x218ca8
void sub_00218C58_0x218c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218C58_0x218c58");
#endif

    ctx->pc = 0x218c58u;

    // 0x218c58: 0x84820040  lh          $v0, 0x40($a0)
    ctx->pc = 0x218c58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x218c5c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x218c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x218c60: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x218C60u;
    {
        const bool branch_taken_0x218c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x218c60) {
            ctx->pc = 0x218CA0u;
            goto label_218ca0;
        }
    }
    ctx->pc = 0x218C68u;
    // 0x218c68: 0x84820042  lh          $v0, 0x42($a0)
    ctx->pc = 0x218c68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 66)));
    // 0x218c6c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x218c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x218c70: 0x2c440050  sltiu       $a0, $v0, 0x50
    ctx->pc = 0x218c70u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x218c74: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x218C74u;
    {
        const bool branch_taken_0x218c74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x218C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C74u;
        // 0x218c78: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c74) {
            ctx->pc = 0x218C88u;
            goto label_218c88;
        }
    }
    ctx->pc = 0x218C7Cu;
    // 0x218c7c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x218c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x218c80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x218C80u;
    {
        const bool branch_taken_0x218c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C80u;
        // 0x218c84: 0x24425b68  addiu       $v0, $v0, 0x5B68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c80) {
            ctx->pc = 0x218C98u;
            goto label_218c98;
        }
    }
    ctx->pc = 0x218C88u;
label_218c88:
    // 0x218c88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x218c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x218c8c: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x218c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x218c90: 0x24215b68  addiu       $at, $at, 0x5B68
    ctx->pc = 0x218c90u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 23400));
    // 0x218c94: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x218c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_218c98:
    // 0x218c98: 0x3e00008  jr          $ra
    ctx->pc = 0x218C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C98u;
        // 0x218c9c: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218CA0u;
label_218ca0:
    // 0x218ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x218CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218CA0u;
        // 0x218ca4: 0x8482003e  lh          $v0, 0x3E($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 62)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218CA8u;
}
