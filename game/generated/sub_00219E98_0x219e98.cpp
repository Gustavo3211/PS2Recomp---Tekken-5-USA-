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

// Function: sub_00219E98
// Address: 0x219e98 - 0x219ed0
void sub_00219E98_0x219e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219E98_0x219e98");
#endif

    switch (ctx->pc) {
        case 0x219ea8u: goto label_219ea8;
        default: break;
    }

    ctx->pc = 0x219e98u;

    // 0x219e98: 0x1880000a  blez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x219E98u;
    {
        const bool branch_taken_0x219e98 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x219E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E98u;
        // 0x219e9c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e98) {
            ctx->pc = 0x219EC4u;
            goto label_219ec4;
        }
    }
    ctx->pc = 0x219EA0u;
    // 0x219ea0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x219ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x219ea4: 0x0  nop
    ctx->pc = 0x219ea4u;
    // NOP
label_219ea8:
    // 0x219ea8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x219ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x219eac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x219eacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x219eb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x219eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x219eb4: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x219eb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x219eb8: 0x0  nop
    ctx->pc = 0x219eb8u;
    // NOP
    // 0x219ebc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x219EBCu;
    {
        const bool branch_taken_0x219ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EBCu;
        // 0x219ec0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ebc) {
            ctx->pc = 0x219EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219ea8;
        }
    }
    ctx->pc = 0x219EC4u;
label_219ec4:
    // 0x219ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x219EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219ECCu;
    // 0x219ecc: 0x0  nop
    ctx->pc = 0x219eccu;
    // NOP
    ctx->pc = 0x219ed0u;
}
