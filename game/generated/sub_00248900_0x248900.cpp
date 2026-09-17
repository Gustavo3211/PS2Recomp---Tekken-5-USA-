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

// Function: sub_00248900
// Address: 0x248900 - 0x248938
void sub_00248900_0x248900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248900_0x248900");
#endif

    ctx->pc = 0x248900u;

    // 0x248900: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x248900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248904: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x248904u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248908: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x248908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x24890c: 0x2ca40007  sltiu       $a0, $a1, 0x7
    ctx->pc = 0x24890cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x248910: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x248910u;
    {
        const bool branch_taken_0x248910 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x248914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248910u;
        // 0x248914: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248910) {
            ctx->pc = 0x248930u;
            goto label_248930;
        }
    }
    ctx->pc = 0x248918u;
    // 0x248918: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x248918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24891c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x24891cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x248920: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x248920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x248924: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x248924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x248928: 0x24217000  addiu       $at, $at, 0x7000
    ctx->pc = 0x248928u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 28672));
    // 0x24892c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x24892cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_248930:
    // 0x248930: 0x3e00008  jr          $ra
    ctx->pc = 0x248930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248938u;
}
