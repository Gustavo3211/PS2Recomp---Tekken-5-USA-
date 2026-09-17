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

// Function: sub_00218E90
// Address: 0x218e90 - 0x218ec8
void sub_00218E90_0x218e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218E90_0x218e90");
#endif

    ctx->pc = 0x218e90u;

    // 0x218e90: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x218e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x218e94: 0x2c830050  sltiu       $v1, $a0, 0x50
    ctx->pc = 0x218e94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x218e98: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x218E98u;
    {
        const bool branch_taken_0x218e98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x218E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E98u;
        // 0x218e9c: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218e98) {
            ctx->pc = 0x218EB0u;
            goto label_218eb0;
        }
    }
    ctx->pc = 0x218EA0u;
    // 0x218ea0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x218ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x218ea4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x218EA4u;
    {
        const bool branch_taken_0x218ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EA4u;
        // 0x218ea8: 0x24425b68  addiu       $v0, $v0, 0x5B68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ea4) {
            ctx->pc = 0x218EC0u;
            goto label_218ec0;
        }
    }
    ctx->pc = 0x218EACu;
    // 0x218eac: 0x0  nop
    ctx->pc = 0x218eacu;
    // NOP
label_218eb0:
    // 0x218eb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x218eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x218eb4: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x218eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x218eb8: 0x24215b68  addiu       $at, $at, 0x5B68
    ctx->pc = 0x218eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 23400));
    // 0x218ebc: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x218ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_218ec0:
    // 0x218ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x218EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EC0u;
        // 0x218ec4: 0x84420002  lh          $v0, 0x2($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218EC8u;
}
