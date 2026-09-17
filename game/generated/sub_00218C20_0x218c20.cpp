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

// Function: sub_00218C20
// Address: 0x218c20 - 0x218c58
void sub_00218C20_0x218c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218C20_0x218c20");
#endif

    ctx->pc = 0x218c20u;

    // 0x218c20: 0x84820042  lh          $v0, 0x42($a0)
    ctx->pc = 0x218c20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 66)));
    // 0x218c24: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x218c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x218c28: 0x2c440050  sltiu       $a0, $v0, 0x50
    ctx->pc = 0x218c28u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x218c2c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x218C2Cu;
    {
        const bool branch_taken_0x218c2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x218C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C2Cu;
        // 0x218c30: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c2c) {
            ctx->pc = 0x218C40u;
            goto label_218c40;
        }
    }
    ctx->pc = 0x218C34u;
    // 0x218c34: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x218c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x218c38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x218C38u;
    {
        const bool branch_taken_0x218c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C38u;
        // 0x218c3c: 0x24425b68  addiu       $v0, $v0, 0x5B68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c38) {
            ctx->pc = 0x218C50u;
            goto label_218c50;
        }
    }
    ctx->pc = 0x218C40u;
label_218c40:
    // 0x218c40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x218c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x218c44: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x218c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x218c48: 0x24215b68  addiu       $at, $at, 0x5B68
    ctx->pc = 0x218c48u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 23400));
    // 0x218c4c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x218c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_218c50:
    // 0x218c50: 0x3e00008  jr          $ra
    ctx->pc = 0x218C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C50u;
        // 0x218c54: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218C58u;
}
