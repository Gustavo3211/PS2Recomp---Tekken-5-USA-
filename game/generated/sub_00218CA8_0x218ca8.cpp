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

// Function: sub_00218CA8
// Address: 0x218ca8 - 0x218ce0
void sub_00218CA8_0x218ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218CA8_0x218ca8");
#endif

    ctx->pc = 0x218ca8u;

    // 0x218ca8: 0x84820042  lh          $v0, 0x42($a0)
    ctx->pc = 0x218ca8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 66)));
    // 0x218cac: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x218cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x218cb0: 0x2c440050  sltiu       $a0, $v0, 0x50
    ctx->pc = 0x218cb0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x218cb4: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x218CB4u;
    {
        const bool branch_taken_0x218cb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x218CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218CB4u;
        // 0x218cb8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218cb4) {
            ctx->pc = 0x218CC8u;
            goto label_218cc8;
        }
    }
    ctx->pc = 0x218CBCu;
    // 0x218cbc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x218cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x218cc0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x218CC0u;
    {
        const bool branch_taken_0x218cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218CC0u;
        // 0x218cc4: 0x24425b68  addiu       $v0, $v0, 0x5B68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218cc0) {
            ctx->pc = 0x218CD8u;
            goto label_218cd8;
        }
    }
    ctx->pc = 0x218CC8u;
label_218cc8:
    // 0x218cc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x218cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x218ccc: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x218cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x218cd0: 0x24215b68  addiu       $at, $at, 0x5B68
    ctx->pc = 0x218cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 23400));
    // 0x218cd4: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x218cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_218cd8:
    // 0x218cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x218CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218CD8u;
        // 0x218cdc: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218CE0u;
}
