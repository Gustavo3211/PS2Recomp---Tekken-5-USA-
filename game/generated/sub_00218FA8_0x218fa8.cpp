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

// Function: sub_00218FA8
// Address: 0x218fa8 - 0x218fe0
void sub_00218FA8_0x218fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218FA8_0x218fa8");
#endif

    ctx->pc = 0x218fa8u;

    // 0x218fa8: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x218fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x218fac: 0x2c830050  sltiu       $v1, $a0, 0x50
    ctx->pc = 0x218facu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x218fb0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x218FB0u;
    {
        const bool branch_taken_0x218fb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x218FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218FB0u;
        // 0x218fb4: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218fb0) {
            ctx->pc = 0x218FC8u;
            goto label_218fc8;
        }
    }
    ctx->pc = 0x218FB8u;
    // 0x218fb8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x218fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x218fbc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x218FBCu;
    {
        const bool branch_taken_0x218fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218FBCu;
        // 0x218fc0: 0x24425b68  addiu       $v0, $v0, 0x5B68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218fbc) {
            ctx->pc = 0x218FD8u;
            goto label_218fd8;
        }
    }
    ctx->pc = 0x218FC4u;
    // 0x218fc4: 0x0  nop
    ctx->pc = 0x218fc4u;
    // NOP
label_218fc8:
    // 0x218fc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x218fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x218fcc: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x218fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x218fd0: 0x24215b68  addiu       $at, $at, 0x5B68
    ctx->pc = 0x218fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 23400));
    // 0x218fd4: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x218fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_218fd8:
    // 0x218fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x218FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218FD8u;
        // 0x218fdc: 0x8c420014  lw          $v0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218FE0u;
}
